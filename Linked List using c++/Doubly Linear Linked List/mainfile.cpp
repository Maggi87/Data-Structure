#include"myheader.h"

int main()
{
	
	DLLL obj1;

	cout<<endl<<"--------------------Insert First------------------------"<<endl;
	obj1.InsertFirst(11);
	obj1.InsertFirst(12);
	obj1.InsertFirst(13);
	obj1.InsertFirst(14);
	obj1.DisplayF();

	cout<<endl<<"---------------------Insert Last -----------------------"<<endl;
	obj1.InsertLast(15);
	obj1.InsertLast(16);
	obj1.DisplayF();
	cout<<endl<<"Number of Node is :-\t"<<obj1.Count()<<endl;
	

	//iRet = Count(head);
	//printf("\nNumner of node in tree:-%d\t",iRet);

	return 0;
}