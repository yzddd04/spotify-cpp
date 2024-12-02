#include <iostream>
using namespace std;

// Function to sum
void sum(double a, double b) {
  cout << a << " + " << b << " = "  << a+b << endl;
}

// Function to substract
void subtract(double a, double b) {
  cout << a << " - " << b << " = "  << a - b << endl;
}

// Function to multiply
void multiply(double a, double b) {
  cout << a << " * " << b << " = "  << a * b << endl;
}

// Function to divide
void divide(double a, double b) {

  if (b == 0) {
    cout << "Error, gk boleh nol" << endl;;
  } else {
    cout << a << " / " << b << " = "  << a / b << endl;;
  }
}



int main() {
    double a, b;
    char oprtr;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << endl;

    //mema
    sum (a, b);
    subtract (a, b);
    multiply (a, b);
    divide(a, b);

    cout << endl;
    

  return 0;
}