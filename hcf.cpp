#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n1,n2,gcd;
    printf("Enter two integers: ");
    scanf("%d%d",&n1,&n2);

    n1 = n1 < 0 ? -n1 : n1;
    n2 = n2 < 0 ? -n2 : n2;

    int i;
    for(i = 1;i <= n1 && i <= n2; i++){
        if(n1 % i == 0 && n2 % i == 0) gcd = i;
    }

    printf("GCD is %d\n",gcd);
    return 0;
}