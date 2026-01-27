#ifndef _com_sun_org_apache_xerces_internal_impl_dv_util_HexBin_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_util_HexBin_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.util.HexBin
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASELENGTH")
#undef BASELENGTH
#pragma push_macro("LOOKUPLENGTH")
#undef LOOKUPLENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace util {

class HexBin : public ::java::lang::Object {
	$class(HexBin, 0, ::java::lang::Object)
public:
	HexBin();
	void init$();
	static $bytes* decode($String* encoded);
	static $String* encode($bytes* binaryData);
	static const int32_t BASELENGTH = 128;
	static const int32_t LOOKUPLENGTH = 16;
	static $bytes* hexNumberTable;
	static $chars* lookUpHexAlphabet;
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
#pragma pop_macro("LOOKUPLENGTH")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_util_HexBin_h_