// Lab3.4.cpp 
// < Наумович Роман > 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 18 

#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double y;  // вхідний параметр 
    double R;  // вхідний параметр
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі 
    if (((y<=x)&&(y>=0)&&(R==sqrt(x*x+y*y)))||((y>=x)&&(R==sqrt(x*x+y*y)&&y<=0)))
    cout << "yes" << endl;
    else
        cout << "no" << endl;
        cin.get();
        return 0;
}
