//main

#include"header.h"
int main()
{
	while(1)
	{
		sleep(2);
		system("clear");
		char op;
		printf("\033[34m**********************************************************\033[0m\n");
		printf("\033[32mEnter Your Input\n\nr/R : Rock-Paper-Scissors Game\ng/G : Number Guessing Game\nq/Q : C Quiz\ne/E : Exit\033[0m\n");
		printf("\n\033[35mEnter Your Choice: \033[0m");
		scanf(" %c",&op);
		printf("\033[34m**********************************************************\033[0m\n");
		sleep(1);
		system("clear");

		if(op=='r' || op=='R')
			rock_paper_scissors();

		else if(op=='g' || op=='G')
			number_guessing();

		else if(op=='q' || op=='Q')
			quiz();

		else if(op=='e' || op=='E')
			exit(0);

		else
			printf("\033[31mInvalid Input\033[0m\n");
	}
}



