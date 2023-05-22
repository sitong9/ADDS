#include <queue>
#include <vector>
using namespace std;

int kth_largest(vector<int> values, int k) {
  // Create a max heap using priority_queue
  priority_queue<int, vector<int>> pq;

  // Insert all values into the priority queue
  for (int value : values) {
    pq.push(value);
  }

  // Pop k-1 elements from the priority queue
  for (int i = 0; i < k - 1; i++) {
    pq.pop();
  }

  // The top element of the priority queue is the kth largest
  return pq.top();
}





