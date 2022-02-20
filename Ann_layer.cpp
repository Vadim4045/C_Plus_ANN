#include "Ann_layer.h"

Ann_layer::Ann_layer(int in_rows, int in_columns, int out_rows, int out_columns, double alfa, int threads)
:Basic_layer(in_rows, in_columns, out_rows, out_columns)
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