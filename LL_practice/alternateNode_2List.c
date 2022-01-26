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
// list alternate(list,list);

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
        printf("yes");
        if (count % 2 != 0)
        {
            if (list1 == NULL)
            {
                list1 = dummyCurr;
            }
            list ptr = list1;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = dummyCurr;
            printf("Im in ODD");
        }
        else
        {
            if (list2 == NULL)
            {
                list2 = dummyCurr;
            }
            list ptr = list2;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = dummyCurr;
            printf("Im in Even");
        }
        dummyCurr->next = NULL;
        count++;
    }

    printf("\nList 1:\n");
    displaySll(list1);
    printf("\nList 2:\n");
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
    printf("LL is :");
    list ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
