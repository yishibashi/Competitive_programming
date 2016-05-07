#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

void insertionSort(vector<int> A)
{
    for (int i = 1; i < A.size(); i++){
        int v = A[i];
        int j = i-1;

        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }

        A[j+1] = v;


    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }cout << endl;

    }
}



int main()
{
    int N, tmp;

    cin >> N;

    for(int i = 0; i < N ; i++){
        cin >> tmp;
        A.push_back(tmp);
    }

    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }cout << endl;


    insertionSort(A);
    return 0;
}


