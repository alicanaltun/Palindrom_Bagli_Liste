#include <stdio.h>
#include <stdlib.h>

typedef struct dugum {
    int veri;
    struct dugum *sonraki;
} Dugum;
// Tek bagli listenin yapisi olusturulur.

Dugum *dugum_ekle(int veri) {
    Dugum *dugum = (Dugum*)malloc(sizeof(Dugum));
    dugum->veri = veri;
    dugum->sonraki = NULL;
    return dugum;
}
// Yeni dugum ekleme ve bu dugume veri girisi icin fonksiyon olusturulur.

int palindrom_mu(Dugum *ilk) {
    Dugum *sonraki = NULL, *onceki = NULL;
    Dugum *hizli = ilk, *yavas = ilk;

    if (ilk == NULL || ilk->sonraki == NULL) {
        return 1;
    }
// Tek bagli liste bos veya tek eleman iceriyorsa dogru kabul edilir.

    while (hizli != NULL && hizli->sonraki != NULL) {
        hizli = hizli->sonraki->sonraki;
        sonraki = yavas->sonraki;
        yavas->sonraki = onceki;
        onceki = yavas;
        yavas = sonraki;
    }
// Listenin orta noktasi bulunarak, listenin sol tarafi ters cevrilir.

    if (hizli != NULL) {
		yavas= yavas->sonraki;
	}
// Listenin eleman sayisi tek ise ortadaki eleman atlanir.
	
	while(onceki != NULL){
		if(onceki->veri != yavas->veri){
			return 0;
		}
		onceki = onceki->sonraki;
		yavas = yavas->sonraki;
	}
	return 1;
// Listenin sol ve sag kismi karsilastirilir. Fonksiyonun donus degeri belirlenir.
}


int main(int argc, char *argv[]) {
	Dugum *ilk = dugum_ekle(6);
	ilk->sonraki = dugum_ekle(5);
	ilk->sonraki->sonraki = dugum_ekle(4);
	ilk->sonraki->sonraki->sonraki = dugum_ekle(5);
	ilk->sonraki->sonraki->sonraki->sonraki = dugum_ekle(6);
// Ornek liste olusturulur.

	if(palindrom_mu(ilk) == 1){
		printf("Girilen liste palindromdur.");
	}
	else{
		printf("Girilen liste palindrom degildir.");
	}
// "palindrom_mu" fonksiyonundan gelen deger ile sonuc ekrana yazdirilir.
	return 0;
}