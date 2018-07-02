#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int die1,die2,value;
  char name[100];
  srand((unsigned)time(NULL));

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);
  
  printf("Rolling the dice...\n");
  die1=rand()%6+1;
  die2=rand()%6+1;
  printf("Die 1: %d\n",die1);
  printf("Die 2: %d\n",die2);
  value=die1+die2;
  printf("Total value: %d\n",value);
  return 0;
}
