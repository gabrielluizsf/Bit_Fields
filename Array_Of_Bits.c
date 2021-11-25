#include <stdio.h>
#include <stdint.h>

uint64_t array_of_bits = 0 ;

#define SET_BIT(BF, N) BF |= ((uint64_t)0x0000000000000001 << N)
#define CLEAR_BIT(BF, N) BF &= ~((uint64_t)0x0000000000000001 << N)
#define IS_BIT_SET(BF, N) ((BF >> N) & 0x1)






int main(){
	SET_BIT(array_of_bits, 0);
	SET_BIT(array_of_bits, 2);
	SET_BIT(array_of_bits, 10);
	SET_BIT(array_of_bits, 7);
	SET_BIT(array_of_bits, 45);

	
	CLEAR_BIT(array_of_bits, 7);
	
	int count;
	
	for (count = 0 ; count < 64 ; count++){
		if(IS_BIT_SET(array_of_bits,count)){
			printf("+");
		}else{
			printf(".");
		}
	}
	printf("\n");
}