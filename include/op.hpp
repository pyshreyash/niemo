#pragma once

class Op {
    public:
        virtual void forward() = 0;
        virtual ~Op() {}
};