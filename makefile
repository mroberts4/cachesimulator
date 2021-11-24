output: main.cpp LRU_Class.h fifo.h address_BusInfo.h BenchmarkClass.h
	g++ main.cpp LRU_Class.h fifo.h address_BusInfo.h BenchmarkClass.h -i output
clean:
	rm *.o output
