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
#include <stdlib.h>
#include "fifo.h"
#include "LRU_Class.h"
#include "address_BusInfo.h"
include <iomanip>
//Main file for the architecture project


//The variables to be used to read the LRU's parameters
unsigned long blocksize;				//number of bytes in a block
unsigned long cache_size;				//Size of the cache
unsigned long address_tags;				//Tag number per set
unsigned long data_blocks;				//Number of serctors
unsigned long cache_associativity;		//Associativity of cache
char *trace_file_contents;              //Input trace file

//Width of address fields
unsigned long Sets;
unsigned long offset_bits;
unsigned long Address_bits;
unsigned long data_block_bits;
unsigned long bit_index;
unsigned long bit_tags;



int main(int argc, char* argv[])
{
	int c,b,n;
	readConfig(c,b,n);	//read in configuration values from file

	/*Instantiate cache class with config file params*/
	Cache cache1(c,b,n);
    cache1.readMemory();
	cache1.testMemLRU();
	int pages[300];
    //loop to fill pages
    for (int i=0; i<300; i++)
    {
        //generates a pseudorandom numbers to fill the array with
        int r = rand() % 100+1;
        pages[i]=r;
    }
	int n = sizeof(pages)/sizeof(pages[0]);
    int capacity = 32;
    cout << pageFaults(pages, n, capacity);
	//hello?

    //Configuration for LRU Simulator Portion of proejct
    blocksize = strtoul(argv[1], 0, 10);
    cache_size = strtoul (argv[2], 0,10);
    cache_associativity = strtoul (arg[3], 0, 10);
    data_blocks = strtoul (argv[4], 0, 10);
    address_tags = strtoul (argv[5], 0, 10);
    data_block_bits = strtoul (argv[6], 0, 10);
    trace_file_contents = strtoul(argv[7], 0, 10);

    cout <<"=====Configurations======";
    cout << "\n  Block Size:\t\t" << blocksize;
    cout << "\n  Cache Associativity: \t\t" << cache_associativity;
    cout << "\n  Data Blocks:\t" << data_blocks;
    cout << "\n  Address tags:\t" << address_tags;
    cout << "\n  Data Block Bits:\t\t" << data_block_bits << "\n";
    cout << "\n  Input File:\t\t" << trace_file_contents << "\n";
	return 0;
}


