#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    printf("Enter a Range:");
    scanf("%d",&num);

    int a=0,b=1;
    int i,sum;
    sum = a+b;
     
    printf("Fibonacci Series between %d Range = %d %d ",num,a,b);
    for(i = 1; i >= 1 ; i++){
        printf("%d ",sum);
        a = b; 
        b = sum;
        sum = a+b; 
        if( sum > num){
            break;
        }
    }

    return 0;
}