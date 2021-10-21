#include <iostream>
#include <stdio.h>  			// printf
#include <math.h>			// sqrt



int main()
{
    	/* ================== Variables ================== */
 	
	double battingAvg [10]; 	  // An array to hold batting averages of 10 players
	double battingAvgDev [10];	// New calculated batting average for the standard deviation
  int i; 				              // iteration variable 
  double sum = 0.0;		        // A variable to hold the sum of the array
	double avg = 0.0;		        // Variable to hold the initial average of batting averages
	int arrSize = 10;		        // Variable to hold the size of the array
  double tmp = 0.0;		        // Temporary variable for calculations
  double avgDeviationCalc = 0.0; 	// Stores the averages of the deviated values from the OG avg
	double deviatedSum = 0.0;	  // Stores the sum of the deviated values from the OG avg
	double devHigh = 0.0;		    // High deviation variable
	double devLow = 0.0;		    // Low deviation variable

	/* ================== For loop to get values ================== */
	
	for(i = 0; i < 10; ++i)		  // Get the user input
	{
		std::cout << "Enter batting average " << i + 1 << ": ";
		std::cin >> battingAvg[i];
		
	}
	std::cout << std::endl;		  // Extra space is always nice

	/* ================= Calculate the average of the averages =========== */

        for (i = 0; i<arrSize; i++) 	// Get the sum of all values in the battingAvg array
	{
		sum+=battingAvg[i];
	}

	avg = sum/arrSize;  		    // Store the average in avg variable

	/* ================= Calculate the standard deviation ================ */

        for (i = 0; i<arrSize; i++)	// Create new batting average array for deviation calculation
	{
		tmp = battingAvg[i] - avg;
		tmp = tmp * tmp;
		battingAvgDev[i] = tmp;
	}

	for (i = 0; i<arrSize; i++)    	// Sum all the values in the battingAvgDev array
	{
		deviatedSum+=battingAvgDev[i];
	}

	avgDeviationCalc = sqrt(deviatedSum);


	devHigh = avg + avgDeviationCalc;	// First Deviation High
	devLow = avg - avgDeviationCalc;	// First Deviation Low

	std::cout << "Average: " << avg << std::endl;
	std::cout << "Low Dev: " << devLow << std::endl;
	std::cout << "High Dev: " << devHigh << std::endl;
  
  return 0;
}


