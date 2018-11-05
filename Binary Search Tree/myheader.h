#include<stdio.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


/*typedef struct node
{
	struct node *rchild;
	int data;
	struct node *lchild;	
}NODE, *PNODE, **PPNODE;
*/
struct node
{
	struct node *lchild;	
	int data;
	struct node *rchild;
	
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE,int);
BOOL Search(PNODE,int);
//int Count(PNODE);
