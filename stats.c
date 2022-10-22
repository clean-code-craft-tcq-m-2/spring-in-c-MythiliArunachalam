#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(const float maxThreshold, struct Stats computedStats);

struct Stats 
{  
float average;
float min;
float max;
};
struct Stats compute_statistics( const float numberset[], int setlength) {
    
	struct Stats computedStats;
	int i;
	float numtotal;
	for (i=0, i<setlength,i++;)
	{
	numtotal = numberset[i] + numtotal;
	maxval = (numberset[i] >= maxval) ? numberset[i] : maxval;
	minval = (numberset[i] <= minval) ? numberset[i] : minval;
	}
	
	computedStats.average = numtotal/setlength;
    computedStats.max = maxval;
    computedStats.min = minval;
	return computedStats;
	
}

int main ()
{
struct Stats computedStats;
/*    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    struct Stats computedStats = compute_statistics(numberset, setlength); */
	computedStats = compute_statistics( float numberset[], int setlength);

	
}

void check_and_alert(const float maxThreshold, struct Stats computedStats)
{
	int emailAlertCallCount ;
int	ledAlertCallCount;
if (computedStats.max > maxThreshold)
{
	emailAlertCallCount = 1;
	ledAlertCallCount = 1;
}
}
