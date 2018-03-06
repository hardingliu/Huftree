all: huftree

huftree: huftree.o codetree.o
	g++ -Wall -g -o huftree huftree.o codetree.o

codetree.o: codetree.cc codetree.h
	g++ -Wall -o codetree.o -c -g codetree.cc

huftree.o: huftree.cc codetree.h
	g++ -Wall -o huftree.o -c -g huftree.cc

clean:
	rm *.o
	rm huftree
