










int main(){
	int a1 = 5; // Declare the variable ``a1'', and assign its value to 5
	int a2 = *(&a1); // Use the indirection operator and
	                 // address-of operator to obtain the value of a1

	printf("a1's address = [%p]\n", &a1);
	// print the address of a1

	printf("a1's value = [%d]\n", a1);
	// print the value of a1

	printf("a2's value = [%d]\n", a2);
	// print the value of a2

	return 0;

}


printf("ptr pointing value: %d\n", *ptr);


int main(){
	int a1 = 5;
	int *ptr = &a1; // Pointing ptr to a1
	                // and assign ptr's value with a1's address

	printf("a1's address = [%p]\n", &a1);

	printf("a1's value = [%d]\n", a1);

	printf("ptr's address = %p\n", &ptr);

	printf("ptr's value = %p\n", ptr);

	printf("ptr pointing value = %d\n", *ptr);

	return 0;

}


int main(){
	int a1 = 5;
	int *ptr = &a1; // Pointing ptr to a1
	                // and assign ptr's value with a1's address


	printf("a1's value = [%d]\n", a1);

    *ptr = 100;

	printf("a1's value = [%d]\n", a1);

	return 0;

}


#include <stdio.h>

// Define the data struct of List Note
struct ListNode{
    int val;
    struct ListNode *next;
};


int main(){
	struct ListNode a, b, c, d, e;

	a.val = 1;
	b.val = 2;
	c.val = 3;
	d.val = 4;
	e.val = 5;

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = NULL;

	struct ListNode *head = &a;

	while(head){

        printf("val = [%d] address = [%p] next = [%p]\n", head->val, head, head->next);
        head = head->next;
	}
	return 0;

}



int main(){
	int a = 5;
	int *ptr1 = &a;
	int **ptr2 = &ptr1;


	printf("a's address = %p\n", &a);
	printf("a's value = %d\n", a);

	printf("ptr1's address = %p\n", &ptr1);
	printf("ptr1's value = %d\n", ptr1);
	printf("ptr1's pointing value = %d\n", *ptr1);

	printf("ptr2's address = %p\n", &ptr2);
	printf("ptr2's value = %d\n", ptr2);
	printf("ptr2's pointing value = %d\n", *ptr2);

	return 0;

}




