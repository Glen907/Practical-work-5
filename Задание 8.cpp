#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "RU");
    int height;
    cout <<"Введите высоту равнобедренную трапецию: "; cin >> height;
    for (int i = 4; i < height; i++){
        for (int j = 0; j < height - i + 1; j++){
            cout<<" ";
        }
        for (int k = 0; k < 2 * i + 1; k++){
            cout << "*";
        }
        cout <<"\n";
    }
    int numstars;
    cout << "Введите высоту квадрата:"; cin >> numstars;
    for(int i = 0; i < numstars; ++i)
    cout << string(numstars, '*') << '\n';
    return 0;
}