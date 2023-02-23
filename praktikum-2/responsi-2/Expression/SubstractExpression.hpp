#ifndef _SUBSTRACT_EXPRESSION_HPP
#define _SUBSTRACT_EXPRESSION_HPP

#include "Expression.hpp"

class SubstractExpression : public BinaryExpression {
    public:
        SubstractExpression(Expression*, Expression*);
        int solve();
};

#endif