# DSA-In-C-Lab-1
# DSA Lab 1 – Array Operations in C

## 📌 Overview

This repository contains the implementation of basic **Array Data Structure operations** in C as part of **DSA Lab 1**.

The program demonstrates how to perform common operations on an array, including:

* Array Traversal
* Linear Search
* Finding the Maximum Element
* Finding the Minimum Element
* Insertion at a Specific Position
* Insertion at the End
* Deletion from a Specific Position
* Deletion of the Last Element

---

## 🧠 Operations Implemented

### 1. Array Traversal

Traversing an array means visiting and displaying each element of the array one by one.

```text
Array: 1 2 4 3 9 0
```

The program uses a `for` loop to access every element.

**Time Complexity:** `O(n)`

---

### 2. Linear Search

Linear search checks each element sequentially until the required element is found.

In this program:

```c
int search = 9;
```

The program searches for `9` and displays its index if it is present.

**Time Complexity:**

* Best Case: `O(1)`
* Worst Case: `O(n)`

---

### 3. Finding Maximum Element

The program finds the largest element by initially assuming the first element is the largest and comparing it with every other element.

```c
int largest = arr[0];
```

**Time Complexity:** `O(n)`

---

### 4. Finding Minimum Element

Similar to finding the maximum, the program starts with the first element as the smallest and compares it with the remaining elements.

```c
int smallest = arr[0];
```

**Time Complexity:** `O(n)`

---

### 5. Insertion at a Specific Position

An element is inserted at a specified index.

In this program:

```c
int value = 99;
int position = 3;
```

Before inserting the new element, existing elements are shifted one position to the right to make space.

Example:

```text
Before:  1 2 4 3 9 0
After:   1 2 4 99 3 9 0
```

**Time Complexity:** `O(n)` in the worst case.

---

### 6. Insertion at the End

An element can be inserted at the end of the array without shifting the existing elements.

In this program:

```c
arr[n] = 102;
n++;
```

**Time Complexity:** `O(1)`

---

### 7. Deletion from a Specific Position

To delete an element from a particular index, all elements after it are shifted one position to the left.

In this program:

```c
int delete_position = 3;
```

Example:

```text
Before:  1 2 4 99 3 9 0 102
After:   1 2 4 3 9 0 102
```

**Time Complexity:** `O(n)` in the worst case.

---

### 8. Deletion of the Last Element

The last element is removed by simply decreasing the logical size of the array.

```c
n--;
```

The actual array capacity remains unchanged, but the program no longer considers the previous last element part of the array.

**Time Complexity:** `O(1)`

---

## 📊 Time Complexity Summary

| Operation             | Time Complexity |
| --------------------- | --------------- |
| Traversal             | `O(n)`          |
| Linear Search         | `O(n)`          |
| Find Maximum          | `O(n)`          |
| Find Minimum          | `O(n)`          |
| Insertion at Position | `O(n)`          |
| Insertion at End      | `O(1)`          |
| Deletion at Position  | `O(n)`          |
| Deletion at End       | `O(1)`          |

---

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC / MinGW
* **Concept:** Array Data Structure

---

## ▶️ How to Run

### Using GCC

Compile the program:

```bash
gcc lab1.c -o lab1
```

Run the program:

### Windows

```bash
lab1
```

### Linux / macOS

```bash
./lab1
```

---

## 📁 Repository Structure

```text
DSA-Lab-1/
│
├── lab1.c
└── README.md
```

---

## 🎯 Learning Objectives

After completing this lab, the following concepts are demonstrated:

* Understanding one-dimensional arrays
* Traversing array elements
* Searching for an element using linear search
* Finding minimum and maximum values
* Inserting elements into an array
* Deleting elements from an array
* Understanding element shifting during insertion and deletion
* Analyzing basic time complexities

---

## 📝 Conclusion

This lab demonstrates the fundamental operations performed on arrays and provides an introduction to how data structures are manipulated in C. It also helps in understanding the time complexity associated with different array operations.
