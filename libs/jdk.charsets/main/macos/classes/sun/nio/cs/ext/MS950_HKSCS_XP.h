#ifndef _sun_nio_cs_ext_MS950_HKSCS_XP_h_
#define _sun_nio_cs_ext_MS950_HKSCS_XP_h_
//$ class sun.nio.cs.ext.MS950_HKSCS_XP
//$ extends java.nio.charset.Charset

#include <java/nio/charset/Charset.h>

#pragma push_macro("MS950_HKSCS_XP")
#undef MS950_HKSCS_XP

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

class MS950_HKSCS_XP : public ::java::nio::charset::Charset {
	$class(MS950_HKSCS_XP, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	MS950_HKSCS_XP();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("MS950_HKSCS_XP")

#endif // _sun_nio_cs_ext_MS950_HKSCS_XP_h_