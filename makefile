// Variable named OBJECTS which is a list of all object file names
OBJ = main.o sound.o screen.o comm.o
APPNAME=sound.a
WAVNAME = test.wav
TAR=final.tar

$(APPNAME) : $(OBJ)
        // -lm tells gcc to link your code with the "math" shared library
        // compiles and specifies the output file
        gcc -o $(APPNAME) $(OBJ) -lm -lcurl
%.o : %.c       // builds a .o file from a .c file with the same name
        gcc -c -o $@ $<
clean:
        rm $(OBJ) $(APPNAME) $(WAVNAME) // rm for deleting files
archive:
        // -c -f = create new archive using file TAR
        tar cf $(TAR) *.c *.h README.txt

