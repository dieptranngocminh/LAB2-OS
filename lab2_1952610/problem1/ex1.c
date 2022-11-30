#include "ex1.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
void * aligned_malloc(unsigned int size, unsigned int align){
	unsigned long s = (unsigned long)sbrk(0);
	if(s % align != 0){
		s = s - (s % align) + align;
	}	 
	
	if(!brk((void*)s+(unsigned long)size)){
		return (void*)s;
	}
	//return NULL;
} 
void * aligned_free(void *ptr){
	if(ptr<= sbrk(0)){
		brk(ptr);
		//return NULL;
	}
	return (void*)-1;
}
