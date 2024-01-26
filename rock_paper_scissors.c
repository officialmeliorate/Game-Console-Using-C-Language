//rock_paper_scissors

#include"header.h"
void rock_paper_scissors(void)
{
	int comp,ch2,comp_count=0,ch2_count=0,l,game_count=0;
	char ch;
	printf("\n\033[35mEnter Game Limit: \033[0m");
	scanf("%d",&l);
	while(game_count<l)
	{
		comp=rand()%3;
		sleep(2);
		system("clear");
		printf("\033[34m**********************************************************\033[0m\n");
		printf("\033[32mr/R : Rock\np/P : Papper\ns/S : Scissors\ne/E : Exit\033[0m\n");
		printf("\n\033[35mEnter Your Choice: \033[0m");
		scanf(" %c",&ch);
		printf("\033[34m**********************************************************\033[0m\n");

		if(ch=='r'||ch=='R')
			ch2=0;
		else if(ch=='p'||ch=='P')
			ch2=1;
		else if(ch=='s'||ch=='S')
			ch2=2;
		else
			printf("\033[31mInvalid Input\033[0m\n");

		//////////////////////////////////////////////////(Rock)(wrt computer)
		if(comp==0 && ch2==2)
		{
			printf("\033[34mScissors v/s Rock\nComputer Won\033[0m\n");
			comp_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		else if(comp==0 && ch2==1)
		{
			printf("\033[34mPaper v/s Rock\nYou Won\033[0m\n");
			ch2_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		//////////////////////////////////////////////////(Paper)
		else if(comp==1 && ch2==0)
		{
			printf("\033[34mRock v/s Paper\nComputer Won\033[0m\n");
			comp_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		else if(comp==1 && ch2==2)
		{
			printf("\033[34mPaper v/s Scissors\nYou Won\033[0m\n");
			ch2_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		//////////////////////////////////////////////////(Scissors)
		else if(comp==2 && ch2==1)
		{
			printf("\033[34mPaper v/s Scissors\nComputer Won\033[0m\n");
			comp_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		else if(comp==2 && ch2==0)
		{
			printf("\033[34mRock v/s Scissors\nYou Won\033[0m\n");
			ch2_count++;
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		////////////////////////////////////////////////////(else)
		else
		{
			printf("\033[34mTied\033[0m\n");
			printf("\n\033[31mScore...\nYou : %d\nComputer : %d\n\n",ch2_count,comp_count);
		}
		game_count++;
	}
	printf("\033[34m**********************************************************\033[0m\n");
	if(ch2_count>comp_count)
		printf("\033[32mCONGRATS!\nYou Won!\033[0m\n");
	else if(comp_count>ch2_count)
		printf("\033[32mComputer Won!\033[0m\n");
	else
		printf("\033[32mGame Tied!\033[0m\n");
	printf("\033[34m**********************************************************\033[0m\n");
}
