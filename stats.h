
struct Stats 
{  
float average;
float min;
float max;
};
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(alerter_funcptr *alerters,const float maxThreshold, struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
