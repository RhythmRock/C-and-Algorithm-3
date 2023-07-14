#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("---------------------------------\n- L O W E R -  T O  - U P P E R -\n-   P   R   O   G   R   A   M   -\n---------------------------------\n");
	
	char metin[500];
	int i, secim, karakter = 0;
	int yeniKelime = 1;
	
	printf("Metin Gir: ");
	fgets(metin, sizeof(metin), stdin);
	
	do
	{
		printf("\nSecim Gir (1- Hepsi Buyuk, 2- Ilk Harfler Buyuk): ");
		scanf("%d",&secim);
		
		if(secim < 1 || secim > 2)
		{
			printf("Gecersiz Secim \n");
		}
	}
	while(secim < 1 || secim > 2);
	
	if(secim == 1)
	{
		for (i = 0; metin[i + 1] != '\0'; i++)
		{
			if (isalpha(metin[i]))
			{
				karakter++;
			
				if(metin[i] >= 'a' && metin[i] <= 'z')
				{
					metin[i] = toupper(metin[i]);
				}
			}
		}
	}
	
	else
	{
		for (i = 0; metin[i + 1] != '\0'; i++)
		{
			if(metin[i] == ' ')
			{
				yeniKelime = 1;
			}
			
			else if(isalpha(metin[i]))
			{
				karakter++;
				
				if(yeniKelime == 0)
				{
					metin[i] = tolower(metin[i]);
				}
				
				else
				{
					metin[i] = toupper(metin[i]);
					yeniKelime = 0;
				}
			}
		}
	}
	
	if(karakter == 0)
	{
		printf("Metin Olusturulamadi");
	}
	
	else
	{
		printf("Yeni Metin: %s", metin);
	}
	
	return 0;
}
