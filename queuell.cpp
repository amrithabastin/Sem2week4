include"LL.cpp"

class queue{
	public:
	Node* front;
	Node* end;
	LinkedList l1;
	
	//Constructor
	queue(){
		end=l1.head;
		front=l1.tail;
	}

	//add at
	void enqueue(int value){
		//Use insertAt from LL
		l1.insertAt(1,value);
		//Update front and end
		end=l1.head;
		front=l1.tail;

	}

	//Front remve
	void dequeue(){
		l1.del();
		//frmat
		end=l1.head;
		front=l1.tail;
	}

	// MT
	bool isEmpty(){
		if(end == NULL){return true;}
		return false;
	}

	//sizeof
	void size(){
		l1.countItems();
	}

	//Display
	void display(){
		l1.display();
	}

	//End element
	void enddisp(){
		cout << "The head is " <<l1.head->data << endl;
	}

};
