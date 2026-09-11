class myArray
{
	private:
		int *arr; // points to the array
		int maxSize; // the capacity
		int nextIndex; // the index of the next available element
	public:
		myArray(int size); // the constructor
		myArray(const myArray& other); // the copy constructor
		~myArray(); // the destructor
		void display(); //display the array
		void add(int val); // add a new value to the end
		void remove(); // remove an item at the end
}
