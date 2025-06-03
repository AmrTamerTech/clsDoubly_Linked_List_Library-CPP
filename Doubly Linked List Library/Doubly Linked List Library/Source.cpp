#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{
	clsDblLinkedList <int> MydDlLinkedList;

	cout << "\nNumber of items in the linked list = " << MydDlLinkedList.Size() << endl;

	if (MydDlLinkedList.IsEmpty())
		cout << "\nYes List is Empty.\n";
	else
		cout << "\nNo List is not Empty\n";

	MydDlLinkedList.InsertAtBeginning(5);
	MydDlLinkedList.InsertAtBeginning(4);
	MydDlLinkedList.InsertAtBeginning(3);
	MydDlLinkedList.InsertAtBeginning(2);
	MydDlLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content:";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.InsertAfter(2, 500);
	cout << "\nAfter Inserting 500 after 2 index:";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.InsertAtEnd(600);
	cout << "\nAfter Inserting 600 At the end:";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.DeleteNode(4);
	cout << "After Deleting 4:";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.DeleteFirstNode();
	cout << "\nAfter Deleting First Node:";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.DeleteLastNode();
	cout << "\nAfter Deleting Last Node:";
	MydDlLinkedList.PrintList();

	cout << "\nNumber of items in the linked list = " << MydDlLinkedList.Size() << endl;

	if (MydDlLinkedList.IsEmpty())
		cout << "\nYes List is Empty.\n";
	else
		cout << "\nNo List is not Empty\n";

	//cout << "\nExecuting .Clear()";
	//MydDlLinkedList.Clear();
	//cout << "\nNumber of items in the linked list = " << MydDlLinkedList.Size() << endl;

	MydDlLinkedList.Reverse();
	cout << "\nLinked List Content after reverse:\n";
	MydDlLinkedList.PrintList();

	cout << "\nItem(2) Value is : " << MydDlLinkedList.GetItem(2) << endl;

	MydDlLinkedList.UpdateItem(2, 900);
	cout << "\nAfter Updating Item(2): \n";
	MydDlLinkedList.PrintList();

	MydDlLinkedList.InsertAfter(2, 700);
	cout << "\nAfter Insert 700 after index 2: " << "\n";
	MydDlLinkedList.PrintList();

	system("pause > 0");
	return 0;
}