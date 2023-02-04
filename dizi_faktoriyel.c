#include <stdio.h>
// 1'den 9'a kadar olan sayıların faktöriyelini al ve bir dizide sakla ve ekrana yazdır

int main()

{
  
 int dizi[9] = {1,2,3,4,5,6,7,8,9}; 
 int faktoriyelDizi[9];
 int i,j;

 for(i = 0 ; i < 9 ; i++)
 {
   int faktoriyel = 1;
   for(j = 1 ; j <= dizi[i] ; j++)
   {
    faktoriyel *= j;
    faktoriyelDizi[i] = faktoriyel;
   }
 }
 
  for(i = 0 ; i < 9 ; i++)
  {
    printf("faktoriyelDizi[%d]: %d\n",i,faktoriyelDizi[i]);
  }
 
 return 0;
 
}