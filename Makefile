all:
	$(MAKE) -C core
	$(MAKE) -C cli
clean:
	$(MAKE) -C core clean
	$(MAKE) -C cli clean
	rm -f bin/*
