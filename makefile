output: main.cpp LRU_Class.h fifo.h
	g++ main.o LRU_Class.h fifo.h -i output
clean:
	rm *.o output
