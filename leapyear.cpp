#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 400 == 0){
            printf("leap year!");
        }
        else if(year % 100 == 0){
            printf("Not leap year!");
        }
        else{
            printf("leap year!");
        }

    }
    else{
        printf("Not leap year!");
    }
    
    return 0;
}