#include <stdio.h>
#include <ctype.h>

int main()
{
    int karakter = 0, bosluk = 0, kelime = 0, sesliHarf = 0, rakam = 0, yeniKelime = 1;
    
    /*
    BOSLUK, SESLÝ HARFLER, SESSÝZ HARFLER, SAYILAR, SEMBOLLER
    
    IF 		BOSLUK == ' '
    ELSE IF isdigit(SAYILAR)
    ELSE IF isalpha(HARFLER)
    ELSE 	SEMBOLLER
    
    */
    
    char metin[100];
    char sesliHarfler[8] = {'a', 'e', 'ý', 'i', 'o', 'ö', 'u', 'ü'};
	
    printf("-----------------------------------------------\n");
    printf("- K A R A K T E R - K E L I M E - S A Y A C I -\n");
    printf("-----------------------------------------------\n");
	
    printf("Metin Gir: ");
    fgets(metin, sizeof(metin), stdin);

    for (int i = 0; metin[i] != '\0'; i++)
    {
        karakter++;
    	
        if (metin[i] != ' ')
        {
            if (isdigit(metin[i]))
            {
                rakam++;
            }
            else if (isalpha(metin[i]))
            {
                for (int j = 0; j < 8; j++)
                {
                    if (tolower(metin[i]) == sesliHarfler[j])
                    {
                        sesliHarf++;
                        break;
                    }
                }
            }
			
            if (yeniKelime == 1)
            {
                kelime++;
                yeniKelime = 0;
            }
        }
        else
        {
            bosluk++;
            yeniKelime = 1;
        }
    }
	
    printf("Toplam Karakter Sayisi: %d\n", karakter);
    printf("Bosluksuz Karakter Sayisi: %d\n", karakter - bosluk);
    printf("Kelime Sayisi: %d\n", kelime);
    printf("Sesli Harf Sayisi: %d\n", sesliHarf);
    printf("Sessiz Harf Sayisi: %d\n", (karakter - bosluk) - sesliHarf - rakam);
	
    return 0;
}

