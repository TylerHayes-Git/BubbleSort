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

void BubbleSort()
{
    cout << "Data items in original order:" << endl;

    for ( size_t i = 0; i < arraySize; ++i )
    {
        cout << setw(4) << arr[ i ];
    } // for i

    bool swapMade = true;
		
    if (swapMade == true)
    {	
        for ( size_t pass = 0; pass < arraySize; ++pass )
    	{	
    	    //cout << "\n\n----New Pass----------------------------";
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
		    cout << "\n----New Pass----------------------------";
					
                } // if
            	
                else
	        {
            	    swapMade = false;
            	    //cout << "\n(No swap)\n" << endl; //<----Was used to check computation
	        }

            } // for j
        	
	} // for pass
    }// if swapMade

    cout << endl << "No swaps made.\n\nData items in ascending order:" << endl;

    for ( size_t i = 0; i < arraySize; ++i )
    {
    	cout << setw ( 4 ) << arr [ i ];
    } // for i

    cout << endl;
    	
}// BubbleSort
```
## Output:

`Data items in original order:
   5   6   4   9  10  12  89  68  45  41
Swap made:
   5   4   6   9  10  12  89  68  45  41
----New Pass----------------------------
Swap made:
   5   4   6   9  10  12  68  89  45  41
----New Pass----------------------------
Swap made:
   5   4   6   9  10  12  68  45  89  41
----New Pass----------------------------
Swap made:
   5   4   6   9  10  12  68  45  41  89
----New Pass----------------------------
Swap made:
   4   5   6   9  10  12  68  45  41  89
----New Pass----------------------------
Swap made:
   4   5   6   9  10  12  45  68  41  89
----New Pass----------------------------
Swap made:
   4   5   6   9  10  12  45  41  68  89
----New Pass----------------------------
Swap made:
   4   5   6   9  10  12  41  45  68  89
----New Pass----------------------------
No swaps made.

Data items in ascending order:
   4   5   6   9  10  12  41  45  68  89
