#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    long n=1, n2=1;
    for (int i = 1; i <= 20; i++)
        n*=(i*n2);
    cout << n;
    return 0;
}