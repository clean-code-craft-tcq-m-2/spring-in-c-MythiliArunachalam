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
struct Stats compute_statistics( const float numberset[], int setlength);

int main ()
{
	int alerters[] = {emailAlerter, ledAlerter};
	const float maxThreshold = 10.2;
	int led
	float numberset[] = {1.5, 8.9, 3.2, 4.5};
	int setlength = sizeof(numberset) / sizeof(numberset[0]);
	struct Stats computedStats;
	computedStats = compute_statistics(numberset, setlength);
	alerters[0] = check_and_alert(maxThreshold,computedStats);
	alerters[1] = check_and_alert(maxThreshold,computedStats);
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

void check_and_alert(const float maxThreshold, struct Stats computedStats)
{
	int emailAlertCallCount ;
int	ledAlertCallCount;
if (computedStats.max > maxThreshold)
{
	emailAlertCallCount = 1;
	ledAlertCallCount = 1;
	return(
}
}
