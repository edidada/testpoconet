/*
 * URITest.h
 *
 *  Created on: Dec 1, 2018
 *      Author: root
 */

#ifndef URITEST_H_
#define URITEST_H_

#include "Poco/URI.h"

using namespace Poco;

class URITest {
public:
	URITest(const URI &  uri);
	virtual ~URITest();
};

#endif /* URITEST_H_ */
