#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Þifre Güvenlik Testi

int main()
{
	char sifre[25];
	
	int i, uzunluk, karmasiklik;
	int sayisal = 0, kucukHarf = 0, buyukHarf = 0, sembol = 0;
	
	printf("Sifreni Gir: ");
	fgets(sifre, sizeof(sifre), stdin);
	uzunluk = strlen(sifre) - 1;
	
	for (i = 0; i < uzunluk; i++)
	{
		if(isdigit(sifre[i]))
		{
			sayisal = 1;
		}
		
		else if(islower(sifre[i]))
		{
			kucukHarf = 1;
		}
		
		else if(isupper(sifre[i]))
		{
			buyukHarf = 1;
		}
		
		else
		{
			sembol = 1;
		}
	}
	
	karmasiklik = sayisal + kucukHarf + buyukHarf + sembol;
	
	printf("\n");
	printf(" Sifre Guvenligi: ");
	
	if (karmasiklik == 1)
	{
		printf("Tehlikeli \n Tahmini Sifre Kirilma Suresi: Aninda");
	}
	
	else if (karmasiklik == 2)
	{
		if (uzunluk < 14)
		{
			printf("Tehlikeli \n Tahmini Sifre Kirilma Suresi: Aninda");
		}
		
		else
		{
			printf("Dusuk \n Tahmini Sifre Kirilma Suresi: 1 Hafta");
		}
	}
	
	else if (karmasiklik == 3)
	{
		if (uzunluk < 11)
		{
			printf("Tehlikeli \n Tahmini Sifre Kirilma Suresi: Aninda");
		}
		
		else if(uzunluk >= 11 && uzunluk < 16)
		{
			printf("Dusuk \n Tahmini Sifre Kirilma Suresi: 1 Hafta");
		}
		
		else
		{
			printf("Orta \n Tahmini Sifre Kirilma Suresi: 1 Ay");
		}
	}
	
	else
	{
		if (uzunluk < 10)
		{
			printf("Tehlikeli \n Tahmini Sifre Kirilma Suresi: Aninda");			
		}
		
		else if (uzunluk >= 10 && uzunluk < 14)
		{
			printf("Dusuk \n Tahmini Sifre Kirilma Suresi: 1 Hafta");
		}
		
		else if (uzunluk >= 14 && uzunluk < 18)
		{
			printf("Orta \n Tahmini Sifre Kirilma Suresi: 1 Ay");
		}
		
		else
		{
			printf("Yuksek \n Tahmini Sifre Kirilma Suresi: Asla");
		}
	}
	
	printf("\n");
	printf("\n Buyuk Harf: %d\t Kucuk Harf: %d\n Sayi: %d\t Sembol: %d", buyukHarf, kucukHarf, sayisal, sembol);
	printf("\n Uzunluk: %d", uzunluk);
	
	printf("\n");
	printf("\n Tavsiyeler: ");
	
	if(uzunluk < 14)
	{
		printf("\n Sifrenin Uzunlugunu Arttir.");
	}
	
	if(sayisal == 0)
	{
		printf("\n Sifreye Rakamlar Ekle.");
	}
	
	if(kucukHarf == 0)
	{
		printf("\n Sifreye Kucuk Harfler Ekle.");
	}
	
	if(buyukHarf == 0)
	{
		printf("\n Sifreye Buyuk Harfler Ekle.");
	}
	
	if(sembol == 0)
	{
		printf("\n Sifreye Semboller Ekle.");
	}
	
	printf("\n");
	
	return 0;
}
