#ifndef _sun_nio_cs_ext_SJIS_0213$Decoder_h_
#define _sun_nio_cs_ext_SJIS_0213$Decoder_h_
//$ class sun.nio.cs.ext.SJIS_0213$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/CharsetMapping.h>

#pragma push_macro("UNMAPPABLE")
#undef UNMAPPABLE
#pragma push_macro("UNMAPPABLE_DECODING")
#undef UNMAPPABLE_DECODING

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

class SJIS_0213$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(SJIS_0213$Decoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	SJIS_0213$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual char16_t decodeDouble(int32_t b1, int32_t b2);
	virtual $chars* decodeDoubleEx(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeSingle(int32_t b);
	static const char16_t UNMAPPABLE = ::sun::nio::cs::CharsetMapping::UNMAPPABLE_DECODING;
	$chars* cc = nullptr;
	::sun::nio::cs::CharsetMapping$Entry* comp = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("UNMAPPABLE")
#pragma pop_macro("UNMAPPABLE_DECODING")

#endif // _sun_nio_cs_ext_SJIS_0213$Decoder_h_