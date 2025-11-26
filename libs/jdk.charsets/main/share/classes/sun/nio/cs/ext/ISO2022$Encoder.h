#ifndef _sun_nio_cs_ext_ISO2022$Encoder_h_
#define _sun_nio_cs_ext_ISO2022$Encoder_h_
//$ class sun.nio.cs.ext.ISO2022$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

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
#pragma push_macro("PLANE2")
#undef PLANE2
#pragma push_macro("PLANE3")
#undef PLANE3
#pragma push_macro("SS2")
#undef SS2

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

class ISO2022$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(ISO2022$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	ISO2022$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void implReset() override;
	int32_t unicodeToNative(char16_t unicode, $bytes* ebyte);
	static const int8_t ISO_ESC = 27;
	static const int8_t ISO_SI = 15;
	static const int8_t ISO_SO = 14;
	static const int8_t ISO_SS2_7 = 78;
	static const int8_t ISO_SS3_7 = 79;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
	static const int8_t SS2 = (int8_t)142;
	static const int8_t PLANE2 = (int8_t)162;
	static const int8_t PLANE3 = (int8_t)163;
	static const int8_t maximumDesignatorLength = 4;
	$bytes* SODesig = nullptr;
	$bytes* SS2Desig = nullptr;
	$bytes* SS3Desig = nullptr;
	::java::nio::charset::CharsetEncoder* ISOEncoder = nullptr;
	bool shiftout = false;
	bool SODesDefined = false;
	bool SS2DesDefined = false;
	bool SS3DesDefined = false;
	bool newshiftout = false;
	bool newSODesDefined = false;
	bool newSS2DesDefined = false;
	bool newSS3DesDefined = false;
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
#pragma pop_macro("PLANE2")
#pragma pop_macro("PLANE3")
#pragma pop_macro("SS2")

#endif // _sun_nio_cs_ext_ISO2022$Encoder_h_