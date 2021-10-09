#ifndef LRU_CLASS_H
#define LRU_CLASS_H

#include <list>
#include <algorithm> //for finding in a list
#include <array>
#include<iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <unordered_map> 
#include <cstdint>
#include <math.h>

using namespace std;

namespace 6
{
	class LRU{
		typedef bitset<32> bits;
		
		/*structure for the memory address for the cache */
		struct memory_address
		{
			bits mem;
			bits tag; 
			bits index;
			bits offset;
		};
		
		private: 
			/*Calculated values*/
			int blocks; 
			int sets; 
			int index;
			int hits;
			int misses;
			int offset; 
			int evicts; 
			
		/*LRU functions to be implemented based on the cofiurations from the text file.*/
		
		public:
			/*Construtor and destructor*/
                        LRU (int&);
			~LRU();
			void readMemory();
			void TestMemory();
	};
}

#endif
