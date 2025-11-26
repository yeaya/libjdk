#ifndef _sun_nio_cs_ext_ISCII91$Encoder_h_
#define _sun_nio_cs_ext_ISCII91$Encoder_h_
//$ class sun.nio.cs.ext.ISCII91$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/nio/charset/CharsetEncoder.h>

#pragma push_macro("NO_CHAR")
#undef NO_CHAR

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CoderResult;
		}
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISCII91$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(ISCII91$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	ISCII91$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t ch) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	static const int8_t NO_CHAR = (int8_t)255;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("NO_CHAR")

#endif // _sun_nio_cs_ext_ISCII91$Encoder_h_