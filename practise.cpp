#include <iostream>
using namespace std;
class Node;
class List{
	Node *head;
	Node *tail;
	public:
		List(Node *h=0):head(h),tail(h){
		};
		void append(Node *p);
		void display();
		
};
class Node{
	int info;
	Node *next;
	public:
		Node(int d):info(d),next(0){
		};
		friend void List::display();
		friend void List::append(Node *);
};

void List::append(Node *p){
	if(!head){
		head=tail=p;
		
	}
	else{
		tail->next=p;
		tail=tail->next;
	}
}

void List::display(){
	Node *t=head;
	while(t){
		cout<<t->info<<endl;
		t=t->next;
	}
}
int main() {
List l; // Init null list
Node n1(1), n2(2), n3(3); // Few nodes
l.append(&n1); // Add nodes to list
l.append(&n2);
l.append(&n3);
l.display(); // Show list
return 0;
}
