#include <iostream>
#include <cstdio>

int main()
{
    char S[12];

    scanf("%s",S);


    for(int i = 0; i < 12; i++){
        if(i == 0 && 97 <= S[i] && S[i] <= 122){
            S[i] -= 32;
        }
        else if(i != 0 && 65 <= S[i] && S[i] <=90){
            S[i] += 32;
        }
        else if(S[i] == '\0') break;
        printf("%c",S[i]);

    }
    printf("\n");

    return 0;
}

