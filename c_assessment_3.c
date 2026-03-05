#include <stdio.h>
#include <stdint.h>
int setBit(uint8_t nValue, uint8_t nPos);
int clearBit(uint8_t nValue, uint8_t nPos);
int toggleBit(uint8_t nValue, uint8_t nPos);

int main()
{
	uint8_t nValue = 10;
	uint8_t nPos;
	nPos = 3; //Set third bit
	printf("The result for set bit is :%d\n",setBit(nValue, nPos-1));
	nPos = 6;// clear sixth bit
	printf("The result for clear bit is :%d\n",clearBit(nValue, nPos-1));
	nPos = 1; // toggle first bit
	printf("The result for toggle bit is :%d\n",toggleBit(nValue, nPos-1));
	return 0;
}

int setBit(uint8_t nValue, uint8_t nPos){
	return nValue | (1 << nPos);
}
int clearBit(uint8_t nValue, uint8_t nPos){
	return nValue & ~(1 << nPos);
}
int toggleBit(uint8_t nValue, uint8_t nPos){
	return nValue ^ (1 << nPos);
}
