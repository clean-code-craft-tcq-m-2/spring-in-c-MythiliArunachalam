#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

struct Stats 
{  
float average;
float min;
float max;
};


typedef void (*alerter_funcptr)();
int main ()
{
struct Stats computedStats;
/*    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    struct Stats computedStats = compute_statistics(numberset, setlength); */
	computedStats = compute_statistics( const float numberset[], int setlength);

	
}

struct Stats compute_statistics( const float numberset[], int setlength) {
    
	
	int i;
	float numtotal;
	for (i=0, i<setlength,i++)
	{
	numtotal = numberset[i] + numtotal;
	maxval = (numberset[i] >= maxval) ? numberset[i] : maxval;
	minval = (numberset[i] <= minval) ? numberset[i] : minval];
	}
	
	computedStats.average = numtotal/setlength;
    computedStats.max = maxval;
    computedStats.min = minval;
	
}

void check_and_alert(const float maxThreshold, struct Stats computedStats);

void check_and_alert(const float maxThreshold, struct Stats computedStats)
{
if (computedStats.max > maxThreshold)
{
	emailAlertCallCount = 1;
	ledAlertCallCount = 1;
}
}
