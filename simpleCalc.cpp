#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num1,num2;
    char op;
    printf("Enter an Operator(+,-,*,/,%%):");
    scanf("%c",&op);
    printf("Enter Two Operands:");
    scanf("%d%d",&num1,&num2);


    switch(op){
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d / %d = %d",num1,num2,num1/num2);
            break;
        case '%':
            printf("%d %% %d = %d",num1,num2,num1%num2);
            break;
        default:
            printf("Invalid Operator!Try Again.");
    }
    return 0;
}