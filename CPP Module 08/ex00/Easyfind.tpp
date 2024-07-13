#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template <typename T>
void easyfind(T &type, int i)
{
	typename T::iterator itrator = std::find(type.begin(), type.end(), i);

	if (itrator != type.end())
	{
		std::cout << "The Value is Found :" << i << std::endl;
	}
	else
		throw std::runtime_error("The Value Not Found\n");
};

#endif
