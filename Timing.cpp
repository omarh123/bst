
#include <iostream>
#include <sys/time.h>

using namespace std;

int main(){
    struct timeval start, finish;

    // start timer here
    gettimeofday(&start, NULL);

    int REPS = 1000;

    for(int i=0;i<REPS;i++){
    //Do stuff...e.g.
    }

    // end timer here    
    gettimeofday(&finish, NULL);
    double totalTime = 
  (double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)REPS;
    cout << "Total time: " << totalTime << " microseconds" << endl;
}
