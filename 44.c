#include <stdio.h>
int funtion (int k){
	int j;
	for(j=2;j<k;j++){
		if(k%j==0){
			return 0;
		}
	}
	return 1;
}
