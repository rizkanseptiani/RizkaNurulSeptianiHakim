/* Praktikum 10 No.01 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
for(int i=0;i<20;i++){
 cout<<A[i]<<" ";
}
cout<<"SHABIAN ARSYL YONANTA\n";
cout<<"20051397032\n";
cout<<"MI_B_2020\n";
cout<<"\nData yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}
