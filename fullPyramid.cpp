#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int rows2 = rows - 1;
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= rows2; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        i++;
        rows++;
        rows2 -= 1;
        printf("\n");
    }

    
    return 0;
}