CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_MATH=basicMath.o power.o
FLAGS= -Wall -g

all: mymathd mymaths mains maind
mains: $(OBJECTS_MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) mymaths
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./mymathd
mymathd: $(OBJECTS_MATH)
	$(CC) -shared -o mymathd $(OBJECTS_MATH)
mymaths: $(OBJECTS_MATH)
	$(AR) -rcs mymaths $(OBJECTS_MATH)
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c
	$(CC) $(FLAGS) -fPIC -c power.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind mymathd mymaths
