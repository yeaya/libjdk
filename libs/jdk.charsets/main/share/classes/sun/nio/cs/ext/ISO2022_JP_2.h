#ifndef _sun_nio_cs_ext_ISO2022_JP_2_h_
#define _sun_nio_cs_ext_ISO2022_JP_2_h_
//$ class sun.nio.cs.ext.ISO2022_JP_2
//$ extends sun.nio.cs.ext.ISO2022_JP

#include <sun/nio/cs/ext/ISO2022_JP.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022_JP_2 : public ::sun::nio::cs::ext::ISO2022_JP {
	$class(ISO2022_JP_2, $NO_CLASS_INIT, ::sun::nio::cs::ext::ISO2022_JP)
public:
	ISO2022_JP_2();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_JP_2_h_