#include "stdint.h"

void sort(int32_t * buf, uint32_t size);

int32_t getMedian(int32_t * buf, uint32_t size){
	int32_t M=0;
	int32_t buf2[size];
	for(int i=0;i<size;i++)
		buf2[i]=buf[i];
	sort(buf2, size);
	M=buf2[size/2];
	return M;
}

void sort(int32_t * buf, uint32_t size){	
	int32_t temp;
	for (int i=0; i<size-1; i++){
		for (int k=i+1; k<size; k++){
			if(size!=0)
				if (buf[k]<buf[i]){
					temp=buf[i];
					buf[i]=buf[k];
					buf[k]=temp;
				}
		}
	}
}

int main()
{
	int32_t mas[10]; 
	for(int i=0; i<10; i++)
			mas[i]=rand()%18;
	sort(mas,10);
	
	int32_t mas2[5]={23, 2, 2, 5, 14};
	int32_t m;
	m=getMedian(mas2, 5);
	while(1){}
	return 0;
}