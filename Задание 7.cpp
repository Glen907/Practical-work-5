#include <iostream>
using namespace std;
 
int main()
{
    int n,i;
    cout << "Введите число N" << endl;
    cin >> n  ;
    for (i = n; i > 0; i--) {
      if (n%i==0)  {
       cout << "Делитель: " << i << endl ;
       }
    }
    system("pause");
    return 0;
}