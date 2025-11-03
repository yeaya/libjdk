#ifndef _sun_nio_cs_ext_IBM29626C$Decoder_h_
#define _sun_nio_cs_ext_IBM29626C$Decoder_h_
//$ class sun.nio.cs.ext.IBM29626C$Decoder
//$ extends java.nio.charset.CharsetDecoder
//$ implements sun.nio.cs.DelegatableDecoder

#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DelegatableDecoder.h>

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
			class DoubleByte$Encoder;
			class SingleByte$Decoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class IBM29626C$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::DelegatableDecoder {
	$class(IBM29626C$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::DelegatableDecoder)
public:
	IBM29626C$Decoder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs);
	void init$(::java::nio::charset::Charset* cs, float avgCpb, float maxCpb, ::sun::nio::cs::SingleByte$Decoder* dec0201, ::sun::nio::cs::DoubleByte$Decoder* dec0208, ::sun::nio::cs::DoubleByte$Decoder* dec0212);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual char16_t decodeDouble(int32_t byte1, int32_t byte2);
	virtual char16_t decodeDoubleG3(int32_t byte1, int32_t byte2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual char16_t decodeSingle(int32_t b);
	virtual char16_t decodeUDC(int32_t byte1, int32_t byte2, int32_t offset);
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implReset() override;
	virtual $String* toString() override;
	static ::sun::nio::cs::SingleByte$Decoder* DEC0201;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0212;
	static ::sun::nio::cs::DoubleByte$Encoder* ibm943;
	::sun::nio::cs::SingleByte$Decoder* dec0201 = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* dec0208 = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* dec0212 = nullptr;
	static $String* G2_b;
	static $String* G2_c;
	static $String* G3_b;
	static $String* G3_c;
	static $String* g1_c;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_IBM29626C$Decoder_h_