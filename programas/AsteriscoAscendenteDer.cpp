
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
int esp = 0;
for (i = 0; i<(num+1); ++i) {
    for (int e=0; e<esp; e++) {

			printf(" ");

		}
for (j = 0; j < i; ++j)

 printf("*");
cout << endl;
esp++;
}
return 0;
}


