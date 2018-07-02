#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int die1,die2,value;
  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");
  die1=rand()%6+1;
  die2=rand()%6+1;
  printf("Die 1: %d\n",die1);
  printf("Die 2: %d\n",die2);
  value=die1+die2;
  printf("Total value: %d\n",value);
  if(value>7) printf("You won\n");
  else printf("You lost\n");
  return 0;
}
