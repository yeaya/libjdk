#ifndef _sun_nio_cs_ext_MS950_HKSCS$Encoder_h_
#define _sun_nio_cs_ext_MS950_HKSCS$Encoder_h_
//$ class sun.nio.cs.ext.MS950_HKSCS$Encoder
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

class MS950_HKSCS$Encoder : public ::sun::nio::cs::HKSCS$Encoder {
	$class(MS950_HKSCS$Encoder, 0, ::sun::nio::cs::HKSCS$Encoder)
public:
	MS950_HKSCS$Encoder();
	using ::sun::nio::cs::HKSCS$Encoder::canEncode;
	using ::sun::nio::cs::HKSCS$Encoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::DoubleByte$Encoder* ms950;
	static $Array<char16_t, 2>* c2bBmp;
	static $Array<char16_t, 2>* c2bSupp;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS950_HKSCS$Encoder_h_