#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 drugi_drugi (int i, int n, double* user_weight, double* user_height, double* BMI) {
  printf("unesi koliko ljudi\n");
  scanf("%d", &n);

  for (i=0;i<n;i++) {
    printf("unesi tezinu tela i visinu tela\n");
    scanf("%lf %lf", &user_weight[i], &user_height[i]);
}
  for (i=0;i<n;i++) {
   BMI[i] = user_weight[i] / ((user_height[i])*(user_height[i]));
     if (BMI[i] < 18.5)
    printf("under  ");
     else if (BMI[i] > 18.5 && BMI[i] <= 25.0)
    printf("normal  ");
     else if (BMI[i] > 25.0 && BMI[i] <= 30.0)
    printf("over  ");
     else if (BMI[i] > 30.0)
    printf("obese  \n");
}}

  prvi_prvi (int i, double* user_weight, double* user_height, double* BMI) {
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%lf %lf", &user_weight[i], &user_height[i]);

  BMI[i] = user_weight[i] / ((user_height[i])*(user_height[i]));
  if (BMI[i] < 18.5) {
  printf("under  \n");
  printf("%lf\n", BMI[i]); }
   else if (BMI[i] > 18.5 && BMI[i] <= 25.0) {
  printf("normal  \n");
  printf("%lf\n", BMI[i]); }
   else if (BMI[i] > 25.0 && BMI[i] <= 30.0) {
  printf("over  \n");
  printf("%lf\n", BMI[i]); }
   else if (BMI[i] > 30.0) {
  printf("obese  \n");
  printf("%lf\n", BMI[i]); }
}

 int main(void) {
  int choice=0;
  int i;
  int n;
  double BMI[100];
  double user_weight[100];
  double user_height[100];

  while(choice!='4')
 {
   printf("\n\t 1. BMI za jednu osobu");
   printf("\n\t 2. BMI za vise osoba");
   printf("\n\t 3. Exit");
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
     drugi_drugi ( i, n, user_weight, user_height, BMI);
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

