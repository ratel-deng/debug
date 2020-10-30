.PHONY:clean

HEAD_FILES=$(wildcard *.h)

a.out:main.o
	gcc -I ./ -o $@ $^
%.o:%.c ${HEAD_FILES}
	gcc -I ./ -o $@ -c $(filter %.c,$^)
clean:
	rm -f *.out *.o

