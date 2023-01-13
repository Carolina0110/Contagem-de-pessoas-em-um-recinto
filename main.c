#include <stdio.h>

int main(void) {
  int total = 0; 
  int entrada; 
 
for(;;){
printf("\n\t**Controle de entrada de pessoas em um recinto.**\n");
printf("\n1 - Adiciona (Entrou).\n");
printf("2 - Exclui (Saiu).\n");
printf("3 - Exibir total.\n");
printf("9 - Sair.\n");
printf("Insira qual ação deseja executar: ");
scanf("%d",&entrada);

switch(entrada){
  case 1: total++; printf("Uma pessoa adicionada!\n"); break;
  case 2: total--; printf("Uma pessoa removida!\n");break;
  case 3: printf("\n O total de pessoas no recinto é: %d.\n",total); break;
  case 9: return 0;
}
}
  return 0;
}