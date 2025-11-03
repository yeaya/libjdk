#ifndef _sun_nio_cs_ext_IBM834$Encoder_h_
#define _sun_nio_cs_ext_IBM834$Encoder_h_
//$ class sun.nio.cs.ext.IBM834$Encoder
//$ extends sun.nio.cs.DoubleByte$Encoder_DBCSONLY

#include <java/lang/Array.h>
#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class IBM834$Encoder : public ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY {
	$class(IBM834$Encoder, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY)
public:
	IBM834$Encoder();
	using ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY::canEncode;
	using ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY::encode;
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t encodeChar(char16_t ch) override;
	virtual bool isLegalReplacement($bytes* repl) override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_IBM834$Encoder_h_