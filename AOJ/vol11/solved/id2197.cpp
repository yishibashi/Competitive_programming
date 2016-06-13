#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n){
        int count=0;
        for(int i=1; i<n; i++){
            int sum = i;
            for(int j=i+1; j<n; j++){
                sum += j;
                if(sum==n){
                    count++;
                    break;
                }
                if(j>n) break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
