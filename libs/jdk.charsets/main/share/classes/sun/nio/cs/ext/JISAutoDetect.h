#ifndef _sun_nio_cs_ext_JISAutoDetect_h_
#define _sun_nio_cs_ext_JISAutoDetect_h_
//$ class sun.nio.cs.ext.JISAutoDetect
//$ extends java.nio.charset.Charset
//$ implements sun.nio.cs.HistoricallyNamedCharset

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/HistoricallyNamedCharset.h>

#pragma push_macro("EUCJP_KANA1_MASK")
#undef EUCJP_KANA1_MASK
#pragma push_macro("EUCJP_KANA2_MASK")
#undef EUCJP_KANA2_MASK
#pragma push_macro("EUCJP_MASK")
#undef EUCJP_MASK
#pragma push_macro("SJIS1B_MASK")
#undef SJIS1B_MASK
#pragma push_macro("SJIS2B_MASK")
#undef SJIS2B_MASK

namespace java {
	namespace nio {
		class CharBuffer;
	}
}
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

class JISAutoDetect : public ::java::nio::charset::Charset, public ::sun::nio::cs::HistoricallyNamedCharset {
	$class(JISAutoDetect, $NO_CLASS_INIT, ::java::nio::charset::Charset, ::sun::nio::cs::HistoricallyNamedCharset)
public:
	JISAutoDetect();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canEncode() override;
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual $String* historicalName() override;
	static bool looksLikeJapanese(::java::nio::CharBuffer* cb);
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	virtual $String* toString() override;
	static const int32_t EUCJP_MASK = 1;
	static const int32_t SJIS2B_MASK = 2;
	static const int32_t SJIS1B_MASK = 4;
	static const int32_t EUCJP_KANA1_MASK = 8;
	static const int32_t EUCJP_KANA2_MASK = 16;
};

			} // ext
		} // cs
	} // nio
} // sun

#pragma pop_macro("EUCJP_KANA1_MASK")
#pragma pop_macro("EUCJP_KANA2_MASK")
#pragma pop_macro("EUCJP_MASK")
#pragma pop_macro("SJIS1B_MASK")
#pragma pop_macro("SJIS2B_MASK")

#endif // _sun_nio_cs_ext_JISAutoDetect_h_