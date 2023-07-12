#include <stdio.h>
#include <ctype.h>

int main()
{   
    int karakter = 0, bosluk = 0, rakam = 0, kelime = 0;
    int harf, i, yeniKelime = 1;
    
    char metin[100];
	
    printf("-----------------------------------------------\n");
    printf("- K A R A K T E R - K E L I M E - S A Y A C I -\n");
    printf("-----------------------------------------------\n");
	
    printf("Metin Gir: ");
    fgets(metin, sizeof(metin), stdin);

    for (i = 0; metin[i + 1] != '\0'; i++)
    {
        karakter++;
        
        if (metin[i] == ' ')
        {
        	bosluk++;
        	yeniKelime = 1;
		}
		
		else if (isalpha(metin[i]) && yeniKelime == 1)
		{
			kelime++;
			yeniKelime = 0;
		}
		
		else if (isdigit(metin[i]))
		{
			rakam++;
		}
    }
    
    harf = karakter - bosluk - rakam;
	bosluk = karakter - bosluk;
	
	if(karakter != 0)
	{
		printf("Toplam Karakter Sayisi: %d\n", karakter);
		
		if(bosluk != karakter)
		{
			printf("Bosluksuz Karakter Sayisi: %d\n", bosluk);
		}
		
		if (harf > 0 && harf != bosluk)
		{
			printf("Toplam Harf Sayisi: %d\n", harf);
		}
			
		if (rakam > 0 && rakam != bosluk)
		{
			printf("Metindeki Rakam Sayisi: %d\n", rakam);
		}
		
		if (kelime > 1)
		{
			printf("Metindeki Kelime Sayisi: %d\n", kelime);
		}
	}
	
	else
	{
		printf("(METIN YOK)\n");
	}
	
    return 0;
}
