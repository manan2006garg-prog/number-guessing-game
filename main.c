#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){srand((unsigned)time(NULL));int secret=rand()%20+1,guess;for(int tries=1;tries<=5;tries++){printf("Guess 1-20 (%d/5): ",tries);if(scanf("%d",&guess)!=1)return 1;if(guess==secret){puts("Correct!");return 0;}puts(guess<secret?"Too low.":"Too high.");}printf("Out of tries. Number was %d.\n",secret);return 0;}
