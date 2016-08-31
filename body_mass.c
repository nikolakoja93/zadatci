#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() {
  int i,n;
  float BMI = 0;
  float weight = 0;
  float height = 0;

  printf("unesi koliko ljudi\n");
  scanf("%d", &n);

  for (i=0;i<n;i++) {
   
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%f %f", &weight, &height);
}
  BMI = weight / ((height)*(height));
   if (BMI < 18.5) {
  printf("under\n"); }
   if (BMI >= 18.5 || BMI < 25.0) {
  printf("normal\n"); }
   if (BMI >= 25.0 || BMI < 30.0) {
  printf("over\n"); }
   if (BMI >= 30.0) {
  printf("obese\n"); }
}
