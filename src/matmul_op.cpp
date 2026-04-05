#include "matmul_op.hpp"

void MatMulOp::forward() {
    int m = A->shape[0];
    int k = A->shape[1];
    int n = B->shape[1];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            float sum = 0;
            for (int p = 0; p < k; p++) {
                sum += A->data[i*k + p] * B->data[p*n + j];
            }
            C->data[i*n + j] = sum;
        }
    }
}