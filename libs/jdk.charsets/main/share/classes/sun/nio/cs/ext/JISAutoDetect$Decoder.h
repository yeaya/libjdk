#ifndef _sun_nio_cs_ext_JISAutoDetect$Decoder_h_
#define _sun_nio_cs_ext_JISAutoDetect$Decoder_h_
//$ class sun.nio.cs.ext.JISAutoDetect$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

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
			class DelegatableDecoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class JISAutoDetect$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(JISAutoDetect$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	JISAutoDetect$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	static void copyLeadingASCII(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeLoop(::sun::nio::cs::DelegatableDecoder* decoder, ::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::Charset* detectedCharset() override;
	static $String* getSJISName();
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implReset() override;
	virtual bool isAutoDetecting() override;
	virtual bool isCharsetDetected() override;
	static bool isPlainASCII(int8_t b);
	static $String* lambda$static$0();
	static $String* osName;
	static $String* SJISName;
	static $String* EUCJPName;
	::sun::nio::cs::DelegatableDecoder* detectedDecoder = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_JISAutoDetect$Decoder_h_