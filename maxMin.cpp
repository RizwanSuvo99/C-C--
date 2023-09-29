#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num1,num2,num3;
    printf("Please Enter three Number: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is largest number!\n",num1);
        if(num2 < num3){
            printf("%d is lowest number!\n",num2);
        }
        else{
            printf("%d is lowest number!\n",num3);
        }
    }
    else if(num2 > num1 && num2 > num3){
        printf("%d is largest number!\n",num2);
        if(num1 < num3){
            printf("%d is lowest number!\n",num1);
        }
        else{
            printf("%d is lowest number!\n",num3);
        }
    }
    else{
        printf("%d is largest number!\n",num3);
        if(num1 < num2){
            printf("%d is lowest number!\n",num1);
        }
        else{
            printf("%d is lowest number!\n",num2);
        }
    }
    return 0;
}