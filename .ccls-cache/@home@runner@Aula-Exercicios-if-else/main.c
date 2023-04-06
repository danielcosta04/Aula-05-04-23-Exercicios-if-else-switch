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

int idade = 0;
printf("Digite sua idade: ");
   scanf("%d", &idade);
   if(idade >= 18 && idade <= 65){
     printf("Obrigado votar");
   }else{
     if(idade >= 16 && idade <= 17 || idade > 65){
       printf("Voto opcional");
     }else{
      printf("Voto proibido");
     }
   }
   
   

  
  return 0;
}