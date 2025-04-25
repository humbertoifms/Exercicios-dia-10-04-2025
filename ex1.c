#include <stdio.h>

int main () {
  char i = 's';
  int j;
  while (i == 's'){
    for (int a = 0; a == 1; a++){
      printf("Escolha executar um programa numerado de 1 a 21\n");
      scanf(" %d", j);
      if (j < 1 || j > 21){
        printf("Input inválido tente novamente\n");
        a = a - 1;
      }
    }
    switch (j){
        case 1 :
        int x, y;
        printf("Insira o valor x: ");
        scanf(" %d", x);
        printf("Insira o valor y: ");
        scanf(" %d", y);
      
        printf("cordenada x: %d\ncordenada y: %d\n", x,y);
      break;
      case 2 :
        int a, b, c;
        printf("Insira o valor a: ");
        scanf(" %d", a);
        printf("Insira o valor b: ");
        scanf(" %d", b);
        printf("Insira o valor c: ");
        scanf(" %d", c);
      
        printf("A= %d\nB= %d\nC= %d\n", a,b,c);
      break;
      case 3 :
        int diaN, mesN, anoN;
        printf("Insira sua data de nascimento: ");
        scanf("%d %d %d", &diaN, &mesN, &anoN);
        
        int diaHj, mesHj, anoHj;
        printf("Insira a data atual: ");
        scanf("%d %d %d", &diaHj, &mesHj, &anoHj);
        
        int calculoMes = mesN - mesHj;
        int anoTotal, mesTotal, diaTotal;
        
        if (calculoMes >= 0) {
          anoHj = anoHj -1;
          anoTotal = anoHj - anoN;
          mesTotal = 12 - mesN;
          mesTotal = mesTotal + mesHj;
          diaTotal= diaHj - diaN;
        } else {
          anoTotal = anoHj - anoN;
          mesTotal = mesHj - mesN;
          diaTotal= diaHj - diaN;
        }
        
        printf("Você tem %d anos e %d meses e %d dias de vida\n", anoTotal, mesTotal, diaTotal);
      break;
      case 4 :
        int anoN;
        printf("insira seu ano de nascimento: ");
        scanf("%d", &anoN);  
        int anoHj;
        printf("insira o ano atual: ");
        scanf("%d", &anoHj);     
        long long somaDia = 0;
        
        while(anoN <= anoHj){
            if (anoN % 4 == 0){
                somaDia = somaDia + 366;
            } else{
                somaDia = somaDia + 365;
            }
            anoN++;
        }    
        printf("Sua idade em dias é: %d\n", somaDia);
      break;
      case 5:
          int n1, n2, n3;
      
          printf("Insira suas 3 notas: ");
          scanf("%d %d %d", &n1, &n2, &n3);
          
          int media = n1 + n2 + n3;
          media = media/3;
          printf("Sua média é: %d\n", media);
          break;
          case 6 :
          float n1, n2, n3;
      
          printf("Insira seus 3 valores: ");
          scanf("%d %d %d", &n1, &n2, &n3);
          
          printf("Seus valores reais dispóstos reversamente são: %d %d %d\n", n3, n2, n1);
      break;
      case 7 :
        int n1, n2, n3;
    
        printf("Insira seus 3 valores: ");
        scanf("%d %d %d", &n1, &n2, &n3);
        
        printf("Seus valores inteiros dispóstos reversamente são: %d %d %d\n", n3, n2, n1);
      break;
      case 8 :
        int idAluno;
        printf("Insira seu id: ");
        scanf("%d", &idAluno);
          
        if(idAluno >= 100000){
            printf("Id do aluno invalido\n");
            return 1;
        }
      
        int n1, n2, n3;
        printf("Insira suas 3 notas: ");
        scanf("%d %d %d", &n1, &n2, &n3);
      
        int media = n1 + n2 + n3;
        media = media/3;
        printf("Sua média é: %d\n", media);
      break;
      case 9 :
        int alturaEstudante;
    
        printf("Insira sua altura: ");
        scanf("%d", alturaEstudante);
        
        char genero;
        printf("Insira seu gênero com uma letra F ou M: ");
        scanf("%c", genero);
      break;
      case 10 :
        int horaInicio;
        printf("Insira a hora de inicio do jogo: ");
        scanf("%d", &horaInicio);
      
        int horaFinal;
        printf("Agora insira a hora final do jogo: ");
        scanf("%d", &horaFinal);
      
        printf("A hora de inicio e de término do jogo é: %dh e %dh\n", horaInicio, horaFinal);
      break;
      case 11 :
      break;
      case 12 :
      break;
      case 13 :
      break;
      case 14 :
      break;
      case 15 :
      break;
      case 16 :
      break;
      case 17 :
      break;
      case 18 :
      break;
      case 19 :
      break;
      case 20 :
      break;
      case 21 :
      break;
    }
  }
}