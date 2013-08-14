CC = g++
CXXFLAGS = -Wall -g
LINK = $(CC)
	
CLIENT = xgclient.o main.o
CORE = ../core/http.o ../core/ep_server.o ../core/utils.o

OUTPUT = xget 

client: $(CORE) $(CLIENT) 
	$(LINK) $(CORE) $(CLIENT) -o $(OUTPUT) #-L../bin -lxgcore
	cp ./xget ../bin/

clean:
	rm -f *.o
	rm -f $(OUTPUT)
	
