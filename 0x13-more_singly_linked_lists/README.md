0x13. C - More singly linked lists

GENERAL

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded

TASKS

0. Print list - Write a function that prints all the elements of a listint_t list.
	Prototype: size_t print_listint(const listint_t *h);
1. List length - Write a function that returns the number of elements in a linked listint_t list.
	Prototype: size_t listint_len(const listint_t *h);
2. Add node - Write a function that adds a new node at the beginning of a listint_t list.
	Prototype: listint_t *add_nodeint(listint_t **head, const int n);







