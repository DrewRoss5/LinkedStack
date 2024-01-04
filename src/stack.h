#ifndef STACK_H
#define STACK_H 

namespace stack{
    class Node{
        private:
            float value_;
            Node *next_;
            Node *prev_;
        public:
            Node() : value_(0), next_(nullptr), prev_(nullptr) {}
            Node(float value);
            // setter methods
            void setValue(float value);
            void setNext(Node *next);
            void setPrev(Node *prev);
            // getter methods
            float value() {return value_;}
            Node *next(){return next_;}
            Node *prev(){return prev_;}

    };

    class Stack{
        private:
            int size_;
            Node *head_;
            Node *tail_;
        public:
            Stack() : size_(0), head_(nullptr), tail_(nullptr) {};
            Stack copy();
            void push(float val);
            float pop();
            bool isEmpty();
            // getter methods
            float top(){return tail_->value();}
            int size(){return size_;}

    };
}

#endif
