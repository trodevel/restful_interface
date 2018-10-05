/*

String Helper. Provides to_string() function.

Copyright (C) 2014 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 9770 $ $Date:: 2018-10-04 #$ $Author: serge $

#include "str_helper.h"             // self

#include <map>

namespace restful_interface {

#define TUPLE_VAL_STR(_x_)  _x_,#_x_
#define TUPLE_STR_VAL(_x_)  #_x_,_x_


const std::string & StrHelper::to_string( const method_type_e s )
{
    typedef method_type_e Type;
    static const std::map< Type, std::string > m =
    {
        { Type:: TUPLE_VAL_STR( UNDEF ) },
        { Type:: TUPLE_VAL_STR( GET ) },
        { Type:: TUPLE_VAL_STR( HEAD ) },
        { Type:: TUPLE_VAL_STR( POST ) },
        { Type:: TUPLE_VAL_STR( PUT ) },
        { Type:: TUPLE_VAL_STR( DELETE ) },
        { Type:: TUPLE_VAL_STR( CONNECT ) },
        { Type:: TUPLE_VAL_STR( OPTIONS ) },
        { Type:: TUPLE_VAL_STR( TRACE ) },
        { Type:: TUPLE_VAL_STR( PATCH ) },
    };

    auto it = m.find( s );

    static const std::string undef( "undef" );

    if( it == m.end() )
        return undef;

    return it->second;
}

} // namespace restful_interface

