#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a,b,c;
    double x1,x2;
    printf("Enter a:");
    scanf("%lf",&a);
    printf("Enter b:");
    scanf("%lf",&b);
    printf("Enter c:");
    scanf("%lf",&c);

    double discriminant = b*b - 4*a*c;
    x1 = (-b+sqrt(discriminant))/(2*a);
    x2 = (-b-sqrt(discriminant))/(2*a);

    printf("root x1 = %.2lf and root x2 = %.2lf",x1,x2);
    return 0;
}