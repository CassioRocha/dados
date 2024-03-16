
CFLAGS=-std=c++11 -static-libstdc++ -static-libgcc -Wall

all:nome.o 
	g++ nome.o -o r.run $(CPLEXFLAGS) $(CFLAGS) 


%.o: %.cpp %.hpp
	g++ -c $< -o $@ $(CFLAGS)

nome.o: test.cpp
	g++ -c -g -O0 -o nome.o test.cpp $(CPLEXFLAGS) $(CFLAGS)

clean:
	rm -f *.o

