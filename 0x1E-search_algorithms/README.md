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

</code></pre>




  - `Compiled using:`
  - `Expected output:`
<pre><code>
</code></pre>