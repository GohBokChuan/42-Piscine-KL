#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write (1, &letter, 1);
		letter --;
	}
}

//-----------End of Code------------

int main()
{
  ft_print_reverse();
  return (0);
}
