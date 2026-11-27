#include <stdio.h>


//dizilerin max boyutu
#define MAX 100

//global değişkenler
int baglamDegisimi = 0;
int sonSurec = -1;

//***********************
//*Yardımcı fonksiyonlar*
//***********************


//verileri saklama sıfırlama fonksiyonu
void veriKopyala (int n, int orjinalNo[], int orjinalGelis[], int orjinalCpu[],int no[], int gelis[], int cpu[], int bitis[], int donus[],int bekleme[], int tamamlandi[], int kalanSure[])
{
int i;

for (i = 0; i < n; i++)
    {
//roundrobin için hazırlık
kalanSure[i] = orjinalCpu[i];

//rr gereklileri saklama
no[i] = orjinalNo[i];
gelis[i] = orjinalGelis[i];
cpu[i] = orjinalCpu[i];

//sifirlama
bitis[i] = donus[i] = bekleme[i] = tamamlandi[i] = 0;


    }

}


//gantt blogunu yazdirma fonksiyonu
void ganttPrintEyle(int surecId, int baslangic, int bitis, int sifirla)
{
static int blokSayaci = 0;

//sifirlama
    if(sifirla == 1)
{
    blokSayaci = 0;
    return;
}


//baglam? kontrolu
    if (surecId != -1 )
    {
        
        if(sonSurec != surecId && sonSurec != -1) 
        {
            baglamDegisimi++;
            
        }
        
sonSurec = surecId;
}





//print ve 6 blok max
    if (surecId == -1)
{
    printf("[BOS %d-%d] ", baslangic, bitis);
}
    else
    {
    printf("[P%d %d-%d] ", surecId, baslangic, bitis);
    }


blokSayaci++;
    if (blokSayaci % 6 == 0)
{
    printf("\n");
}

}

//ortalama değer hesaplama fonksiyonu
void ortalamalar(int donus[MAX], int bekleme[MAX], int n, float *ortalamaBekleme, float *ortalamaDonus)
{
int i;
float toplamBekleme = 0;
float toplamDonus = 0;

for (i=0; i < n; i++){
    toplamBekleme = toplamBekleme + bekleme[i];
    toplamDonus = toplamDonus + donus[i];
}

*ortalamaBekleme = toplamBekleme / n;
*ortalamaDonus = toplamDonus / n;


}

//tablolari yazdirma fonksiyonu
void tabloYazdir (int n, int no[], int gelis[], int cpu[],int bitis[], int donus[], int bekleme[], float ortalamaBekleme, float ortalamaDonus)
{
int i;
puts(" Surec | Gelis |  CPU  | Bitis | Donus |Bekleme");
for (i = 0; i < n; i++){
    printf("  P%-2d  |  %3d  |  %3d  |  %3d  |  %3d  |  %3d\n", no[i], gelis[i], cpu[i], bitis[i], donus[i], bekleme[i]);
}

printf("Ortalama Bekleme: %.2f\n", ortalamaBekleme);
printf("Ortalama Donus: %.2f\n", ortalamaDonus);
printf("Baglam Degisimi: %d\n", baglamDegisimi);

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