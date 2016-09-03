/* Copyright 2016 <Pythonovci> */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int meni() {
  int choice = 0;

  while(choice!='4')
 {
   printf("\n\t 1. BMI za jednu osobu");
   printf("\n\t 2. BMI od 40kg do 200kg");
   printf("\n\t 3. Exit");
   printf("\n\n Izaberite sta zelite: ");
   choice = getchar();
   switch(choice)
   {
   case '1':
     printf("\n\nBMI za jednu osobu\n");
     prvi_prvi ();
     break;
   case '2':
     printf("\n\nBMI od 40kg do 200kg\n");
     kilogrami ();
     break;
   case '3':
     printf("\n\nExit\n");
     return 0;
   default:
     printf("\n\nINVALID SELECTION...Please try again\n");
   }
   (void)getchar();
 }
 return 0;
}

kilogrami() {
  double user_weight = 0;
  double user_height = 0;
  double BMI = 0;
  for (user_weight = 40; user_weight <= 200; (user_weight = user_weight + 10)) {
    for (user_height = 1.50; user_height <= 2.20; (user_height = user_height + 0.10)) {
      BMI = user_weight / ((user_height)*(user_height));
      printf("%.2lf\t%.2lf\tBMI = %.2lf\t\n", user_weight, user_height, BMI);
    }
  }
}

prvi_prvi() {
  double user_weight;
  double user_height;
  double BMI = 0;
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%lf %lf", &user_weight, &user_height);

  BMI = user_weight / ((user_height)*(user_height));
  if (BMI < 18.5) {
  printf("under  ");
  printf("BMI = %.2lf", BMI); }
   else if (BMI > 18.5 && BMI <= 25.0) {
  printf("normal  ");
  printf("BMI = %.2lf", BMI); }
   else if (BMI > 25.0 && BMI <= 30.0) {
  printf("over  ");
  printf("BMI = %.2lf", BMI); }
   else if (BMI > 30.0) {
  printf("obese  ");
  printf("BMI = %.2lf", BMI); }
}

int main() {
  meni();
}
