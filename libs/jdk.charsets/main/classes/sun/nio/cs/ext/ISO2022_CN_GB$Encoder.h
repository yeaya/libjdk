#ifndef _sun_nio_cs_ext_ISO2022_CN_GB$Encoder_h_
#define _sun_nio_cs_ext_ISO2022_CN_GB$Encoder_h_
//$ class sun.nio.cs.ext.ISO2022_CN_GB$Encoder
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

class ISO2022_CN_GB$Encoder : public ::sun::nio::cs::ext::ISO2022$Encoder {
	$class(ISO2022_CN_GB$Encoder, 0, ::sun::nio::cs::ext::ISO2022$Encoder)
public:
	ISO2022_CN_GB$Encoder();
	using ::sun::nio::cs::ext::ISO2022$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool isLegalReplacement($bytes* repl) override;
	static ::java::nio::charset::Charset* gb2312;
	static $bytes* SOD;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("SOD")

#endif // _sun_nio_cs_ext_ISO2022_CN_GB$Encoder_h_