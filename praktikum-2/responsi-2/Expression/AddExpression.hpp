#ifndef _ADD_EXPRESSION_HPP_
#define _ADD_EXPRESSION_HPP_

#include "Expression.hpp"

class AddExpression : public BinaryExpression {
    public:
        AddExpression(Expression*, Expression*);
        int solve();
};

#endif