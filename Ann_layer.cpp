#include "Ann_layer.h"

Ann_layer::Ann_layer(const vector<int>& p, double alfa, int threads)
:Basic_layer(p)
{
    if(alfa <0) throw std::runtime_error("Alfa out of range");
    this->alfa=alfa;

    if(alfa <1) throw std::runtime_error("Thread count not correct");
    this->threads = threads;
}

void Ann_layer::set_out_array()
{

}

void Ann_layer::layerFP()
{

}

void Ann_layer::layerBP()
{

}

void Ann_layer::random_generate_weights()
{

}

void Ann_layer::load_stored_weights()
{

}

Ann_layer::~Ann_layer()
{

}