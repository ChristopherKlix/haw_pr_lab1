# HAW PR Lab 1

See `main.c` for correct solution to the PSET 1.

This solution follows a 'best practice' approach and does more than would be needed to satisfy the PSET 1 prompt.

## Methods

The execution of the solution is divided into 3 methods.

1. The `int main(void) {...}` executes the core body of the program in form of a `do-while` loop that calls the `int ask_question(void) {...}` method.

1. `int ask_question(void) {...}` is a method that is called by `int main(void) {...}` and prompts the user for the **main question**, checks the input, and ultimately returns the user input `int i` to `int main(void) {...}`.
   In case of correct user input, this method invokes the third method `void surprise(void) {...}`.

1. `void surprise(void) {...}` is a method consisting solely of side-effects and therefore serves as an UI.

### Structure

```c
int main(void)
{
    ...
    do
    {
        ...
        int answer = ask_question() // --> might invoke surprise() as a side-effect
        ...
    }
    while (...)
    ...

}
```
