# COMPILER-DESIGN-BASICS

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : ATHARVA AGRAWAL

"INTERN ID" : CT04DG1361

"DOMAIN" : C PROGRAMMING

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTOSH

##So basically for this project I had to make a program which shows how to implement a singly linked list in C language. The requirements said to do insertion, deletion and traversal operations. I did all of them using basic functions and pointers and malloc. I didn’t add too much extra stuff because it was not mentioned and I wanted to keep it simple to understand. First I made a struct called N, short for Node because I didn’t wanted to type full names every time. It has a integer x and a pointer n which points to the next node. For the start of the list I used h as the head pointer. I know variable names should be clear but I honestly just wanted the code to work first and fix names later but didn’t get time. I made three functions: add() for inserting a value at the end, rem() for deleting a node by value, and show() for displaying all values in the list. In add, I create new node using malloc and attach it to the end of the list. For delete I check if the value is in head and remove it else I loop to find and unlink it. For print, I just go through the list and print each x value. I also added a main menu with 1, 2, 3 and 4 options so user can insert, delete, print or exit.At first I made mistake in delete function where it was not deleting first element properly but later I fixed that by checking if head itself had the value. Also forgot to check if list was empty while printing so added that later. One time program crashed because I didn’t malloc the node correctly, but now it works fine mostly.This kind of linked list program can be used in many real-life situations like when we don’t know the number of elements in advance or in places where insertion and deletion happens often like task managers, memory allocation tracking or in apps that manage records or queues. It’s better than arrays sometimes because you don’t need to resize. Of course this is basic version and there is no error checking for invalid inputs and no memory freeing at the end but since the goal was just to show how it works, I didn’t make it too complex.

#OUTPUT

