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
int main(){
	int n,min,max,j;
	scanf("%d",&n);
	for(j=n;;j++){
		if(funtion(j)){
			max=j;
			break;
		}
	}
}
min=max;
		for(j=n;j>1;j--){
		if(funtion(j)){
			min=j;
			break;
		}
	}

