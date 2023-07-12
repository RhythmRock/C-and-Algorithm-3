#include <stdio.h>

int main()
{
	printf("---------------------------------------\n- L O R E M - I M P S U M - M A K E R -\n---------------------------------------\n");
	
	int i, input, kelime = 0, karakter = 0;
	int yeniKelime = 1;
	char lorem[3385] = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum id varius turpis. Vivamus eros odio, aliquet ac elementum id, eleifend id quam. Curabitur scelerisque tristique placerat. Curabitur fermentum malesuada risus vel varius. Aenean nec molestie dui, id rutrum nibh. Duis sodales convallis libero, eu porttitor tellus condimentum varius. Nullam in eleifend tortor. Nullam dictum dolor nec tempus vulputate. Sed volutpat lectus mauris. Duis hendrerit ipsum nec pellentesque varius. Ut in feugiat magna. Suspendisse semper risus ipsum, id tempor leo ultrices at. Suspendisse diam ex, elementum vel interdum et, imperdiet ut libero. Donec ac sapien ante. Morbi ut fermentum purus, vitae porttitor velit. Proin cursus neque nunc, sed blandit ex dictum in. Praesent augue lorem, vehicula a ligula a, molestie feugiat turpis. Sed bibendum lacinia efficitur. Mauris at neque nibh. Sed efficitur ornare nisi nec condimentum. Proin placerat lacus quis arcu ornare pulvinar. Sed dignissim arcu vel mi sagittis, a viverra nulla dictum. Proin accumsan vitae quam non faucibus. Mauris sollicitudin ultrices diam, quis consectetur purus consequat imperdiet. Nulla vel massa elementum, tincidunt odio eget, auctor nibh. Donec dictum auctor placerat. Cras ultricies enim sed placerat fringilla. Sed nec tortor nisl. Ut non nunc vitae libero eleifend semper vel in risus. Proin lectus tellus, dapibus non turpis quis, pretium malesuada purus. Nullam nibh ipsum, fringilla sit amet viverra sed, condimentum quis nibh. Sed sit amet magna a elit hendrerit blandit id at eros. Mauris elit sem, luctus non enim eu, tempor consectetur lacus. Ut suscipit lectus sit amet risus convallis pharetra. Suspendisse tempus sodales rutrum. Pellentesque elit arcu, rhoncus aliquam leo eu, pellentesque scelerisque urna. Donec mollis dui dolor, non congue mauris dignissim sit amet. Aenean semper ultrices lectus, quis pellentesque justo maximus id. Sed malesuada neque sem, at malesuada mi finibus ac. Proin venenatis porttitor mollis. Morbi ut sodales nisl, vitae eleifend lectus. Integer suscipit enim ut eros fringilla fermentum. Phasellus id turpis vel odio tincidunt vulputate. Suspendisse ut magna ut velit facilisis rhoncus. Morbi ut risus dignissim, lacinia ante a, rutrum ipsum. Proin nec convallis metus, in sodales velit. In ultrices urna vel elit lacinia, eu scelerisque lorem pretium. Aliquam viverra metus dolor, vitae bibendum augue vulputate at. Sed fermentum arcu at dictum maximus. Morbi leo ante, imperdiet vitae dictum vitae, feugiat sit amet mi. Vivamus et maximus sem. Proin aliquam feugiat odio, non convallis mi consequat quis. Aenean hendrerit vitae urna ac consectetur. Phasellus in nisl eget diam luctus consectetur. Aliquam mollis elit quis blandit sagittis. Fusce egestas volutpat nisi. Quisque iaculis erat in mi condimentum, eu volutpat massa maximus. Cras placerat, nunc sed rutrum suscipit, purus nulla feugiat ex, nec placerat nibh nulla ornare orci. Nunc tincidunt magna nibh, nec scelerisque elit faucibus a. Aenean lacinia quam id ex sodales pharetra. Proin in nibh pharetra, ultrices nibh vel, luctus odio. Suspendisse rhoncus, nibh in ultricies molestie, felis lacus tempus ex, sed maximus leo nulla ac leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum finibus vel felis ullamcorper ornare. Nullam id tortor eget tellus sollicitudin faucibus."};
	
	printf("Kelime Sayisi Gir: ");
	scanf("%d",&input);
	
	printf("\a");
	
	if (input > 0)
	{
		if(input > 10000)
		{
			input = 10000;
		}
		
		do
		{
			for(i = 0; lorem[i + 1] != '\0'; i++)
			{
				karakter++;
				
				if(lorem[i] == ' ')
				{
					kelime++;
				}
				
				if(kelime >= input)
				{
					break;
				}
				
				else
				{
					printf("%c", lorem[i]);
				}
			}
			printf(" ");
		}
		while(kelime < input);
		
		printf("\n");
		printf("\nKarakter Sayisi: %d\nKelime Sayisi: %d\n", karakter - 1, kelime);
	}
	
	else
	{
		printf("Lorem Ipmsum Olusturulamadi");
	}
	
	return 0;
}
