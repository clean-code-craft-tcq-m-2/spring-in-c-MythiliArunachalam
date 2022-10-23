#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

typedef void (alerter_funcptr *(alerters), const float maxThreshold, struct computedStats);

struct Stats compute_statistics( const float numberset[], int setlength);

 void emailAlerter( const float maxThreshold, struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	emailAlertCallCount = 1;
	} 
 }
 void ledAlerter(const float maxThreshold, struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	ledAlertCallCount = 1;
	} 
 }

void check_and_alert (alerter_funcptr *(alerters),const float maxThreshold, struct computedStats)
{
alerters(maxThreshold, Stats.computedStats);
}

int main ()
{
	const float maxThreshold = 10.2;
	  float numberset[] = {1.5, 8.9, 3.2, 4.5};
	int setlength = sizeof(numberset) / sizeof(numberset[0]);
	struct Stats computedStats;
	computedStats = compute_statistics(numberset, setlength);
	alerter_funcptr alerters[0] = emailAlerter;
	alerter_funcptr alerters[1] =  ledAlerter;
check_and_alert(&emailAlerter,maxThreshold,computedStats);
check_and_alert(&ledAlerter,maxThreshold,computedStats);
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
