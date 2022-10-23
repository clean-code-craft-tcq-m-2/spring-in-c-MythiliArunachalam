
struct Stats 
{  
float average;
float min;
float max;
}computedStats;
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (alerter_funcptr *(alerters), const float maxThreshold,struct computedStats );
//void check_and_alert(alerter_funcptr *(alerters),const float maxThreshold, struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
