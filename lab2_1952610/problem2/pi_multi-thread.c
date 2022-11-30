#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define NUM_THREADS 10

long tpoint;
long npoint;
void* nPoint(void* pthreadid){
	long point=0;
	float d;
	for(long i=(long)pthreadid; i<tpoint; i+=NUM_THREADS) {
		float x = 1.0*(rand()%1001)/1000;
                float y = 1.0*(rand()%1001)/1000;
		d = x*x + y*y;
		
		if(d <= 1){
			point++;
		}
	}
	npoint += point;
	
}

int main(int argc, char* argv[]){
	if(argc != 2) return 0;
	else{
		tpoint = atoi(argv[1]);
		pthread_t threads[NUM_THREADS];
		for(long t=0; t<NUM_THREADS; t++){
			pthread_create(&threads[t], NULL, nPoint, (void*)t);
		}
		for(int i=0; i<NUM_THREADS; i++){
			pthread_join(threads[i], NULL);
		}
		float pi = 0;
		pi = 4.0*npoint/tpoint;
		printf("Pi = %.3f", pi);
	}
}
