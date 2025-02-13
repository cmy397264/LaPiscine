#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	has_porm(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}
int	repeated_characters(char *str)
{
	int	i;
	int	j;
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
void	ft_print_base(int nbr, char *base, int baselen)
{
	char	buffer[50];
	int		i;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	i = 0;
	printf("%d\n", nbr);
	while (nbr > 0)
	{
		buffer[i] = base[nbr % baselen];
		nbr /= baselen;
		i++;
	}
	while (i >= 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (baselen < 2 || repeated_characters(base) || has_porm(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
			nbr = 214783647;
		else
		{
			nbr *= -1;
		}
	}
	ft_print_base(nbr, base, baselen);
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
}
