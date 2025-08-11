all: algos

algos: algos.c
	gcc algos.c -o algos
clean:
	rm -f algos
