#ifndef _sun_nio_cs_ext_MS50220$Holder_h_
#define _sun_nio_cs_ext_MS50220$Holder_h_
//$ class sun.nio.cs.ext.MS50220$Holder
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

class MS50220$Holder : public ::java::lang::Object {
	$class(MS50220$Holder, 0, ::java::lang::Object)
public:
	MS50220$Holder();
	void init$();
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0212;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0208;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0212;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS50220$Holder_h_