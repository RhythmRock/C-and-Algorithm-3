#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	
void sifreuretici(int uzunluk, int zorluk)
{
	char sifre[uzunluk + 1];
	int min, max, i;
	
	if (zorluk == 1)
	{
		//Saderce Sayý
		min = 48;
		max = 57;
	}
	
	else if (zorluk == 2)
	{
		//Sayilar ve Harfler
		min = 65;
		max = 122;
	}
	
	else
	{
		//Tüm Karakterler
		min = 33;
		max = 126;
	}
	
	for (i = 0; i < uzunluk; i++)
	{
		sifre[i] = rand() % (max - min + 1) + min;
		printf("%c",sifre[i]);
	}
	
	sifre[uzunluk] = '\0';
}

int main()
{
	int uzunluk, zorluk;
	
	do
	{
		printf("Istenilen Uzunlugu Gir: ");
		scanf("%d", &uzunluk);
		
		if(uzunluk < 5)
		{
			printf("Cok Kisa \n");
		}
		
		else if(uzunluk > 50)
		{
			printf("Cok Uzun \n");
		}
	}
	while(uzunluk < 5 || uzunluk > 50);
	
	do
	{
		printf("Sifre Turleri: \n");
		printf("1- Sadece Sayisal (Ornek: 12345) \n");
		printf("2- Sayisal ve Harfler (Ornek: 12345abcde) \n");
		printf("3- Tum Karakterler Dahil (Ornek: 12345abdce!^+%&) \n");
		printf("Sifre Turu Sec: ");
		scanf("%d",&zorluk);
		
		if(zorluk < 1 || zorluk > 3)
		{
			printf("Gecersiz Secim \n");
		}
	}
	while(zorluk < 1 || zorluk > 3);
	
	srand(time(NULL));
	sifreuretici(uzunluk, zorluk);
	
	return 0;
}
