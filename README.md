# BASIC-C-LANGUAGE-TASKS-USING-LOOPS-AND-CONDITIONS
This repository contains some logical building c++ tasks that will be you understand the syntax and logic and improve your coding skills on c++

If you have any queries, feel free to email me at [muhammadalihashim514@gmail.com](mailto:muhammadalihashim514@gmail.com) or [i220554@nu.edu.pk](mailto:i220554@nu.edu.pk).

Feel free to connect with me on [LinkedIn](https://www.linkedin.com/in/muhammad-ali-hashim-5115882b4) to stay in touch and network.

## Question 1:  

You will design the architecture below:
**YOU CAN SEE architecture.png file in this repsoitory**

Each Circle represents a variable that will be flagged as `true` or `false`. You need to:
1. Ask the user to flag which variable is `true`, and others will be marked `false`.
2. Convert the variable index `0-9` into its binary and mark the layer 2 variables with the binary number. Layer 2 will have 4 Circles, meaning four variables.
   
   For example, if 9 is marked, its binary is `1001`, so layer 2 variables 1 and 4 will be marked as `1` (true), and variables 2 and 3 will be marked as `0` (false).
3. Use the switches to implement which variables in Layer 2 are `True` and `False` to mark Layer 3's only variable with the value of the index variable that was turned on.

YOU CAN SEE 

## Question 2:  

You have to implement the following pattern using **for loops** and **if-else statements**. You cannot hardcode the pattern.

- Ask the user for a **scale factor** to scale the pattern.
- Values from 1 to 2 can be used:
  - 1 produces the same pattern.
  - 1.5 produces a 50% larger pattern.
  - 2 produces double the pattern size.

Your code should handle all input checks and ensure the pattern is generated generically.
**YOU CAN SEE rocket.png file in this repsoitory**

---

## Question 3:  

Develop a restaurant menu of your choice. The menu must have at least **20 items**. The user can order a maximum of **6 items** from the menu.

1. Ask for the user's name and contact number.
2. Ask for the items the user wants to purchase and whether they want more items.
3. Ask for the **quantity** of each item.
4. At the end, generate a **bill** showing:
   - Item name, quantity, and total cost.
   - Add **GST (12%)** to the total.

**Bill Example**:

|Name Qty Total | |…….. ….. ……. | |…….. ….. ……. | |…….. ….. ……. | |…….. ….. ……. | |…….. ….. ……. | |…….. ….. ……. | | | | Total Qty: …….. | | Total Amount: …….. | | GST: …….. | | Total: …….. |


---

## Question 4:  
**Marks**: 10

Write a C++ program to convert a **decimal number** to its **hexadecimal** and **octal** equivalents.  
- You are only allowed to use **ternary operators** (no if-else or switch statements).
  
**Example**:
Decimal = 20
Hexadecimal = 14
Octal = 24


---

## Question 5:  

Write a C++ program that:
- Takes a **sentence** as input and finds all possible **subwords** (either in reverse or normal order).
- It should also count the **number of words**, **special characters**, and **characters** in the sentence.

**Example**:

Sentence: This is a good assignment everyone can do this good assignment siht.
Subword: This
Number of times subword found: 3
Number of words: 12
Number of characters: 68
Number of special characters: 1


---

## Question 6:  

Write code to generate the following pattern, allowing the user to input the **largest number** and the **number of diamonds**:

**Example**:
Number of Diamonds: 2
Largest number: 5

**YOU CAN SEE diamond.png file in this repsoitory**



---

## Question 7:  
**Marks**: 25

Implement encryption of a **sentence/word** of **x length**. The length of the sentence must not exceed **6 characters**. Keep asking for input until a valid input is received.

- Encrypt the sentence using each character's **ASCII value**, separating each ASCII code by your **roll number**.

**Example**:
Roll number: 1765
Sentence: SUPER_
Encrypted: 83 1 85 7 80 6 69 5 82 1 95


---

## Question 8:  
**Marks**: 25

Now implement **decryption** for the previous algorithm.  
- Separate the **roll number separators** from the ASCII values and convert them back into the original word.
- Show both the **decrypted word** and the **roll number**.

**Example**:
Encrypted: 83 1 85 7 80 6 69 5 82 1 95
Decrypted: SUPER_
Roll number: 1765
