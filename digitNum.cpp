#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num = 0;
    int count = 0;
    printf("Enter an Integer:");
    scanf("%d",&num);

    while( num != 0){
        num /= 10;//num = num / 10;
        count++;
    }

    /*
    //using for loop we can also do this
    for( ;num != 0; ){
        num /= 10;//num = num / 10;
        count++;
    }*/
    
    printf("Number of digits = %d\n",count);
    return 0;
}