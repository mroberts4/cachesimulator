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

//Main file for the architecture project




int main(int argc, char** argv)
{
	int c,b,n;
	readConfig(c,b,n);	//read in configuration values from file

	/*Instantiate cache class with config file params*/
	Cache cache1(c,b,n);
  Cache cache2(c,b,n);
  cache1.readMemory();
	cache1.testMemLRU();
	cache2.readMemory();
	cache2.testMemFifo();
	
	return 0;
}


