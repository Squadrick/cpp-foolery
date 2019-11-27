#include <bits/stdc++.h>

using namespace std;
int main() {
  unordered_map<string, int> map;

  map["dheeraj"] = 1;
  map["lolz"] = 2;
  map["test"] = 3;

  vector<pair<string, int> > elems (
    map.begin(), map.end());

  sort(elems.begin(), elems.end());

  std::cout << map["dheeraj"] << std::endl;

  for(auto &ele: map)
    cout << ele.first << " -> " << ele.second << endl;

  for(auto &ele: elems)
    cout << ele.first << " -> " << ele.second << endl;

  vector<string> keys(map.size());
  transform(map.begin(), map.end(), keys.begin(), 
    [](auto ele) {
      return ele.first;
    });

  for(auto key: keys) {
    std::cout << key << endl;
  }
}
