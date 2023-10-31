#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "----> SUBJECT TEST <----" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        std::cout << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        std::cout << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << std::endl << "----> COMPARE MUTANT STACK WITH NORMAL STACK <----" << std::endl;
        std::stack<int> s(mstack);
        std::cout << "Mutant Stack -> " << mstack.top() << std::endl;
        std::cout << "Normal Stack -> " << s.top() << std::endl;
        mstack.pop(); std::cout << "Poping mstack number..." << std::endl;
        s.pop(); std::cout << "Poping stack number..." << std::endl;
        std::cout << "Mutant Stack -> " << mstack.top() << std::endl;
        std::cout << "Normal Stack -> " << s.top() << std::endl;
    }
    {
        std::cout << std::endl << "----> TEMPLATE TEST <----" << std::endl;
        MutantStack<std::string> mStringStack;
        mStringStack.push("Hello");
        mStringStack.push("World");
        mStringStack.push("!!!");

        MutantStack<std::string>::iterator it;
        for (it = mStringStack.begin(); it != mStringStack.end(); ++it)
        {
            std::cout << "mStringStack -> " << *it << std::endl;
        }
    }
    {
        std::cout << std::endl << "----> COPY/ASSIGNMENT TEST <----" << std::endl;
        MutantStack<int> mstack;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);

        MutantStack<int> mstack2(mstack);
        MutantStack<int>::iterator it;
        for (it = mstack2.begin(); it != mstack2.end(); ++it)
        {
            std::cout << "mstack2 -> " << *it << std::endl;
        }
        MutantStack<int> mstack3;
        mstack3 = mstack;
        for (it = mstack3.begin(); it != mstack3.end(); ++it)
        {
            std::cout << "mstack3 -> " << *it << std::endl;
        }
        
    }

}