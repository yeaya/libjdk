#ifndef _sun_nio_cs_ext_ISO2022_CN_h_
#define _sun_nio_cs_ext_ISO2022_CN_h_
//$ class sun.nio.cs.ext.ISO2022_CN
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("ISO_ESC")
#undef ISO_ESC
#pragma push_macro("ISO_SI")
#undef ISO_SI
#pragma push_macro("ISO_SO")
#undef ISO_SO
#pragma push_macro("ISO_SS2_7")
#undef ISO_SS2_7
#pragma push_macro("ISO_SS3_7")
#undef ISO_SS3_7
#pragma push_macro("MSB")
#undef MSB
#pragma push_macro("REPLACE_CHAR")
#undef REPLACE_CHAR

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

class ISO2022_CN : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(ISO2022_CN, $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	ISO2022_CN();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canEncode() override;
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
	static const int8_t ISO_ESC = 27;
	static const int8_t ISO_SI = 15;
	static const int8_t ISO_SO = 14;
	static const int8_t ISO_SS2_7 = 78;
	static const int8_t ISO_SS3_7 = 79;
	static const int8_t MSB = (int8_t)128;
	static const char16_t REPLACE_CHAR = ((char16_t)65533);
	static const int8_t SODesigGB = 0;
	static const int8_t SODesigCNS = 1;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("ISO_ESC")
#pragma pop_macro("ISO_SI")
#pragma pop_macro("ISO_SO")
#pragma pop_macro("ISO_SS2_7")
#pragma pop_macro("ISO_SS3_7")
#pragma pop_macro("MSB")
#pragma pop_macro("REPLACE_CHAR")

#endif // _sun_nio_cs_ext_ISO2022_CN_h_