#include"myheader.h"

int main()
{
	
	int iRet = 0;
	BOOL bRet;
	PNODE head = NULL;
	
	Insert(&head,11);
	
	
	bRet =  Search(head,14);
	if(bRet == TRUE)
	{
		printf("\n Number is available in tree\n");
	}
	else
	{
		printf("\n Number not available in tree\n");
	}

	//iRet = Count(head);
	//printf("\nNumner of node in tree:-%d\t",iRet);

	return 0;
}