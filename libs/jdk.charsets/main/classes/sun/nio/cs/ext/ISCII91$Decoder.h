#ifndef _sun_nio_cs_ext_ISCII91$Decoder_h_
#define _sun_nio_cs_ext_ISCII91$Decoder_h_
//$ class sun.nio.cs.ext.ISCII91$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("INVALID_CHAR")
#undef INVALID_CHAR
#pragma push_macro("ZWJ_CHAR")
#undef ZWJ_CHAR
#pragma push_macro("ZWNJ_CHAR")
#undef ZWNJ_CHAR

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
			namespace ext {

class ISCII91$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(ISCII91$Decoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	ISCII91$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	static const char16_t ZWNJ_CHAR = ((char16_t)8204);
	static const char16_t ZWJ_CHAR = ((char16_t)8205);
	static const char16_t INVALID_CHAR = ((char16_t)65535);
	char16_t contextChar = 0;
	bool needFlushing = false;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("INVALID_CHAR")
#pragma pop_macro("ZWJ_CHAR")
#pragma pop_macro("ZWNJ_CHAR")

#endif // _sun_nio_cs_ext_ISCII91$Decoder_h_