#include <stdio.h>
#include <time.h>


void main(void)
{
  register int j:
  
  int k:
  clock_t start, finish;
  
  start = clock();
  for(k=0; k < 100; k++)
  for(i=0; i<32000; i++)
  finish = clock() ;
  printf("non-register loop: %ld ticks\n", finish - start);
   start = clock();
   for(k=0; k<100; k++)
   for(j=0; j<32000; j++);
   finish = clock();
   printf("register loop: %ld ticks\n", finish - start);
   }
