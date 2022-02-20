#ifndef ANN_LAYER_H
#define ANN_LAYER_H

#include "Basic_layer.h"

class Ann_layer: public Basic_layer
{
private:
    double alfa;
    double** weights;
    int threads;
    
    void random_generate_weights();
    void load_stored_weights();
public:
    Ann_layer(int, int, int, int, double, int);
    void set_out_array();
    void layerFP();
    void layerBP();
    ~Ann_layer();
};



#endif //ANN_LAYER_H