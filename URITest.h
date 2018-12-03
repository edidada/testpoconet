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
using namespace std;

class URITest {
public:
	string au;
	URITest(const URI &  uri);
	virtual ~URITest();
protected:
	string path;
private:
	string host;
};

#endif /* URITEST_H_ */
