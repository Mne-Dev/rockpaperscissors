#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 


int main()
{
	setlocale(LC_ALL,"Turkish");
	
	printf("\e[1;1H\e[2J");
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
	

	if (play <= 3 && play >= 1){

                if(pcplay == 1)
                {
                printf("Bilgisayar taşı seçti\n");
                }
                else if(pcplay == 2)
                {
                        printf("Bilgisayar kağıtı seçti\n");
                }
                else
                {
                        printf("Bilgisayar makası seçti\n");
                }

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
        }
	else
	{
		printf("Hatalı giriş!\n");
		return 0;
	}
	
	return 0;
}

