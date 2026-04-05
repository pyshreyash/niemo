#pragma once
#include "op.hpp"
#include "tensor.hpp"

class ReluOp : public Op {
    Tensor* input;

    public:
        ReluOp(Tensor* t) : input(t){}
        void forward() override;
};