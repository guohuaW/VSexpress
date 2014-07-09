#include "stdafx.h"

/*
    在下面除法例题中，被除数被除数除尽：
   a1a2a3a4a5a6a7a8a9a0   b1b2b3b4b5b6  c1c2c3c4c5
    * * 7 * * * * * * * ÷ * * * * 7 * = * * 7 * *
    * * * * * *              =b1*c[1]=d1
    * * * * * 7 *          e3=
    * * * * * * *            =b1*c[2]=d2
        * 7 * * * *        e2=
        * 7 * * * *          =b1*c[3]=d3
        * * * * * * *      e1=
        * * * * 7 * *        =b1*c[4]=d4
            * * * * * *      =d5
            * * * * * *      =b1*c[5]=d5
			
    用星号（*）标出的那些数位上的数字偶然被擦掉了，那些不见了的是些什么数字呢？
*/

int main (void)
{
  int a[11],b[7],c[6],i;
  long b1, d1, d2, d3, d4, d5, e1, e2, e3, e4, t;

for (i=1;i<11;++i)
    {
	a[i]=0;
    };
for (i=1;i<8;++i)
    {
	b[i]=0;
    };
for (i=1;i<7;++i)
    {
	c[i]=0;
    };
	
b[5]=7;
c[3]=7;

	for (b[1]=1;b[1]<10;b[1]++)
        {
		for (b[2]=0;b[2]<10;b[2]++)
			{
			for (b[3]=0;b[3]<10;b[3]++)
				{
				for (b[4]=0;b[4]<10;b[4]++)
					{
					for (b[6]=0;b[6]<10;b[6]++)
	{

		b1=b[1]*100000+b[2]*10000+b[3]*1000+b[4]*100+b[5]*10+b[6];

		for (c[5]=1;c[5]<10;c[5]++)
        {
		
		d5=b1*c[5];
		if (d5>999999)
			continue;

		a[10]=d5-d5/10*10;
		
		for (c[4]=0;c[4]<10;c[4]++)
			{

			d4=b1*c[4];
			if (d4<1000000)
			continue;

			t=d4/100;
			if (t - t/10*10 != 7)
			continue;
			
			e1=d5/10+d4;
			
			a[9]=e1-e1/10*10;
			
			d3=b1*c[3];
			if (d3>999999)
			continue;

			t=d3/10000;
			if (t - t/10*10 != 7)
			continue;
			
			e2=e1/10+d3;
			if (e2>999999)
			continue;
			
			t=e2/10000;
			if (t - t/10*10 != 7)
			continue;

			a[8]=e2-e2/10*10;
			
			for (c[2]=0;c[2]<10;c[2]++)
				{
				d2=b1*c[2];
				if (d2<1000000)
				continue;

				e3=e2/10+d2;
				
				t=e3/10;
				if (t- t/10*10 != 7)
				continue;
				
				a[7]=e3-e3/10*10;

				for (c[1]=0;c[1]<10;c[1]++)	
					{
					d1=b1*c[1];
					if (d1>999999)
					continue;

					e4=e3/10+d1;
					if (e4>999999)
					continue;	
					
					t=e4/1000;
					if (t - t/10*10 != 7)
					continue;

					for (i=6;i>1;i--)
					{
						a[i]=e4-e4/10*10;
						e4=e4/10;
					};

					if (a[3]!=7)
					continue;
					
					if (e4>9)
					continue;
					
					a[1]=e4;

					printf("%d%d%d%d%d%d%d%d%d%d / ",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
					printf("%d%d%d%d%d%d = ",b[1],b[2],b[3],b[4],b[5],b[6]);
					printf("%d%d%d%d%d\n",c[1],c[2],c[3],c[4],c[5]);
					printf("%ld\n",d1);
					printf("%ld\n",e3);
					printf("%ld\n",d2);
					printf("  %ld\n",e2);
					printf("  %ld\n",d3);
					printf("  %ld\n",e1);
					printf("  %ld\n",d4);
					printf("    %ld\n",d5);
					printf("    %ld\n",d5);

					}
				}
			}
		}
	}
					}
				}
			}
		}

/*
	7375428413 / 125473 = 58781
	627365
	1101778
	1003784
	  979944
	  878311
	  1016331
	  1003784
	    125473
	    125473
*/	

return 0;
	
}
