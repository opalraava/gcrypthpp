all : test

clean :
	rm -f *~ test1_out

test : test1


test1 : test1.cc
	g++ -o test1_out $<
	./test1_out
