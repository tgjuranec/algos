targetdir := target
testsrc := testdir

all: algos test

algos: algos.c
	mkdir -p $(targetdir)
	gcc algos.c getprice.c -o $(targetdir)/algos

test: $(testsrc)/test.c
	gcc $(testsrc)/test.c getprice.c -o $(testsrc)/test

clean:
	rm -fr $(targetdir) $(testsrc)/test
