#include "Serializer.hpp"

int main ()
{
    Data *data = new Data();
    data->str = "yeyey";
    data->num = 42;
    
    std::cout << "---> Original Data Ptr <---" << std::endl;
    std::cout << "data ->" << data << std::endl;
    std::cout << "data.str ->" << data->str << std::endl;
    std::cout << "data.num ->" << data->num << std::endl << std::endl;
    

    Serializer serl;
    uintptr_t ptrValue = serl.serialize(data);

    std::cout << "--> Int Ptr Conversion <---" << std::endl;
    std::cout << "ptr ->" << ptrValue << std::endl << std::endl;

    Data* test;

    test = serl.deserialize(ptrValue);
    
    std::cout << "--> Desirialized Data Ptr <---" << std::endl;
    std::cout << "test ->" << test << std::endl;
    std::cout << "test.str ->" << test->str << std::endl;
    std::cout << "test.num ->" << test->num << std::endl << std::endl;
    std::cout << "--> Original Data Ptr <---" << std::endl;
    std::cout << "data ->" << data << std::endl;
    std::cout << "data.str ->" << data->str << std::endl;
    std::cout << "data.num ->" << data->num << std::endl << std::endl;
    
    delete data;
}