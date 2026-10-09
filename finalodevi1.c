#include <stdio.h>
#include <math.h>

int main() {
    float tutar, odenen;
    
    // Urun tutari ve odenen para aliniyor
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &tutar);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen);
    
    // Hassasiyet kaybini onlemek icin kurusa cevirip yuvarliyoruz
    int para_ustu = (int)round((odenen - tutar) * 100);
    int adet;
    int toplam_kupur = 0;
    
    printf("\nVerilecek Para Ustu Detayi:\n");
    
    // 200 TL (20000 kurus)
    adet = para_ustu / 20000;
    para_ustu = para_ustu % 20000;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 200 TL\n", adet);
    
    // 100 TL (10000 kurus)
    adet = para_ustu / 10000;
    para_ustu = para_ustu % 10000;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 100 TL\n", adet);
    
    // 50 TL (5000 kurus)
    adet = para_ustu / 5000;
    para_ustu = para_ustu % 5000;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 50 TL\n", adet);
    
    // 20 TL (2000 kurus)
    adet = para_ustu / 2000;
    para_ustu = para_ustu % 2000;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 20 TL\n", adet);
    
    // 10 TL (1000 kurus)
    adet = para_ustu / 1000;
    para_ustu = para_ustu % 1000;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 10 TL\n", adet);
    
    // 5 TL (500 kurus)
    adet = para_ustu / 500;
    para_ustu = para_ustu % 500;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 5 TL\n", adet);
    
    // 1 TL (100 kurus)
    adet = para_ustu / 100;
    para_ustu = para_ustu % 100;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 1 TL\n", adet);
    
    // 50 Kurus
    adet = para_ustu / 50;
    para_ustu = para_ustu % 50;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 50 Kurus\n", adet);
    
    // 25 Kurus
    adet = para_ustu / 25;
    para_ustu = para_ustu % 25;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 25 Kurus\n", adet);
    
    // 10 Kurus
    adet = para_ustu / 10;
    para_ustu = para_ustu % 10;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 10 Kurus\n", adet);
    
    // 5 Kurus
    adet = para_ustu / 5;
    para_ustu = para_ustu % 5;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 5 Kurus\n", adet);
    
    // 1 Kurus
    adet = para_ustu / 1;
    para_ustu = para_ustu % 1;
    toplam_kupur = toplam_kupur + adet;
    printf("%d adet 1 Kurus\n", adet);
    
    // Toplam kupur sayisi
    printf("\nToplam kupur sayisi: %d\n", toplam_kupur);
    
    return 0;
}
