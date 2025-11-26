#ifndef _sun_nio_cs_ext_MSISO2022JP$CoderHolder_h_
#define _sun_nio_cs_ext_MSISO2022JP$CoderHolder_h_
//$ class sun.nio.cs.ext.MSISO2022JP$CoderHolder
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

class MSISO2022JP$CoderHolder : public ::java::lang::Object {
	$class(MSISO2022JP$CoderHolder, 0, ::java::lang::Object)
public:
	MSISO2022JP$CoderHolder();
	void init$();
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0208;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MSISO2022JP$CoderHolder_h_