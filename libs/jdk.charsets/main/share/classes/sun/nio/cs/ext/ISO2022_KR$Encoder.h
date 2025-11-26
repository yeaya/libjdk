#ifndef _sun_nio_cs_ext_ISO2022_KR$Encoder_h_
#define _sun_nio_cs_ext_ISO2022_KR$Encoder_h_
//$ class sun.nio.cs.ext.ISO2022_KR$Encoder
//$ extends sun.nio.cs.ext.ISO2022$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>

#pragma push_macro("SOD")
#undef SOD

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

class ISO2022_KR$Encoder : public ::sun::nio::cs::ext::ISO2022$Encoder {
	$class(ISO2022_KR$Encoder, 0, ::sun::nio::cs::ext::ISO2022$Encoder)
public:
	ISO2022_KR$Encoder();
	using ::sun::nio::cs::ext::ISO2022$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	static $bytes* SOD;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("SOD")

#endif // _sun_nio_cs_ext_ISO2022_KR$Encoder_h_