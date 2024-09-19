#include <stdio.h>

int main()
{
  
  int e, e2, ef, r, r2, rf, j, j2, j3, j4, g1, g2;
  int A, C;
  
  scanf("%d %d %d", &e, &j, &j2); // Primeira rodada
  r = (j + j2) % 2; // Par vai dar 0, ímpar vai ser >= 1
 
  if ((e == 0 && r == 0) || (e == 1 && r >= 1)) { // Par e par, impar e impar
    A = 1; } // A ganha
  if ((e == 0 && r >= 1) || (e == 1 && r == 0)) { // Par e impar, impar e par
    A = 0; } // B ganha
  
  scanf("%d %d %d", &e2, &j3, &j4); // Segunda rodada
  r2 = (j3 + j4) % 2;
  
  if ((e2 == 0 && r2 == 0) || (e2 == 1 && r2 >= 1)) { // C ganha
    C = 1; } // C ganha
  if ((e2 == 0 && r2 >= 1) || (e2 == 1 && r2 == 0)) { // D ganha
    C = 0; } // D ganha
  
  scanf("%d %d %d", &ef, &g1, &g2); // Terceira rodada
  rf = (g1 + g2) % 2;
  
  if ((ef == 0 && rf == 0) || (ef == 1 && rf >= 1)) { // Par e par ou impar e impar, A ou B ganha
    if (A == 1 && C <= 1) { // A x C ou A x D
      printf("A"); }
    else { // B x C ou B x D
      printf("B"); }
  }
  
  if ((ef == 0 && r >= 1) || (e == 1 && r == 0)) { // Impar e par, C ou D ganha
    if (A >= 0 && C == 1) { // C x A ou C x B
      printf("C");}
    else { // D x A ou D x B
      printf("D");}
  }
  return 0;
}