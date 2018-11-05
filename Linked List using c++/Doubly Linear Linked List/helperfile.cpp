#include"myheader.h"

DLLL::DLLL()
{
	head = NULL;
}

DLLL::~DLLL()
{
	PNODE temp = head;
	while(head!=NULL)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
}
void DLLL::InsertFirst(int iValue)
{
	PNODE newn = NULL;
	newn = new NODE;

	newn->data = iValue;
	newn->next = NULL;
	newn->prev = NULL;

	if(head == NULL)
	{
		head = newn;
	}
	else
	{
		newn->next = head;
		newn->next->prev = newn;
		head = newn;
	}
}

void DLLL::InsertLast(int iValue)
{
	PNODE temp = head;
	PNODE newn = NULL;

	newn = new NODE;
	newn->data = iValue;
	newn->next = NULL;
	newn->prev = NULL;

	if(head == NULL)
	{
		head = newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;
		newn->prev = temp;
	}	
}
void DLLL::InsertAtPos(int iValue,int iPos)
{
	int iSize = Count();
	
	if((iPos<1)&&(iPos>iSize+1))
	{
		return ;
	}

	if(iPos == 1)
	{
		InsertFirst(iValue);
	}
	else if(iPos == iSize+1)
	{
		InsertLast(iValue);
	}
	else
	{
		PNODE temp = head;
		PNODE newn = NULL;
		
		newn->data = iValue;
		newn->next = NULL;
		newn->prev = NULL;

		for(int i =1;i<=iPos-2;i++)
		{
			temp = temp->next;
		}

		newn->next= temp->next;
		newn->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;

	}
}

void DLLL::DisplayF()
{
	PNODE temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL";
}

int DLLL::Count()
{
	int iCnt = 0;
	while(head!=NULL)
	{
		iCnt++;
		head = head->next;
	}

	return iCnt;
}
