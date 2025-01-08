#include <stdio.h>

void inMang(int a[],int *n){
	printf("Ca phan tu trong mang la: ");
	for(int i=0;i<*n;i++){
		printf("%d ",*(a+i));
	}
}

int main(){
	int n=9;
	int a[n]={1,2,3,4,5,6,7,8,9};
	inMang(a,&n);
} 
