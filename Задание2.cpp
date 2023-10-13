#include <iostream>
using namespace std;
int main(){
    setlocale (LC_ALL, "RU");
    int num;
    cout << "Напишите число: "; cin >> num;
    for (int i = 1; i < 10; i++){
        cout << num << " * " << i << " = " << num * i << "\n";       
    }
    return 0;
}