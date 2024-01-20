# LinkedStack
A stack data structure implentation that uses a linked list for dynamic memory management made for educational purposes. This program uses templates to allow stacks that use any data type.


# API:
## Node class:
A single node in the linked list, contains a value of type T.
### Attributes:
**private \<T> value_:**<br>
The value of the node. Can be any float.<br>
**private Node\<T> \*next_** <br>
A pointer to the next Node on the stack. Assigned as `nullptr` by default.<br>
**private Node\<T> \*prev_** <br>
A pointer to the previous Node on the stack. Assigned as `nullptr` by default.<br>
### Public Methods:
**Node\<T>(T value):**<br>
Constructs a Node with the next and previous set to  nullptr. And a value of the given parameter
**void setValue(T value):**<br>
Sets value_ to a provided value.<br>
**void setNext(Node<T> *next):**<br>
Sets next_ to the the provided Node pointer, and sets that node's previous pointer to this node.<br>
**void setPrev(Node<T> *prev):**<br>
Sets prev _ to the provided Node pointer.<br>
## Stack class:
A stack comprised of nodes. As with nodes, a stack containw data of type <T>
### Attributes:
**private Node<T>\* head_:**<br>
A pointer to the "head" node of the Linked List, effectively the top of the Stack.<br>
**private Node<T>\* foot_:**<br>
A pointer to the "foot" node of the Linked List, effectively the bottom of the Stack.<br>
**private \<T> size_:**<br>
The number of Nodes in the stack.<br>
### Public Methods:
**Stack():**<br>
Constructs a stack with head_ and foot_ assigned to nullptr and of size 0.<br>
**Stack copy():**<br>
Creates a deep copy of the stack with independently managed memory. <br>
**void push(T value):**<br>
Constructs a node of the provided value and sets it to the head of the stack.<br>
**\<T> pop(T value):**<br>
Deletes the top node on the stack and returns its value. <br>
**bool isEmpty():**<br>
Returns true if there are no Nodes on the stack, otherwise returns false.<br>
**\<T> top():**<br>
Returns the value of the top Node on the stack without deleting it.<br>
**void clear():**<br>
Deletes all nodes in the stack, freeing the associated memory




