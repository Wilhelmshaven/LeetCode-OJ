class Queue {
public:
	// Push element x to the back of queue.
	void push(int x) {
		while (!tmp.empty())
		{
			myStack.push(tmp.top());
			tmp.pop();
		}
		myStack.push(x);
	}

	// Removes the element from in front of queue.
	void pop(void) {
		while (!myStack.empty())
		{
			tmp.push(myStack.top());
			myStack.pop();
		}
		tmp.pop();
	}

	// Get the front element.
	int peek(void) {
		while (!myStack.empty())
		{
			tmp.push(myStack.top());
			myStack.pop();
		}
		return tmp.top();
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return myStack.empty() && tmp.empty();
	}
private:
	stack<int> myStack, tmp;
};

//Runtime: 0 ms
//Your runtime beats 1.02% of cpp submissions.