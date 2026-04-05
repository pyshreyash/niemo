#pragma once
#include <vector>
#include "op.hpp"

class Graph {
    std::vector<Op*> ops;
    public:
        void add_op(Op* op){
            ops.push_back(op);
        }

        void run() {
            for (auto op: ops){
                op->forward();
            }
        }
};