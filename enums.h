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

// $Revision: 9771 $ $Date:: 2018-10-04 #$ $Author: serge $

#ifndef RESTFUL_INTERFACE__ENUMS_H
#define RESTFUL_INTERFACE__ENUMS_H

namespace restful_interface {

// https://en.wikipedia.org/wiki/HTTP_method#Summary_table

enum class method_type_e
{
    UNDEF   = 0,
    GET,
    HEAD,
    POST,
    PUT,
    DELETE,
    CONNECT,
    OPTIONS,
    TRACE,
    PATCH
};

} // namespace restful_interface

#endif // RESTFUL_INTERFACE__ENUMS_H

