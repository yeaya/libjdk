#ifndef _sun_nio_cs_ext_MacHebrew$Holder_h_
#define _sun_nio_cs_ext_MacHebrew$Holder_h_
//$ class sun.nio.cs.ext.MacHebrew$Holder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class MacHebrew$Holder : public ::java::lang::Object {
	$class(MacHebrew$Holder, 0, ::java::lang::Object)
public:
	MacHebrew$Holder();
	void init$();
	static $String* b2cTable;
	static $chars* b2c;
	static $chars* c2b;
	static $chars* c2bIndex;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MacHebrew$Holder_h_