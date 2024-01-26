//quiz

#include"header.h"
void quiz(void)
{
	printf("\n\033[31;1mC Language Quiz\033[0m\n\n");
	sleep(2);
	int i=0,j=0,NoOfQuestions,mark=0;
	char user_ans;
	char questions[][1000]={"1. Who is the father of C language?",
			       "2. What is an example of iteration in C?",
			       "3. Functions can return enumeration constants in C?",
			       "4. Property which allows to produce different executable for different platforms in C is called?",
			       "5. C preprocessors can have compiler specific features."};


	char options[][1000]={"a) Steve Jobs","b) James Gosling","c) Dennis Ritchie","d) Rasmus Lerdorf",
			     "a) for","b) while","c) do-while","d) all of the mentioned",
			     "a) true","b) false","c) depends on the compiler","d) depends on the standard",
			     "a) File inclusion","b) Selective inclusion","c) Conditional compilation","d) Recursive macros",
			     "a) True","b) False","c) Depends on the standard","d) Depends on the platform"};
			     
	char answer[][100]={"c","d","a","c","a"};
	
	NoOfQuestions=sizeof(questions)/sizeof(questions[0]);
	for(i=0 ; i<NoOfQuestions ; i++)
	{
		sleep(1);
		system("clear");
		printf("%s\n",questions[i]);
		printf("\n");
		for(j=i*4 ; j<(i*4)+4 ; j++)
		{
			printf("%s\n",options[j]);
		}
		printf("\n");
		printf("\033[34mEnter Option: \033[0m");
		scanf(" %c",&user_ans);
		
		user_ans=tolower(user_ans);  //To converting capital input into small letter input

		if(user_ans==*answer[i])
		{
			mark=mark+2;
			printf("\033[32mCorrect Answer\033[0m\n");
		}
		else
		{
			mark=mark-1;
			printf("\033[31mWrong Answer\033[0m\n");
			printf("\033[31mCorrect Answer is %s\033[0m\n",answer[i]);
		}
	}
	system("clear");
	printf("\033[34;1mTotal Marks= %d/%d\033[0m\n",mark,NoOfQuestions*2);
	if(NoOfQuestions*2==mark)
		printf("\033[32;1mCongrats You Got Full Marks\033[0m\n");
	sleep(3);
}

