#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int eval_tokens_recursive(char*** expression, int *num_tokens) {

    char *token = **expression;
    if (*num_tokens == 0) {
        printf("expecting more tokens.\n");
        exit(1);
    }
    if (*token == '(') { // begin of expression?
        (*expression)++;  // skip opening brace
        (*num_tokens)--;

        // lhs
        int lhs = eval_tokens_recursive(expression, num_tokens);

        // operand
        char operand = ***expression;
        (*expression)++;
        (*num_tokens)--;

        // rhs
        int rhs = eval_tokens_recursive(expression, num_tokens);

        (*expression)++;  // skip closing brace
        (*num_tokens)--;

        switch (operand) {
            case '+':
                return lhs + rhs;
            case '-':
                return lhs - rhs;
            case '*':
                return lhs * rhs;
            case '/':
                return lhs / rhs;
            default:
                return 0;
        }

    } else { // not an expression; must be a numeric token
        int operand;
        if (sscanf(token, "%2d", &operand) != 1) {
            printf("expecting numeric value; cannot parse %s.\n", token);
            exit(1);
        }
        (*expression)++;
        (*num_tokens)--;
        return operand;
    }

}

int eval_tokens(char** expression, int num_tokens) {
    return eval_tokens_recursive(&expression, &num_tokens);
}

int main() {

    char *expressions[] = {"(", "9", "+", "(", "50", "-", "25", ")", ")"};

    int result = eval_tokens(expressions, 9);

    printf("result: %d\n", result);

}
