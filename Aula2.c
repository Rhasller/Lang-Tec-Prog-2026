#include <stdio.h>
#include <stdlib.h>

/* cada bite tem 255 bits, na linguagem c temos 8 bites*/
/* posso dar um nome para posições de memoria e chamo elas de variáveis*/
/* pintf = f de formatado/formated*/
/* %d = numero inteiro, int*/
/* %f = float*/
/* %lf = float double*/
/* %c = char*/



int main(int argc, char *argv[]) {
	
	float e;	
	int a,b,c,d;
		a = 255;
		b = 128;
		c = 100;
		d = a + b + c;
		e = d / 3;
		
		printf("A média dos três valores %d + %d + %d = %d / 3 = %f", a,b,c,d,e);
		
		
	
		
		
		
	return 0;
}
