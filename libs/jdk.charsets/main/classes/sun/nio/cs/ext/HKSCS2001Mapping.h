#ifndef _sun_nio_cs_ext_HKSCS2001Mapping_h_
#define _sun_nio_cs_ext_HKSCS2001Mapping_h_
//$ class sun.nio.cs.ext.HKSCS2001Mapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class HKSCS2001Mapping : public ::java::lang::Object {
	$class(HKSCS2001Mapping, 0, ::java::lang::Object)
public:
	HKSCS2001Mapping();
	void init$();
	static $StringArray* b2cBmpStr;
	static $StringArray* b2cSuppStr;
	static $String* pua;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_HKSCS2001Mapping_h_