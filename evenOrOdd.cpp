#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("The Number is Even");
    }
    else{
        printf("The Number is Odd");
    }
    return 0;
}