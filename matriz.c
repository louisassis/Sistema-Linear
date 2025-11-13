#include <stdio.h>
#define NL 20 // constante para maximo de linhas
#define NC 20 // constante para maximo de colunas
// Funcao para gerar nova matriz MA + MB
void somaMat (int MA[][NC], int MB[][NC], int MC[][NC], int nL, int nC) {
  int i, j; // auxiliar, para indexar os matrizes
  for (i=0; i< nL; i++)   // "Ler" nL x nC valores 
    for (j=0; j< nC; j++) // inteiros armazenando-os
      MC[i][j] = MA[i][j] + MB[i][j];
  }
// Funcao para entrar matriz nL x nC, linha por linha
void lerMatriz (int mat[][NC], int nL, int nC) {
  int i,j; // declara indices
  for (i=0; i<nL; i++)   // i entre 0 e nL-1
    for (j=0; j<nC; j++) // j entre 0 e nC-1
      scanf("%d", &mat[i][j]);
  }
// Funcao para imprimir matriz nL x nC, linha por linha
void imprimeMatriz (int mat[][NC], int nL, int nC) {
  int i,j; // declara indices
  for (i=0; i< nL; i++) { // i entre 0 e nL-1
    printf("%2d: ", i); // "Imprime" numero desta linha
    for (j=0; j< nC; j++) // j entre 0 e nC-1
      printf("%3d ", mat[i][j]); // em 3 espacos
    printf("\n"); // Mude de linha
    }
  }
int main (void) {
  int i, j; // auxiliar, para indexar os matrizes
  int m, n; // tamanho util das matrizes
  int matA[NL][NC], matB[NL][NC], matC[NL][NC]; // Matriz para inteiros (ate' NL*NC elementos)
  scanf("%d %d", &m, &n);
  printf("Entra matriz A:\n"); lerMatriz(matA, m, n);
  printf("Entra matriz B:\n"); lerMatriz(matB, m, n);
  printf("Gera matriz C:\n"); somaMat(matA, matB, matC, m, n); // parametros efetivos

  printf("Matriz A:\n"); imprimeMatriz(matA, m, n); // 'matA' e' parametro efetivo
  printf("Matriz B:\n"); imprimeMatriz(matB, m, n); // aqui e' 'matB'
  printf("Matriz C:\n"); imprimeMatriz(matC, m, n); // aqui e' 'matC'
  return 0;
  }