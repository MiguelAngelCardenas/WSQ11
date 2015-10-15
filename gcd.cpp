#include <iostream>
using namespace std;

int gcd (int a, int b){
  if (b > a){
    int temp = b;
    b = a;
    a = temp;
  }
  int temp2 = 0;
  while (b != 0){
    temp2 = b;
    b = a % b;
    a = temp2;
  }
  return temp2;
}

int main() {
  int a, b;
  cout << "Give to integer positive numbers: ";
  cin >> a;
  cin >> b;
  int r = gcd (a, b);
  cout << "The greatest common disvisor for both numbers is: " << r << endl;
  return 0;
}
