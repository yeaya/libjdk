#ifndef _sun_nio_cs_ext_Big5_HKSCS_2001$Encoder_h_
#define _sun_nio_cs_ext_Big5_HKSCS_2001$Encoder_h_
//$ class sun.nio.cs.ext.Big5_HKSCS_2001$Encoder
//$ extends sun.nio.cs.HKSCS$Encoder

#include <java/lang/Array.h>
#include <sun/nio/cs/HKSCS$Encoder.h>

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

class Big5_HKSCS_2001$Encoder : public ::sun::nio::cs::HKSCS$Encoder {
	$class(Big5_HKSCS_2001$Encoder, 0, ::sun::nio::cs::HKSCS$Encoder)
public:
	Big5_HKSCS_2001$Encoder();
	using ::sun::nio::cs::HKSCS$Encoder::canEncode;
	using ::sun::nio::cs::HKSCS$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::DoubleByte$Encoder* big5;
	static $Array<char16_t, 2>* c2bBmp;
	static $Array<char16_t, 2>* c2bSupp;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_Big5_HKSCS_2001$Encoder_h_