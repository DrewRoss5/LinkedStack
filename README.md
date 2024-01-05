# LinkedStack
A stack data structure implentation that uses a linked list for dynamic memory management made for educational purposes. As of the inital release, this only accepts floats for Nodes.


# API:
## `Node` class:
A single node in the linked list 
### Attributes:
**`private float value_`:**<br>
The value of the node. Can be any float.<br>
**`private Node *next_`:** <br>
A pointer to the next Node on the stack. Assigned as `nullptr` by default.<br>
**`private Node *prev_ `:** <br>
A pointer to the previous Node on the stack. Assigned as `nullptr` by default.<br>
### Public Methods:
**`Node(float value)`:**<br>
Constructs a Node with the next and previous set to  `nullptr` and a value of 0.
**`void setValue(float value)`:**<br>
Sets `value_` to a provided float.<br>
**`void setNext(Node *next)`:**<br>
Sets `next_` to the the provided Node pointer, and sets that node's previous pointer to this node.<br>
**`void setPrev(Node *prev)`:**<br>
Sets `prev _` to the provided Node pointer.<br>
## `Stack` class:
### Attributes:
**`private Node* head_`:**<br>
A pointer to the "head" node of the Linked List, effectively the top of the Stack.<br>
**`private Node* foot_`:**<br>
A pointer to the "foot" node of the Linked List, effectively the bottom of the Stack.<br>
**`private float size_`:**<br>
The number of Nodes in the stack.<br>
### Public Methods:
**`Stack()`:**<br>
Constructs a stack with `head_` and `foot_` assigned to `nullptr` and of size 0.<br>
**`Stack copy()`:**<br>
Creates a deep copy of the stack with independently managed memory. <br>
**``void push(float value)``:**<br>
Constructs a node of the provided value and sets it to the head of the stack.<br>
**`float pop(float value)`:**<br>
Deletes the top node on the stack and returns its value. <br>
**`bool isEmpty()`:**<br>
Returns `true` if there are no Nodes on the stack, otherwise returns `false`.<br>
**`float top()`:**<br>
Returns the value of the top Node on the stack without deleting it.<br>
**`void clear():`**<br>
Deletes all nodes in the stack, freeing the associated memory




