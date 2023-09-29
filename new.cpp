#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int start,end;
    printf("Enter Start Number: ");
    scanf("%d",&start);
    printf("Enter End Number: ");
    scanf("%d",&end);

    int i,sum = 0;
    for(i = start; i <= end; i++){
        sum += i;
    }

    printf("The Sum between %d and %d is %d\n",start,end,sum);

    return 0;
}