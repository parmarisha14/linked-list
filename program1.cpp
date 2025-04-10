#include<iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
    
        Node(int data) {
            this->data = data;
            next = NULL;
        }
    };
    
    class LinkedList {
    public:
        Node *head;
        int size;
    
        LinkedList() {
            head = NULL;
            size = 0;
        }
    
        void insertPrepend(int data) {
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
            size++;
        }
    
        void insertAppend(int data) {
            Node *newNode = new Node(data);
            if (head==NULL) {
                head=newNode;
            } else {
                Node *current=head;
                while(current->next != NULL) {
                    current = current->next;
                }
                current->next=newNode;
            }
            size++;
        }
    
        void addAtPosition(int index, int data) {
            Node *newNode=new Node(data);
            if (index==0) {
                newNode->next=head;
                head=newNode;
            } else {
                Node *current=head;
                for (int i=0;i<index-1;i++) {
                    current = current->next;
                }
                newNode->next=current->next;
                current->next=newNode;
            }
            size++;
        }
    
        void updateRecords(int index,int element) {
            Node* current=head;
            for (int i=0;i<index;i++) {
                current = current->next;
            }
            current->data=element;
        }
        void deletePrepend(){
            Node*current=head;
            head=head->next;
        }
        void deleteAppend(){
            Node* current = head;
            while (current->next->next != NULL) {
                current = current->next;
            }
             current->next;
            current->next = NULL;
        }
    
        void displayRecords() {
            Node *current = head;
            while (current != NULL) {
                cout << current->data << "  ";
                current = current->next;
            }
            cout << endl;
        }
    };
int main(){
    LinkedList list;
    list.insertPrepend(1);
    list.insertPrepend(2);
    list.insertPrepend(3);
    list.displayRecords();
    list.insertAppend(4);
    list.displayRecords();
    list.addAtPosition(1,5);
    list.displayRecords();
    list.updateRecords(1,45);
    list.displayRecords();
    list.deletePrepend();
    list.displayRecords();
    list.deleteAppend();
    list.displayRecords();
    return 0;
}