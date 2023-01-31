#include <stdio.h>
#include <stdlib.h>

int main() {
	int teste = 0, i;
	
	char c[500];
	gets(c);
	
	for(int i=0; i < 500; i++) {
		
		if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || 
		   c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U') {
			teste++;
		}
		if(c[i] == '\0') {
			break;
		}
	}
	
	printf("O texto possui %d vogais", teste);
	return 0;
}
