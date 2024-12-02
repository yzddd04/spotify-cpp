#include <iostream>
using namespace std;

//fungsi fibonacci
int fibonacci(int x) {
  if (x <= 0) {
    return 0; 
  } else if (x == 1) {
    return 1; 
  } else {
    return fibonacci(x - 1) + fibonacci(x - 2);
  }
}

int main() {
  int x;

  // input data
  cout << "Masukkan suku deret Fibonacci: ";
  cin >> x;

  // eksekusi looping fungsi fibonacci
  cout << "Deret Fibonacci dari " << x << " adalah :" << endl;
  for (int i = 1; i <= x; ++i) {
    cout << fibonacci(i) << " ";
  }
  cout << endl;

  return 0;
}