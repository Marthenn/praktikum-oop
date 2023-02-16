#ifndef _NEGATIVE_EXPRESSION_HPP
#define _NEGATIVE_EXPRESSION_HPP

#include "Expression.hpp"

class NegativeExpression : public UnaryExpression {
    public:
        NegativeExpression(Expression*);
        int solve();
};

#endif