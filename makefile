all: cachesimulator

main.o: main.cpp include.cachesimulator
    g++ main.cpp -c -o main.o
clean:
    rm -rf *.o

