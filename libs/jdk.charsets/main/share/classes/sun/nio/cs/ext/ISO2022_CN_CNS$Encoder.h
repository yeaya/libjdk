#ifndef _sun_nio_cs_ext_ISO2022_CN_CNS$Encoder_h_
#define _sun_nio_cs_ext_ISO2022_CN_CNS$Encoder_h_
//$ class sun.nio.cs.ext.ISO2022_CN_CNS$Encoder
//$ extends sun.nio.cs.ext.ISO2022$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>

#pragma push_macro("SOD")
#undef SOD
#pragma push_macro("SS2D")
#undef SS2D
#pragma push_macro("SS3D")
#undef SS3D

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

class ISO2022_CN_CNS$Encoder : public ::sun::nio::cs::ext::ISO2022$Encoder {
	$class(ISO2022_CN_CNS$Encoder, 0, ::sun::nio::cs::ext::ISO2022$Encoder)
public:
	ISO2022_CN_CNS$Encoder();
	using ::sun::nio::cs::ext::ISO2022$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static ::java::nio::charset::Charset* cns;
	static $bytes* SOD;
	static $bytes* SS2D;
	static $bytes* SS3D;
	$bytes* bb = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("SOD")
#pragma pop_macro("SS2D")
#pragma pop_macro("SS3D")

#endif // _sun_nio_cs_ext_ISO2022_CN_CNS$Encoder_h_