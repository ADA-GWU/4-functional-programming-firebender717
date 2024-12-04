[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/cgmKy0RU)


## Reverse List and e-Olymp Problem Solutions  
### Assessment Content

#### Introduction  
This simple project contains solutions for **Option B** of the assignment. The task requires solving a problem using both an imperative and a functional programming languages. The imperative solution is implemented in C++, while the functional solution is written in Haskell.  

#### Problem Description  
The problem involves determining the last remaining element after applying specific elimination rules to a list of numbers from 1 to given value `n`:  
1. Strike out even-indexed elements.  
2. Strike out odd-indexed elements.  
3. Strike out elements whose indices are divisible by 3.  
These steps are repeated in sequence until only one element remains.  

#### Folder Structure  
The project structure:  
```
/ Option B
     / C++
            / main.cpp
     / Haskell
            / main.hs
```

#### Language-Specific Implementations  

##### C++ Implementation  
The C++ solution uses an iterative approach with an array and two variables to simulate the elimination process. The code focuses on efficient array processing, suvh that the the array is not duplicated or recreated, and only two variables are used to keep following the processees on the array instead of creating an index array, just to keep the memory usage low.   

##### Haskell Implementation 
The Haskell solution uses a recursive functional approach using list comprehensions to eliminate elements based on the specified rules.

#### Compilation and Execution  

**C++ Instructions**  
1. Compile the code using `g++`:  
   ```
   cd "./Option B/C++"
   g++ -o main main.cpp
   ```  
2. Run the executable:  
   ```
   ./main
   ```  
3. Input the integer `n` to receive the output.  

**Haskell Instructions**  
1. Compile the code using `ghc`:  
   ```
   cd "./Option B/Haskell"
   ghc -o main main.hs
   ```  
2. Run the executable:  
   ```
   ./main
   ```  
3. Input the integer `n` to receive the output.  

#### Example Usage  

**Input**  
```
42
```  

**Output**  
```
15
```  

#### Notes  
- The imperative C++ solution has higher performance for larger `n` due to its iterative approach.  
- The Haskell solution encounters efficiency challenges for extremely large `n`, especially in one test.
- Finally, C++ solution passes 100% of the tests, but Haskell faills at one.   