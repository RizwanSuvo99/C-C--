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
    int exp,rows,stars;
    printf("Which Shape Do You want to Print?(Type 1 for starRows,Type 2 for halfPyramid,Type 3 for pyramid):");
    scanf("%d",&exp);

    if(exp == 1) {
        printf("Enter Number of rows: ");
        scanf("%d",&rows);
        printf("Enter Number of stars: ");
        scanf("%d",&stars);
        starRows(rows,stars);
    }
    else if( exp == 2){
        printf("Enter Number of rows: ");
        scanf("%d",&rows);
        halfPyramid(rows);
    }
    else{
        printf("Enter Number of rows: ");
        scanf("%d",&rows);
        pyramid(rows);
    }

    return 0;
}