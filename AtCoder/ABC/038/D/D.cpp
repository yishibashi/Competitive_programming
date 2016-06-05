#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Box
{
    int w;
    int h;
};



bool C(const Box& a, const Box& b)
{
    return a.w == b.w ? a.h > b.h : a.w > b.w;
}


int main()
{
    int N; cin >> N;
    int w, h;
    vector<Box> b;
    for(int i = 0; i < N; i++){
        cin >> w >> h;
        b.push_back({w,h});
    }

    sort(b.begin(),b.end(), C);

    int t_w, t_h;
    int answer=0, count=1;


    cout << "--------------------------------" << endl;
    for(int i = 0; i < N; i++){
        cout << b[i].w << " " << b[i].h << endl;
    }
    cout << "--------------------------------" << endl;


    for(int i = 0; i < N; i++){
    for(int j = i+1 ; j < N; j++){
        t_w = b[j-1].w;
        t_h = b[j-1].h;
        if(t_w == b[j].w) continue;
        if(t_h > b[j].h) count++;
    }
    answer =  max(answer, count);
    count = 1;
    }
    cout << answer << endl;

    return 0;
}

