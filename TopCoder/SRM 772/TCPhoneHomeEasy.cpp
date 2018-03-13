#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TCPhoneHomeEasy {
   public:
    int validNumbers(int digits, vector<string> specialPrefixes) {
        int valid_phone_numbers = (int)pow(10.0, digits);

        for (int i = 0; i < specialPrefixes.size(); i++) {
            int sp_size = specialPrefixes[i].size();
            valid_phone_numbers -= (int)pow(10.0, digits - sp_size);
        }
        return valid_phone_numbers;
    }
};

int main() {
    TCPhoneHomeEasy p;

    vector<string> ex1 = {"0", "1", "911"};
    cout << p.validNumbers(7, ex1) << endl;

    return 0;
}
