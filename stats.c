#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(const float maxThreshold,*alerters, struct Stats computedStats);

struct Stats compute_statistics( const float numberset[], int setlength);
 
 void emailAlerterfunc(const float maxThreshold,void alerters, struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	emailAlertCallCount = 1;
	} 
 }
 void ledAlerterfunc(const float maxThreshold,void alerters, struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	ledAlertCallCount = 1;
	} 
 }
 
typedef void (*alerter_funcptr)();
 
int main ()
{
	const float maxThreshold = 10.2;
	const float numberset[] = {1.5, 8.9, 3.2, 4.5};
	int setlength = sizeof(numberset) / sizeof(numberset[0]);
	struct Stats computedStats;
	computedStats = compute_statistics(numberset, setlength);
	alerter_funcptr alerters[] ={emailAlerter,ledAlerter};
	check_and_alert(maxThreshold,alerters,computedStats);
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
