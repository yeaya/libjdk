#ifndef _sun_nio_cs_ext_MSISO2022JP_h_
#define _sun_nio_cs_ext_MSISO2022JP_h_
//$ class sun.nio.cs.ext.MSISO2022JP
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

class MSISO2022JP : public ::sun::nio::cs::ext::ISO2022_JP {
	$class(MSISO2022JP, $NO_CLASS_INIT, ::sun::nio::cs::ext::ISO2022_JP)
public:
	MSISO2022JP();
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

#endif // _sun_nio_cs_ext_MSISO2022JP_h_