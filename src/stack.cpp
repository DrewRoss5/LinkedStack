#include "stack.h"

using namespace stack;

// node methods
Node::Node(float value){
    value_ = value;
}

// updates the next node and inherits the next node's previous node
void Node::setNext(Node* next){
    next_ = next;
    if (next)
        next_->setPrev(this);
}

// updates the previous node and inherits the previous node's next node
void Node::setPrev(Node* prev){
    prev_ = prev;
}

// updates the node's value
void Node::setValue(float value){
    value_ = value;
}

// creates a deep copy of the stack
Stack Stack::copy(){
    Stack stack;
    Node *current = head_;
    while(current){
        stack.push(current->value());
        current = current->next();
    }
    return stack;
}

// append a new node of a given value on the stack
void Stack::push(float value){
    size_++;
    if (head_){
        Node* tmp = tail_;
        tail_ = new Node(value);
        if (tmp)
            tmp->setNext(tail_);
        else
            head_->setNext(tail_);
    }
    else{
        head_ = new Node(value);
    }
}

// pop the tail from the top of the stack and delete it
float Stack::pop(){
    size_--;
    Node* tmp = tail_;
    float val = tail_->value();
    if(tail_->prev()){
        tail_ = tail_->prev();
        tail_->setNext(nullptr);
    }
    delete tmp;
    return val;

}

// returns if the node is empty
bool Stack::isEmpty(){
    return size_ == 0;
}

