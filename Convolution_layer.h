#ifndef CONV_LAYER_H
#define CONV_LAYER_H

using namespace std;

#include "Basic_layer.h"

class Convolution_layer: public Basic_layer
{
private:
    int masks_count;
    int mask_rows;
    int mask_columns;
    double* masks;

    void getMasks();
public:
    Convolution_layer(const vector<int>&);
    void set_out_array();
    void layerFP();
    void layerBP();
    ~Convolution_layer();
};

#endif //CONV_LAYER_H