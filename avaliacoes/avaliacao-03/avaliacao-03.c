a) Dados de entrada (a, b, c inteiros que correspondem na função quadrática F(x) = ax**2 + bx + c). Pede-se
as raízes da função quando Delta = 0 e Delta > 0. Quando o Delta for < 0 printar a mensagem "Raízes
Imaginárias".
  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
int a,b,c,delta;
float y1,y2;
 printf("\nDigite o valor de A: ");
 scanf("%d",&a);
 printf("\nDigite o valor de B: ");
 scanf("%d",&b);
 printf("\nDigite o valor de C: ");
 scanf("%d",&c);
 delta = pow(b,2) - 4 * a * c;
 printf("\n\nO valor calculado de delta eh = %d\n",delta);
if(delta >=0){
y1 = (-b + sqrt(delta))/(2*a);
y2 = (-b - sqrt(delta))/(2*a);
printf("As raizes reais sao:\n\n => 1a.raiz %.1f \n => 2a.raiz %.1f\n", y1, y2);
}else{
printf("\nAs raizes sao imaginarias");
}

return 0;
}

b) Dada uma String qualquer inverter essa String.
  
#include <stdio.h>
int meuTamanho(char frase[]){
 int tam = 0;
 int i;
 for(i=23; i>=0; i--){
 printf ("%d %c\n", i, frase [i]);
 }
 tam=i;
 return tam;
}
int main(){
 int size;
 char s1 []="ADRIANO MACHADO DE SOUZA";
 size=meuTamanho(s1);
 size= sizeof (s1);
 printf("\nO tamanho da String eh = %d\n",size);
 return 0;
}
