#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int size, n;
  string name;
  double point;
  map<string, double> gp;
  
  cout << "Please input the number of students: " << endl;
  cin >> size;

  cout << "Please input student information: " << endl;
  for(int i = 0; i < size; ++i) {
    cin >> name >> point;
    gp[name] = point;
  }

  cout << "The answer is: " << endl;
  for(pair<string, double> e: gp) {
    cout << e.first << e.second << endl;
  }
  
  return 0;
}
