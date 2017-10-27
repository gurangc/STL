#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int size, n;
  vector<int> v;
  cout << "Please input the number: " << endl;
  cin >> size;

  cout << "Please input numbers: " << endl;
  for(int i = 0; i < size; ++i) {
    cin >> n;
    v.push_back(n);
  }

  sort(v.begin(), v.end() );

  cout << "The answer is: " << endl;
  for(int e: v) {
    cout << e << " ";
  }
  cout << endl;
  
  return 0;
}
