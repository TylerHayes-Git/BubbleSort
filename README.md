# BubbleSort
Assignment for object oriented class experimenting with BubbleSorting.

## Main File:

```C++
//Assignment_1.cpp by Tyler Hayes

#include "Assignment_1.h"

int main()
{
    BubbleSort();

    return 0;

} // BubbleSort
```

## Header File:

```C++
//Assignment_1.h by Tyler Hayes
#include <iostream>
#include <iomanip>

using std::setw;
using std::cout;
using std::endl;
using std::size_t;

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

void BubbleSort();

#endif
```

## CPP File:

```C++
//BubbleSort.cpp by Tyler Hayes
#include "Assignment_1.h"

	const short arraySize = 10;
    short arr [ arraySize ] = { 5, 6, 4, 9, 10, 12, 89, 68, 45, 41 };
    short hold;

    void BubbleSort(){
   	 	cout << "Data items in original order:" << endl;

   		 for ( size_t i = 0; i < arraySize; ++i )
    	{
        	cout << setw(4) << arr[ i ];
    	} // for i

		bool swapMade = true;
    	for ( size_t pass = 0; pass < arraySize && swapMade; ++pass )
    	{	
    		cout << "\n\n----New Pass----------------------------";
			swapMade = false;
			
       		for ( size_t j = 0; j < arraySize - 1; ++j )
        	{
           		 if ( arr [ j ] > arr [ j + 1 ] )
            	{
                	hold = arr [ j ];
                	arr [ j ] = arr [ j + 1 ];
                	arr [ j + 1 ] = hold; 
                	
                	cout << "\nSwap made:" << endl;
                	for ( size_t i = 0; i < arraySize; ++i )
    				{
        				cout << setw(4) << arr[ i ];
    				}
                	
					swapMade = true;
					
            	} // if
            	
            	else
				{
            		swapMade = false;
            		//cout << "\n(No swap)\n" << endl; <----Was used to check computation
				}

        	} // for j
        	
    	} // for pass

    	cout << endl << "\nData items in ascending order:" << endl;

    	for ( size_t i = 0; i < arraySize; ++i )
    	{
    	    cout << setw ( 4 ) << arr [ i ];
    	} // for i

    	cout << endl;
    	
	}
```
