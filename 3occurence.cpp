#include <bits/stdc++.h>
using namespace std;
void findMajorityElementInt(vector<int>& arr, int N) {
unordered_map<int, int> freq;
for (int num : arr) {
freq[num]++;
}

// Step 2: Check for elements appearing at least N/3 times
bool found = false;
int threshold = N / 3;
for (auto& it : freq) {
if (it.second >= threshold) {
cout << it.first << " ";
found = true;
}
}
// Step 3: If no such element exists
if (!found) {
cout << -1;
}
}
int main() {
vector<int> arr = {1, 2, 3, 1, 2, 1, 1};
int N = arr.size();
findMajorityElementInt(arr, N);
return 0;
}