#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}NODE,*PNODE;

class DLLL
{
	protected:
		PNODE head;

	public:
		DLLL();
		~DLLL();

		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);

		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);

		int Count();
		void DisplayF();
		void DisplayB();
};