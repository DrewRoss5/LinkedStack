#include "stack.h"

// node methods
template<typename T>
Node<T>::Node(T value){
    value_ = value;
}

// updates the next node and inherits the next node's previous node
template<typename T>
void Node<T>::setNext(Node<T>* next){
    next_ = next;
    if (next)
        next_->setPrev(this);
}

// updates the previous node and inherits the previous node's next node
template<typename T>
void Node<T>::setPrev(Node<T>* prev){
    prev_ = prev;
}

// updates the node's value
template<typename T>
void Node<T>::setValue(T value){
    value_ = value;
}

// creates a deep copy of the stack
template<typename T>
Stack<T> Stack<T>::copy(){
    Stack stack;
    Node<T>  *current = head_;
    while(current){
        stack.push(current->value());
        current = current->next();
    }
    return stack;
}

// append a new node of a given value on the stack
template<typename T>
void Stack<T>::push(T value){
    size_++;
    if (head_){
        Node<T> *tmp = tail_;
        tail_ = new Node<T>(value);
        if (tmp)
            tmp->setNext(tail_);
        else
            head_->setNext(tail_);
    }
    else{
        head_ = new Node<T>(value);
    }
}

// pop the tail from the top of the stack and delete it
template<typename T>
T Stack<T>::pop(){
    size_--;
    Node<T>* tmp = tail_;
    float val = tail_->value();
    if(tail_->prev()){
        tail_ = tail_->prev();
        tail_->setNext(nullptr);
    }
    delete tmp;
    return val;
}

// returns if the node is empty
template<typename T>
bool Stack<T>::isEmpty(){
    return size_ == 0;
}

// deletes all nodes in the stack
template<typename T>
void Stack<T>::clear(){
    while (!isEmpty())
    pop();
}

// deconstructor for the class
template<typename T>
Stack<T>::~Stack(){
    Node<T>  *current = head_;
    Node<T>  *tmp = current;
    while(current){
        tmp = current->next();
        delete current;
        current = tmp;
    }
}


// creates a copy of the stack and and pushes the operand onto it
template<typename T>
Stack<T> Stack<T>::operator+(T value){
    Stack tmp = copy();
    tmp.push(value);
    return tmp;
}

// calls the push method with a constructor
template<typename T>
void Stack<T>::operator+=(T value){
    push(value);
}
