#ifndef _sun_nio_cs_ext_MS932_0213$Decoder_h_
#define _sun_nio_cs_ext_MS932_0213$Decoder_h_
//$ class sun.nio.cs.ext.MS932_0213$Decoder
//$ extends sun.nio.cs.ext.SJIS_0213$Decoder

#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>

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
			class DoubleByte$Decoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class MS932_0213$Decoder : public ::sun::nio::cs::ext::SJIS_0213$Decoder {
	$class(MS932_0213$Decoder, 0, ::sun::nio::cs::ext::SJIS_0213$Decoder)
public:
	MS932_0213$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	virtual char16_t decodeDouble(int32_t b1, int32_t b2) override;
	static ::sun::nio::cs::DoubleByte$Decoder* decMS932;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS932_0213$Decoder_h_