#ifndef _sun_nio_cs_ext_MS932_0213$Encoder_h_
#define _sun_nio_cs_ext_MS932_0213$Encoder_h_
//$ class sun.nio.cs.ext.MS932_0213$Encoder
//$ extends sun.nio.cs.ext.SJIS_0213$Encoder

#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>

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
			class DoubleByte$Encoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class MS932_0213$Encoder : public ::sun::nio::cs::ext::SJIS_0213$Encoder {
	$class(MS932_0213$Encoder, 0, ::sun::nio::cs::ext::SJIS_0213$Encoder)
public:
	MS932_0213$Encoder();
	using ::sun::nio::cs::ext::SJIS_0213$Encoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t encodeChar(char16_t ch) override;
	static ::sun::nio::cs::DoubleByte$Encoder* encMS932;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS932_0213$Encoder_h_