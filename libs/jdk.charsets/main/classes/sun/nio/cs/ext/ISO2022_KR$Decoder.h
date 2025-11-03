#ifndef _sun_nio_cs_ext_ISO2022_KR$Decoder_h_
#define _sun_nio_cs_ext_ISO2022_KR$Decoder_h_
//$ class sun.nio.cs.ext.ISO2022_KR$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("ISO_ESC")
#undef ISO_ESC
#pragma push_macro("ISO_SI")
#undef ISO_SI
#pragma push_macro("ISO_SO")
#undef ISO_SO
#pragma push_macro("ISO_SS2_7")
#undef ISO_SS2_7
#pragma push_macro("ISO_SS3_7")
#undef ISO_SS3_7
#pragma push_macro("MSB")
#undef MSB
#pragma push_macro("REPLACE_CHAR")
#undef REPLACE_CHAR
#pragma push_macro("SOD")
#undef SOD

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
			class DoubleByte$Decoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_KR$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(ISO2022_KR$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	ISO2022_KR$Decoder();
	using ::java::nio::charset::CharsetDecoder::decode;
	void init$(::java::nio::charset::Charset* cs);
	char16_t decode(int8_t byte1, int8_t byte2, int8_t shiftFlag);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	bool findDesig($bytes* in, int32_t sp, int32_t sl);
	bool findDesigBuf(::java::nio::ByteBuffer* in);
	virtual void implReset() override;
	static $bytes* SOD;
	static ::sun::nio::cs::DoubleByte$Decoder* KSC5601;
	static const int8_t ISO_ESC = 27;
	static const int8_t ISO_SI = 15;
	static const int8_t ISO_SO = 14;
	static const int8_t ISO_SS2_7 = 78;
	static const int8_t ISO_SS3_7 = 79;
	static const int8_t MSB = (int8_t)128;
	static const char16_t REPLACE_CHAR = ((char16_t)65533);
	static const int8_t minDesignatorLength = 3;
	static const int8_t SOFlag = 0;
	static const int8_t SS2Flag = 1;
	static const int8_t SS3Flag = 2;
	bool shiftout = false;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("ISO_ESC")
#pragma pop_macro("ISO_SI")
#pragma pop_macro("ISO_SO")
#pragma pop_macro("ISO_SS2_7")
#pragma pop_macro("ISO_SS3_7")
#pragma pop_macro("MSB")
#pragma pop_macro("REPLACE_CHAR")
#pragma pop_macro("SOD")

#endif // _sun_nio_cs_ext_ISO2022_KR$Decoder_h_