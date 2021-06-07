/* Praktikum 8 No.02 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX 10
int value[MAX];
int value_semula[MAX];
int count;
int main()
{
 int choose;
 do{
 choose = menu();
 pilihan_menu(choose);
 } while(choose!=6);
}
int menu()
{
 int choose_menu;
 puts("");
 puts("Menu Pilihan");
 puts("1. Random Number");
 puts("2. Kembalikan Value");
 puts("3. Bubble Sort");
 puts("4. Shell Sort");
 puts("5. Tampilkan Hasil");
 puts("6. Keluar");
 printf("Pilih salah satu : ");
 scanf("%d", &choose_menu);
 puts("");
 return choose_menu;
}
void pilihan_menu(int pil_menu)
{
 if(pil_menu==1){
 random_value();
 }
 else if(pil_menu==2){
 resetValue();
 }
 else if(pil_menu==3){
 count = 0;Bubble();
 printf("\nBanyak iterasi : %d", count);
 puts("");
 }
 else if(pil_menu==4){
 count = 0;
 Shell();
 printf("\nBanyak iterasi : %d", count);
 puts("");
 }
 else if(pil_menu==5){
 tampil();
 }
}
void random_value()
{
 int i;
 srand(time(0));
 for(i=0; i<MAX; i++){
 value[i] = (rand()%100)+1;
 }
 for(i=0; i<MAX; i++){
 value_semula[i] = value [i];
 }
}
void resetValue()
{
 int i;
 for(i=0; i<MAX; i++){
 value[i] = value_semula[i];
 }
}
void tampil()
{
 int i;
 for(i=0; i<10; i++){
 printf("%d ", value[i]);
 }
 puts("");
}
void Tukar(int *a, int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
void Bubble()
{
 int i, j;
 puts("");
 for(i=0; i<MAX-1; i++)
 for(j=MAX-1; j>=i; j--){
 if(value[j-1]>value[j])
 Tukar(&value[j-1], &value[j]);
 tampil();
 count++;
 }
}
void Shell()
{
 int jarak, i, j;
 bool sudah;
 jarak = MAX;
 while(jarak>1){
 jarak = jarak/2;
 sudah = false;
 while(!sudah){
 sudah = true;
 for(j=0; j<MAX-jarak; j++){
 i = j+ jarak;
 if(value[j]>value[i]){
 Tukar(&value[j], &value[i]);
 sudah = false;
 count++;
 tampil();
 }
 }
 }
 }
}
