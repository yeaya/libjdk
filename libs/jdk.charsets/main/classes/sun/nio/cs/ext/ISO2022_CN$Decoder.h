#ifndef _sun_nio_cs_ext_ISO2022_CN$Decoder_h_
#define _sun_nio_cs_ext_ISO2022_CN$Decoder_h_
//$ class sun.nio.cs.ext.ISO2022_CN$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

#pragma push_macro("SOD")
#undef SOD
#pragma push_macro("SS")
#undef SS

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

class ISO2022_CN$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(ISO2022_CN$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	ISO2022_CN$Decoder();
	void init$(::java::nio::charset::Charset* cs);
	char16_t SODecode(int8_t byte1, int8_t byte2, int8_t SOD);
	char16_t cnsDecode(int8_t byte1, int8_t byte2, int8_t SS);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual void implReset() override;
	bool shiftOut = false;
	int8_t currentSODesig = 0;
	static ::sun::nio::cs::DoubleByte$Decoder* GB2312;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("SOD")
#pragma pop_macro("SS")

#endif // _sun_nio_cs_ext_ISO2022_CN$Decoder_h_