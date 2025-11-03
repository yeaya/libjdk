#ifndef _sun_nio_cs_ext_IBM33722$Encoder_h_
#define _sun_nio_cs_ext_IBM33722$Encoder_h_
//$ class sun.nio.cs.ext.IBM33722$Encoder
//$ extends sun.nio.cs.ext.SimpleEUCEncoder

#include <java/lang/Array.h>
#include <sun/nio/cs/ext/SimpleEUCEncoder.h>

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

class IBM33722$Encoder : public ::sun::nio::cs::ext::SimpleEUCEncoder {
	$class(IBM33722$Encoder, 0, ::sun::nio::cs::ext::SimpleEUCEncoder)
public:
	IBM33722$Encoder();
	using ::sun::nio::cs::ext::SimpleEUCEncoder::canEncode;
	using ::sun::nio::cs::ext::SimpleEUCEncoder::encode;
	void init$(::java::nio::charset::Charset* cs);
	static $shorts* index1;
	static $String* index2;
	static $String* index2a;
	static $String* index2b;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_IBM33722$Encoder_h_