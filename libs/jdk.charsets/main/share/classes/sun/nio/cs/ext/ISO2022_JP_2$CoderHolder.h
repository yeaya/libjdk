#ifndef _sun_nio_cs_ext_ISO2022_JP_2$CoderHolder_h_
#define _sun_nio_cs_ext_ISO2022_JP_2$CoderHolder_h_
//$ class sun.nio.cs.ext.ISO2022_JP_2$CoderHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace cs {
			class DoubleByte$Decoder;
			class DoubleByte$Encoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_JP_2$CoderHolder : public ::java::lang::Object {
	$class(ISO2022_JP_2$CoderHolder, 0, ::java::lang::Object)
public:
	ISO2022_JP_2$CoderHolder();
	void init$();
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0212;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0212;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_JP_2$CoderHolder_h_