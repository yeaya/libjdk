#ifndef _sun_nio_cs_ext_MS50221_h_
#define _sun_nio_cs_ext_MS50221_h_
//$ class sun.nio.cs.ext.MS50221
//$ extends sun.nio.cs.ext.MS50220

#include <sun/nio/cs/ext/MS50220.h>

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

class MS50221 : public ::sun::nio::cs::ext::MS50220 {
	$class(MS50221, $NO_CLASS_INIT, ::sun::nio::cs::ext::MS50220)
public:
	MS50221();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual bool doSBKANA() override;
	virtual $String* historicalName() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_MS50221_h_