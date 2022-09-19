// Código C para implementação de funções de cálculo aritmético simples:
// Soma, Subtração, Multiplicação, Divisão, Exponenciação e Extração da Raíz Quadrada
// Autor: -(Galbarino)-
// https://github.com/LGalbarino/Calculadora/blob/main/Calculadora.cpp
// Referências: Disciplina de Elementos de Programação - curso Técnico de Eletrônica - Fundação Liberato Salzano - Eng. Lucas L. Gutkosky
//              E-book UniLaSalle - disciplina de Algoritmos e Programação - Unidade 2
//              http://linguagemc.com.br/a-biblioteca-math-h/
//              https://pt.khanacademy.org/computing/computer-programming/programming/logic-if-statements/pt/ifelse-part-1
//              https://www.cprogressivo.net/2013/01/Operadores-logicos-E-OU-e-negacao.html
#include <stdio.h> // Inclusão de biblioteca padrão para entrada e saída de dados
#include <stdbool.h> // Inclusão de biblioteca de funções lógicas
#include <math.h> // Inclusão de biblioteca de funções matemáticas
int main(){ // Início da função principal que retorna um valor inteiro
  int num; // Declaração de variável do tipo número inteiro
  float n1,n2,res; // Declaração de variáveis para armazenamento de números com ponto flutuante
  char op; // Declaração de variável do tipo caracter
  while(1){ // Início de laço de repetição
    printf("\nCALCULADORA EM LINGUAGEM C - Autor: Luiz Fernando Guilhão Galbarino\nCurso de Tecnologia em Análise e Desenvolvimento de Sistemas\nUniversidade La Salle - Matrícula: 202210536"); // Impressão de mensagem na tela com quebra de linha
    printf("\n\nEscolha a operação teclando no caracter: + (Soma), - (Subtração), * (Multiplicação), / (Divisão), r (raíz quadrada) ou e (Exponenciação) ");
    scanf("%s",&op); // Leitura do teclado, código de formatação e armazenamento de caracter em variável
    while(op!='+'&&op!='-'&&op!='*'&&op!='/'&&op!='r'&&op!='e'){ // Laço para identificação de dígito inválido usando lógica "E"
      printf("\nDígito inválido, escolha a operação teclando no caracter: + (Soma), - (Subtração), * (Multiplicação), / (Divisão), r (raíz quadrada) ou e (Exponenciação)"); // Aviso de erro de digitação
      scanf("%s",&op);}
    printf("\nDigite o primeiro número e tecle ENTER: "); // Escolha do primeiro número para cálculo
    scanf("%f",&n1); // Leitura do teclado, código de formatação e armazenamento de valor em variável
    if(op!='r'){ // Análise de condição de desigualdade permitindo, ou, não a entrada do segundo número
      printf("\nDigite o segundo número e tecle ENTER: "); // Escolha do segundo número para cálculo
      scanf("%f",&n2);}
    while(op=='/'&&n2==0){
      printf("\nNão é possível dividir um número por ZERO, digite o segundo número e tecle ENTER: "); // Aviso de erro lógico
      scanf("%f",&n2);}
    if(op=='+'){ // Análise de condição de igualdade para execução de operação
      res=n1+n2; // Armazenamento de valor em variável com resultado da soma de duas variáveis
      printf("\nO resultado de %.2f + %.2f é: %.2f",n1,n2,res);} // Impressão de mensagem na tela concatenando números com duas casas após a vírgula
    else if(op=='-'){ // Subtração
      res=n1-n2; // Subtração do valor de duas variáveis e armazenamento do resultado
      printf("\nO resultado de %.2f - %.2f é: %.2f",n1,n2,res);}
    else if(op=='*'){ // Multiplicação
    res=n1*n2; // Multiplicação do valor de duas variáveis e armazenamento do resultado
    printf("\nO resultado de %.2f * %.2f é: %.2f",n1,n2,res);}
    else if(op=='/'){ // Divisão
      res=n1/n2; // Dicisão do valor de duas variáveis e armazenamento do resultado
      printf("\nO resultado de %.2f / %.2f é: %.2f",n1,n2,res);}
    else if(op=='r'){ // Raíz quadrada
      res=sqrt(n1); // Cálculo da raíz quadrada do valor de uma variável usando função da biblioteca math.h e armazenamento do resultado
      printf("\nO resultado da raíz quadrada de %.2f é: %.2f",n1,res);}
    else if(op=='e'){ // Exponenciação através de cálculo básico e propriedades
      if(n2==0){ // potência com expoente "zero"
        res=1;}
      else if(n2==1){ // potência com expoente "um"
        res=n1;}
      else{
        int c; // Declaração de variável tipo número inteiro
        res=n1*n1; // Multiplicação do valor por ele mesmo e armazenamento em variável
        for(c=2;c<n2;c++){ // Laço de repetição 'for' usando parâmetros da variável 'c', igualdade, comparação de limite e incremento
          res=res*n1;} // Atualização de valores das variáveis envolvidas
      }
    printf("O resultado de %.2f elevado a %.2f é: %.2f",n1,n2,res);}
    printf("\n\nDigite 1 para continuar calculando ou 0 para encerrar o programa: ");
    scanf("%d",&num); // Leitura do teclado, código de formatação e parâmetro de armazenamento
    if(num != 1){ // Condição para encerramento do programa caso haja desigualdade da expressão
      return 0;} // Valor de retorno igual a zero
    } // Final do laço While
  return 0; // Instrução que encerra a função main e finaliza a execução do programa
} // Final da função principal
