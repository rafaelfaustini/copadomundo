#include <stdio.h> // Rafael Faustini - 2 Período - Programação Aplicada
#include <string.h>
int main()
{
  int t=0,n=0,i=0,p=0,total=0,maximo=0,mlg=0; // Declarações e Inicializações de variaveis
  char s[11]; // Criação da cadeia de caracteres que para esse caso, não será muito útil
  scanf("%d %d",&t,&n); // Primeira linha de entrada, dois inteiros T e N, número de times participantes e o número de partidas jogadas (Scanf puro como mostrado pelo cliente)
  
  
  if (((t>=2)&&(t<=200))&&((n>=0)&&(n<=10000))) // Condição que restringe a validade do número de participantes e número de partidas jogadas
  {
    for(i=0;i<t;i++)
    {
      fflush(stdin); //Limpa os buffers
      scanf("%s %d", s,&p); // Input Nome do pais + Pontos
      if((p>=0)&&(p<=30000)) // Condição que restringe o valor máximo e mínimo dos pontos
       {
         total= total+p; // Soma os pontos; total+= p;
       }
       else
        {
          i-=1; // Quando for digitado um valor inválido, o índice será subtraido e depois somado pelo 'for', logo seria a repetição da instrução ( Por exemplo se o i=3 ,quando as instruções do loop são executadas e o valor de p é inválido, ele irá subtrair 1 do i, logo i=2 e o for irá acrescentar 1, logo i=3, sendo basicamente uma repetição)
        }
    
    }
  }
  else
  {
    printf("Valores invalidos detectados, verifique as restricoes e tente novamente mais tarde\n"); // Quando os valores são inválidos, o script se encerra;
    return 0;
  } 
  
  maximo = n*3; // Número de pontos máximos possíveis, o número de partidas multiplicado por 3 que é o máximo de pontos que pode ser adquirido em uma partida

  mlg= maximo-total; // Calcula o número de empates (Máximo de Pontos possíveis - Total somado)
  printf("%d\n",mlg); // Output puro como mostrado pelo cliente
  
  return 0;
    
 
}
//www.rafaelfaustini.com.br