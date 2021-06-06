/* Praktikum 6 No.01 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
void urutan(int i);
int main()
{
 int n;
 printf("Input n : ");scanf("%d", &n);
 urutan(n);
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
