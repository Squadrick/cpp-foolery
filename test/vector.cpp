#include <bits/stdc++.h>

bool compareInterval(std::pair<int, int> i, std::pair<int, int> j) {
  return i.first < j.first;
}

int main() {
  std::vector<int> a;
  a.push_back(5);
  a.push_back(6);

  for (int &x: a) {
    std::cout << x << std::endl;
  }

  for (auto x = a.begin(); x != a.end(); ++x) {
    std::cout << *x << std::endl;
  }


  std::vector<std::pair<int, int> > intervals {
    {6, 8}, {1, 9}, {2, 4}, {4, 7}};

  std::sort(intervals.begin(), intervals.end(), compareInterval);
  std::reverse(intervals.begin(), intervals.end());

  for (auto &x: intervals) {
    std::cout << x.first <<", " << x.second << std::endl;
  }

  std::cout << intervals.size() << std::endl;
  int addVal = 10;
  int sum = 0;
  std::vector<int> startInts(intervals.size());
  std::transform(intervals.begin(), intervals.end(), startInts.begin(), 
    [&](std::pair<int, int> x) {
      sum += x.first;
      return addVal + x.first; 
    });

  std::cout << sum << std::endl;
  for (auto x: startInts) {
    std::cout << x << std::endl;
  }
}
