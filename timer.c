#include <stdio.h>


//dizilerin max boyutu
#define MAX 100

//global değişkenler
int baglam_degisimi = 0;
int son_surec = -1;

//***********************
//*Yardımcı fonksiyonlar*
//***********************


//verileri saklama sıfırlama fonksiyonu
void veriKopyala (int n, int orjinalNo[], int orjinalGelis[], int orjinalCpu[],int no[], int gelis[], int cpu[], int bitis[], int donus[],int bekleme[], int tamamlandi[], int kalanSure[])
{
int i;

for (i = 0; i < n; i++)
    {
//roundrobin
kalanSure[i] = orjinalCpu[i];

//rr saklama
no[i] = orjinalNo[i];
gelis[i] = orjinalGelis[i];
cpu[i] = orjinalCpu[i];

//sifirlama
bitis[i] = donus[i] = bekleme[i] = tamamlandi[i] = 0;


    }

}




















//***************
//*Ana Fonksiyon*
//***************
int main (void)
{
    
//orjinal diziler
    int orjinalNo[MAX], orjinalGelis[MAX], orjinalCpu[MAX];
    
//islem dizileri
    int no[MAX], gelis[MAX], cpu[MAX], bitis[MAX], donus[MAX], bekleme[MAX], tamamlandi[MAX], kalanSure[MAX];
    
    
    
    
    
    


    return 0 ;
}