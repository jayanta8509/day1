// Write a program to identify if the character is a vowel or consonant

#include <iostream>
using namespace std;
void vowelorcon(char n) {
  if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' ||
      n == 'E' || n == 'I' || n == 'O' || n == 'U') {
    cout << "Vowel";
    cout << endl;
  }
  // Define ASCII Value
  else if (!((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))) {
    cout << "Invilate";
    cout << endl;
  } else {
    cout << "Consonant";
  }
}

int main() {
  // cout << "Hello World!\n";
  char a;
  cin >> a;
  vowelorcon(a);
}