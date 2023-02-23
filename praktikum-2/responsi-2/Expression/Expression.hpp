#ifndef _REKENING_HPP
#define _REKENING_HPP

class Expression{
    public:
        Expression(){}
        virtual int solve() = 0;
};

class TerminalExpression : public Expression{
    protected:
        int x;
    public:
        TerminalExpression(int x){
            this->x = x;
        }
        int solve(){
            return this->x;
        }
};

class UnaryExpression : public Expression {
    protected:
        Expression* x;
    public:
        UnaryExpression(Expression* x){
            this->x = x;
        }
        virtual int solve() = 0;
};

class BinaryExpression : public Expression {
    protected:
        Expression* x;
        Expression* y;
    public:
        BinaryExpression(Expression* x, Expression* y){
            this->x = x;
            this->y = y;
        }
        virtual int solve() = 0;
};

#endif