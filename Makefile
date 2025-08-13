targetdir := target

all: algos

algos: algos.c
	mkdir -p $(targetdir)
	gcc algos.c -o $(targetdir)/algos
clean:
	rm -fr $(targetdir)
