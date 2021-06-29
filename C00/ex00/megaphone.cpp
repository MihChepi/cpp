#include "iostream"

int		main(int argc, char **argv)
{
	int	n;
	int	i;

	(void)argv;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{	
		n = 0;
		while(argv[++n])
		{
			i = 0;
			while(argv[n][i])
			{
				if(argv[n][i] >= 97 && argv[n][i] <= 122)
					std::cout << (char)(argv[n][i] - 32);
				else
					std::cout << argv[n][i];
				i++;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}