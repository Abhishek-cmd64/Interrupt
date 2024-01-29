#include<reg51.h>
sbit wave=P3^1;

void main(void)
{
TMOD =0x02;
	 TH0 = 0x1A;
	TL0 = 0x1A;
		TR0 = 1;
while(1)
{
   

	while(TF0==0);
	TF0=0;
	wave = ~wave;
	
}
}