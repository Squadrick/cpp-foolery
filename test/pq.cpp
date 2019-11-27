#include <bits/stdc++.h>

using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int> > pq;
  pq.push(0);
  pq.push(2);
  pq.push(1);

  std::cout << pq.top() << endl;

  while (! pq.empty()) {
    std::cout << pq.top() << endl;
    pq.pop();
  }
}
