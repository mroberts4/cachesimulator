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
//Main file for the architecture project




int main(int argc, char** argv)
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
	
	return 0;
}


