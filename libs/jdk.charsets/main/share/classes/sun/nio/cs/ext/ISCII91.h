#ifndef _sun_nio_cs_ext_ISCII91_h_
#define _sun_nio_cs_ext_ISCII91_h_
//$ class sun.nio.cs.ext.ISCII91
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/lang/Array.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("HALANT_CHAR")
#undef HALANT_CHAR
#pragma push_macro("ISCII91")
#undef ISCII91
#pragma push_macro("NO_CHAR")
#undef NO_CHAR
#pragma push_macro("NUKTA_CHAR")
#undef NUKTA_CHAR

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

class ISCII91 : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(ISCII91, 0, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	ISCII91();
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
	static const char16_t NUKTA_CHAR = ((char16_t)2364);
	static const char16_t HALANT_CHAR = ((char16_t)2381);
	static const int8_t NO_CHAR = (int8_t)255;
	static $chars* directMapTable;
	static $bytes* encoderMappingTable;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("HALANT_CHAR")
#pragma pop_macro("ISCII91")
#pragma pop_macro("NO_CHAR")
#pragma pop_macro("NUKTA_CHAR")

#endif // _sun_nio_cs_ext_ISCII91_h_