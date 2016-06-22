#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int nums[10] = {20104,20063,19892,20011,19874,20199,19898,20163,19956,19841};

int main()
{
  stringstream ss;
  string ispi; cin >> ispi;
  int count[10] = {0};
  int n;

  ss << ispi[0];
  ss >> n;
  count[n] += 1;
  ss.clear(); // 状態をクリア.
  ss.str(""); // 文字列をクリア.

  for (int i = 2; i < ispi.size(); i++) {
    string tmp;
    tmp = ispi[i];
    ss << tmp;
    ss >> n;
    count[n] += 1;
    ss.clear(); // 状態をクリア.
    ss.str(""); // 文字列をクリア.
  }

  int f,t;
  for(int i = 0; i < 10; i++){
    if(count[i] < nums[i]) t = i;
    if(count[i] > nums[i]) f = i;
  }
  cout << f << " " << t << endl;
  return 0;
}
