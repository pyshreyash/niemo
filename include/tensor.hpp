#pragma once
#include <vector>

class Tensor{
    public:
    std::vector<int> shape;
    float* data;
    int size;

    Tensor(std::vector<int> s);
    ~Tensor();

    float& operator[](int idx);
};