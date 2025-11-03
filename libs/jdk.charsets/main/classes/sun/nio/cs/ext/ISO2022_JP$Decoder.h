#ifndef _sun_nio_cs_ext_ISO2022_JP$Decoder_h_
#define _sun_nio_cs_ext_ISO2022_JP$Decoder_h_
//$ class sun.nio.cs.ext.ISO2022_JP$Decoder
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
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_JP$Decoder : public ::java::nio::charset::CharsetDecoder, public ::sun::nio::cs::DelegatableDecoder {
	$class(ISO2022_JP$Decoder, 0, ::java::nio::charset::CharsetDecoder, ::sun::nio::cs::DelegatableDecoder)
public:
	ISO2022_JP$Decoder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::charset::Charset* cs);
	void init$(::java::nio::charset::Charset* cs, ::sun::nio::cs::DoubleByte$Decoder* dec0208, ::sun::nio::cs::DoubleByte$Decoder* dec0212);
	::java::nio::charset::CoderResult* decodeArrayLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	::java::nio::charset::CoderResult* decodeBufferLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implReset() override;
	virtual $String* toString() override;
	static ::sun::nio::cs::DoubleByte$Decoder* DEC0208;
	int32_t currentState = 0;
	int32_t previousState = 0;
	::sun::nio::cs::DoubleByte$Decoder* dec0208 = nullptr;
	::sun::nio::cs::DoubleByte$Decoder* dec0212 = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_JP$Decoder_h_