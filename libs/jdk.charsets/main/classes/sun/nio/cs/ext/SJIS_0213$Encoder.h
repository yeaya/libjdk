#ifndef _sun_nio_cs_ext_SJIS_0213$Encoder_h_
#define _sun_nio_cs_ext_SJIS_0213$Encoder_h_
//$ class sun.nio.cs.ext.SJIS_0213$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/CharsetMapping.h>

#pragma push_macro("MAX_SINGLEBYTE")
#undef MAX_SINGLEBYTE
#pragma push_macro("UNMAPPABLE")
#undef UNMAPPABLE
#pragma push_macro("UNMAPPABLE_ENCODING")
#undef UNMAPPABLE_ENCODING

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
			class CharsetMapping$Entry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class SJIS_0213$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(SJIS_0213$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	SJIS_0213$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual ::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t encodeChar(char16_t ch);
	virtual int32_t encodeComposite(char16_t base, char16_t cc);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeSurrogate(char16_t hi, char16_t lo);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::ByteBuffer* dst) override;
	virtual void implReset() override;
	virtual bool isCompositeBase(char16_t ch);
	static const int32_t UNMAPPABLE = ::sun::nio::cs::CharsetMapping::UNMAPPABLE_ENCODING;
	static const int32_t MAX_SINGLEBYTE = 255;
	::sun::nio::cs::CharsetMapping$Entry* comp = nullptr;
	char16_t leftoverBase = 0;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("MAX_SINGLEBYTE")
#pragma pop_macro("UNMAPPABLE")
#pragma pop_macro("UNMAPPABLE_ENCODING")

#endif // _sun_nio_cs_ext_SJIS_0213$Encoder_h_