#include <bits/stdc++.h>
using namespace std;

int notes(double N,int amount){
    return int(N) / amount;
}

double remain(double N,int amount,int notes){
    N = (( N / amount ) - notes) * amount;
    return N;
}

int main() {
    
    double N;
    cin >> N;
    double remainder = 0;

    cout << "NOTAS:" << endl;
    cout << notes(N,100) << " nota(s) de R$ 100.00" << endl;
    remainder = remain(N,100,notes(N,100));

    cout << notes(remainder,50) << " nota(s) de R$ 50.00" << endl;
    remainder = remain(remainder,50,notes(remainder,50));

    cout << notes(remainder,20) << " nota(s) de R$ 20.00" << endl;
    remainder = remain(remainder,20,notes(remainder,20));

    cout << notes(remainder,10) << " nota(s) de R$ 10.00" << endl;
    remainder = remain(remainder,10,notes(remainder,10));

    cout << notes(remainder,5) << " nota(s) de R$ 5.00" << endl;
    remainder = remain(remainder,5,notes(remainder,5));

    cout << notes(remainder,2) << " nota(s) de R$ 2.00" << endl;
    remainder = remain(remainder,2,notes(remainder,2));

    cout << "MOEDAS:" << endl;
    cout << notes(remainder,1) << " moeda(s) de R$ 1.00" << endl;
    remainder = remain(remainder,1,notes(remainder,1));

    remainder = remainder * 100;

    cout << notes(remainder,50) << " moeda(s) de R$ 0.50" << endl;
    remainder = remain(remainder,50,notes(remainder,50));

    cout << notes(remainder,25) << " moeda(s) de R$ 0.25" << endl;
    remainder = remain(remainder,25,notes(remainder,25));

    cout << notes(remainder,10) << " moeda(s) de R$ 0.10" << endl;
    remainder = remain(remainder,10,notes(remainder,10));

    cout << notes(remainder,5) << " moeda(s) de R$ 0.05" << endl;
    remainder = remain(remainder,5,notes(remainder,5));

    cout << notes(remainder,1) << " moeda(s) de R$ 0.01" << endl;
    remainder = remain(remainder,1,notes(remainder,1));

    return 0;
}