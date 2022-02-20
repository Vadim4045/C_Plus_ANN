#include "Basic_layer.h"

static inline int arrSize(double* arr);

Basic_layer::Basic_layer(const std::vector<int>& p){
    switch (p.size())
    {
        case 4:
            this->set_in_rows(p[3]);
        case 3:
            this->set_in_columns(p[2]);
        case 2:
            this->set_out_rows(p[1]);
        case 1:
            this->set_in_rows(p[0]);
        default:
        break;
    }
}

void Basic_layer::set_in_rows(int x){
    if(x < 0) throw std::runtime_error("In rows out of range");

    this->in_rows = x;
}

void Basic_layer::set_in_columns(int x){
    if(x < 0) throw std::runtime_error("in columns out of range");

    this->in_columns = x;
}

void Basic_layer::set_out_rows(int x){
    if(x < 0) throw std::runtime_error("Out rows out of range");

    this->out_rows = x;
}

void Basic_layer::set_out_columns(int x){
    if(x < 0) throw std::runtime_error("Out columns out of range");

    this->out_columns = x;
}
int Basic_layer::get_in_rows(){
    return this->in_rows;
}

int Basic_layer::get_in_columns(){
    return this->in_columns;
}

int Basic_layer::get_out_rows(){
    return this->out_rows;
}

int Basic_layer::get_out_columns(){
    return this->out_columns;
}

void Basic_layer::set_in_arrey(double* arr){
    if(arrSize(arr) < this->get_in_rows()*this->get_in_columns())
        throw std::runtime_error("Array size not correct");

    this->in_arr = arr;
}

inline int arrSize(double* arr){
    return sizeof(arr)/sizeof(arr[0]);
}