/* Praktikum 9 No.03 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
#define MaxStack 20
struct data{
 int nip;
 char nama[MAX];
 char alamat[MAX];
 char golongan;
}employees[MAX];
struct data temp[MAX];
int count=0;
int menu1(){
 int pil;
 puts("Pengurutan : ");
 puts("1. Pengurutan naik");
 puts("2. Pengurutan turun");
 printf("Silahkan input pilihan : ");
 scanf("%d", &pil);
 return pil;
}
int menu2(){
 int pil;
 int pil;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan nama");
 printf("Silahkan input pilihan : ");
 scanf("%d", &pil);
 return pil;
}
void input(){
 printf("\nNIP\t\t: ");
 scanf("%d", &employees[count].nip);
 fflush(stdin);
 printf("Nama\t\t: ");
 fgets(employees[count].nama, sizeof employees[count].nama, stdin);
 printf("Alamat\t\t: ");
 fgets(employees[count].alamat, sizeof employees[count].alamat, stdin);
 printf("Gol. Darah\t: ");
 scanf("%c", &employees[count].golongan);
 printf("\n");
 fflush(stdin);
 count++;
}
void QuickSortNonRekursif(int urutan1,int urutan2)
{
 struct tump {
 int Kiri;
 int Kanan;
 }Tumpukan[MaxStack];
 int i, j, L, R, temp1, ujung = 1;
 int i, j, L, R, temp1, ujung = 1;
 char temp2;
 Tumpukan[1].Kiri = 0;
 Tumpukan[1].Kanan = count-1;
 if(urutan2 == 1){
 if(urutan1 == 1){
 while (ujung!=0){
 L = Tumpukan[ujung].Kiri;
 R = Tumpukan[ujung].Kanan;
 ujung--;
 while(R > L){
 i = L;
 j = R;
 temp1 = employees[(L+R)/2].nip;
 while(i <= j){
 while(employees[i].nip < temp1)
 i++;
 while(temp1 < employees[j].nip)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
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
 else{
 while (ujung!=0){
 L = Tumpukan[ujung].Kiri;
 R = Tumpukan[ujung].Kanan;
 ujung--;
 while(R > L){
 i = L;
 j = R;
 temp1 = employees[(L+R)/2].nip;
 while(i <= j){
 while(employees[i].nip > temp1)
 i++;
 while(temp1 > employees[j].nip)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
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
 }
 else{
 if(urutan1==1){
 while (ujung!=0){
 L = Tumpukan[ujung].Kiri;
 R = Tumpukan[ujung].Kanan;
 ujung--;
 while(R > L){
 i = L;
 j = R;
 temp2 = employees[(L+R)/2].nama[0];
 while(i <= j){
 while(employees[i].nama[0] < temp2)
 i++;
 while(temp2 < employees[j].nama[0])
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
 i++;
 j--;
 }
 }
 if(L < i){
 ujung++;
 Tumpukan[ujung].Kiri = i;
 Tumpukan[ujung].Kanan = R;
 }
 }
 R = j;
 }
 }
 }
 else{
 while (ujung!=0){
 L = Tumpukan[ujung].Kiri;
 R = Tumpukan[ujung].Kanan;
 ujung--;
 while(R > L){
 i = L;
 j = R;
 temp2 = employees[(L+R)/2].nama[0];
 while(i <= j){
 while(employees[i].nama[0] > temp2)
 i++;
 while(temp2 > employees[j].nama[0])
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
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
 }
}
void QuickSortRekursif(int L, int R, int urutan1, int urutan2)
{
 int i, j, temp1;
 char temp2;
 i = L;
 j = R;
 if(urutan2==1){
 if(urutan1==1){
 temp1 = employees[(L+R)/2].nip;
 while (i <= j){
 while(employees[i].nip < temp1)
 i++;
 while(employees[j].nip > temp1)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
 i++;
 j--;
 }
 }
 }
 else{
 temp1 = employees[(L+R)/2].nip;
 while (i <= j){
 while(employees[i].nip > temp1)
 i++;
 while(employees[j].nip < temp1)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
 i++;
 j--;
 }
 }
 }
 }
 else{
 if(urutan1==1){
 temp2 = employees[(L+R)/2].nama[0];
 while (i <= j){
 while(employees[i].nama[0] < temp2)
 i++;
 while(employees[j].nama[0] > temp2)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
 i++;
 j--;
 }
 }
 }
 else{
 temp2 = employees[(L+R)/2].nama[0];
 while (i <= j){
 while(employees[i].nama[0] > temp2)
 i++;
 while(employees[j].nama[0] < temp2)
 j--;
 if(i <= j){
 if(i!=j)
 Tukar(&employees[i], &employees[j]);
 i++;
 j--;
 }
 }
 }
 }
 if(L < j)
 QuickSortRekursif(L, j, urutan1, urutan2);
 if(i < R)
 QuickSortRekursif(i, R, urutan1, urutan2);
}
void merge(struct data employees[], struct data temp[], int kiri, int tengah, int kanan, int
urutan1, int urutan2)
{
 int i, left_end, num_elements, tmp_pos;
 left_end = tengah - 1;
 tmp_pos = kiri;
 num_elements = kanan - kiri + 1;
 if(urutan2==1){
 if(urutan1==1){
 while ((kiri <= left_end) && (tengah <= kanan))
 {
 if (employees[kiri].nip <= employees[tengah].nip)
 {
 temp[tmp_pos] = employees[kiri];
 tmp_pos = tmp_pos + 1;
 kiri = kiri +1;
 }
 else
 {
 temp[tmp_pos] = employees[tengah];
 tmp_pos = tmp_pos + 1;
 tengah = tengah + 1;
 }
 }
 }
 else{
 while ((kiri <= left_end) && (tengah <= kanan))
 {
 if (employees[kiri].nip >= employees[tengah].nip)
 {
 temp[tmp_pos] = employees[kiri];
 tmp_pos = tmp_pos + 1;
 kiri = kiri +1;
 }
 else
 {
 temp[tmp_pos] = employees[tengah];
 tmp_pos = tmp_pos + 1;
 tengah = tengah + 1;
 }
 }
 }
 }
 else{
 if(urutan1==1){
 while ((kiri <= left_end) && (tengah <= kanan))
 {
 if (employees[kiri].nama[0] <= employees[tengah].nama[0])
 {
 temp[tmp_pos] = employees[kiri];
 tmp_pos = tmp_pos + 1;
 kiri = kiri +1;
 }
 else
 {
 temp[tmp_pos] = employees[tengah];
 tmp_pos = tmp_pos + 1;
 tengah = tengah + 1;
 }
 }
 }
 else{
 while ((kiri <= left_end) && (tengah <= kanan))
 {
 if (employees[kiri].nama[0] >= employees[tengah].nama[0])
 {
 temp[tmp_pos] = employees[kiri];
 tmp_pos = tmp_pos + 1;
 kiri = kiri +1;
 }
 else
 {
 temp[tmp_pos] = employees[tengah];
 tmp_pos = tmp_pos + 1;
 tengah = tengah + 1;
 }
 }
 }
 }
 while (kiri <= left_end)
 {
 temp[tmp_pos] = employees[kiri];
 kiri = kiri + 1;
 tmp_pos = tmp_pos + 1;
 }
 while (tengah <= kanan)
 {
 temp[tmp_pos] = employees[tengah];
 tengah = tengah + 1;
 tmp_pos = tmp_pos + 1;
 }
 for (i=0; i < num_elements; i++)
 {
 employees[kanan] = temp[kanan];
 kanan = kanan - 1;
 }
}
void m_sort(struct data employees[], struct data temp[], int kiri, int kanan, int urutan1, int
urutan2)
{
 int tengah;
 if (kanan > kiri)
 int tengah;
 if (kanan > kiri)
 {
 tengah = (kanan + kiri) / 2;
 m_sort(employees, temp, kiri, tengah, urutan1, urutan2);
 m_sort(employees, temp, tengah+1, kanan, urutan1, urutan2);
 merge(employees, temp, kiri, tengah+1, kanan, urutan1, urutan2);
 }
}
void mergeSort(struct data employees[], struct data temp[], int array_size, int urutan1, int
urutan2)
{
 m_sort(employees, temp, 0, array_size - 1, urutan1, urutan2);
}
void Tukar (struct data *a, struct data *b)
{
 struct data k;
 k = *a;
 *a = *b;
 *b = k;
}
void display(){
 printf("\n");
 for(int i=0; i<count; i++){
 printf("NIP\t\t: %d\n", employees[i].nip);
 printf("Nama\t\t: %s", employees[i].nama);
 printf("Alamat\t\t: %s", employees[i].alamat);
 printf("Gol. Darah\t: %c\n\n", employees[i].golongan);
 }
}
int main()
{
 int pil, urutan1, urutan2;
 do{
 puts("1. Input data");
 puts("2. Quick Sort Non Rekursif");
 puts("3. Quick Sort Rekursif");
 puts("4. Merge Sort");
 puts("5. Tampilkan data");
 puts("6. Keluar program");
 printf("Silahkan input pilihan : ");
 scanf("%d", &pil);
 if(pil==1)
 input();
 else if(pil==2){
 urutan1=menu1();
 urutan2=menu2();
 QuickSortNonRekursif(urutan1, urutan2);
 }
 else if(pil==3){
 urutan1=menu1();
 urutan2=menu2();
 QuickSortRekursif(0, count-1, urutan1, urutan2);
 }
 else if(pil==4){
 urutan1=menu1();
 urutan2=menu2();
Output
 mergeSort(employees, temp, count, urutan1, urutan2);
 }
 else if(pil==5)
 display();
 else if(pil!=6)
 puts("\nInput salah, masukkan angka antara 1-6\n");
 }while(pil!=6);
 return 0;
}
