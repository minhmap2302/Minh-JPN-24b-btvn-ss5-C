#include <stdio.h>

int main(){
	int n = 100;
	for(int i = 100; i >= 1; i = i - 1){
		printf("%d\n",i);
		n = n + i;
	}
	return 0;
}
