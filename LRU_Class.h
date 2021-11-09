#ifndef LRU_CLASS_H
#define LRU_CLASS_H

#include <list>
#include <algorithm> //for finding in a list.
#include <array>
#include<iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <unordered_map> 
#include <cstdint>
#include <math.h>
#include < map>

using namespace std;

namespace 6
{


	class LRU{
		typedef bitset<32> bits;
		
		/*structure for the memory address for the cache */
		struct DATA
		{
			bits mem;
			bits tag; 
			bits index;
			bits offset;
			unsigned long* SelectTag;		//Selection bit array
			bool *isValid;
			bool* isDirty;					//For dirty bits
		};
		struct TAG_STORE
		{
			long long* TAG;					//TAG array of size ADDR_TAGS
			unsigned long frequency;
			DATA dstore;					//Struct to store data
		};
	class LRU
	{
		typedef bitset<32>bits;
		
		private: 
			/*values based on cache_config.txt file to be used*/
			unsigned long BLOCKSIZE = 1024;				//Number of bytes in a block.
			unsigned long CACHE_SIZE;					//Size of Cache.
			unsigned long CACHE_ASSOCIATIVITY = 8;		//Associativity of cache.
			unsigned long DATA_BLOCKS;					//No of sectors
			unsigned long ADDR_TAGS;					//Tags per Set
			struct TAG_STORE** tag_struct;				//tag structure
			
		/*LRU functions to be implemented based on the cofiurations from the text file.*/
		void checkEntry();
		void deleteMemEntry();
		void printMemAdr();
		void printSet();
		void printSet();
		public:
			/*Construtor and destructor*/
                        LRU (int&);
			~LRU();
			void readMemory();
			void TestMemory();
	};
}

#endif
