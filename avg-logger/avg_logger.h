#ifndef AVG_LOGGER_H_
#define AVG_LOGGER_H_

#include <chrono>
#include <queue>

template <typename time_type = int, typename result_type = float>
class AvgLogger {
public:
  AvgLogger(std::chrono::duration<time_type> duration);
  void insert(result_type);
  result_type get_average();

private:
  void gc();
  std::queue<std::pair<result_type,
                       std::chrono::time_point<std::chrono::system_clock>>>
      q_;
  result_type sum_;
  std::chrono::duration<time_type> duration_;
};

template <typename time_type, typename result_type>
AvgLogger<time_type, result_type>::AvgLogger(
    std::chrono::duration<time_type> duration)
    : sum_((result_type)0), duration_(duration) {}

template <typename time_type, typename result_type>
void AvgLogger<time_type, result_type>::insert(result_type value) {
  sum_ += value;
  q_.push(std::make_pair(value, std::chrono::system_clock::now()));
}

template <typename time_type, typename result_type>
result_type AvgLogger<time_type, result_type>::get_average() {
  gc();
  return sum_ / q_.size();
}

template <typename time_type, typename result_type>
void AvgLogger<time_type, result_type>::gc() {
  auto current_time_point = std::chrono::system_clock::now();
  while (true) {
    auto pair = q_.front();
    if (current_time_point - pair.second > duration_) {
      sum_ -= pair.first;
      q_.pop();
    } else {
      break;
    }
  }
}

#endif
