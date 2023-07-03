#include <iostream>

int main(void)
{
	std::string     stringVAR = "HI THIS IS BRAIN";
	std::string     *stringPTR = &stringVAR;
	std::string     &stringREF = stringVAR;

	std::cout << "Memory adress of stringVAR : " << &stringVAR << std::endl;
	std::cout << "Memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF : " << &stringREF << std::endl;
	
	//std::cout << "Memory adress of stringPTR : " << &stringPTR << std::endl;

	std::cout << "value of stringVAR : " << stringVAR << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;

}