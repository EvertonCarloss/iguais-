#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

int n1 = 2;
int n2 = 4;
int iguais = (n1==n2)? "SIM":"N�O";

printf("OS VALORES %d e %d S�O IGUAIS:  %s",n1,n2,iguais);


}
