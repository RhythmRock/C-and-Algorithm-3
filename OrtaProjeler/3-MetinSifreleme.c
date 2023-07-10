#include <stdio.h>
#include <string.h>

// Metin Sifreleme ve Sifreli Metni Cozumleme

int main()
{
    char metin[500];
    int i, secim = 0;

    do
    {
        do
        {
            printf("1- Metin Sifrele\n2- Sifre Cozumle \nSecim Gir: ");
            scanf("%d", &secim);
        } 
		while(secim < 0 || secim > 2);
        
        printf("\n");
        getchar();
		
		if(secim != 0)
		{
			printf("Metin Gir: ");
      		fgets(metin, sizeof(metin), stdin);
        	metin[strcspn(metin, "\n")] = '\0';

        	if(secim == 1)
        	{
            	for(i = 0; i < strlen(metin); i++)
            	{
                	metin[i]++;
            	}
        	}
        	
       		else
        	{
            	for(i = 0; i < strlen(metin); i++)
            	{
             	 	metin[i]--;
           	 	}
        	}
        	
        	printf("Yeni Metin: %s\n", metin);
        	printf("\n");
		}

    } while (secim != 0);
	
	printf("\nCikis Yapildi\n");
	
    return 0;
}

