#include <iostream>

using namespace std;

int main ()
{
wchar_t max=9223372036854775807;
wchar_t min=-9223372036854775808;
// il numero massimmo � 9223372036854775807
// il numero minimo � -9223372036854775808
cout << "Ecco il minimo" << (int)min << endl;
cout << "Ecco il massimo" << (int)max << endl;
cout << "Ecco il minimo-1" << min-1 << endl;
cout << "Ecco il massimo+1" << max+1 << endl;
return 0;
}
