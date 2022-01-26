/*
 Author : Twinshu Parmar
 Sem & Sec : 3CSE[B]
 Date Compiled: 25-Jan-2022

============================================================================
Aim:
Consider a singly linked linear list that stores integer data element and write
a C program to insert a node into the list such that the list remains sorted in
increasing sequence of data elements.
Implement insertSortedSll() insert/create the list and displaySLL() to print
list contents appropriately.
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
list insertSortedSll(list);
void displaySll(list);
void sortList(list);
int main()
{

    list head = NULL;
    while (1)
    {

        printf("\n\n\t\tWElcome to LinkedList Program\n");

        printf("\t\t->  1 for CreateSll\n");
        printf("\t\t->  2 for DisplaySll\n");
        printf("\t\t->  3 for Insert in Sorted SLL\n");
        printf("\n\tEnter your Input:   ");
        int usercase;

        scanf("%d", &usercase);
        switch (usercase)
        {
        case 1:
            head = createSll(head);
            break;
        case 2:
            displaySll(head);
            break;
        case 3:
            head = insertSortedSll(head);
            break;

        default:
            printf("Not a valid Input");
            break;
        }
    }
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
    sortList(head);
    return head;
}
void sortList(list head)
{

    list current = head, index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}
void displaySll(list head)
{
    if (!head)
    {
        printf("LL not intialized");
        return;
    }
    printf("LL is :");
    list ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

list insertSortedSll(list head)
{
    int val;
    list new_node = (list)malloc(sizeof(node));
    printf("Enter value you want to insert: ");
    scanf("%d", &val);
    new_node->data = val;
    list prev = NULL;
    list curr = head;

    if (head == NULL)
    {
        new_node->next = NULL;
        head = new_node;
        return head;
    }
    if (head->data > val)
    {
        new_node->next = head;
        head = new_node;
        return head;
    }
    while (curr != NULL && curr->data < val)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = new_node;
    new_node->next = curr;
    printf("Successfully inserted");
    return head;
}

//======================================================================
// EXECUTION TRAIL [OUTPUT]
//======================================================================

/*


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   1
Enter value: 0
Do you want to insert more? 1 for YES & 0 for NO: 0


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2
LL is :0

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: 1
Successfully inserted

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2
LL is :0 1

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: -5


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2
LL is :-5 0 1


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: 10
Successfully inserted

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: 8
Successfully inserted

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2
LL is :-5 0 1 8 10 


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: 500
Successfully inserted

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2
LL is :-5 0 1 8 10 500 

                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   3
Enter value you want to insert: -500


                WElcome to LinkedList Program
                ->  1 for CreateSll
                ->  2 for DisplaySll
                ->  3 for Insert in Sorted SLL

        Enter your Input:   2

*/