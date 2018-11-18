all: huftree

huftree: huftree.o codetree.o
	g++ -std=c++11 -Wall -g -o huftree huftree.o codetree.o

codetree.o: codetree.cc codetree.h
	g++ -std=c++11 -Wall -o codetree.o -c -g codetree.cc

huftree.o: huftree.cc codetree.h
	g++ -std=c++11 -Wall -o huftree.o -c -g huftree.cc

clean:
	rm *.o
	rm huftree
