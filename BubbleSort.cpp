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
