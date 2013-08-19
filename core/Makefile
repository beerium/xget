CC = g++
CXXFLAGS = -Wall -g -fPIC
LINK = $(CC)
	
CORE = http.o ep_server.o
UTILS = utils.o
LIB = xget.pb.o
TEST = testpb.o

OUTPUT = libxgcore.so 

.PHONY : xget clean

xgcore: $(UTILS) $(LIB) $(CORE) 
	$(LINK) $(UTILS) $(LIB) $(CORE) -shared -o $(OUTPUT)  -lprotobuf
	cp ./libxgcore.so ../bin/

clean:
	rm -f *.o
	rm -f $(OUTPUT)
	rm -f ../bin/libxgcore.so
	
