# 📚 Array-Based Linear Queue Implementation in C++

This repository contains a C++ implementation of a fixed-size **Linear Queue** data structure using an array. It adheres to the core **FIFO (First-In, First-Out)** principle and includes robust handling for insertion, deletion, and status checks.

***

## 🏷️ Title of the Experiment
Implementation of an Array-Based Linear Queue Data Structure in C++

***

## 🛠️ Tools Used
* **C++ Compiler:** Any C++ compiler (e.g., GCC/G++).
* **IDE/Editor:** VS Code (Visual Studio Code), or a simple text editor.
* **Online Platforms:** OnlineGDB, Replit, or similar online C++ environments.

***

## 💡 Theory

### Topic Overview: Queue Data Structure
A **Queue** is a linear data structure that follows the **FIFO (First-In, First-Out)** principle. This means the first element added to the queue is the first one to be removed. Operations occur at two ends:
* **Insertion (Enqueue):** Done at the **Rear**.
* **Deletion (Dequeue):** Done at the **Front**.

In the array-based linear implementation, both `front` and `rear` indices are managed to track the first and last element, respectively.

### Algorithms

#### Enqueue Operation (Insertion)
1.  **Check Full:** Check if `rear` equals `size - 1` (the last valid index). If true, display "Queue is full" (Overflow) and return.
2.  **First Element:** If `front` is `-1`, set `front` to `0`.
3.  **Insert:** Increment the `rear` index (`++rear`).
4.  Store the new element at `ar[rear]`.

#### Dequeue Operation (Deletion)
1.  **Check Empty:** Check if `front` is `-1` or if `front > rear`. If true, display "Queue is empty" (Underflow) and return an `ERROR` value.
2.  **Retrieve:** Retrieve the element at `ar[front]`.
3.  **Advance:** Increment the `front` index (`front++`).
4.  **Reset:** If the queue becomes empty after the operation (`front > rear`), reset both `front` and `rear` to `-1`.
5.  Return the retrieved element.

#### Display Operation
1.  **Check Empty:** Check if the queue is empty (`front == -1` or `front > rear`). If true, display "Queue is empty" and return.
2.  **Traverse:** Iterate through the array indices starting from $i=front$ up to $i=rear$.
3.  Print the value at each index `ar[i]`.

***

## 🎯 Conclusion

This implementation provides a clear foundation for managing the **Linear Queue** data structure using arrays. It successfully enforces the FIFO order while demonstrating critical index manipulation for the `front` and `rear` pointers. The inclusion of **Overflow** and **Underflow** checks ensures the program handles boundary conditions gracefully, making it a robust and foundational example for understanding queue mechanics.
