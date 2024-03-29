 # 0x18. C - Dynamic libraries

 ## Summary
Dynamic/Shared Library - Is a collection of predefined reusable code modules that can be loaded and linked with program at run time.

 ### Creating a Dynamic library steps 
	- Create header file --> main.h
	- Create C file(s)
	- Create object files from .c files --> gcc -fPIC -c *.c
	- create DL from object code --> gcc -shared -0 libname.so *.o
	- export LD_LIBRARY_PATH=LD_LIBRARY_PATH

 ### libdynamic.so, main.h
-Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

 ### liball.so
-Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

 ### 100-operations.so
I know, you’re missing C when coding in Python. So let’s fix that!
-Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

 ### 101-make_me_win.sh
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
