.PHONY:clean
CC=gcc
#CC=gcc -g
SOURCE:=$(wildcard *.c)
OBJS:=$(SOURCE:.c=.o)
demo.out:${OBJS}
	${CC} -o $@ $^
%.o:%.c
	${CC} -o $@ -c $^
clean:
	rm -f *.out *.o

