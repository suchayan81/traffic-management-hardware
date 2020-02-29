#include <stdio.h>  
   
//Represent a node of singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
//countNodes() will count the nodes present in the list  
int countNodes() {  
    int count = 0;  
    //Node current will point to head  
    struct node *current = head;  
      
    while(current != NULL) {  
        //Increment the count by 1 for each node  
        count++;  
        current = current->next;  
    }  
    return count;  
}  
      
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    //Add nodes to the list  
    addNode(q1);  
    addNode(q2);  
     
    //Displays the nodes present in the list  
    display();  
      
    //Counts the nodes present in the given list  
    printf("Count of nodes present in the list: %d", countNodes());  
   
    return 0;  
}  

const long v1 = D4;//it signifies the number of cars passing through a specific point at certain instant
const long w1= D5;//width of the road
const int v2=D1;
const int w2=D2;
const long t1=5;//here the time is given in seconds
const float t2=2.0; 
void setup()
{
  pinMode(v,OUTPUT);
  pinMode(width,OUTPUT);
  
}
void loop()
{
  vstate1=digitalRead(v1);
  widthstate1=digitalRead(w1);
  vstate2=digitalRead(v2);
  widthstate2=digitalRead(w2);
  int q1=v1/t1;
  int q2 = v2/t2;
  if(q1==q2)
  //we need to print whether the vehicle would pass or not

}



  
  
  
