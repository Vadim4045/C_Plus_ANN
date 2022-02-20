#ifndef _BASIC_LAYER_H
#define _BASIC_LAYER_H

#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>

class Basic_layer
{
    int in_rows;
    int in_columns;
    int out_rows;
    int out_columns;
    double* in_arr;
    double* out_arr;

public:
 
    Basic_layer(int, int, int, int);
    void set_in_rows(int);
    void set_in_columns(int);
    void set_out_rows(int);
    void set_out_columns(int);
    int get_in_rows();
    int get_in_columns();
    int get_out_rows();
    int get_out_columns();
    void set_in_arrey(double* arr);
    virtual void set_out_array();
    virtual void layerFP();
    virtual void layerBP();
    ~Basic_layer();
};

#endif //_BASIC_LAYER_H