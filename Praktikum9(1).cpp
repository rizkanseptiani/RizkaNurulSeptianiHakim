/* Praktikum 9 No.01 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define MaxStack 10
int Data[MAX];
int temp[MAX];
void inisialisasi(){
 srand(0);
 printf("DATA SEBELUM TERURUT");
 for(int i=0; i<MAX; i++){
 Data[i] = (int) rand()/1000+1;
 printf("\nData ke %d : %d ", i, Data[i]);
 }
}
void Tukar (int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
void QuickSortNonRekursif()
{
 struct tump {
 int Kiri;
 int Kanan;
 }Tumpukan[MaxStack];
 int i, j, L, R, x, ujung = 1;
 Tumpukan[1].Kiri = 0;
 Tumpukan[1].Kanan = MAX-1;
 while (ujung!=0){
 L = Tumpukan[ujung].Kiri;
 R = Tumpukan[ujung].Kanan;
 ujung--;
 while(R > L){
 i = L;
 j = R;
 x = Data[(L+R)/2];
 while(i <= j){
 while(Data[i] < x)
 i++;
 while(x < Data[j])
 j--;
 if(i <= j){
 if(i!=j){
 printf("\n%d pada data ke-%d ditukar dengan %d pada data ke-%d", Data[i], i,
Data[j], j);
 Tukar(&Data[i], &Data[j]);
 }
 i++;
 j--;
 }
 }
 if(L < i){
 ujung++;
 Tumpukan[ujung].Kiri = i;
 Tumpukan[ujung].Kanan = R;
 }
 R = j;
 }
 }
}
void QuickSortRekursif(int L, int R)
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
 if(i!=j){
 printf("\n%d pada data ke-%d ditukar dengan %d pada data ke-%d", Data[i], i,
Data[j], j);
 Tukar(&Data[i], &Data[j]);
 }
 i++;
 j--;
 }
 }
 if(L < j)
 QuickSortRekursif(L, j);
 if(i < R)
 QuickSortRekursif(i, R);
}
void merge(int Data[], int temp[], int kiri, int tengah, int kanan)
{
 int i, left_end, num_elements, tmp_pos;
 left_end = tengah - 1;
 tmp_pos = kiri;
 num_elements = kanan - kiri + 1;
 while ((kiri <= left_end) && (tengah <= kanan))
 {
 if (Data[kiri] <= Data[tengah])
 {
 temp[tmp_pos] = Data[kiri];
 tmp_pos = tmp_pos + 1;
 kiri = kiri +1;
 }
 else
 {
 temp[tmp_pos] = Data[tengah];
 tmp_pos = tmp_pos + 1;
 tengah = tengah + 1;
 }
 }
 while (kiri <= left_end)
 {
 temp[tmp_pos] = Data[kiri];
 kiri = kiri + 1;
 tmp_pos = tmp_pos + 1;
 }
 temp[tmp_pos] = Data[tengah];
 tengah = tengah + 1;
 tmp_pos = tmp_pos + 1;
 }
 while (tengah <= kanan)
 {
 temp[tmp_pos] = Data[tengah];
 tengah = tengah + 1;
 tmp_pos = tmp_pos + 1;
 }
 for (i=0; i < num_elements; i++)
 {
 if(Data[kanan]!=temp[kanan]){
 printf("\nData ke-%d diganti dengan %d", kanan, temp[kanan]);
 Data[kanan] = temp[kanan];
 }
 kanan = kanan - 1;
 }

void m_sort(int Data[], int temp[], int kiri, int kanan)
{
 int tengah;
 if (kanan > kiri)
 {
 tengah = (kanan + kiri) / 2;
 m_sort(Data, temp, kiri, tengah);
 m_sort(Data, temp, tengah+1, kanan);
 merge(Data, temp, kiri, tengah+1, kanan);
 }
}
void mergeSort(int Data[], int temp[], int array_size){
}

void tampil(){
 printf("\nDATA SETELAH TERURUT");
 for(int i=0; i<MAX; i++){
 printf("\nData ke %d : %d ", i, Data[i]);
 }
 printf("\n");
}
int main()
{
 puts("Quick Sort Non Rekursif");
 inisialisasi();
 QuickSortNonRekursif();
 tampil();
 puts("Quick Sort Rekursif");
 inisialisasi();
 QuickSortRekursif(0, MAX-1);
 tampil();
 puts("Merge Sort");
 inisialisasi();
 mergeSort(Data, temp, MAX);
 tampil();
}
