#include <hellomake.h>
#include <stdio.h>

int main() {
	char cadena[20] = "";
	// call a function in another file
	myPrintHelloMake();

	//verificamos si la cadena ingresada es o no palindromo
	printf("Ingrese una cadena: ");
	scanf("%s",cadena);
	if (esPalindromo(cadena)) {
		printf("La palabra %s sí es palindromo\n",cadena);
	}else{
		printf("La palabra %s no es palindromo\n",cadena);
	}


  return(0);
}
