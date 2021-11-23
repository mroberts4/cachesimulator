all: cachesimulator

cachesimulator: main.o LRU_Class.o fifo.o
    g++ main.o LRU_Class.o fifo.o -o cachesimulator

main: main.cpp
    g++ -c main.cpp

LRU_Class.o: LRU_Class.h
    g++ -c LRU_Class.h
fifo.o: LRU_Class.h
    g++ -c fifo.h
clean:
    rm -rf *.o

