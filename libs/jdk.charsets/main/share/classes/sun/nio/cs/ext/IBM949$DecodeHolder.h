#ifndef _sun_nio_cs_ext_IBM949$DecodeHolder_h_
#define _sun_nio_cs_ext_IBM949$DecodeHolder_h_
//$ class sun.nio.cs.ext.IBM949$DecodeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class IBM949$DecodeHolder : public ::java::lang::Object {
	$class(IBM949$DecodeHolder, 0, ::java::lang::Object)
public:
	IBM949$DecodeHolder();
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

#endif // _sun_nio_cs_ext_IBM949$DecodeHolder_h_