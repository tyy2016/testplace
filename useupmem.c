#include <stdio.h>
#include <malloc.h>
#include <unistd.h>

typedef struct {
	int block[1024][1024];
}Block;

int main() {
	// One int is 8bits making 4 bytes. int ---> 4B
	// 1MB = 1024KB = 1024 * 1024B.
	// So block[1024][1024] occupy 4Mb
	
	int block[1024][1024] = {0};
	int count = 512;
	int i = 0;

	//printf("%ld\n", sizeof(block));	
	//int *a[512];
	Block *a;
	//a = malloc(sizeof(Block) * 10);
	printf("%ld\n", sizeof(Block));
	/*while(i < count) {
		a[i] = malloc(1024 * 1024 * sizeof(int));
		*a[i] = 1;
		sleep(1);
		printf("%d, %dMb\n", i, i * 4);
		i++;
	}	
	*/
	
	while(i < 5) {
		a = malloc(sizeof(Block) * 10 * i);
		int m, n, k;		
		for(k = 0; k < 10 * i; k++ ){
			for(m = 0; m < 1024; m++) {
				for(n = 0; n < 1024; n++) {
					a[k].block[m][n] = 1;
				}
			}
		}



		i++;
		sleep(1);
		printf("%d, %dMb\n", i, i * 40);
	}
	
	
	return 0;
}
