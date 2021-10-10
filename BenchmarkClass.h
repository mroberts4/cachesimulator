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
		int memory


	public:
		void testMemLRU();
		void readMemory();
		void testMemFifo();
};