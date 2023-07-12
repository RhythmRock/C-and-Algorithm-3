#include <stdio.h>
#include <time.h>

int main()
{
	printf("--------------------------------\n- P A R O L A -- S A L D I R I -\n- S  I  M  U  L  A  T  O  R  U -\n--------------------------------\n");
	/*Bu yöntem büsbütün doðru bir yöntem deðildir. Eðitim amaçlý hazýrlanmýþtýr.*/
	
	
	int sifreDB, sifre;
	
	do
	{
		printf("\nFacetagram\n");
		printf("Sifre Gir: ");
		scanf("%d", &sifreDB);
		
		if(sifreDB < 1000)
		{
			printf("\nHatali Giris\nLutfen Tekrar Deneyin.\n");
		}
	}
	while(sifreDB < 1000);
	
	struct timespec baslangic, bitis;
	clock_gettime(CLOCK_MONOTONIC, &baslangic);
	
	for(sifre = 1000; sifre <= 99999999999999; sifre++)
	{	
		if(sifre == sifreDB)
		{
			clock_gettime(CLOCK_MONOTONIC, &bitis);
			double toplamSure = (bitis.tv_sec - baslangic.tv_sec) + (bitis.tv_nsec - baslangic.tv_nsec) / 1e9;
			
			printf("\nSifre Cozuldu.\n");
			printf("\nCozulme Suresi: %.5f Saniye\n", toplamSure);
			
			break;
		}
	}
	
	return 0;
}
