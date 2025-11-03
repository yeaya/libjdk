#ifndef _sun_nio_cs_ext_ISO2022_JP_h_
#define _sun_nio_cs_ext_ISO2022_JP_h_
//$ class sun.nio.cs.ext.ISO2022_JP
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/lang/Array.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("ASCII")
#undef ASCII
#pragma push_macro("ESC")
#undef ESC
#pragma push_macro("SHIFTOUT")
#undef SHIFTOUT
#pragma push_macro("SI")
#undef SI
#pragma push_macro("SO")
#undef SO

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

class ISO2022_JP : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(ISO2022_JP, $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	ISO2022_JP();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* canonicalName, $StringArray* aliases);
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual bool doSBKANA();
	virtual $String* historicalName() override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
	static const int32_t ASCII = 0;
	static const int32_t JISX0201_1976 = 1;
	static const int32_t JISX0208_1978 = 2;
	static const int32_t JISX0208_1983 = 3;
	static const int32_t JISX0212_1990 = 4;
	static const int32_t JISX0201_1976_KANA = 5;
	static const int32_t SHIFTOUT = 6;
	static const int32_t ESC = 27;
	static const int32_t SO = 14;
	static const int32_t SI = 15;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("ASCII")
#pragma pop_macro("ESC")
#pragma pop_macro("SHIFTOUT")
#pragma pop_macro("SI")
#pragma pop_macro("SO")

#endif // _sun_nio_cs_ext_ISO2022_JP_h_