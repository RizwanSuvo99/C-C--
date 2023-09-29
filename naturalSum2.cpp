#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,sum;
    printf("Enter a Positive Integer:");
    scanf("%d",&n);

    sum = (n*(n+1))/2;
    printf("The sum of 1 to %d = %d",n,sum);
    return 0;
}