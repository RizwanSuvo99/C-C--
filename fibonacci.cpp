#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int a=0,b=1;
    int i,sum;
    sum = a+b;
     
    printf("Fibonacci Series Is = %d %d ",a,b);
    for(i = 1; i <= num - 2; i++){
        printf("%d ",sum);
        a = b; 
        b = sum;
        sum = a+b;
    }
    return 0;
}