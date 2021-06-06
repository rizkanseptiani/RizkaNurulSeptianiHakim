/* Praktikum 6 No.02 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
void urutan(int x, int n);
int main()
{
 int n, x=0;
 printf("Input n : ");scanf("%d", &n);
 urutan(x, n);
 return 0;
}
void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}
