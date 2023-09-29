#include <bits/stdc++.h>
using namespace std;

 void calculator(int a, int b, char op){
    switch(op){
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
            break;
        case '%':
            printf("%d %% %d = %d",a,b,a%b);
            break;
        default:
            printf("Invalid Operator!Try Again.");
    }
 }



 
int main() {
    int i;
    int a,b;
    char op;
    for(i = 1; i <= 100; i++){
        printf("\nEnter Two Operands:");
        scanf("%d%d",&a,&b);
        printf("Enter Operator:");
        scanf(" %c",&op);
        calculator(a,b,op);
    }
    return 0;
}