# sorting algorithm library

## This library was created with the purpose of containing all existing sorting algorithms. At the moment, it only includes 5, but it will be updated :-)

## How it works

The library uses templates to automatically determine the size and type of the array; 
therefore, the user only needs to write:

```cpp
nameSort(array);
``` 
### Implemented algorithms so far are:

- Optimized bubble sort 
- Insertion sort 
- Selection sort
- Shell sort
- Gnome sort

### Bubble sort
**Description:** It iterates through the array, comparing adjacent elements, and if the first element is greater than the second
**Complexity:** worst case: O(n^2)
**When to use:** For very small arrays, educational purposes, or testing

### Insertion sort
**Description:** It sorts the array one element at a time
**Complexity** Average/Worst case: O(n^2)
**When to use:** It is used for small arrays or if we know they are almost sorted

### Selection sort
**Description:** It finds the minimum element in each iteration and places it in the correct position
**Complexity:** Always: O(n^2)
**When to use:** It is used for small arrays

### Shell Sort
**Description:** It compares elements based on a number called gap
**Complexity:** It depends on the gap, in my case, it is array size / 2 (It will be updated with the Tokuda sequence as soon as possible)
**When to use:** It is used for medium/large arrays with higher efficiency

### Gnome Sort
**Description:** It moves forward and backward, swapping elements until the array is sorted
**Complexity:** worst case: O(n^2)
**When to use:** It is used for very small arrays or for educational purposes

