#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
float pi_serial(int tpoint){
        float d;
        int r = 1;
        int npoint = 0;
        for(int i=0; i<tpoint; i++){
                float x = 1.0*(rand()%1001)/1000;
                float y = 1.0*(rand()%1001)/1000;
                d = x*x + y*y;
                if(d <= r){
                        npoint++;
                }
        }
        float pi=0;
        pi = 4.0*npoint/tpoint;
        return pi;
}
int main(int argc, char *argv[]){
        //printf("nPoint = %s", argv[1]);
        srandom(time(NULL));
        int tpoint = atoi(argv[1]);
        printf("Pi = %.3f", pi_serial(tpoint));
}
