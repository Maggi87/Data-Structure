#include"myheader.h"

void Insert(PPNODE root,int iValue)
{
	
	PNODE temp = *root;
	
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iValue;
	newn->lchild = NULL;
	newn->rchild = NULL;

	if(*root == NULL)
	{
		*root = newn;
	}
	
	while(1)
	{
		if(iValue > temp->data)
		{
			if(temp->rchild == NULL)
			{
				temp->rchild = newn;
				break;
			}
			temp = temp->rchild;
		}
		else if(iValue < temp->data)
		{
			if(temp->lchild == NULL)
			{
				temp->lchild = newn;
				break;
			}
			temp = temp->lchild;
		}
		else if(iValue == temp->data)
		{
			break;
			delete newn;
		}			
	}	
}

BOOL Search(PNODE root,int iValue)
{
	while(root!=NULL)
	{
		if(root->data == iValue)
		{
			break;
		}
		else if(iValue > root->data)
		{
			root=root->rchild;
		}
		else
		{
			root = root->lchild;
		}
	}
	if(root == NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
/*
int Count(PNODE root)
{
	static int iCnt = 0;
	if(root!=NULL)
	{
		iCnt++;
		Count(root->rchild);
		Count(root->lchild);
	}

	return iCnt;
}*/