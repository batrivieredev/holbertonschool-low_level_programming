#include <unistd.h>/*** main - Entry point** Return: Always 0 (Success)*/int main(void){	const char *message = "Hello, World\n";	write(1, message, 13);	return (0);}
