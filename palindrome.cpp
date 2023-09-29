#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num,num2,count = 0,i;
    printf("Enter an Integer: ");
    scanf("%d",&num);
    num2 = num;
    double digit;
    
    while(1){
        count++;
        num /= 10;
        if(num == 0){
            break;
        }
    }
    num = num2;
    int palindrom = 0,temp = 1;

    while(1){
        digit = (( (double)num / 10 ) - num / 10) * 10;
        num /= 10;
        for(i = 1; i < count ; i++){
            temp *= 10;
        }
        palindrom += (digit * temp);
        temp = 1;
        count --;
        if(num == 0){
            break;
        }
    }

    if(num2 == palindrom){
        printf("%d is Palindrome Number!",num2);
    }
    else{
        printf("%d is not Palindrome Number!",num2);
    }
    return 0;
}