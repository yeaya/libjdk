#ifndef _sun_nio_cs_ext_Big5_Solaris$Holder_h_
#define _sun_nio_cs_ext_Big5_Solaris$Holder_h_
//$ class sun.nio.cs.ext.Big5_Solaris$Holder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class Big5_Solaris$Holder : public ::java::lang::Object {
	$class(Big5_Solaris$Holder, 0, ::java::lang::Object)
public:
	Big5_Solaris$Holder();
	void init$();
	static $Array<char16_t, 2>* b2c;
	static $chars* b2cSB;
	static $chars* c2b;
	static $chars* c2bIndex;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_Big5_Solaris$Holder_h_