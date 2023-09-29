#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("It is a vowel");
    }
    else{
        printf("It is a Consonant");
    }
    
    return 0;
}
