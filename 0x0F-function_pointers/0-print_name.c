/**
* print_name - prints a name in a specific format.
* @name: name of the person
* @f: pointer to a function that takes a char pointer and returns void
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
printf("\n");
return (0);
}
