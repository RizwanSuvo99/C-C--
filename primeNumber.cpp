#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num = 0;
    while(1){
        printf("Enter a Number:");
        scanf("%d",&num);
        if(num == 1) continue;
        else break;
    }

    int i,count = 0;
    for(i = 1; i <= num; i++){
        if(num % i == 0) count++;
    }

    if(count == 2) printf("%d is a Prime Number!",num);
    else printf("%d is not a Prime Number!",num);
    return 0;
}