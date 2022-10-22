#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(const float maxThreshold,*alerters, struct Stats computedStats);

struct Stats compute_statistics( const float numberset[], int setlength);
 
 void emailAlerter(const float maxThreshold,struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	emailAlertCallCount = 1;
	} 
 }
 void ledAlerter(const float maxThreshold,struct computedStats)
 {
 if (computedStats.max > maxThreshold)
	{
	ledAlertCallCount = 1;
	} 
 }

typedef void alerter_funcptr(const float maxThreshold, struct computedStats);
int check_and_alert(alerter_funcptr *alerters ,maxThreshold, computedStats);
{ 
return(alerters);
} 
int main ()
{
	const float maxThreshold = 10.2;
	float numberset[];
	int setlength = sizeof(numberset) / sizeof(numberset[0]);
	struct Stats computedStats;
	computedStats = compute_statistics(numberset, setlength);
	check_and_alert(&emailAlerter,maxThreshold, computedStats);
	check_and_alert(&ledAlerter,maxThreshold, computedStats);
 	return 0;
}
