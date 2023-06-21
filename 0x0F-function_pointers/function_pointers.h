#ifndef CALC
#define CALC
int op_add(int a, int b);
void print_name(char *name, void (*f)(char *));
int op_sub(int a, int b);
int _putchar(char c);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
