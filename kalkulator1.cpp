#include <iostream>
using namespace std;

// Function to sum
double sum(double a, double b) {
  return a + b;
}

// Function to substract
double subtract(double a, double b) {
  return a - b;
}

// Function to multiply
double multiply(double a, double b) {
  return a * b;
}

// Function to divide
double divide(double a, double b) {
  if (b == 0) {
    cout << "Error, gk boleh nol" << endl;
    return 0;
  } else {
    return a / b;
  }
}



int main() {
    double num1, num2;
    char oprtr;

    cout << endl ;
    cout << "=========================" << endl;
    cout << "welcome to the calculator" << endl;
    cout << "=========================" << endl << endl;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> oprtr;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << endl;
    cout << "=========================" << endl;
    cout << "hasil dari ";
    
    switch (oprtr) {
        case '+':
            cout << num1 << " + " << num2 << " = "  << sum(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = "  << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = "  << divide(num1, num2) << endl;
            break;

        // apabila operator tidak sesuai yg di dalam kurung maka error
        default:
            cout << "Error, masukin operator yang sesuai" << endl;
  }

    cout << "=========================" << endl << endl;

  return 0;
}