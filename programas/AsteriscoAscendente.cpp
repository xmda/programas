
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
int i, j, num;

cout << endl;
cout << endl;

cout <<"Este programa muestra una torre de aste riscos en forma Ascendente " <<endl;

cout << endl;
cout << endl;
printf("Ingrese un numero: ");
cin >> num;
for (i = 0; i<(num+1); ++i) {
for (j = 0; j < i; ++j)
printf("%4s", "*");
cout << endl;
}
return 0;
}


