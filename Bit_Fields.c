#include <stdio.h>
#define NUM_LOOPS 50
struct counters {
	int little:2;
	int medium:4;
	int large:8;
};


int main(){
	int c;
	struct counters counts;
	counts.little = 0;
	counts.medium = 0;
	counts.large = 0;
	for (c=0;c<NUM_LOOPS;c++){
		counts.little++;
	    counts.medium++;
	    counts.large++;
	    printf("%d,%d,%d\n",counts.little,counts.medium,counts.large);
	}
	printf("SizeOf Counts = %lu\n",sizeof(counts));
}