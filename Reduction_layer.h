#ifndef RED_LAYER_H
#define RED_LAYER_H

using namespace std;

#include "Basic_layer.h"

class Reduction_layer: public Basic_layer
{
private:
    int coeficient;
public:
    Reduction_layer(const vector<int>&, int);
    void set_out_array(double*);
    void layerFP();
    void layerBP();
    ~Reduction_layer();
};

#endif //RED_LAYER_H