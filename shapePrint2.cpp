#include <bits/stdc++.h>
using namespace std;

void starRows(int rows,int stars){
    int i,j;
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= stars;j++){
            printf("*");
        }
        printf("\n");
    }
}

void halfPyramid(int rows){
    int i,j;
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pyramid(int rows){
    int i,j;
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
}

int main() {
    int rows,stars;
    printf("Enter Number of rows: ");
    scanf("%d",&rows);
    printf("Enter Number of stars: ");
    scanf("%d",&stars);

    printf("\n");
    starRows(rows,stars);
    printf("\n");
    halfPyramid(rows);
    printf("\n");
    pyramid(rows);

    
    return 0;
}