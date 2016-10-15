#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int DIS(double dis) {
    dis = (int)((dis / 60.0)*10.0  + 0.5 + 1e-10)/10.0;
    if (dis  <= 0.20) return 0;
    else if (dis  <= 1.5) return 1;
    else if (dis  <= 3.3) return 2;
    else if (dis  <= 5.4) return 3;
    else if (dis  <= 7.9) return 4;
    else if (dis  <= 10.7) return 5;
    else if (dis  <= 13.8) return 6;
    else if (dis  <= 17.1) return 7;
    else if (dis  <= 20.7) return 8;
    else if (dis  <= 24.4) return 9;
    else if (dis  <= 28.4) return 10;
    else if (dis  <= 32.6) return 11;
    else return 12;

}

string DEG(double deg) {
    deg /= 10.0;
    deg += 1e-10;
    if (11.25 <= deg && deg < 33.75) {
        return "NNE";
    } else if (33.75 <= deg && deg < 56.25) {
        return "NE";
    } else if (56.25 <= deg && deg < 78.75) {
        return "ENE";
    } else if (78.75 <= deg && deg < 101.25) {
        return "E";
    } else if (101.25 <= deg && deg < 123.75) {
        return "ESE";
    } else if (123.75 <= deg && deg < 146.25) {
        return "SE";
    } else if (146.25 <= deg && deg < 168.75) {
        return "SSE";
    } else if (168.75 <= deg && deg < 191.25) {
        return "S";
    } else if (191.25 <= deg && deg < 213.75) {
        return "SSW";
    } else if (213.75 <= deg && deg < 236.25) {
        return "SW";
    } else if (236.25 <= deg && deg < 258.75) {
        return "WSW";
    } else if (258.75 <= deg && deg < 281.25) {
        return "W";
    } else if (281.25 <= deg && deg < 303.75) {
        return "WNW";
    } else if (303.75 <= deg && deg < 326.25) {
        return "NW";
    } else if (326.25 <= deg && deg < 348.75) {
        return "NNW";
    } else {
        return "N";
    }
}


int main() {
    double deg, dis;
    cin >> deg >> dis;
    if (DIS(dis)==0) {
        cout << 'C' << " " << 0 << endl;
    }else {
        cout << DEG(deg) << " " << DIS(dis) << endl;
    }
    return 0;
}
