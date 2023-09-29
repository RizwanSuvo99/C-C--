#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,num2,count = 0,i;
    printf("Enter an Integer: ");
    scanf("%d",&num);
    
    num2 = num;
    while(1){
        count++;
        num /= 10;
        if(num == 0){
            break;
        }
    }
   
    double digit;
    num = num2;
    int armstrong = 0;

    while(1){
        digit = (( (double)num / 10 ) - num / 10) * 10;
        num /= 10;
        armstrong += pow((int)digit,count);
        if(num == 0){
            break;
        }
    }

    if(num2 == armstrong){
        printf("%d is Armstrong Number!",num2);
    }
    else{
        printf("%d is not Armstrong Number!",num2);
    }

    return 0;
}