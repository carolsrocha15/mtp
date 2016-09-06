#include <stdio.h>
#include<ctype.h>
#include <string.h>
#define N 256
int main() {
    int i;
    char frase[N];
    printf ("Digite uma frase: ");
    gets (frase);
	for(i=0; frase[i] != '\0'; i++) 
       frase[i] = toupper(frase[i]);
    printf("Tamanho: %u\n",strlen(frase));
    if(strncmp(frase,"Bom dia",7) == 0)
       printf("Bom dia para vc tbm!\n");
    else
        printf("Vc quer dizer: %s?\n", frase);
	return 0;
}
