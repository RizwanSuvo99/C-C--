#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int base,exp,result = 1;
    printf("Enter base Number:");
    scanf("%d",&base);
    printf("Enter exponent Number:");
    scanf("%d",&exp);

    int i;
    for(i = 1; i <= exp; i++){
        result *= base;
    }

    printf("The result is %d",result);
    return 0;
}