#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N; cin >> N;
    int answer=10000 , tmp;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        answer = min(answer, tmp);
    }
    cout << answer << endl;

    return 0;
}
