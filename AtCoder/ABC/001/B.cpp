//
// Created by KAYA on 4/6/16.
//

#include<iostream>
#include <iomanip>

using namespace std;

int B()
{
    double m, VV;
    cin >> m;

    m = m / 1000;

    if (m<0.1){
        VV = 0;
    }
    else if (0.1<= m && m <= 5){
        VV = 10 * m;
    }
    else if (6<= m && m<=30){
        VV = m + 50;
    }
    else if (35<=m && m<=70){
        VV = (m-30)/5 + 80;
    }
    else{
        VV = 89;
    }

    cout << setfill('0') << setw(2) <<VV << endl;

    return 0;
}