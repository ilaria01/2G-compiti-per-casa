#include <iostream>

using namespace std;

int main ()
{
char32_t max=2147483647;
char32_t min=-2147483648;
// il numero massimmo � 2147483647
// il numero minimo � -2147483648
cout << "Ecco il minimo" << (int)min << endl;
cout << "Ecco il massimo" << (int)max << endl;
cout << "Ecco il minimo-1" << min-1 << endl;
cout << "Ecco il massimo+1" << max+1 << endl;
return 0;
}
