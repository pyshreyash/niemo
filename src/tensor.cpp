#include "tensor.hpp"


Tensor::Tensor(std::vector<int> s): shape(s){
    size = 1;
    for (int d : s) size *= d;
    data = new float[size];
}

Tensor::~Tensor() {
    delete[] data;
}

float& Tensor::operator[](int idx){
    return data[idx];
}