#pragma once
#include "CharNode.h"

class CharStack
{
    CharNode* head;     //pointer to top element of linked list
    int size;           //counts size

public:
    CharStack()
    {
        head = NULL;
        size = 0;
    }
    ~CharStack()
    {

    }
    void push(const char& ch)
    {
        CharNode* pushed = new CharNode(ch);
        pushed->next = head;  //saving the last head adress in pushed->next
        head = pushed; //updating the head to the new pushed element;
        size++; //updating size when pushing elements
    }

    char pop()
    {
        if (!empty()) //checking if the stack is empty to avoid nullptrs
        {
            char ch = head->val; //saves the top/head element value
            CharNode* temp = head; // makes a "temp" where head is located
            head = head->next; //changes head to the next element in the stack
            delete temp; //deletes the temp in which makes head the top again
            size--; //Updates the value of size
            return ch; // this returns the value of the element we popped
        }
        else return 0;
    }

    char top()
    {
       
        if (!empty())
        {
            char ch = head->val;

            return ch;
        }
        else return 0;
    }
    bool empty()
    {
        return size == 0; // returns either true or false;
    }

    //returns size
    int GetSize()
    {
        return size;
    }
};

