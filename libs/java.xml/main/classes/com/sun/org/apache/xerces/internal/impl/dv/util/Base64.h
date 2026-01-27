#ifndef _com_sun_org_apache_xerces_internal_impl_dv_util_Base64_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_util_Base64_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.util.Base64
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASELENGTH")
#undef BASELENGTH
#pragma push_macro("EIGHTBIT")
#undef EIGHTBIT
#pragma push_macro("FOURBYTE")
#undef FOURBYTE
#pragma push_macro("LOOKUPLENGTH")
#undef LOOKUPLENGTH
#pragma push_macro("PAD")
#undef PAD
#pragma push_macro("SIGN")
#undef SIGN
#pragma push_macro("SIXBIT")
#undef SIXBIT
#pragma push_macro("SIXTEENBIT")
#undef SIXTEENBIT
#pragma push_macro("TWENTYFOURBITGROUP")
#undef TWENTYFOURBITGROUP

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace util {

class Base64 : public ::java::lang::Object {
	$class(Base64, 0, ::java::lang::Object)
public:
	Base64();
	void init$();
	static $bytes* decode($String* encoded);
	static $String* encode($bytes* binaryData);
	static bool isBase64(char16_t octect);
	static bool isData(char16_t octect);
	static bool isPad(char16_t octect);
	static bool isWhiteSpace(char16_t octect);
	static int32_t removeWhiteSpace($chars* data);
	static const int32_t BASELENGTH = 128;
	static const int32_t LOOKUPLENGTH = 64;
	static const int32_t TWENTYFOURBITGROUP = 24;
	static const int32_t EIGHTBIT = 8;
	static const int32_t SIXTEENBIT = 16;
	static const int32_t SIXBIT = 6;
	static const int32_t FOURBYTE = 4;
	static const int32_t SIGN = (-128);
	static const char16_t PAD = ((char16_t)61);
	static const bool fDebug = false;
	static $bytes* base64Alphabet;
	static $chars* lookUpBase64Alphabet;
};

								} // util
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASELENGTH")
#pragma pop_macro("EIGHTBIT")
#pragma pop_macro("FOURBYTE")
#pragma pop_macro("LOOKUPLENGTH")
#pragma pop_macro("PAD")
#pragma pop_macro("SIGN")
#pragma pop_macro("SIXBIT")
#pragma pop_macro("SIXTEENBIT")
#pragma pop_macro("TWENTYFOURBITGROUP")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_util_Base64_h_