#include <stdio.h> // Rafael Faustini - 2 Per�odo - Programa��o Aplicada
#include <string.h>
int main()
{
  int t=0,n=0,i=0,p=0,total=0,maximo=0,mlg=0; // Declara��es e Inicializa��es de variaveis
  char s[11]; // Cria��o da cadeia de caracteres que para esse caso, n�o ser� muito �til
  scanf("%d %d",&t,&n); // Primeira linha de entrada, dois inteiros T e N, n�mero de times participantes e o n�mero de partidas jogadas (Scanf puro como mostrado pelo cliente)
  
  
  if (((t>=2)&&(t<=200))&&((n>=0)&&(n<=10000))) // Condi��o que restringe a validade do n�mero de participantes e n�mero de partidas jogadas
  {
    for(i=0;i<t;i++)
    {
      fflush(stdin); //Limpa os buffers
      scanf("%s %d", s,&p); // Input Nome do pais + Pontos
      if((p>=0)&&(p<=30000)) // Condi��o que restringe o valor m�ximo e m�nimo dos pontos
       {
         total= total+p; // Soma os pontos; total+= p;
       }
       else
        {
          i-=1; // Quando for digitado um valor inv�lido, o �ndice ser� subtraido e depois somado pelo 'for', logo seria a repeti��o da instru��o ( Por exemplo se o i=3 ,quando as instru��es do loop s�o executadas e o valor de p � inv�lido, ele ir� subtrair 1 do i, logo i=2 e o for ir� acrescentar 1, logo i=3, sendo basicamente uma repeti��o)
        }
    
    }
  }
  else
  {
    printf("Valores invalidos detectados, verifique as restricoes e tente novamente mais tarde\n"); // Quando os valores s�o inv�lidos, o script se encerra;
    return 0;
  } 
  
  maximo = n*3; // N�mero de pontos m�ximos poss�veis, o n�mero de partidas multiplicado por 3 que � o m�ximo de pontos que pode ser adquirido em uma partida

  mlg= maximo-total; // Calcula o n�mero de empates (M�ximo de Pontos poss�veis - Total somado)
  printf("%d\n",mlg); // Output puro como mostrado pelo cliente
  
  return 0;
    
 
}
//www.rafaelfaustini.com.br