#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
  string s; cin >> s;
  int k; cin >> k;
  set<string> pwd;
  if((int)s.size() >= k){
    for (int i = 0; i < s.size()-k+1; i++) {
        string tmp;
        for(int j = i; j < i+k; j++){
            tmp += s[j];
        }
        if(tmp.size() == k) pwd.insert(tmp);
    }
    cout << pwd.size() << endl;
  }
  else cout << 0 << endl;
  return 0;

}
