
struct Stats 
{  
float average;
float min;
float max;
};
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void alerter_funcptr(const float maxThreshold, struct computedStats);
void check_and_alert(alerter_funcptr *alerters,float maxThreshold, struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
