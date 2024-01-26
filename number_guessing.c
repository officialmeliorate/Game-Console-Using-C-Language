//number_guessing

#include"header.h"
void number_guessing(void)
{
	int max=0,guess=0,answer=0,guesses=0;
	printf("\n\033[35mEnter Maximum Limit: \033[0m");
	scanf("%d",&max);

	answer=(rand()%max);  //Generate a random number between min and max
	do
	{
		printf("\n\033[35mEnter Guess(Between 0-%d): \033[0m",max);
		scanf("%d",&guess);

		if(guess < answer)
			printf("\033[32mToo Low!\033[0m");
		else if(guess > answer)
			printf("\033[32mToo High!\033[0m");
		else if(guess=='#')
			break;
		else
			printf("\033[32mCorrect!\033[0m");
		guesses++;
	}
	while(guess != answer);

	printf("\n\033[34m**********************************************************\033[0m\n");
	printf("\033[32mAnswer: %d\n\033[0m\n",answer);
	printf("\033[32mYou got answer in %d guess\033[0m\n",guesses);
	printf("\n\033[34m**********************************************************\033[0m\n");
}
