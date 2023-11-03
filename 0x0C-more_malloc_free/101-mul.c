#include <stdio.h>
#include <stdlib.h>
/**
 * add - addition of parcial products
 * @p: parcial product
 * @bm: big malloc
 * @sb: size of big malloc - 1
 * @sp: size of parcial product - 1
  */
void add(char *p, char *bm, int sb, int sp)
{
	int pos = sp, x = 0, y = 0, car = 0, res = 0;
	int cont = sp, aux = 0;

	for (; cont >=  0; cont--, sb--, pos--)
	{
		x = *(p + pos) - '0';
		y = *(bm + sb) - '0';
		res = (x + y) + car;
		car = res / 10;
		res = (res % 10) + '0';
		*(bm + sb) = res;
	}
	res = 0;
	for (aux = sb - 1; aux >= 0; aux--)
	{
		x = *(bm + aux) - '0';
		x += x + car;
		car = x / 10;
		x = (x % 10) + '0';
		*(bm + aux) = x;
	}
}
/**
 * setiar - fill the pointer with 0
 * @s: pointer
 * @x: size of pointer
 */
void setiar(char *s, int x)
{
	int sb;

	for (sb = 0; sb < x; sb++)
		s[sb] = '0';
}
/**
 * parcial - give the parcial malloc
 * @x: size one
 * Return: parcial malloc
 */
char *parcial(int x)
{
	int sb;
	char *p;

	p = malloc(x);
	if (!p)
		return (NULL);
	for (sb = 0; sb < x; sb++)
		p[sb] = '0';
	return (p);
}
/**
 * grande - give big malloc
 * @x: size one
 * @y: size two
 * Return: malloc
 */
char *grande(int x, int y)
{
	int sb;
	char *p;

	p = malloc(x + y);
	if (!p)
		return (NULL);
	for (sb = 0; sb < x + y; sb++)
		p[sb] = '0';
	return (p);
}
/**
 * tama - give the size
 * @s: string of numbers
 * Return: size
 */
int tama(char *s)
{
	int sb = 0;

	while (s[sb] != '\0')
	{
		sb++;
	}
	return (sb);
}
/**
 * Perror - print Error with putchar.
 * Return: Always 0.
 */
void Perror(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * numero - check if strings have only numbers.
 * @s: string 1
 * @x: string 2
 * Return: Always 1 if not or 0 if only has number.
 */
void numero(char *s, char *x)
{
	int sb = 0, aux = 0;

	while (s[sb] != '\0')
	{
		if (!(s[sb] >= '0' && s[sb] <= '9'))
		{
			aux = 1;
			break;
		}
		sb++;
	}
	sb = 0;
	while (x[sb] != '\0')
	{
		if (!(x[sb] >= '0' && x[sb] <= '9'))
		{
			aux = 1;
			break;
		}
		sb++;
	}
	if (aux == 1)
		Perror();
	if (*s == '0' || *x == '0')
	{
		_putchar('0');
		_putchar('\n');
		exit(0);
	}
}
/**
 * impresion - print the pointer
 * @s: string.
 * @x: size of string
 */
void impresion(char *s, int x)
{
	int sb;

	for (sb = 0; sb < x; sb++)
	{
		if (!(s[0] == '0' && sb == 0))
			_putchar(s[sb]);
	}
	_putchar('\n');
}
/**
 * main - check the code for Holberton School students.
 * @argv: array of pointers store the arguments
 * @argc: quantity of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int k1, k2, k3, x = 0, y = 0, j = 0, aux = 0, car, g, ind;
	char *bm, *p, *size1, *size2;

	if (argc != 3)
		Perror();
	else
	{ numero(argv[1], argv[2]);
		k1 = tama(argv[1]);
		k2 = tama(argv[2]);
		ind = k1 + k2;
		bm = grande(k1, k2);
		if (k1 >= k2)
		{ size1 = argv[1];
			size2 = argv[2];
			y = k1 - 1;
			x = k2 - 1;
			k3 = k1 + 1; }
		else
		{ size1 = argv[2];
			size2 = argv[1];
			y = k2 - 1;
			x = k1 - 1;
			k3 = k2 + 1; }
		g = y;
		p = parcial(k3);
		j = y + 1;
		for (; x >= 0; x--, ind--)
		{ car = 0;
			y = g;
			j = g + 1;
			setiar(p, k3);
			for (; y >= 0; y--, j--)
			{ aux = ((size2[x] - '0') * (size1[y] - '0'));
				aux = aux + car;
				p[j] = ((aux % 10) + '0');
				car = aux / 10;	}
			p[j] = (car + '0');
			add(p, bm, (ind - 1), (k3 - 1)); }
		impresion(bm, (k1 + k2)); }
	return (0);
}
