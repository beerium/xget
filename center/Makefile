CC = g++
CXXFLAGS = -Wall -g
LINK = $(CC)
	
CENTER = xgcenter.o agent.o main.o

OUTPUT = xgcenter 

test: $(CENTER) 
	$(LINK) $(CENTER) -o $(OUTPUT) -L../bin -lxgcore
	cp ./xgcenter ../bin/

clean:
	rm -f *.o
	rm -f $(OUTPUT)
	
