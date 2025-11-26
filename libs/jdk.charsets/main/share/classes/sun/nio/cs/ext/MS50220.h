#ifndef _sun_nio_cs_ext_MS50220_h_
#define _sun_nio_cs_ext_MS50220_h_
//$ class sun.nio.cs.ext.MS50220
//$ extends sun.nio.cs.ext.ISO2022_JP

#include <java/lang/Array.h>
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

class MS50220 : public ::sun::nio::cs::ext::ISO2022_JP {
	$class(MS50220, $NO_CLASS_INIT, ::sun::nio::cs::ext::ISO2022_JP)
public:
	MS50220();
	void init$();
	void init$($String* canonicalName, $StringArray* aliases);
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual bool doSBKANA() override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS50220_h_