#include <stdio.h>
int main()
{
	double h, e1, e2, e3;
	printf("H Yuksekligini Giriniz :");
	scanf("%lf",&h);
	e1=(double) h*(0.912)*(9.81)*(0.85)*(0.95)*750000*1000/(365*24*3600);
	e2=(double) h*(0.94)*(9.81)*(0.85)*(0.95)*750000*1000/(365*24*3600);
	e3=(double) h*(0.883)*(9.81)*(0.85)*(0.95)*750000*1000/(365*24*3600);
	
	if(300<h) {
		
	printf("Yillik Enerji Miktari...:%lf \n",e1);
}
	else if(25<h && h<300) {
	 
	
	printf("Yillik Enerji Miktari...:%lf \n",e2);

}
	else if(33>h && h>1) {
		
	
	printf("Yillik Enerji Miktari...:%lf \n",e3);
	}
	else
	printf("Lutfen giris parametrelerini dogru giriniz\n");
	return 0;
}
