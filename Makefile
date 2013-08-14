all:
	$(MAKE) -C core
	$(MAKE) -C cli
	$(MAKE) -C center
clean:
	$(MAKE) -C core clean
	$(MAKE) -C cli clean
	$(MAKE) -C center clean
	rm -f bin/*
