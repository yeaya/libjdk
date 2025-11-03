#ifndef _sun_nio_cs_ext_IBM943C_h_
#define _sun_nio_cs_ext_IBM943C_h_
//$ class sun.nio.cs.ext.IBM943C
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("IBM943C")
#undef IBM943C

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

class IBM943C : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(IBM943C, $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	IBM943C();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("IBM943C")

#endif // _sun_nio_cs_ext_IBM943C_h_