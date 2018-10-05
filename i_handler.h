/*

RESTful interface.

Copyright (C) 2018 Sergey Kolevatov

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

// $Revision: 9767 $ $Date:: 2018-10-04 #$ $Author: serge $

#ifndef RESTFUL_INTERFACE_I_HANDLER_H
#define RESTFUL_INTERFACE_I_HANDLER_H

#include <string>               // std::string

#include "enums.h"              // method_type_e

namespace restful_interface {

class IHandler
{
public:

    virtual ~IHandler() {}

    virtual const std::string handle( method_type_e type, const std::string & path, const std::string & body, const std::string & origin ) = 0;
};

} // namespace restful_interface

#endif // RESTFUL_INTERFACE_I_HANDLER_H

