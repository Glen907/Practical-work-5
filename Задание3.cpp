#include <iostream>
using namespace std;
int main(){
    setlocale (LC_ALL, "RU");
    int a, b=0;
    for (a=1; a<=200; a++){
        b=b+a;
    }
    cout << b << "\n";
    return 0;
}