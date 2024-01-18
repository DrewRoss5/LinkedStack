#ifndef STACK_H
#define STACK_H 

template<class T>
class Node{
    private:
        T value_;
        Node<T> *next_;
        Node<T> *prev_;
    public:
        Node<T> (T value);
        // setter methods
        void setValue(T value);
        void setNext(Node<T> *next);
        void setPrev(Node<T> *prev);
        // getter methods
        T value() {return value_;}
        Node<T> *next(){return next_;}
        Node<T> *prev(){return prev_;}
};

template<class T>
class Stack{
    private:
        int size_;
        Node<T> *head_;
        Node<T> *tail_;
    public:
        Stack() : size_(0), head_(nullptr), tail_(nullptr) {};
        Stack copy();
        void push(T val);
        T pop();
        void clear();
        bool isEmpty();
        // getter methods
        Node<T> head(){return *head_;}
        T top(){return tail_->value();}
        int size(){return size_;}
        // addition opperators
        Stack<T> operator+(T val);
        void operator+=(T val);

};

#endif
