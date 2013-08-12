CC = g++
CXXFLAGS = -Wall -g -fPIC
LINK = $(CC)
	
CORE = http.o ep_server.o
UTILS = utils.o

OUTPUT = libxgcore.so 

.PHONY : xget clean

xgcore: $(UTILS) $(CORE) 
	$(LINK) $(UTILS) $(CORE) -shared -o $(OUTPUT) 
	cp ./libxgcore.so ../bin/

clean:
	rm -f *.o
	rm -f $(OUTPUT)
	rm -f ../bin/libxgcore.so
	
