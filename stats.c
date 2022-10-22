#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

int check_and_alert(*alerters, const float maxThreshold, struct Stats computedStats);

struct Stats compute_statistics( const float numberset[], int setlength);
 
int main ()
{
	const float maxThreshold = 10.2;
	  float numberset[] = {1.5, 8.9, 3.2, 4.5};
	int setlength = sizeof(numberset) / sizeof(numberset[0]);
	struct Stats computedStats;
	computedStats = compute_statistics(numberset, setlength);
 	return 0;
}
struct Stats compute_statistics( const float numberset[], int setlength) 
{
    	struct Stats statinfo;
	int i;
	float numtotal;
	float maxval;
	float minval;
	for (i=0; i<setlength; i++)
	{
	numtotal = numberset[i] + numtotal;
	maxval = (numberset[i] >= maxval) ? numberset[i] : maxval;
	minval = (numberset[i] <= minval) ? numberset[i] : minval;
	}
   statinfo.average = numtotal/setlength;
   statinfo.max = maxval;
   statinfo.min = minval;
   
	return statinfo;
}
