1ª QUESTÃO: Criar um programa que receba dados via teclado e grave em um arquivo.
  
#include <stdio.h>
#define TAMANHO 200
#include <stdlib.h>
int main()
{
 char texto [TAMANHO];
 FILE* fp;

 printf("Escreva o que deseja gravar no arquivo\n");
 fgets(texto, TAMANHO, stdin);

 if((fp = fopen("arquivo.txt", "w"))==NULL)
 {
 printf("O arquivo nao pode ser aberto\n");
 exit(1);
 }

 fputs(texto, fp);
 fclose(fp);

 return 0;

}
