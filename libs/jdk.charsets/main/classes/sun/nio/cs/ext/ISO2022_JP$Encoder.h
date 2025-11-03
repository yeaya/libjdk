#ifndef _sun_nio_cs_ext_ISO2022_JP$Encoder_h_
#define _sun_nio_cs_ext_ISO2022_JP$Encoder_h_
//$ class sun.nio.cs.ext.ISO2022_JP$Encoder
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
			class DoubleByte$Encoder;
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_JP$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(ISO2022_JP$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	ISO2022_JP$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	void init$(::java::nio::charset::Charset* cs, ::sun::nio::cs::DoubleByte$Encoder* enc0208, ::sun::nio::cs::DoubleByte$Encoder* enc0212, bool doSBKANA);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeSingle(char16_t inputChar);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::ByteBuffer* out) override;
	virtual void implReplaceWith($bytes* newReplacement) override;
	virtual void implReset() override;
	static ::sun::nio::cs::DoubleByte$Encoder* ENC0208;
	static $bytes* repl;
	int32_t currentMode = 0;
	int32_t replaceMode = 0;
	::sun::nio::cs::DoubleByte$Encoder* enc0208 = nullptr;
	::sun::nio::cs::DoubleByte$Encoder* enc0212 = nullptr;
	bool doSBKANA = false;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_JP$Encoder_h_