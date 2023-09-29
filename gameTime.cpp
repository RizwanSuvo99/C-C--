#include<bits/stdc++.h>
using namespace std;

int main()
{
    int startH, starM, endH, endM;
    int dif;
    scanf("%d %d %d %d", &startH, &starM, &endH, &endM);

    dif = ((endH*60)+endM) - ((startH*60)+starM); 
    if(dif<=0) dif += 24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}