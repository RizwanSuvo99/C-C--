#include <bits/stdc++.h>
using namespace std;

 double calculator(int a, int b, char op){
    double result;
    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            result = 0;
    }

    return result;
 }



 
int main() {
    int sum,div,mul,sub,mod;
    sum = calculator(5,10,'+');
    mul = calculator(30,4,'*');
    div = calculator(50,13,'/');
    mod = calculator(103,33,'%');
    sub = calculator(20,9,'-');


    sum = calculator(5,10,'+') + calculator(20,9,'-');


    printf("Sum is = %d\n",sum);


    return 0;
}