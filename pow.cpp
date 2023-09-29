#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double num1,num2;
    printf("Enter Base Value:");
    scanf("%lf",&num1);
    printf("Enter Exponent Value:");
    scanf("%lf",&num2);

    double result = pow(num1,num2);
    printf("The result of %.2lf^%.2lf is %.2lf",num1,num2,result);
    return 0;
}
