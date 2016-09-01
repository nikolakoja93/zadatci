#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 meni (int choice, int i, double* user_weight, double* user_height,double* BMI) {
  printf("-------Menu-------\n");
  printf("1) Ponovni unos\n");
  printf("2) Exit\n");
  scanf("%d", &choice);
  if (choice==1)
     {
        printf("Izabrali ste ponovni unos podataka\n");
        prvi_prvi ( i, user_weight, user_height, BMI);
        meni(choice, i, user_weight, user_height, BMI);
     }
     else if (choice==2)
     {
        printf("Exit!\n");
        return 0;
     }
}

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

 int main() {
  int choice;
  int i;
  int n;
  double BMI[100];
  double user_weight[100];
  double user_height[100];

  prvi_prvi( i, user_weight, user_height, BMI);

  meni(choice, i, user_weight, user_height, BMI);
}
