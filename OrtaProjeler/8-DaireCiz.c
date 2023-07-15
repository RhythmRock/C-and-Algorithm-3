#include <stdio.h>

void cemberCiz(int yariCap) 
{
    int x, y;
    
    for (y = -yariCap; y <= yariCap; y++) 
	{
        for (x = -yariCap; x <= yariCap; x++) 
		{
            if (sqrt(x * x + y * y) <= yariCap) 
			{
                printf("1 ");
            } 
            
			else 
			{
                printf("  ");
            }
        }
        
        printf("\n");
    }
}

int main() 
{
    int i , daireSayisi, yariCap;
    
    printf("Daire Sayisi Gir: ");
    scanf("%d",&daireSayisi);

    for (i = 0; i < daireSayisi; i++) 
	{
        printf("Daire %d'in yaricapini girin: ", i + 1);
        scanf("%d", &yariCap);
        printf("\n");

        cemberCiz(yariCap);
        printf("\n");
    }

    return 0;
}

