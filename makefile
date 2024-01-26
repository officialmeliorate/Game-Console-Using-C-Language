game:main.o rock_paper_scissors.o number_guessing.o quiz.o
	cc main.c rock_paper_scissors.c number_guessing.c quiz.c -o game

main.o:main.c
	cc -c main.c
rock_paper_scissors.o:rock_paper_scissors.c
	cc -c rock_paper_scissors.c
number_guessing.o:number_guessing.c
	cc -c number_guessing.c
quiz.o:quiz.c
	cc -c quiz.c
clear:
	@echo "cleaning up...."
	@rm -v *.o
