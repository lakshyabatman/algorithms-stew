#include<iostream>
using namespace std;

class Node {
    public:
    Node *next;
    int value;

    Node(int value) {
         this->value = value;
         this->next = NULL;
    }
};
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    Node *HEAD;
    MyLinkedList() {
        this->HEAD =NULL;
    }
    
    void print() {
        Node *temp = this->HEAD;
        while(temp) {
            cout << temp->value << " ";
            temp=temp->next;
        }
        cout <<endl;
    }
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index <0) {
            return -1;
        }
        Node *temp = this->HEAD;
        int i =0;
        while(i<index && temp) {
            temp=temp->next;
            i++;
        }
        if(temp) {
            return temp->value;
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *temp = new Node(val);
        temp->next = this->HEAD;
        this->HEAD = temp;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *temp = new Node(val);
        Node *temp2 = this->HEAD;
        while(temp2->next!= NULL) {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *temp = new Node(val);
        Node *temp1 = this->HEAD;
        if(index >0) {
            int i =0;
            while(i <index-1 && temp1) {
                temp1= temp1->next;
                i++;
            }
            if(temp1) {
                temp->next = temp1->next;
                temp1->next = temp;
            }else {
                this->HEAD = temp;
            }
        }else {
            temp->next = temp1;
            this->HEAD = temp;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        Node *temp = this->HEAD;
        int i =0;
        if(index > 0) {
            while(i<index-1 && temp) {
                temp = temp->next;
                i++;
            }
            if(temp && temp->next) {
            temp->next = temp->next->next;
            }else if(temp) {
                temp->next = NULL;
            }
        }else {
            this->HEAD = temp->next;
        }
        
    }
};

int main(){
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtIndex(0,10);
    obj->print();
    obj->addAtIndex(0,20);
    obj->print();
    obj->addAtIndex(1,30);
    obj->print();
    int param = obj->get(0);
    cout << param <<endl;

}