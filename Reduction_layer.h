#ifndef RED_LAYER_H
#define RED_LAYER_H

class Reduction_layer: public Basic_layer
{
private:
    int coeficient;
public:
    Reduction_layer(int);
    void set_out_array();
    void layerFP();
    void layerBP();
    ~Reduction_layer();
};

#endif //RED_LAYER_H