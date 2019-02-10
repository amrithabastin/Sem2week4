#include "LL.cpp"

class stackLL{
	public:
	Node* top;
	LinkedList l1;
	
	//Constructor
	stackLL(){
		top=l1.head;
	}

	//Functions
	// addfrom above
	void push(int value){
		//insertAt(int pos, int value)
		l1.insertAt(1,value);
		// Top = new_head
		top = l1.head;
	}

	//delete from above
	void pop(){
		//void deleteAt(int pos)
		l1.deleteAt(1);
		//top = new_head
		top = l1.head;
	}

	//MT  not
	bool isEmpty(){
		if(top == NULL){return true;}
		return false;
	}

	//size of
	void size(){
		//Use countItems
		l1.countItems();
	}

	//top most element
	void topDisplay(){
		cout << "The top is " << l1.head->data << endl;
	}

	//  display
	void display(){
		l1.display();
	}
};
