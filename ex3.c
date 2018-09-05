#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node * next
} node;
node * insert_node(node * head, int val){
    node * temp = NULL;

    temp = (node*)malloc(sizeof(node));
    temp->value = val;
    temp->next = NULL;
    if (head == NULL){
        head = temp;
    }
    else{
    node * p = head;
    
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = temp;
    }
    return head;
}
node * delete_node(node * head, int val){
    if ((head->value) == val){
        printf("%d %d", head->value, val);
        head = head->next;
    }
    else{
    node * p = head;
    
    while(p->next!=NULL ){
        if((p->next->value)==val){
            p->next = p->next->next;
        }
        p = p->next;
    }
    }
    return head;
}
void print_list(node * head){
    node * p = head;
    printf("Your list: \n");
    while(p!=NULL){
        printf(" %d", p->value);
        p = p->next;
    }
}
int main(){
    node * head = NULL;
    int n;
    printf(" How many nodes would you like: \n");
    scanf(" %d \n", &n);
    for (int i = 0; i<n; i++){
        int value;
        printf("Enter new value: ");
        scanf("\n %d", &value);
        head = insert_node(head, value);
        
    }
    print_list(head);
    int rem;
    printf("\n Enter the value you need to remove: ");
    scanf("%d ", &rem);
    head = delete_node(head, rem);
    print_list(head);
}