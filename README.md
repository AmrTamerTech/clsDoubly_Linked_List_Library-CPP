# cls_Doubly_Linked_List_Library-CPP
A generic, template-based doubly linked list implementation in C++ supporting insertion, deletion, traversal, reversal, and more. Fully dynamic, memory-safe, and compatible with any data type
# 📌 Doubly Linked List Library (`clsDblLinkedList`) ⚡

A C++ template-based doubly linked list implementation offering essential operations like insertion, deletion, updating, searching, and reversal. Designed to be reusable, efficient, and type-independent using C++ templates. 🚀

---

## 🌟 Project Overview

The `clsDblLinkedList` class is a full-featured **doubly linked list** implementation in modern C++, capable of storing any data type via templates. Nodes are connected **bidirectionally** (forward & backward), enabling flexible manipulation of data structures.

🔧 This library supports:

- Insertion at beginning, end, or after a specific index 🔄  
- Deletion of specific, first, or last nodes ❌  
- Reversal of the entire list order 🔁  
- Value retrieval & update by index 📌  
- Search functionality 🔍  
- Size tracking and memory management 📏  

---

## ✨ Features

### 🔹 Insertion Operations

- `InsertAtBeginning(T value)` → Insert a node at the start  
- `InsertAtEnd(T value)` → Insert at the end  
- `InsertAfter(int index, T value)` → Insert after a specific index

### 🔹 Deletion Operations

- `DeleteNode(T value)` → Delete node by value  
- `DeleteFirstNode()` → Remove the head  
- `DeleteLastNode()` → Remove the tail  
- `Clear()` → Empty the entire list  

### 🔹 Searching & Retrieval

- `GetItem(int index)` → Return value at a specific index  
- `Size()` → Number of nodes  
- `IsEmpty()` → Check if list is empty  
- `PrintList()` → Print values only  
- `PrintListWithConnectNode()` → Pretty print with arrows  
- `PrintListDetails()` → Full node view (Prev/Data/Next)

### 🔹 Modification & Utilities

- `UpdateItem(int index, T newValue)` → Modify a node’s value  
- `Reverse()` → Flip the list order

---

## 🚀 How It Works

### 🔹 Insertion & Deletion

Nodes are dynamically allocated and linked. Each node stores a `T` value and has `Next` and `Prev` pointers to neighboring nodes.

### 🔹 Searching & Indexing

Efficient linear search using:
- `GetNode(index)` → Internal utility to fetch a pointer to a node
- `Find(startNode, value)` → Searches from a given node

### 🔹 Reversal & Traversal

`Reverse()` inverts the list by swapping pointers of all nodes. Traversals use simple `while` loops from the `Head`.

### 🔹 Memory Management

Smart use of dynamic allocation (`new`) and manual deallocation (`delete`) ensures clean memory handling.  
The destructor ensures all nodes are freed when the list goes out of scope.

---

## 📚 Potential Enhancements

- 🧭 Iterator Support: For STL-style traversal  
- 💾 File I/O: Saving/loading list data  
- 🧵 Thread Safety: Support for concurrent operations  
- ⚡ Efficiency Boosts: Optimize GetNode & InsertAfter  

---

## ⚙️ Technologies Used

- 🖥 **Language**: Modern C++  
- 📦 **Templates**: For generic data storage  
- 🔗 **Pointers**: Dynamic memory and linkage  
- ↔ **Doubly Linked List**: Bi-directional node connections  

---

## 🎯 Learning Outcomes

By using or exploring this project, you'll understand:

✅ Templated class design in C++  
✅ Manual memory management  
✅ Core linked list operations (Insert, Delete, Traverse, Reverse)  
✅ Practical use of pointers and structs  

---

## 🚀 Getting Started

### 🔨 How to Run

1. Download or clone the repository.
2. Include `clsDblLinkedList.h` in your project.
3. Create a test file like `main.cpp`:
```cpp
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main() {
    clsDblLinkedList<int> myList;

    myList.InsertAtBeginning(5);
    myList.InsertAtEnd(10);
    myList.InsertAfter(0, 7);

    myList.PrintListWithConnectNode(); // NULL <--> 5 <--> 7 <--> 10 <--> NULL

    return 0;
}
```
4.Compile & Run your C++ program with a standard compiler (e.g., g++ main.cpp -o output).
