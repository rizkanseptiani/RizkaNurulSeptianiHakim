/* Praktikum 11 No.01 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 20
int Data[MAX];
int perbandingan;
int inisialisasi(), SequentialSearch(int), BinarySearch(int);
void Tukar(int *, int *), QuickSort(int, int);
int main()
{
 int Kunci, pilihan, ketemu, pil;
 while(pil!=3){
 puts("1. Sequential Search");
 puts("2. Binary Search (Data akan diurutkan dahulu)");
 puts("3. Exit");
 printf("Pilihan : ");
 scanf("%d", &pilihan);
 inisialisasi();
 if(pilihan==1){
 printf("\nKunci : ");
 scanf("%d", &Kunci);
 ketemu = SequentialSearch(Kunci);
 }
 if(pilihan==2){
 QuickSort(0, MAX-1);
 puts("\nData yang terurut : ");
 printf("DATA : ");
 for (int i = 0; i < MAX; i++)
 printf("%d ", Data[i]);
 printf("\nKunci : ");
 scanf("%d", &Kunci);
 ketemu = BinarySearch(Kunci);
 }
 if(ketemu>=0)
 printf("Data ditemukan pada posisi %d", ketemu);
 else
 printf("Data tidak ditemukan");
 printf("\n\nJumlah perbandingan : %d", perbandingan);
 printf("\n");
 }
}
int inisialisasi(){
 int i;
 perbandingan=0;
 srand(0);
 printf("\nDATA : ");
 for (i = 0; i < MAX; i++)
 {
 Data[i] = rand()/1000+1;
 printf("%d ", Data[i]);
 }
}
void Tukar (int *a, int *b)
{
temp = *a;
*a = *b;
*b = temp;
}
void QuickSort(int L, int R)
{
 int i, j, x;
 x = Data[(L+R)/2];
 i = L;
 j = R;
 while (i <= j){
 while(Data[i] < x)
 i++;
 while(Data[j] > x)
 j--;
 if(i <= j){
 Tukar(&Data[i], &Data[j]);
 i++;
 j--;
 }
 }
 if(L < j)
 QuickSort(L, j);
 if(i < R)
 QuickSort(i, R);
}
int BinarySearch(int x)
{
 while((L <= R) && (!ketemu))
 {
 int L = 0, R = MAX-1, m;
 bool ketemu = false;
 while((L <= R) && (!ketemu))
 {
 m = (L + R) / 2;
 perbandingan++;
 if(Data[m] == x)
 ketemu = true;
 else if (x < Data[m])
 R = m - 1;
 else
 L = m + 1;
 }
 if(ketemu)
 return m;
 else
 return -1;
}
int SequentialSearch(int x)
{
 int i = 0;
 bool ketemu = false;
 while ((!ketemu) && (i < MAX)){
 perbandingan++;
 if(Data[i] == x)
 ketemu = true;
 else
 i++;
 }
 if(ketemu)
 return i;
 else
 return -1;
}
