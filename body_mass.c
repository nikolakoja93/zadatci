#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() {
  int i,n;
  float BMI = 0;
  float weight = 0;
  float height = 0;
  int a[n];

  printf("unesi koliko ljudi\n");
  scanf("%d", &n);

  for (i=0;i<n;i++) {
   
  printf("unesi tezinu tela i visinu tela\n");
  scanf("%f %f", &weight, &height);
}
  for (i=0;i<n;i++) {
  BMI = weight / ((height)*(height));
  a[n] = BMI;
   if (a[n] < 18.5) {
  printf("under  "); }
   else if (a[n] >= 18.5 || a[n] < 25.0) {
  printf("normal  "); }
   else if (a[n] >= 25.0 || a[n] < 30.0) {
  printf("over  "); }
   else if (a[n] >= 30.0) {
  printf("obese  "); }
}}
