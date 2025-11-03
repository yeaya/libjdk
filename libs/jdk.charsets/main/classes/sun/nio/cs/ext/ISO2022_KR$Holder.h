#ifndef _sun_nio_cs_ext_ISO2022_KR$Holder_h_
#define _sun_nio_cs_ext_ISO2022_KR$Holder_h_
//$ class sun.nio.cs.ext.ISO2022_KR$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_KR$Holder : public ::java::lang::Object {
	$class(ISO2022_KR$Holder, 0, ::java::lang::Object)
public:
	ISO2022_KR$Holder();
	void init$();
	static ::java::nio::charset::Charset* ksc5601_cs;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_KR$Holder_h_