#include <iostream>
using namespace std;

int num(int &a){

    a = 3;
    return a;
}

int main(){
    int a = 4;

    cout << "a nya adalah : " << a << endl;
    cout << "a nya adalah : " << num << endl;

    return 0;
}