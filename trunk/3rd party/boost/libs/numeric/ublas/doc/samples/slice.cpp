//
//  Copyright (c) 2000-2002
//  Joerg Walter, Mathias Koch
//
//  Permission to use, copy, modify, distribute and sell this software
//  and its documentation for any purpose is hereby granted without fee,
//  provided that the above copyright notice appear in all copies and
//  that both that copyright notice and this permission notice appear
//  in supporting documentation.  The authors make no representations
//  about the suitability of this software for any purpose.
//  It is provided "as is" without express or implied warranty.
//
//  The authors gratefully acknowledge the support of
//  GeNeSys mbH & Co. KG in producing this work.
//

#include <boost/numeric/ublas/storage.hpp>

int main () {
    using namespace boost::numeric::ublas;
    slice s (0, 1, 3);
    for (unsigned i = 0; i < s.size (); ++ i) {
        std::cout << s (i) << std::endl;
    }
}

