#pragma once
#include "tensor.hpp"
#include "op.hpp"

class MatMulOp : public Op {
    Tensor* A;
    Tensor* B;
    Tensor* C;

    public:
        MatMulOp(Tensor* a, Tensor* b, Tensor* c) : A(a), B(b), C(c) {}

        void forward() override;
};