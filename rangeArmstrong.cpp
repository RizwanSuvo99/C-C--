#include <bits/stdc++.h>
using namespace std;
int main(){
    int start,end,i,count = 0,armstrong,num,num2;
    double digit;
    printf("Enter Start Value: ");
    scanf("%d",&start);
    printf("Enter End Value: ");
    scanf("%d",&end);

    for(i = start; i <= end; i++){
        num = i;
        num2 = num;
        while(1){
            count++;
            num /= 10;
            if(num == 0){
                break;
            }
        }
    
        double digit;
        num = num2;
        int armstrong = 0;

        while(1){
            digit = (( (double)num / 10 ) - num / 10) * 10;
            num /= 10;
            armstrong += pow((int)digit,count);
            if(num == 0){
                break;
            }
        }

        if(num2 == armstrong){
            printf("%d is Armstrong Number!",num2);
        }
    
    }
    return 0;
}