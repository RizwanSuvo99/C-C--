#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num1,num2,num3,min,max;
    printf("Please Enter three Number: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    max = num1 > num2 && num1 > num3 ? num1 : 0;
    if(max == 0) max = num2 > num1 && num2 > num3 ? num2 : 0;
    if(max == 0) max = num3 > num2 && num3 > num1 ? num3 : 0;

    min = num1 < num2 && num1 < num3 ? num1 : 0;
    if(min == 0) min = num2 < num1 && num2 < num3 ? num2 : 0;
    if(min == 0) min = num3 < num2 && num3 < num1 ? num3 : 0;

    printf("%d is the largest number!\n",max);
    printf("%d is the lowest number!\n",min);

    return 0;
}