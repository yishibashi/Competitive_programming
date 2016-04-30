#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T, N, M;
    vector<int> A;
    vector<int> B;
    cin >> T;
    cin >> N;

    int tmp;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        A.push_back(tmp);
    }

    cin >> M;
    if (N < M){
        cout << "no" << endl;
        return 0;
    }

    for (int i = 0; i < M; i++){
        cin >> tmp;
        B.push_back(tmp);
    }

    int count = 0;


    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (0 <= B[i] - A[j] && B[i] - A[j] <= T){
                count++;
                A.erase(A.begin() + j);
                break;
            }
        }
    }



    if(count == M) cout << "yes" << endl;
    else cout <<"no" << endl;

    return 0;
}
