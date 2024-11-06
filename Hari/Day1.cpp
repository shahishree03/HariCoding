//Queue – Linked List Implementation
#include <bits/stdc++.h>

class Node{
  public:  
   Node* next;
   int data;
   Node(int data)
   {
       this->data=data;
       this->next= nullptr;
   }
};
class Queue
{
   Node *front, *rear;

  public:
  Queue() {front = rear= nullptr;}
  bool isEmpty()
  {
      return front==nullptr?true:false;
  }
  
  void enqueue(int newdata)
  {
      Node* newnode=new Node(newdata);
      if(this->isEmpty())
      {
         front  = rear = newnode;
         return;
      }
      rear->next = newnode;
      rear = newnode;
      
  }
  
  void dequeu()
  {
      if(this->isEmpty())
      {
          std::cout<<"Queue underunflow"<<std::endl;
      }
      Node* temp = front;
      front= front->next;
      if(front==nullptr) rear=nullptr;
      
      delete temp;
      
  }
  
  int getFront()
  {
     if(this->isEmpty()){
         std::cout<<"Queue empty"<<std::endl;
         return 0;
     } 
     return front->data;
  }
  
  int getRear() {

        if (this->isEmpty()) {
            std::cout << "Queue is empty\n";
            return INT_MIN;
        }
      
        return rear->data;
    }
};
int main()
{
    Queue q;

    // Enqueue elements into the queue
    q.enqueue(10);
    q.enqueue(20);

    // Display the front and rear elements of the queue
    std::cout << "Queue Front: " << q.getFront() << std::endl;
    std::cout << "Queue Rear: " << q.getRear() << std::endl;

    // Dequeue elements from the queue
    q.dequeu();
    q.dequeu();
    // Enqueue more elements into the queue
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Dequeue an element from the queue
    q.dequeu();
    // Display the front and rear elements of the queue
    std::cout << "Queue Front: " << q.getFront() << std::endl;
    std::cout << "Queue Rear: " << q.getRear() << std::endl;

}
