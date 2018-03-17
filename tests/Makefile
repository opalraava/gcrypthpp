libs=-lgcrypt

all : test

clean :
	rm -f *~ test1_out

test : test1
tests : test

test1 :
	rm -f tmp
	g++ -o tmp test1.cc $(libs)
	./tmp
	rm -f tmp
