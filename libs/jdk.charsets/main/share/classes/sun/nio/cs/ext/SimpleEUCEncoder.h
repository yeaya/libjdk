#ifndef _sun_nio_cs_ext_SimpleEUCEncoder_h_
#define _sun_nio_cs_ext_SimpleEUCEncoder_h_
//$ class sun.nio.cs.ext.SimpleEUCEncoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

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

class SimpleEUCEncoder : public ::java::nio::charset::CharsetEncoder {
	$class(SimpleEUCEncoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	SimpleEUCEncoder();
	using ::java::nio::charset::CharsetEncoder::encode;
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t ch) override;
	virtual int8_t encode(char16_t inputChar);
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	$shorts* index1 = nullptr;
	$String* index2 = nullptr;
	$String* index2a = nullptr;
	$String* index2b = nullptr;
	$String* index2c = nullptr;
	int32_t mask1 = 0;
	int32_t mask2 = 0;
	int32_t shift = 0;
	$bytes* outputByte = nullptr;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_SimpleEUCEncoder_h_