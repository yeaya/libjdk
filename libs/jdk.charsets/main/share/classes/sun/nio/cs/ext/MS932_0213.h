#ifndef _sun_nio_cs_ext_MS932_0213_h_
#define _sun_nio_cs_ext_MS932_0213_h_
//$ class sun.nio.cs.ext.MS932_0213
//$ extends java.nio.charset.Charset

#include <java/nio/charset/Charset.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class MS932_0213 : public ::java::nio::charset::Charset {
	$class(MS932_0213, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	MS932_0213();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS932_0213_h_