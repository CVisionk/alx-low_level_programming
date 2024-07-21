0x1E-search_algorithms

## Learning Objectives
 - What is a search algorithm [DEF: In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values.]
 - What is a linear search
 - What is a binary search
 - What is the best search algorithm to use depending on your needs


# Tasks
- **0. Linear search**  
  - Write a function that searches for a value in an array of integers using the Linear search algorithm
    - Prototype : int linear_search(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array and value is the value to search for
    - Your function must return the first index where value is located
    - If value is not present in array or if array is NULL, your function must return -1
    - Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
  - `Compiled using:`  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/0-main.c 0-linear.c -o 0-linear
  - `Expected output: `
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/0-main.c 0-linear.c -o 0-linear
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>

- **1. Binary search**
  - Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
    - Prototype : int binary_search(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in 
    - size is the number of elements in array and value is the value to search for
    - Your function must return the index where value is located
    - You can assume that array will be sorted in ascending order
    - You can assume that value won’t appear more than once in array
    - If value is not present in array or if array is NULL, your function must return -1
    - You must print the array being searched every time it changes.
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/1-main.c 1-binary.c -o 1-binary
  - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/1-main.c 1-binary.c -o 1-binary
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$
</code></pre>

- **2. Big O #0**
  - What is the time complexity (worst case) of a linear search in an array of size n?
  - `file:` 2-O

- **3. Big O #1**
  - What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
  - `file:` 3-O

**4. Big O #2**
  - What is the time complexity (worst case) of a binary search in an array of size n?
  - `file:` 4-O

- **5. Big O #3**
  - What is the space complexity (worst case) of a binary search in an array of size n?
  - `file:` 5-O

- **6. Big O #4**
  - What is the space complexity of this function / algorithm?
  - `file:` 6-O

- **7. Jump search** `Advanced`
  - Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
    - Prototype : int jump_search(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array and value is the value to search for
    - Your function must return the first index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - You have to use the square root of the size of the array as the jump step.
    - You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
    - Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/100-main.c 100-jump.c -lm -o 100-jump
  - `Expected output: `
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/100-main.c 100-jump.c -lm -o 100-jump
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./100-jump
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Found 999 at index: -1
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$
</code></pre>

- **9. Interpolation search**
  - Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
    - Prototype : int interpolation_search(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array and value is the value to search for
    - Your function must return the first index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
    - Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/102-main.c 102-interpolation.c -o 102-interpolation
  - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/102-main.c 102-interpolation.c -o 102-interpolation
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./102-interpolation
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[2109] is out of range
Found 999 at index: -1
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$
</code></pre>

- **10. Exponential search**
  - Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
    - Prototype : int exponential_search(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array and value is the value to search for
    - Your function must return the first index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - You have to use powers of 2 as exponential ranges to search in your array
    - Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
    - Once you’ve found the good range, you need to use a binary search:
    - Every time you split the array, you have to print the new array (or subarray) you’re searching in
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/103-main.c 103-exponential.c -o 103-exponential
  - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/103-main.c 103-exponential.c -o 103-exponential
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./103-exponential
Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Found 62 at index: 13

Value checked array[1] = [1]
Value checked array[2] = [2]
Value found between indexes [2] and [4]
Searching in array: 2, 3, 4
Found 3 at index: 3

Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Searching in array: 76, 99
Searching in array: 99
Found 999 at index: -1
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$
</code></pre>

- **11. Advanced binary search**
  - You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.Write a function that searches for a value in a sorted array of integers.
    - Prototype : int advanced_binary(int *array, size_t size, int value);
    - Where array is a pointer to the first element of the array to search in
    - size is the number of elements in array and value is the value to search for
    - Your function must return the index where value is located
    - You can assume that array will be sorted in ascending order
    - If value is not present in array or if array is NULL, your function must return -1
    - Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
    - You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/104-main.c 104-advanced_binary.c -o 104-advanced_binary
  - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/104-main.c 104-advanced_binary.c -o 104-advanced_binary
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$ ./104-advanced_binary
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
collenk@LAPTOP-QU24OQM9:~/000-ALX/alx-low_level_programming/0x1E-search_algorithms$
</code></pre>

- **12. Jump search in a singly linked list**
  - You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.
  - Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
    - Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
    - Where list is a pointer to the head of the list to search in
    - size is the number of nodes in list and value is the value to search for
    - Your function must return a pointer to the first node where value is located
    - You can assume that list will be sorted in ascending order
    - If value is not present in head or if head is NULL, your function must return NULL
    - You have to use the square root of the size of the list as the jump step.
    - You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
    - Every time you compare a value in the list to the value you are searching, you have to print this value
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
  - `Expected output:`
<pre><code>
</code></pre>

- **12. Jump search in a singly linked list**
  - You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list. Define the following data structure in your search_algos.h header file:
  - Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
    - Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
    - Where list is a pointer to the head of the list to search in
    - size is the number of nodes in list and value is the value to search for
    - Your function must return a pointer to the first node where value is located
    - You can assume that list will be sorted in ascending order
    - If value is not present in head or if head is NULL, your function must return NULL
    - You have to use the square root of the size of the list as the jump step.
    - You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
    - Every time you compare a value in the list to the value you are searching, you have to print this value
  - `Compiled using:` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 tests/106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
  - `Expected output:`
<pre><code>
</code></pre>








  - `Compiled using:`
  - `Expected output:`
<pre><code>
</code></pre>