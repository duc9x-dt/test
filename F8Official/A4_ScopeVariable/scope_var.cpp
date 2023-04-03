#include <iostream> 


int global_var = 1;

int main()
{
	/*
    int main_var = 0;
    std::cout << main_var << std::endl;

    { // Ph?m vi 1
        int scope_var_1 = 1;
        std::cout << scope_var_1 << std::endl;

        {
            std::cout << scope_var_1 << std::endl;
        }
    }

    { // Ph?m vi 2
        int scope_var_2 = 2;
        std::cout << scope_var_2 << std::endl;
        std::cout << scope_var_1 << std::endl; // L?i: scope_var_1 was not declared in this scope
    }

    return 0;
    
    */
    
    
    /*
    int main_var = 0;

    {
        int main_var = 1;
        std::cout << main_var; // 1
    }

    std::cout << main_var; // 0

    return 0;
    */
    
    int global_var = 3;
    
    
    std::cout << "Main scope: " << global_var << std::endl;

    { // Ph?m vi 1
        std::cout << "Scope 1: " << ::global_var << std::endl; // Them dau :: truoc ten bien de lay gia tri o global
    }

    { // Ph?m vi 2
        std::cout << "Scope 2: " << global_var << std::endl;
    }

    return 0;
    
}
