#ifndef _sun_nio_cs_ext_ISO2022_h_
#define _sun_nio_cs_ext_ISO2022_h_
//$ class sun.nio.cs.ext.ISO2022
//$ extends java.nio.charset.Charset

#include <java/lang/Array.h>
#include <java/nio/charset/Charset.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ISO2022 : public ::java::nio::charset::Charset {
	$class(ISO2022, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	ISO2022();
	void init$($String* csname, $StringArray* aliases);
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override {return nullptr;}
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override {return nullptr;}
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ISO2022_h_