#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    printf("Enter an Integer:");
    scanf("%d",&n);
    
    if(n < 0){
        printf("factorial doesn't exist!");
        return 0;
    }

    int i;
    long long result = 1;
    for(i = n; i >= 1; i--){
        result *= i;
    }
    printf("The factorial of %d is %lld",n,result);
    return 0;
}