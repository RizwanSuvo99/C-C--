#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    printf("Enter an Integer: ");
    scanf("%d",&num);
    double digit;
    
    while(1){
        digit = (( (double)num / 10 ) - num / 10) * 10;
        printf("%.0lf",digit);
        num /= 10;
        if(num == 0){
            break;
        }
    }
    
    return 0;
}