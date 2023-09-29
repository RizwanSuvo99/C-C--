#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int start,end;
    cout << "Enter Start Number: ";
    cin >> start;
    cout << "Enter End Number: ";
    cin >> end;

    if(start > end){
        start = start - end;
        end = start + end;
        start = end - start;
    }

    int i,sum = 0;
    for(i = start; i <= end; i++){
        sum += i;
    }

    cout << "The Sum between " << start << " and " << end << " is " << sum;

    return 0;
}