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

struct DATA
{
	unsigned long* Tag_selection;   //selection bit for the array
	bool* is_valid_bit;
	bool* is_dirty_bit;
};

struct TAGS
{
	long long* TAG;         //TAG array of size ADDRESS_TAGS
	unsigned long freq;		//Frequency of the tag
	DATA data;
};


class LRU
{
		typedef bitset<32> bits;
		
		private: 
			/*Calculated values*/
			unsigned long blocksize;				//number of bytes in a block
			unsigned long cache_size;				//Size of the cache
			unsigned long address_tags;				//Tag number per set
			unsigned long data_blocks;				//Number of serctors
			unsigned long cache_associativity;		//Associativity of cache
			struct TAGS** TagStorage;				//Tag structure
			
			//Width of address fields
			unsigned long Sets;
			unsigned long offset_bits;
			unsigned long Address_bits;
			unsigned long data_block_bits;
			unsigned long bit_index;
			unsigned long bit_tags;
			

			
		/*LRU functions to be implemented based on the cofiurations from the text file.*/
		
			unsigned long Evict_Function(unsigned long);
			void resetFreq(unsigned long, unsigned long);

		public:

			//Parameters for the LRU performance
			unsigned long read = 0; 
			float miss_rate = 0;
			unsigned long cache_block_miss = 0;
			unsigned long read_miss = 0;
			unsigned long read_hit = 0;
			unsigned long write_back = 0;
			unsigned long write_hit = 0;
			unsigned long write_miss = 0;
			unsigned long sector_miss = 0;
			unsigned long write = 0; 

			//default
			LRU();

			//Displays the contents of the LRU class
			void CacheContents(); 

			//reads the lru cache contents
			void readFromAddr(unsigned long);

			//Writes to the lru clas
			void writeToAddr(unsigned long);

			//Constructor
			LRU(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, LRU*);

			//Destructor
			~LRU();

			//Tests the memory in the LRU class
			void TestMemory();
	};
}

#endif
