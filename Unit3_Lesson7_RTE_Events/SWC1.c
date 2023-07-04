#include "RTE_SWC.h"

void SUM(){
	std_ReturnType status=E_NOT_OK;
	unsigned short x,y;
	unsigned int z=0;
	
	status= RTE_Read_RPSUM_Val1(&x);
	status=RTE_Read_RPSUM_Val1(&y);
	
	z=x+y;
	
	status=RTE_Write_PPSum_SumResult(z);
}