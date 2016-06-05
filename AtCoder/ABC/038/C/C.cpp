#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> numbers;
    int n;
    for(int i = 0; i < N; i++){
        cin >> n;
        numbers.push_back(n);
    }
    int answer = 0;
    int tmp = 0;
    for(int i = 0; i < N; i++)
    for(int j = i+1; j < N; j++){
        tmp = numbers[j-1];
        if(tmp < numbers[j]){
            answer++;
        }
        else if (tmp >= numbers[j]) break;
    }

    cout << answer+N << endl;

    return 0;
}



