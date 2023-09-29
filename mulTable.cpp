#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);

    int i;
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n",num1,i,num1*i);
    }
    
    return 0;
}