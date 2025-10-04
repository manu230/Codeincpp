
// C++ implementation to check whether elements
// in vector is equal or not
#include<bits/stdc++.h>
using namespace std;
 
// Check if all elements is equal or not
int main()
{
  // Comparing equal vectors
  vector<int> v1{3, 1, 2, 3};
  vector<int> v2{3, 1, 2, 3};
  (v1 == v2)?  cout << "Equal\n" : cout << "Not Equal\n";
   
  // Comparing non-equal vectors
  vector<int> v3{1, 2, 3, 4};
  (v1 == v3)?  cout << "Equal\n" : cout << "Not Equal\n";
   
  // comparing with empty
  vector<int> v4;
  (v1 == v4)?  cout << "Equal\n" : cout << "Not Equal\n";
 
  // comparing two empty
  vector<int> v5;
  (v5 == v4)?  cout << "Equal\n" : cout << "Not Equal\n";
 
   return 0;
}
