
# default command, builds an executable called "newton".
# executable can be called with ./newton 49 4
<<<<<<< HEAD
EXEC= newton
CC=gcc
LDFLAGS=-lm
=======
CC=gcc
LDFLAGS=-lm
EXEC=newton
>>>>>>> 1da6fa8e5d5cc3a0d23390c7e9fce377003e0dec
all: $(EXEC)

# link the object files into the executable.
# the -lm option is to tell the linker to include math libraries.
$(EXEC): main.o newton.o 
	$(CC) -o $@ $^ $(LDFLAGS)

comparison.o: comparison.c comparison.h  
	$(CC) -o $@ -c $<
<<<<<<< HEAD
=======
	
>>>>>>> 1da6fa8e5d5cc3a0d23390c7e9fce377003e0dec
# compile the main.c file into the main.o object file.
main.o: main.c newton.h comparison.o
	$(CC) -o $@ -c $<

# compile the newton.c file into the newton.o object file.
<<<<<<< HEAD
newton.o: newton.c newton.h 
	$(CC) -o $@ -c $< 
=======
newton.o: newton.c newton.h
	$(CC) -o $@ -c $<
>>>>>>> 1da6fa8e5d5cc3a0d23390c7e9fce377003e0dec


# remove the executable and intermediary object files.
clean:
	rm -rf $(EXEC) *.o
<<<<<<< HEAD

#create new install rule for creating directory
install:    
    mkdir -p install
    make $(EXEC)
    cp -f newton install
.PHONY : install 
=======
	
# creation du dossier install, cree l'executable et le copier dans install
install: 
	mkdir -p install
	make  $(EXEC)
	cp -f $(EXEC) install
>>>>>>> 1da6fa8e5d5cc3a0d23390c7e9fce377003e0dec

# afin d'eviter les  ambiguite du nom 
.PHONY: install

	
