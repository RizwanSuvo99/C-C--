#include <iostream>
using namespace std;

// void notaCal (double &money, int note){
//   int curNote = money / note;
//   money = money - (curNote * note);
//   if(curNote){
//     cout << curNote << " nota(s) de R$ " << note << ".00" << endl;
//   }else {
//     cout << "0 nota(s) de R$ " << note << ".00" << endl;
//   }
// }

void notaCal (int &money, int note){
  int currentNote = money / note;
  money = money - currentNote * note;
  cout << currentNote <<" nota(s) de R$ "<< note <<",00" << endl;
}

int main() {
  int money;
  cin >> money;

  notaCal(money, 100);
  notaCal(money, 50);
  notaCal(money, 20);
  notaCal(money, 10);
  notaCal(money, 5);
  notaCal(money, 2);
  notaCal(money, 1);

  return 0;
}