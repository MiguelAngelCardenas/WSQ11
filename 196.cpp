#include <iostream>
#include <sstream>
#include "BigIntegerLibrary.hh"
using namespace std;

void palindrome (string low, string upper, int palind, int non_ly, int ly){
string saved_low = low;
BigInteger d = stringToBigInteger(low);
BigInteger e = stringToBigInteger(upper);
  while (d <= e){
  string text = bigIntegerToString(d);
  text = string (text.rbegin(), text.rend());
  BigInteger a = stringToBigInteger(text);
  if (a == d){
    palind = palind + 1;
    d = d + 1;
  } else {
    int c = 0;
    BigInteger low2 = d;
    BigInteger low3 = a;
    while (low2 != low3 && c<=30){
    low2 = low2 + low3;
    string text1 = bigIntegerToString(low2);
    text1 = string (text1.rbegin(), text1.rend());
    low3 = stringToBigInteger(text1);
    c = c + 1;
    }
    if (c >= 50){
      ly = ly + 1;
      cout << "Found lychrel number: " << d << endl;
      d = d + 1;
    }else {
      non_ly = non_ly + 1;
      d = d + 1;
    }
    }
  }
cout << "The range of numbers to analyse is: ";
cout << saved_low << "-" << upper << endl;
cout << "The number of natural palindromes is: " << palind <<endl;
cout << "The number of non-Lycherels is: " << non_ly << endl;
cout << "The number of Lycherels is: " << ly << endl;
}

int main () {
string low;
string upper;
int palind = 0;
int non_ly = 0;
int ly = 0;
cout << "Give the lower bound of the interval: ";
cin >> low;
cout << "Give the upper bound of the interval: ";
cin >> upper;
palindrome (low, upper, palind, non_ly,ly);
return 0;
}
