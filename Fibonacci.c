#include <stdio.h>
int main() 
{
  int i, n;
  int a = 0, b = 1,c;
  
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  /*
a,b,c,e

  0+1=1
  a+b=c     c=e
    1+1=2
    b+e=c    c=b
      1+2=3
      e+b=c     c=e
        2+3=5
        b+e=c     c=b
          3+5=8
          e+b=c     c=e
            5+8=13
            
  */


  /*
   0 + 1 = 1                     (a = 0, b = 1, c = 1)
   
       1 + 1 = 2                 (a = 1, b = 1, c = 2)
       
           1 + 2 = 3             (a = 1, b = 2, c = 3)
           
               2 + 3 = 5         (a = 2, b = 3, c = 5)
               
                   3 + 5 = 8     (a = 3, b = 5, c = 8)
                   
  */
  printf("%d, %d, ", a, b);
  
  for (i = 3; i <= n; ++i) {

    c=a+b;   
    printf("%d, ", c);
    a=b;
    b=c;
    }
}