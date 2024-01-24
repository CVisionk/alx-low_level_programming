/**
  *print_name - prints a name.
  *@name: pointer to name.
  *@f: function pointer.
  *
  *Return: void
  *Author: Collen
  *Date: Jan 24 2024
  */
    void print_name(char *name, void (*f)(char *)){
        f(name);
    }