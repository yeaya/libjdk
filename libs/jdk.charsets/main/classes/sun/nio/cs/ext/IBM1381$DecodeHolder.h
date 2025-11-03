#ifndef _sun_nio_cs_ext_IBM1381$DecodeHolder_h_
#define _sun_nio_cs_ext_IBM1381$DecodeHolder_h_
//$ class sun.nio.cs.ext.IBM1381$DecodeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class IBM1381$DecodeHolder : public ::java::lang::Object {
	$class(IBM1381$DecodeHolder, 0, ::java::lang::Object)
public:
	IBM1381$DecodeHolder();
	void init$();
	static $String* b2cSBStr;
	static $StringArray* b2cStr;
	static $Array<char16_t, 2>* b2c;
	static $chars* b2cSB;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_IBM1381$DecodeHolder_h_