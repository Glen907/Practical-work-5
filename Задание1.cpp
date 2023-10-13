#include <iostream>
using namespace std;
int main(){
    setlocale (LC_ALL, "RU");
    int number;
    cout << "Четные числа от 1 до 30: ";
    for (int i = 0; i<=30; i+=2){
        cout << i << " ";
    }
    int start, end;
    cout << "\nНечетные числа от 1 до 30: ";
    for (int i = 1; i<=29; i+=2){
        cout << i << " ";
    }
    return 0;
}