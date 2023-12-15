// Singly Linked List (Insertion and Deletion)

#include<iostream>
using namespace std;

class Node
{
public:
    int val; // value
    Node* next = NULL; // next address
    
//constructor
    Node(int val) 
    {
        this->val = val;
    }
};


class Singly_Linked_List
{
public:
    Node* tail=NULL; //initially
    Node* head=NULL; //initially

    void insert_tail(int val)
    {
        if(head==NULL) // no tail 
        {
            head = tail = new Node(val);
            return;
        }
        tail = tail->next = new Node(val);
    }

    void insert_head(int val)
    {
        if(head==NULL) // no head
        {
            head = tail = new Node(val);
            return;
        }
        Node* tmp = head; //old head
        head = new Node(val); //new head
        head->next = tmp;
    }

    void insert_at(int index, int val)
    {
        if(head == NULL)
        {
            cout<<"Empty List!\n";
            return;
        }
        if(index == 0) // head
        {
            insert_head(val);
            return;
        }
        Node* tmp = head;
        for(int i=1; i<index; i++) // (index-1) iterations
        {
            tmp = tmp->next;
            if(tmp == NULL)
            {
                cout<<"Invalid index!\n";
                return;
            }
        }
        Node* a = new Node(val);
        a->next = tmp->next;
        tmp->next = a;
    }

    void delete_head()
    {
        if(head == NULL) // no head
        {
            cout<<"List is Empty!\n";
            return;
        }
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    void delete_tail()
    {
        if(head == NULL)
        {
            cout<<"Empty List!\n";
            return;
        }
        Node* tmp = head;
        while(tmp->next->next != NULL)
        {   
            tmp = tmp->next;
        }
        Node* a = tmp->next;
        tmp->next = NULL;
        delete a;
    }

    void delete_at(int index)
    {
        if(head == NULL) // no head
        {
            cout<<"empty!\n";
            return;
        }
        if(index == 0)
        {
            delete_head();
            return;
        }
        Node* tmp = head;
        for(int i=1; i<index; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL || tmp->next == NULL) //******
            {
                cout<<"Invalid index!\n";
                return;
            }
        }
        Node* a = tmp->next;
        tmp->next = tmp->next->next;
        delete a;
    }
    
    int search_for(int s) //linear search
    {
        int count = 0;
        Node* tmp = head;
        while(tmp != NULL)
        {
            count++;
            if(tmp->val == s)
            {
                return count;
            }
            tmp = tmp->next;
        }
        return -1;
    }

    void sort_list() //selection sort
    {
        if(head == NULL) return; //empty list

        Node* i = head;
        while(i->next != NULL)
        {
            Node* mn = i; //initial min
            Node* j = i->next;
            while(j != NULL)
            {
                if(mn->val > j->val)
                    mn = j;

                j = j->next;
            }
            if(i != mn)
            {
            //swap
                int tmp = i->val;
                i->val = mn->val;
                mn->val = tmp;
            }
            i = i->next;
        }
    }

    void print()
    {
        if(head == NULL) 
        {
            cout<<"Empty!\n";
            return;
        }
        Node* tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }

    void delete_list()
    {
        while(head != NULL)
        {
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

}; //class Singly_Linked_List


int main()
{
    Singly_Linked_List sll; // object

    while(true)
    {
        cout<<"\n\n1. insert at tail\n";
        cout<<"2. insert at head\n";
        cout<<"3. insert at index\n";
        cout<<"4. delete head\n";
        cout<<"5. delete from index\n";
        cout<<"6. delete tail\n";
        cout<<"7. print list\n";
        cout<<"8. search for\n";
        cout<<"9. sort list\n";
        cout<<"10. delete list\n";
        cout<<"press any key to end\n";

        int command; 
        cout<<"\nEnter option: "; cin>>command;
        if(command == 1)
        {
            int x; 
            cout<<"Val = "; cin>>x;
            sll.insert_tail(x);
        }
        else if(command == 2)
        {
            int x; 
            cout<<"Val = "; cin>>x;
            sll.insert_head(x);
        }
        else if(command == 3)
        {
            int i,x; 
            cout<<"Index: "; cin>>i;
            cout<<"Val = "; cin>>x;
            sll.insert_at(i,x);
        }
        else if(command == 4)
        {
            sll.delete_head();
        }
        else if(command == 5)
        {
            int i; 
            cout<<"Index: "; cin>>i;
            sll.delete_at(i);
        }
        else if(command == 6)
        {
            sll.delete_tail();
        }
        else if(command == 7)
        {
            cout<<"\nList: ";
            sll.print();
        }
        else if(command == 8)
        {
            int s;
            cout<<"Search for: "; cin>>s;
            int pos = sll.search_for(s);
            if(pos != -1)
            {
                cout<<"Found at position: "<<pos<<endl;
            }
            else
            {
                cout<<"Not Found!\n";
            }
        }
        else if(command == 9)
        {
            sll.sort_list();
        }
        else if(command == 10)
        {
            sll.delete_list();
        }
        else
        {
            cout<<"\nEnd\n";
            break;
        }
    }

return 0;
}
