#include <iostream>

using namespace std;

int main ()
{
signed short int max=32767;
signed short int min=-32768;
// il numero massimmo è 32767
// il numero minimo è -32768
cout << "Ecco il minimo" << (int)min << endl;
cout << "Ecco il massimo" << (int)max << endl;
cout << "Ecco il minimo-1" << min-1 << endl;
cout << "Ecco il massimo+1" << max+1 << endl;
return 0;
}
