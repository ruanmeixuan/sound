OBJ = main.o sound.o screen.o comm.o
APPNAME=sound.a
WAVNAME = test.wav
TAR=final.tar

$(APPNAME) : $(OBJ)
        gcc -o $(APPNAME) $(OBJ) -lm -lcurl
%.o : %.c
        gcc -c -o $@ $<
clean:
        rm $(OBJ) $(APPNAME) $(WAVNAME)
archive:
        tar cf $(TAR) *.c *.h README.txt

