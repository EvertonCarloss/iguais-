#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

int n1 = 2;
int n2 = 4;
int iguais = (n1==n2)? "SIM":"NÃO";

printf("OS VALORES %d e %d SÃO IGUAIS:  %s",n1,n2,iguais);


}
