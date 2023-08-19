# Doubly Linked List Project

This project aims to teach you about doubly linked lists in the C programming language. By completing this project, you'll gain an understanding of what doubly linked lists are, how to use them, and how to apply your knowledge to practical tasks.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is a doubly linked list.
- How to use doubly linked lists.
- Start to look for the right source of information without too much help.

## Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General
- Allowed editors: vi, vim, emacs.
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5).
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are malloc, free, printf, and exit.
- The prototypes of all your functions should be included in your header file called lists.h.
- Don’t forget to push your header file.
- All your header files should be include guarded.

### Data Structure

Please use this data structure for this project:

```c
/**
* struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
