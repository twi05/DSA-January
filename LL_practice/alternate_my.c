/*
 Author : Twinshu Parmar
 Sem & Sec : 3CSE[B]
 Date Compiled: 25-Jan-2022

============================================================================
Aim:
Consider a singly linked linear list that stores integers. Write a C program to
rearrange the list nodes into two separate lists — listA and listB such that the
constituent nodes in these lists are
listA: node1, node3, node5 , ...
listB: node2, node4, node6 , ...
You are not supposed to allocate any new nodes.
============================================================================
*/


#include <stdio.h>
#include <stdlib.h>

struct nodeLL
{
    int data;
    struct nodeLL *next;
};

typedef struct nodeLL node;
typedef node *list;

list createSll(list);
void displaySll(list);

int main()
{
    list head = NULL;
    list list1 = NULL;
    list list2 = NULL;
    head = createSll(head);
    int count = 1;
    list curr = head;
    list dummyCurr = curr;
    while (curr != NULL)
    {
        dummyCurr = curr;
        curr = curr->next;
     
        if (count % 2 != 0)
        {
            if (list1 == NULL)
            {
                list1 = dummyCurr;
            }
            else
            {
                list ptr = list1;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = dummyCurr;
            }
        }
        else
        {
            if (list2 == NULL)
            {
                list2 = dummyCurr;
            }
            else
            {
                list ptr = list2;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = dummyCurr;
            }
        }
        dummyCurr->next = NULL;
        count++;
    }

    printf("\nList 1 (For Odd):");
    displaySll(list1);
    printf("\nList 2 (For Even):");
    displaySll(list2);
    return 0;
}

list createSll(list head)
{
    int choice = 1, val;
    list last_node = NULL;
    while (choice)
    {
        list new_node = (list)malloc(sizeof(node));
        printf("Enter value: ");
        scanf("%d", &val);
        new_node->data = val;
        if (head == NULL)
        {
            new_node->next = NULL;
            head = new_node;
            last_node = new_node;
        }
        else
        {
            last_node->next = new_node;
            new_node->next = NULL;
            last_node = new_node;
        }
        printf("Do you want to insert more? 1 for YES & 0 for NO: ");
        scanf("%d", &choice);
    }
    return head;
}

void displaySll(list head)
{
    if (!head)
    {
        printf("LL not intialized");
        return;
    }
    // printf("LL is :");
    list ptr = head;
    printf("  ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}


//======================================================================
// EXECUTION TRAIL [OUTPUT]
//======================================================================
/*
Enter value: 0
Do you want to insert more? 1 for YES & 0 for NO: 0

List 1 (For Odd):  0
List 2 (For Even):LL not intialized


------------------------------------------------------------------
  
Enter value: 1
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 2
Do you want to insert more? 1 for YES & 0 for NO: 
0

List 1 (For Odd):  1
List 2 (For Even):  2

------------------------------------------------------------------
  
Enter value: 1
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 2
Do you want to insert more? 1 for YES & 0 for NO: 
2
Enter value: 3
Do you want to insert more? 1 for YES & 0 for NO: 

3
Enter value: 4
Do you want to insert more? 1 for YES & 0 for NO: 
4
Enter value: 5
Do you want to insert more? 1 for YES & 0 for NO: 
0

List 1 (For Odd):  1 3 5
List 2 (For Even):  2 4



-----------------------------------------------------------------------
Enter value: 1
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 2
Do you want to insert more? 1 for YES & 0 for NO: 

1
Enter value: 3
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 4
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 5
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 6
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 7
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 8
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 9
Do you want to insert more? 1 for YES & 0 for NO: 
1
Enter value: 10
Do you want to insert more? 1 for YES & 0 for NO: 
0

List 1 (For Odd):  1 3 5 7 9
List 2 (For Even):  2 4 6 8 10
*/