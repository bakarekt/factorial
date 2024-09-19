#include <iostream>
using namespace std;

int factorial (int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Giai thua cua " << n << " la: " << factorial(n) << endl;
    return 0;
}