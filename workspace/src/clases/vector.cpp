//
// Created by Jorge Luis Vasquez on 14/04/2020.
//

#include "vector.h"

utec::vector::vector() : capacity_{10}, size_{0} {
    data_ = new int[capacity_];
}

utec::vector::vector(std::size_t n)  {
    capacity_=n;
    size_=0;
    data_ = new int[n];
}

utec::vector::~vector() {
    capacity_ = 10;
    size_ = 0;
    delete [] data_;
}

void utec::vector::add_one() {
    if (size_ + 1 > capacity_) {
        capacity_ *= 2;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_; i++)
            aux[i] = data_[i];
        delete [] data_;
        data_ = aux;
    }
    ++size_;
}

void utec::vector::delete_one() {
    if (size_ - 1 <= capacity_ / 2) {
        capacity_ /= 2;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_ - 1; ++i)
        aux[i] = data_[i];
        delete [] data_;
        data_ = aux;
    }
    --size_;
}

utec::vector::vector(const utec::vector &that) {
     vector(that.capacity_);
     this->data_=that.data_;
     this->size_=that.size_;
}

utec::vector& utec::vector::operator=(const utec::vector &that) {
    if (this != &that)
    {
        delete [] data_;
        capacity_=that.capacity_;
        size_=that.size_;
        data_ = new int[that.capacity_];
        for (size_t i = 0; i < that.size_; ++i)
            data_[i] = that.data_[i];
    }
    return *this;

}

void utec::vector::push_back(int value) {
        add_one();
        this->data_[this->size_-1] = value;
}
void utec::vector::pop_back() {
    if (size_ > 0) {
        delete_one();
    }
}

void utec::vector::add_one_index(int index,int value) {
    if (size_ + 1 > capacity_) {
        //cout<<"entro aqui"<<endl;
        capacity_ *= 2;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_; i++){
            aux[i] = data_[i];
        }

        for (int i =index+1;  i<size_+1; i++) {
             aux[i]=data_[i-1];
        }
        aux[index]=value;
        delete [] data_;
        data_ = aux;
    }else{
        //cout<<"entro alla"<<endl;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_; i++){
            aux[i] = data_[i];
        }
        for (int i =index+1;  i<size_+1; i++) {
            data_[i]=aux[i-1];
        }
        data_[index]=value;
        delete [] aux;

    }
    ++size_;

}

void utec::vector::delete_one_position(int index) {
    if (size_ - 1 <= capacity_ / 2) {
        //cout<<"entro aqui2"<<endl;
        capacity_ /= 2;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_; ++i){
              if(i<index){
                  aux[i] = data_[i];
              }
              if(i>index){
                  aux[i-index] = data_[i];
              }
        }
        delete [] data_;
        data_ = aux;
    }else{
        //cout<<"entro alla2"<<endl;
        int* aux = new int[capacity_];
        for (size_t i = 0; i < size_; i++){
            aux[i] = data_[i];
        }
        for (size_t i = 0; i < size_; ++i){
            if(i<index){
                data_[i] = aux[i];
            }
            if(i>index){
                data_[i-index] = aux[i];
            }
        }
        delete [] aux;
    }
    --size_;
}


void utec::vector::insert(std::size_t index, int value) {
    add_one_index(index,value);
}

void utec::vector::erase(std::size_t index) {
    delete_one_position(index);

}

utec::vector utec::vector::operator+(const utec::vector &that) {
      utec::vector n=vector(capacity_+that.capacity_);
      for(int i=0;i<this->size();i++){
          n.push_back(this->data_[i]);
      }
      for(int i=0;i<that.size_;i++){
          n.push_back(that.data_[i]);
      }
    return  n;
}
