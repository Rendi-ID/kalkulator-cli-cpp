#include <iostream>
using namespace std;
int main(){
  float a,b,hasil;
  char aritmatika;
  cout << "     Kalkulator cli by Rendinm Noober\n";
  cout << "________________________________________\n";
  cout << " {1} masukan angka pertama: ";
  cin >> a;
  cout << " {•} pilih operator(+,-,/,*): ";
  cin >> aritmatika;
  cout << " {2} masukan angka kedua: ";
  cin >> b;
  cout << "________________________________________";
  cout << " {•} Hasiil dari " << a << aritmatika << b;
  if(aritmatika == '+'){
    hasil = a + b;
  }else if(aritmatika == '-'){
    hasil = a - b;
  }else if(aritmatila == '/'){
    hasil = a / b;
  }else if(aritmatika == '*'){
    hasil = a * b;
  }
  cout << " = " << hasil << endl;
  cin.get();
  return 0;
}
