CC=g++ 
CXXFLAGS=-g

OBJS = main.o  Nodo.o pila.o 

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o ejecutable ${OBJS}
	make clean
	make ejec

clean: 
	rm -rf *.o 

ejec:
	./ejecutable