#include "relu_op.hpp"

void ReluOp::forward() {
    for (int i=0; i < input->size; i++){
        if (input->data[i] < 0) {
            input->data[i] = 0;
        }
    }
}