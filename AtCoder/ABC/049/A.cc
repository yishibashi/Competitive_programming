#include <iostream>

using namespace std;

int main()
{
    char w;
    cin >> w;

    if(w == 'a' || w == 'i' || w == 'u' || w == 'e' || w == 'o'){
        cout << "vowel" << endl;
    }else{
        cout << "consonant" << endl;
    }

    return 0;
}
