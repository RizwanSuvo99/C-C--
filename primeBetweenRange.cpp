#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int start,end;
    printf("Enter Start Value: ");
    scanf("%d",&start);
    printf("Enter End Value: ");
    scanf("%d",&end);

    if(start > end){
        start = start - end;
        end = end + start;
        start = end - start;
    }

    int i,j,count = 0;

    printf("\nPrimes Between %d and %d are ",start,end);
    for(i = start; i <= end; i++){
        for(j = 1; j <= i; j++){
            if(i % j == 0) count++;
        }
        if(count == 2) printf("%d ",i);
        count = 0;
    }
    printf("\n\n");
    return 0;
}