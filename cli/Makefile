CC = g++
CXXFLAGS = -Wall -g
LINK = $(CC)
	
CLIENT = xgclient.o main.o

OUTPUT = xget 

test: $(CLIENT) $(UTILS)
	$(LINK) $(UTILS) $(CLIENT) -o $(OUTPUT) -L../bin/ -lxgcore
	cp ./xget ../bin/

clean:
	rm -f *.o
	rm -f $(OUTPUT)
	
