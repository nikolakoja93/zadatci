/* Copyright 2016 <Pythonovci> */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

prvi_prvi (int i, double user_weight, double user_height, double BMI) {
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%lf %lf", &user_weight, &user_height);

  BMI = user_weight / ((user_height)*(user_height));
  if (BMI < 18.5) {
  printf("under  \n");
  printf("%lf\n", BMI); }
   else if (BMI > 18.5 && BMI <= 25.0) {
  printf("normal  \n");
  printf("%lf\n", BMI); }
   else if (BMI > 25.0 && BMI <= 30.0) {
  printf("over  \n");
  printf("%lf\n", BMI); }
   else if (BMI > 30.0) {
  printf("obese  \n");
  printf("%lf\n", BMI); }
}

int main(void) {
  int choice = 0;
  int i;
  int n;
  double BMI = 0;
  double user_weight;
  double user_height;

  while(choice!='4')
 {
   printf("\n\t 1. BMI za jednu osobu");
   printf("\n\t 2. Exit");
   printf("\n\n Izaberite sta zelite: ");
   choice = getchar();
   switch(choice)
   {
   case '1':
     printf("\n\nBMI za jednu osobu\n");
     prvi_prvi ( i, user_weight, user_height, BMI );
     break;
   case '2':
     printf("\n\nBMI za vise osoba\n");
     return 0;
   default:
     printf("\n\nINVALID SELECTION...Please try again\n");
   }
   (void)getchar();
 }
 return 0;
}
