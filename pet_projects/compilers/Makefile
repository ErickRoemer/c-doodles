# My 1st Makefile
# ter ago 13 21:02:30 -03 2019

CFLAGS=-g -I./headers

myexpr: main.o lexer.o parser.o lex_par_interface.o
	$(CC) -o $@ $^

clean:
	$(RM) *.o

mostlyclean: clean
	$(RM) *~


