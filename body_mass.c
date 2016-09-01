#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void drugi_drugi (int i, int n, double* user_weight, double* user_height, double* BMI) {
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


void prvi_prvi (int i, double* user_weight, double* user_height, double* BMI) {
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%lf %lf", &user_weight[i], &user_height[i]);

  BMI[i] = user_weight[i] / ((user_height[i])*(user_height[i]));
  if (BMI[i] < 18.5) {
  printf("under  "); }
   else if (BMI[i] > 18.5 && BMI[i] <= 25.0) {
  printf("normal  "); }
   else if (BMI[i] > 25.0 && BMI[i] <= 30.0) {
  printf("over  "); }
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

  printf("-------Menu-------\n");
  printf("1) Single user BMI\n");
  printf("2) More people BMI\n");
  printf("3) Exit\n");

  scanf("%d", &choice);
  if (choice==1)
     {
        printf("You chose single user BMI!\n");
        prvi_prvi ( i, user_weight, user_height, BMI);
        return main();
     }
     else if (choice==2)
     {
        printf("You chose more people BMI 2!\n");
        drugi_drugi ( i, n, user_weight, user_height, BMI);
        return main();
     }
     else if (choice==3)
     {
        printf("You chose to exit 3!\n");
        return 0;
     }
   }
