#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL,"Turkish");

	srand(time(NULL));
	int pcplay = rand() % 3 + 1;
	int play;

	/*
	 *play = 1 -> taş
	 *play = 2 -> kağıt
	 *play = 3 -> makas
	*/
	
	printf("Lütfen taş, kağıt ya da makas seçiniz \n1-Taş\n2-Kağıt\n3-Makas\n");
	scanf("%d", &play);
	
	printf("%d",pcplay);

	if(play == 1 && pcplay == 3 || play == 2 && pcplay == 1 || play == 3 && pcplay == 2)
	{
		printf("\nKazandın!\n");
	}
	else if(play == pcplay)
	{
		printf("\nBerabere!\n");
	}
	else
	{
		printf("\nKaybettin!\n");
	}

	return 0;
}

