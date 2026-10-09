# C Dili Para Üstü Hesaplama Ödevi

Bu proje, bir alışveriş sonrasında verilecek para üstünü en az sayıda banknot ve madeni para (küpür) kullanarak hesaplayan C kodudur.

## Ödev Hakkında
- Kullanıcıdan **Ürün Tutarı** ve **Ödenen Para** değerlerini alır.
- Ondalıklı sayılarda (float) oluşan 1 kuruşluk kayma hatalarını engellemek için tutarlar `round()` fonksiyonu ile kuruşa çevrilerek `int` türünde hesaplanmıştır.
- `if-else` veya döngü (`for/while`) kullanılmamıştır.
- Hesaplamalar tamamen `/` (bölme) ve `%` (mod) matematiksel operatörleri ile yapılmıştır.

## Kullanılan Araçlar
- **Dev-C++:** Kodun yazılması ve test edilmesi için kullanıldı.

## Örnek Çalışma Ekranı
```text
Urun tutarini giriniz (TL): 197.88
Odenen parayi giriniz (TL): 269.92

Verilecek Para Ustu Detayi:
0 adet 200 TL
0 adet 100 TL
1 adet 50 TL
1 adet 20 TL
0 adet 10 TL
0 adet 5 TL
2 adet 1 TL
0 adet 50 Kurus
0 adet 25 Kurus
0 adet 10 Kurus
0 adet 5 Kurus
4 adet 1 Kurus

Toplam kupur sayisi: 8
