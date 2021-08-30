UTILa=Caminho.c 
UTILb=Pontos.c
MAIN=main.c
BINARY=executavel


valgrind:
	valgrind --tool=memcheck --leak-check=full  --track-origins=yes --show-leak-kinds=all --show-reachable=yes ./$(BINARY)

all: 
	gcc -Wall -g $(MAIN) $(UTILa) $(UTILb) -o $(BINARY) -lm

run:
	./$(BINARY)
	
debug:
	gcc -DDEBUG -Wall $(MAIN) $(UTILa) $(UTILb) -o executavel

clean:
	@rm $(BINARY)

