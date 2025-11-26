#ifndef _sun_nio_cs_ext_IBM33722$Decoder_h_
#define _sun_nio_cs_ext_IBM33722$Decoder_h_
//$ class sun.nio.cs.ext.IBM33722$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("SS2")
#undef SS2
#pragma push_macro("SS3")
#undef SS3

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

class IBM33722$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(IBM33722$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	IBM33722$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	static const int32_t SS2 = 142;
	static const int32_t SS3 = 143;
	static $String* byteToCharTable;
	static $String* mappingTableG1;
	static $String* mappingTableG2;
	static $String* mappingTableG3;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("SS2")
#pragma pop_macro("SS3")

#endif // _sun_nio_cs_ext_IBM33722$Decoder_h_