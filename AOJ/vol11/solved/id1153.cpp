#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool C(pair<int, int>& a, pair<int, int>& b){
  return (a.first+a.second) < (b.first+b.second);
}


int main()
{
  int n,m;
  int sa, sb;

  while(cin>>n>>m && n && m){
    vector<int> A,B;

    for(int i=0; i<n; i++){
      int tmp;cin>>tmp;
      A.push_back(tmp);
    }
    sort(A.begin(), A.end());
    sa = accumulate(A.begin(), A.end(), 0);

    for(int i=0; i<m; i++){
      int tmp;cin>>tmp;
      B.push_back(tmp);
    }
    sort(B.begin(), B.end());
    sb = accumulate(B.begin(), B.end(), 0);


    vector<pair<int, int> > ans;
    bool solved=false;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++){
      if(sa-A[i]+B[j] == sb-B[j]+A[i]){
        solved=true;
        ans.push_back({A[i],B[j]});
      }
    }
    if(solved){
      sort(ans.begin(), ans.end(),C);
      cout << ans[0].first << " " << ans[0].second << endl;
    }else cout << -1 << endl;
  }
  return 0;
}
