# 🧪 Experiment 7 – Arrays and Strings in C++

## 🎯 Aim:
To study and implement the concept of arrays and strings in C++, and understand how to store, access, manipulate, and process multiple values using a single variable name.

---

## 📚 Theory:

### 🔢 Arrays:
An **array** is a collection of elements of the same data type stored at contiguous memory locations. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

#### 🔹 Types:
- **One-dimensional array** (1D): Linear structure like a list.
- **Two-dimensional array** (2D): Like a matrix or table.

#### 🔹 Syntax:
```cpp
int arr[5]; // declaration
arr[0] = 10; // assignment
```

---

### 🔤 Strings:
A **string** in C++ is a sequence of characters. It can be implemented using:
- Character arrays (`char str[]`)
- `string` class from the C++ Standard Library (not used here as per constraints)

#### 🔹 Syntax (char array):
```cpp
char name[10] = "Hello";
```

---

## ⚙️ Procedure:
1. Start with `#include <iostream>` and `using namespace std;`
2. Declare an array or character array for string.
3. Use `for` loop or `while` to access and modify values.
4. Perform desired operations like insertion, deletion, traversal, etc.
5. Display results using `cout`.

---

## 🧪 Programs You Can Try:

### ✅ 1. Sum and Average of Elements in Array
- Input: Array of 5 numbers
- Output: Sum and average

### ✅ 2. Find Largest and Smallest Element in Array
- Logic: Use loop to compare and update min/max

### ✅ 3. Reverse an Array
- Logic: Use a loop to swap elements from front and end

### ✅ 4. Count Vowels in a String
- Input: Character array
- Output: Number of vowels

### ✅ 5. Reverse a String
- Input: Character array
- Output: Reversed characters

---

## 🧠 Key Concepts Covered:
- Array declaration and initialization
- Traversing arrays using loops
- Manipulating character arrays
- Accessing elements using indices
- Looping and conditional logic with arrays/strings

---

## 📈 Learning Outcomes:
- Understood how arrays store and process multiple values.
- Learned how to use character arrays to manipulate strings.
- Practiced basic problems involving arrays and strings.
- Developed confidence in working with indexed data.

---

## ✅ Sample Template:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // Input
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Processing
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Output
    cout << "Sum = " << sum;

    return 0;
}
```

---

> 💡 *“Arrays give us structure, strings give us expression. Master both to write meaningful logic.”*
