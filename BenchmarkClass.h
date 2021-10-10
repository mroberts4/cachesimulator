/*
// This class includes the functons for benchmark testing for the LRU anf FIFO cache replacement algorithms for the Cache 
// simulator.
//
*/

#ifndef BENCHMARKCLASS_H
#define BENCHMARKCLASS_H

#include <algorithm>
#include <vector>
#include <iostream>
#include <memory>
#include <math>

using namespace std;

class BenchmarkClass
{
	private: 
		int memory_max = 64000;		//The maximum memory that the cache simulator can use.


	public:
		void testMemLRU();			//A function to test the memry to be used for the LRU algorithm. 
		void readMemory();			//This function reads the memory that is occupying the simulator. 
		void testMemFifo();			//This function tests the memory for the FIFO algorithm. 
};