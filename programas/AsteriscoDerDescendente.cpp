#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
int i, j, num;

cout << endl;
cout << endl;

cout <<"Este programa muestra una torre de aste riscos en forma descendente " <<endl;

cout << endl;
cout << endl;
printf("Ingrese un numero: ");
cin >> num;
cout << endl;

int esp = 0;
for (i = num; i > 0; --i) {


    for (int e=0; e<esp; e++) {
        	printf(" ");

		}
for (j = 0; j < i; ++j)
printf( "*");
cout << endl;
esp++;
}
return 0;
}
