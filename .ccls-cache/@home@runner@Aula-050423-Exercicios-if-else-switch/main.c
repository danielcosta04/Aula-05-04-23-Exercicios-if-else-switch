#include <stdio.h>

 int main(void) {
//   int num1 = 0;
//   int num2 = 0;
//   int maior = 0;

//   printf("Digite o número 1: ");
//   scanf("%d", &num1);
//   printf("Digite o número 2: ");
//   scanf("%d", &num2);
//   if(num1 > num2){
//     maior = num1;   
//   }else{
//     maior = num2;
//   }
//   printf("\nO número é o num1: %d", maior);

// int idade = 0;
// printf("Digite sua idade: ");
//    scanf("%d", &idade);
//    if(idade >= 18 && idade <= 65){
//      printf("Obrigado votar");
//    }else{
//      if(idade >= 16 && idade <= 17 || idade > 65){
//        printf("Voto opcional");
//      }else{
//       printf("Voto proibido");
//      }
//    }
   
 // Elabore um algoritmo que dada a categoria de um nadador     classifique-o em uma das seguintes faixas etárias:

 // A = 5 a 7 anos
 // B = 8 a 11 anos
 // C = 12 a 13 anos
 // D = 14 a 17 anos
 // E = Maiores de 18 anos

   // char faixa;
   
   // printf("Digite a faixa do nadador: ");
   // scanf(" %c", &faixa);

   // switch(faixa){
   //   case 'a':
   //   printf("\nfaixa = 5 a 7 anos");
   //   break;
   //   case 'b':
   //   printf("\nfaixa = 8 a 11 anos");
   //   break;
   //   case 'c':
   //   printf("\nfaixa = 12 a 13 anos");
   //   break;
   //   case 'd':
   //   printf("\nfaixa = 14 a 17 anos");
   //   case 'e':
   //     printf("\nfaixa = Mariores de 18 anos");
   //   break;
   //   default: printf("faixa inválido");
   // }

//    3. Faça um programa que lê 4 valores X, A, B e C onde X é um número inteiro e positivo e A, B e C são quaisquer valores reais. O programa deve escrever os valores lidos e:
// se X = 1, escrever os três valores A, B e C em ordem crescente:
// se X = 2, escrever os três valores A, B e C em ordem decrescente;
// se X = 3, escrever os três valores A, B, e C de forma que o maior valor fique entre os outros dois;
// se X não for um dos três valores acima, dar uma mensagem indicando isso.

   int x;
   float a, b, c;
   float maior, meio, menor;
   
   printf("Digite o valor de a: ");
   scanf("%f", &a);
   printf("Digite o valor de b: ");
   scanf("%f", &b);
   printf("Digite o valor de c: ");
   scanf("%f", &c);
   printf("Digite o valor de x: ");
   scanf("%d", &x);

   printf("Os valores digitados são: \nX = %d \nA = %.2f \nB = %.2f \nC = %.2f ", x, a, b, c);
    
    if(a > b && a > c){
      maior = a;
      if(b > c){
        meio = b;
        menor = c;
      }else{
        meio = c;
        menor = b;
        }
      }
    else if(b > a && b > c){
      maior = b;
      if(a > c){
        meio = a;
        menor = c;
      }else{
        meio = c;
        menor = a;
      }
    }
    else if(c > a && c > b){
      maior = c;
      if(b > a){
        meio = b;
        menor = a;
      }else{
        maior = a;
        menor = b;
      }
    }

   
   switch(x){
     case 1: //Ordenação crescente
       printf("\n%.2f", maior);
       printf("\n%.2f", meio);
       printf("\n%.2f", menor);
    break;
     case 2: //Ordenação decrescente
       printf("\n%.2f", menor);
       printf("\n%.2f", meio);
       printf("\n%.2f", maior);
    break;
     case 3: //maior no meio
       printf("\n%.2f", menor);
       printf("\n%.2f", maior);
       printf("\n%.2f", meio);
     break;
     default: 
       printf("\nNúmero Inválido");
     break;
   }
   
   

   
  
  return 0;
}