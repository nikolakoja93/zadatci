#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() {
  int i;
  int n;
  double BMI[100];
  double user_weight[100];
  double user_height[100];
  

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
  printf("obese  ");
}}
