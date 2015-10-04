class MinStack {
public:
	void push(int x) {
		myStack.push(x);
		if (minStack.empty())minStack.push(x);
		else if (x <= minStack.top())minStack.push(x);
	}

	void pop() {
		if (myStack.top() == minStack.top())minStack.pop();
		myStack.pop();
	}

	int top() {
		tmp = myStack.top();
		return tmp;
	}

	int getMin() {
		tmp = minStack.top();
		return tmp;
	}
private:
	int tmp, p;
	stack<int> myStack, minStack;
};

//Runtime: 28 ms
//Your runtime beats 46.69% of cpp submissions