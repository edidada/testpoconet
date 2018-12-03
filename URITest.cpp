/*
 * URITest.cpp
 *
 *  Created on: Dec 1, 2018
 *      Author: edidada
 */

#include "URITest.h"

URITest::URITest(const URI & uri) {
	au=uri.getAuthority();
	host=uri._host;
	path=uri.getPath();
}

URITest::~URITest() {

}

