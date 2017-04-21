#include <iostream>

using namespace std;

int main ()
{
signed long int max=2147483647;
signed long int min=-2147483648;
// il numero massimmo è 2147483647
// il numero minimo è -2147483648
cout << "Ecco il minimo" << (int)min << endl;
cout << "Ecco il massimo" << (int)max << endl;
cout << "Ecco il minimo-1" << min-1 << endl;
cout << "Ecco il massimo+1" << max+1 << endl;
return 0;
}
