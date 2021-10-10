#define fifo_h
#include <cstdint>
#include <math.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <unordered_map>
#include <list>
#include <algorithm>

//this is the fifo class file to perform first in first out operations on the cache simulator. The output will be printed out in main. 


class Fifo
{
	
	private:
		int misses; 
		int evicts;
		int index; 
		int hits;
		
	public: 
		void checkEntry();
		void SelectedEntry();
		void printSet();
	
		public class void fifo()
		{

		for (int i = 0; i < setSize; i++)
		{

		if (i > stackSize)
		{
			inputStack.pop_front();
		}
		inputStack.push_back(x);
	}
	
			/*Constructor and destructor*/
			Fifo(int &);
			~Fifo();
			void readMemory();
			void testMemory();
}




};

