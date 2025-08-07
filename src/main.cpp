#include "../inc/tmp.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 3)
		{
			std::cerr << "Usage: " << argv[0] << " <port> <password>" << std::endl;
			return (1);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}