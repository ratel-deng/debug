.PHONY:clean
CC=gcc -g
SOURCE:=$(wildcard *.c)
OBJS:=$(SOURCE:.c=.o)
demo.out:${OBJS}
	${CC} -o $@ $^
%.o:%.c
	gcc -o $@ -c $^
clean:
	rm -f *.out *.o

