#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,sum = 0;
    printf("Enter a Positive Integer:");
    scanf("%d",&a);
    int i;
    for(i = 1; i<=a; i++){
        sum += i;
    }
    printf("The sum of 1 to %d = %d",a,sum);
    return 0;
}