#include <iostream>
#include <queue>
using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(3);
  pq.push(4);
  pq.push(2);

  while (pq.size()>0) {
    cout<<pq.top()<<" ";
    pq.pop();
  }
}