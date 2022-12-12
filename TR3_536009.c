#include <stdio.h>
#include <stdlib.h>

int main(){

    //ESTAS SÃO AS VARIÁVEIS USADAS
     unsigned int x[200];//Está variável é para guardar os numeros
     int y;
     int z;
     int k;
     int w;
     int j;
     int i;

     i=0;
     
     //Este laço de repetição da o valor 0 para todas as posições do vetor X
     while(i<200){
         x[i] = 0;
         i++;
     }
     z = 0;
     i = 0;
     //Este print é oque vai aparecer na tela para a pessoa
     printf("Digite qualquer numero entre 0 e 5000, e digite -1 para parar: \n");

     //Este laço faz com que a pessoa digite os numeros desejados e guarde na posição do vetor que vai ser inserido
     while(y != -1){
       scanf("%d", &y);
       j = y / 32;

       //Este if faz uma pergunta para ver se aceita os valores digitados de 0 a 5000
       if((y!=-1)&&(y>=0 && y<= 5000)){
           x[j] = x[j] | (1 << (y-(32*j))); //coloca 1 na posição do bit do valor que vai ser inserido
           if(y>i){
           i = y;
        }
       }

     }
     y = 0;
     w = 0;

     //Mostra na tela os numeros digitados
     printf("Numeros Digitados: \n");

     //Este laço percorre os nuemros armazenados e vai printando na tela
     while(y<=i){
       if((x[w] >> (y-(32*w))) & 1){ //este if verifica se a posição do bit é igual a 1, se for ele printa na tela
         printf("%d\n", y);
       }
       y++;

       //aqui ele verifica a posição do vetor que vai ser verificado
       w = y / 32;
     }

  return 0;
}
