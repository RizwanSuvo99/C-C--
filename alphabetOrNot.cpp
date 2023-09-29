#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("It is an alphabet");
    }
    else{
        printf("It is not an alphabet");
    }
    
    return 0;
}