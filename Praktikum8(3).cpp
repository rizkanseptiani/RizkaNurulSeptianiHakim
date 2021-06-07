/* Praktikum 8 No.03 */
/* Rizka Nurul Septiani Hakim 20051397026 MI 2020B */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
struct data {
 int nip;
 char nama[100];
 char alamat[100];
 char gol;
}pegawai[MAX];
int count=0;
void Straight()
{
 int pilih1, pilih2;
 int i,j;
 struct data temp;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan Nama");
 printf("Pilihan : ");
 scanf("%d", &pilih2);
 puts("");
 switch(pilih2){
 case 1:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 j=i-1;
 while(temp.nip < pegawai[j].nip && j>=0){
 pegawai[j+1]=pegawai[j];
 j--;
 }
 pegawai[j+1]=temp;
 }
 break;
 case 2:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 j=i-1;
 while(temp.nip > pegawai[j].nip && j>=0){
 pegawai[j+1]=pegawai[j];
 j--;
 }
 pegawai[j+1]=temp;
 }
 break;
 }
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 j=i-1;
 while(temp.nama[0] < pegawai[j].nama[0] && j>=0){
 pegawai[j+1]=pegawai[j];
 j--;
 }
 pegawai[j+1]=temp;
 }
 break;
 case 2:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 j=i-1;
 while(temp.nama[0] > pegawai[j].nama[0] && j>=0){
 pegawai[j+1]=pegawai[j];
 j--;
 }
 pegawai[j+1]=temp;
 }
 break;
 }
 break;
 }
}
void Binary()
{
 int pilih1, pilih2;
 struct data temp;
 int i,l,r,m,j;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan Nama");
 printf("Pilihan : ");
 scanf("%d", &pilih2);
 puts("");
 switch(pilih2){
 case 1:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 l=0;
 r=i-1;
 while(l<=r){
 m=(l+r)/2;
 if(temp.nip < pegawai[m].nip)
 r=m-1;
 else
 l=m+1;
 }
 for(j=i-1;j>=l;j--)
 pegawai[j+1]=pegawai[j];
 pegawai[l]=temp;
 }
 break;
 case 2:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 l=0;
 r=i-1;
 while(l<=r){
 m=(l+r)/2;
 if(temp.nip > pegawai[m].nip)
 r=m-1;
 else
 l=m+1;
 }
 for(j=i-1;j>=l;j--)
 pegawai[j+1]=pegawai[j];
 pegawai[l]=temp;
 }
 break;
 }
 }
 break;
 case 2:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 l=0;
 r=i-1;
 while(l<=r){
 m=(l+r)/2;
 if(temp.nip > pegawai[m].nip)
 r=m-1;
 else
 l=m+1;
 }
 for(j=i-1;j>=l;j--)
 pegawai[j+1]=pegawai[j];
 pegawai[l]=temp;
 }
 break;
 }
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 l=0;
 r=i-1;
 while(l<=r){
 m=(l+r)/2;
 if(temp.nama[0] < pegawai[m].nama[0])
 r=m-1;
 else
 l=m+1;
 }
 for(j=i-1;j>=l;j--)
 pegawai[j+1]=pegawai[j];
 pegawai[l]=temp;
 }
 break;
 case 2:
 for(i=1;i<count;i++){
 temp=pegawai[i];
 l=0;
 r=i-1;
 while(l<=r){
 m=(l+r)/2;
 if(temp.nama[0] > pegawai[m].nama[0])
 r=m-1;
 else
 l=m+1;
 }
 for(j=i-1;j>=l;j--)
 pegawai[j+1]=pegawai[j];
 pegawai[l]=temp;
 }
 break;
 }
 break;
 }
}
void Selection()
{
 int pilih1, pilih2;
 int i,j,k;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan Nama");
 printf("Pilihan : ");
 scanf("%d", &pilih2);
 puts("");
 switch(pilih2){
 case 1:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=0;i<count-1;i++){
 k=i;
 for(j=i+1;j<count;j++){
 if(pegawai[j].nip < pegawai[k].nip )
 k=j;
 }
 if(k!=i)
 tukar(i, k);
 }
 break;
 case 2:
 for(i=0;i<count-1;i++){
 k=i;
 for(j=i+1;j<count;j++){
 if(pegawai[j].nip > pegawai[k].nip)
 k=j;
 }
 if(k!=i)
 tukar(i, k);
 }
 break;
 }
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=0;i<count-1;i++){
 k=i;
 for(j=i+1;j<count;j++){
 if(pegawai[j].nama[0] < pegawai[k].nama[0])
 k=j;
 }
 if(k!=i)
 tukar(i, k);
 }
 break;
 case 2:
 for(i=0;i<count-1;i++){
 k=i;
 for(j=i+1;j<count;j++){
 if(pegawai[j].nama[0] > pegawai[k].nama[0])
 k=j;
 }
 if(k!=i)
 tukar(i, k);
 }
 break;
 }
 break;
 }
}
void tukar(int i, int k){
 struct data temp;
 temp=pegawai[i];
 pegawai[i]=pegawai[k];
 pegawai[k]=temp;
}
void Bubble()
{
 int pilih1, pilih2;
 int i,j,m,n;
 struct data temp;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan Nama");
 printf("Pilihan : ");
 scanf("%d", &pilih2);
 puts("");
 switch(pilih2){
 case 1:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1; i<count; i++){
 for(j=count-1; j>=i; j--) {
 if(pegawai[j-1].nip > pegawai[j].nip){
 tukar(j-1,j);
 }
 }
 }
 break;
 case 2:
 for(i=1; i<count; i++) {
 for(j=count-1; j>=i; j--) {
 if(pegawai[j-1].nip < pegawai[j].nip){
 tukar(j-1,j);
 }
 }
 }
 break;
 }
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 for(i=1; i<count; i++){
 for(j=count-1; j>=i; j--) {
 if(pegawai[j-1].nama[0] > pegawai[j].nama[0]){
 tukar(j-1,j);
 }
 }
 }
 break;
 case 2:
 for(j=count-1; j>=i; j--) {
 if(pegawai[j-1].nama[0] < pegawai[j].nama[0]){
 tukar(j-1,j);
 }
 }
 }
 break;
 }
 break;
 }
}
void Shell()
{
 int pilih1, pilih2;
 int i,j,Jarak;
 bool Sudah;
 Jarak = count;
 struct data temp;
 puts("Pengurutan : ");
 puts("1. Pengurutan berdasarkan NIP");
 puts("2. Pengurutan berdasarkan Nama");
 printf("Pilihan : ");
 scanf("%d", &pilih2);
 puts("");
 switch(pilih2){
 case 1:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 while(Jarak > 1) {
 Jarak = Jarak / 2;
 Sudah = false;
 while(!Sudah) {
 Sudah = true;
 for(j=0; j<count-Jarak; j++) {
 i = j + Jarak;
 if(pegawai[j].nip > pegawai[i].nip) {
 tukar(j,i);
 Sudah = false;
 }
 }
 }
 }
 break;
 case 2:
 while(Jarak > 1) {
 Jarak = Jarak / 2;
 Sudah = false;
 while(!Sudah) {
 Sudah = true;
 for(j=0; j<count-Jarak; j++) {
 i = j + Jarak;
 if(pegawai[j].nip < pegawai[i].nip) {
 tukar(j,i);
 Sudah = false;
 }
 }
 }
 }
 break;
 }
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Pengurutan Naik");
 puts("2. Pengurutan Turun");
 printf("Pilihan : ");
 scanf("%d", &pilih1);
 puts("");
 switch(pilih1){
 case 1:
 while(Jarak > 1) {
 Jarak = Jarak / 2;
 Sudah = false;
 while(!Sudah) {
 Sudah = true;
 for(j=0; j<count-Jarak; j++) {
 i = j + Jarak;
 if(pegawai[j].nama[0] > pegawai[i].nama[0]) {
 tukar(j,i);
 Sudah = false;
 }
 }
 }
 }
 break;
 case 2:
 while(Jarak > 1) {
 Jarak = Jarak / 2;
 Sudah = false;
 while(!Sudah) {
 Sudah = true;
 for(j=0; j<count-Jarak; j++) {
 i = j + Jarak;
 if(pegawai[j].nama[0] < pegawai[i].nama[0]) {
 tukar(j,i);
 Sudah = false;
 }
 }
 }
 }
 break;
 }
 break;
 }
}
void input(){
 printf("NIP: ");
 scanf("%d", &pegawai[count].nip);
 fflush(stdin);
 printf("Nama: ");
 fgets(pegawai[count].nama, sizeof pegawai[count].nama,stdin);
 printf("Alamat : ");
 fgets(pegawai[count].alamat, sizeof pegawai[count].alamat,stdin);
 printf("Golongan : ");
 scanf("%c", &pegawai[count].gol);
 fflush(stdin);
 count++;
 puts("");
}
void tampil(){
 int i;
 for(i=0; i<count; i++){
 printf("NIP\t: %d\n", pegawai[i].nip);
 printf("Nama\t: %s", pegawai[i].nama);
 printf("Alamat\t: %s", pegawai[i].alamat);
 printf("Golongan : %c", pegawai[i].gol);
 puts("");
 puts("");
 }
}
int main()
{
 int jawab, jwb;
 while(1){
 puts("Menu Pilihan");
 puts("1. Masukkan Data");
 puts("2. Pengurutan Data");
 puts("3. Keluar");
 printf("Pilihan : ");
 scanf("%d", &jwb);
 puts("");
 switch(jwb){
 case 1:
 input();
 break;
 case 2:
 puts("Pengurutan : ");
 puts("1. Straight Insertion Sort");
 puts("2. Binary Insertion Sort");
 puts("3. Selection Sort");
 puts("4. Bubble Sort");
 puts("5. Shell Sort");
 printf("Pilihan : ");
 scanf("%d", &jawab);
 puts("");
 switch(jawab){
 case 1:
 Straight();
 tampil();
 break;
 case 2:
 Binary();
 tampil();
 break;
 case 3:
 Selection();
 tampil();
 break;
 case 4:
 Bubble();
 tampil();
 break;
 case 5:
 Shell();
Output
 tampil();
 break;
 }
 break;
 case 3:
 return 0;
 break;
 }
 }
}
