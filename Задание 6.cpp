#include <iostream>
using namespace std;

int main(){
    
    unsigned long long int a=1, b=0, k;
    int n;
    
    cout <<"Введите сколько хотите увидеть чисел Фибоначи: ";
    cin >> n;
    
    for(int i = 0; i <= n; i++)
    {
        k=a+b;
        a=b;
        b=k;
        cout <<k<<" \n";
    }

    return 0;
}
