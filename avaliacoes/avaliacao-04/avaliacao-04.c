1) Dada uma Matriz Quadrada m que é passada para uma função soma_linha ( m, slinha, n) onde
slinha é um array e n é o tamanho da matriz quadrada. Calcular a soma dos elementos de cada
linha da matriz m(i,j) e armazenar a soma no array slinha (i).
  
#include <stdio.h>
void soma_linha(int n, int slinha[n], int m[n][n])
{
 int i, j;
 for(i = 0; i < n; i++)
 {
 slinha[i] = 0;
 for(j = 0; j < n; j++)
 {
 slinha[i] += m[i][j];
 }
 }
}
void exibir_matriz(int tamanho, int matriz[tamanho][tamanho])
{
 int i, j;
 for(i = 0; i < tamanho; i++)
 {
 for(j = 0; j < tamanho; j++)
 {
 printf("%d ", matriz[i][j]);
 }
 printf("\n");
 }
}
void exibir_vetor(int tamanho, int vetor[])
{
 int i;
 for(i = 0; i < tamanho; i++)
 {
 printf("%d ", vetor[i]);
 }
 printf("\n");
}
#define TAMANHO 3
int main()
{
 int somas[TAMANHO];
 int matriz[TAMANHO][TAMANHO] = {{1, 2, 3},
 {4, 5, 6},
{7, 8, 9}
 };
 soma_linha(TAMANHO, somas, matriz);
 exibir_matriz(TAMANHO, matriz);
 exibir_vetor(TAMANHO, somas);
 return 0;
}
