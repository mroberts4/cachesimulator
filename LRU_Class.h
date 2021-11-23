#ifndef LRU_CLASS_H
#define LRU_CLASS_H

#include <list>
#include <algorithm> //for finding in a list 
#include <array>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <math.h>
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
		
			unsigned long EvictFunction(unsigned long);
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
            //Checks what iss type the block values are
            void checkTheMissType(unsigned long index, unsigned long assoc);

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
			//Displays the LRU results 
			void cacheStats();
	};
	LRU::LRU()
	{
	}
    //Implementations for the LRU class.
	LRU:: LRU (unsigned long blocksize, unsigned long cache_size, unsigned long cache_associativity, unsigned long data_blocks, unsigned long address_tags)
	{
	    this -> blocksize = blocksize;
	    this -> cache_size = cache_size;
	    this -> cache_associativity = cache_associativity;
	    this -> address_tags = address_tags;
	    this -> data_blocks = data_blocks;
	    Sets = cache_size / (blocksize *cache_associativity * data_blocks);

	    //Settiing the width of the address bits
	    offset_bits = ceil (log2(blocksize));
	    data_block_bits = ceil(log2(data_blocks));
	    address_tags = ceil (log2(address_tags));
	    bit_index = ceil(log2(Sets));

	    bit_tags = address_size -address_tags - bit_index -data_block_bits - offset_bits;

	    //iitializing the structure
	    tag_store = new TAG *[Sets];
	    for (unsigned long i=; i <Sets; i++)
	    {
	        tag_store[i] = new TAG [cache_associativity];
	    }

	    for (unsigned long i = 0; j < cache_associativity ; j++)
	    {
	        tag_store [i][j].TAG = new long long [address_tags];
	        for (unsigned long k=0; k< ADDRESS_TAGS; k++)
	        {
	            tag_store[i][j].TAG[k]= vacant;
	        }
	        tag_store[i][j].freq = j;

              tag_store[i][j].data.Tag_selection[k]= new unsigned long [data_blocks];
              tag_store[i][j].data.is_dirty_bit[k] = new bool [data_blocks];
              tag_store[i][j].data.is_valid_bit[k] = new bool [data_blocks];
             for (unsigned long k=0; k<data_blocks; k++)
             {
                tag_store[i][j].data.Tag_selection[k]=0;
	            tag_store[i][j].data.is_dirty_bit[k] = false;
	            tag_store[i][j].data.is_valid_bit[k] = false;
	        }
	    }
	}
}

void LRU :: CacheStats()
{







}

void LRU::readFromAddr(unsigned long address)
{








}


void LRU:: writeToAddr(unsigned long address)
{







}

unsigned long LRU :: EvictFunction(unsigned long address)
{




}
void LRU:: checkTheMissType(unsigned long index , unsigned long assoc)
{



}
#endif LRU_CLASS_H
