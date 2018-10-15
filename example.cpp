#include <iostream>

#include "str_helper.h"

void test_method( const restful_interface::method_type_e m )
{
    std::cout << "method = " << restful_interface::StrHelper::to_string( m ) << "\n";
}

int main()
{
    test_method( restful_interface::method_type_e::GET );
    test_method( restful_interface::method_type_e::PUT );
    test_method( restful_interface::method_type_e::PATCH );
    test_method( restful_interface::method_type_e::POST );
    test_method( restful_interface::method_type_e::DELETE );

    return 0;
}
