#include <stdio.h>
/*
int main() {
	int i, j, k, nb, esp ;
	
	printf ("nombres de lignes :\n");
	scanf ("%d", &nb);

	esp = nb-1 ;
	for (i=0;i<nb;++i){
		for (j=0;j<(esp-i);++j){
			printf (" ");
		}
		for (k=0;k<=(2*i);++k){
			printf ("*");
		}
		    printf ("\n");
	}
}
*/

int main(void)
{
	char x = '*' ; 
	int i,j ; 
	int hauteur = 7 ;

	for(i = 1; i <= hauteur; i++ ){
		for(j=0 ; j< i; j++){
			printf("%c",x);
		}
		printf("\n");
	}
	return 0; 
}

