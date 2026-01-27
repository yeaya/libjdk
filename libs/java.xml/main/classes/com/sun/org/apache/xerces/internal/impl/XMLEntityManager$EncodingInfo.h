#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$EncodingInfo_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$EncodingInfo_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLEntityManager$EncodingInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EBCDIC")
#undef EBCDIC
#pragma push_macro("STR_CP037")
#undef STR_CP037
#pragma push_macro("STR_UCS2")
#undef STR_UCS2
#pragma push_macro("STR_UCS4")
#undef STR_UCS4
#pragma push_macro("STR_UTF16")
#undef STR_UTF16
#pragma push_macro("STR_UTF16BE")
#undef STR_UTF16BE
#pragma push_macro("STR_UTF16LE")
#undef STR_UTF16LE
#pragma push_macro("STR_UTF8")
#undef STR_UTF8
#pragma push_macro("UCS_4_BIG_ENDIAN")
#undef UCS_4_BIG_ENDIAN
#pragma push_macro("UCS_4_LITTLE_ENDIAN")
#undef UCS_4_LITTLE_ENDIAN
#pragma push_macro("UCS_4_UNUSUAL_BYTE_ORDER")
#undef UCS_4_UNUSUAL_BYTE_ORDER
#pragma push_macro("UTF_16_BIG_ENDIAN")
#undef UTF_16_BIG_ENDIAN
#pragma push_macro("UTF_16_BIG_ENDIAN_WITH_BOM")
#undef UTF_16_BIG_ENDIAN_WITH_BOM
#pragma push_macro("UTF_16_LITTLE_ENDIAN")
#undef UTF_16_LITTLE_ENDIAN
#pragma push_macro("UTF_16_LITTLE_ENDIAN_WITH_BOM")
#undef UTF_16_LITTLE_ENDIAN_WITH_BOM
#pragma push_macro("UTF_8")
#undef UTF_8
#pragma push_macro("UTF_8_WITH_BOM")
#undef UTF_8_WITH_BOM

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLEntityManager$EncodingInfo : public ::java::lang::Object {
	$class(XMLEntityManager$EncodingInfo, 0, ::java::lang::Object)
public:
	XMLEntityManager$EncodingInfo();
	void init$($String* autoDetectedEncoding, ::java::lang::Boolean* isBigEndian, bool hasBOM);
	void init$($String* autoDetectedEncoding, $String* readerEncoding, ::java::lang::Boolean* isBigEndian, bool hasBOM);
	static $String* STR_UTF8;
	static $String* STR_UTF16;
	static $String* STR_UTF16BE;
	static $String* STR_UTF16LE;
	static $String* STR_UCS4;
	static $String* STR_UCS2;
	static $String* STR_CP037;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_8;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_8_WITH_BOM;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_16_BIG_ENDIAN;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_16_BIG_ENDIAN_WITH_BOM;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_16_LITTLE_ENDIAN;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UTF_16_LITTLE_ENDIAN_WITH_BOM;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UCS_4_BIG_ENDIAN;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UCS_4_LITTLE_ENDIAN;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* UCS_4_UNUSUAL_BYTE_ORDER;
	static ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager$EncodingInfo* EBCDIC;
	$String* autoDetectedEncoding = nullptr;
	$String* readerEncoding = nullptr;
	::java::lang::Boolean* isBigEndian = nullptr;
	bool hasBOM = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EBCDIC")
#pragma pop_macro("STR_CP037")
#pragma pop_macro("STR_UCS2")
#pragma pop_macro("STR_UCS4")
#pragma pop_macro("STR_UTF16")
#pragma pop_macro("STR_UTF16BE")
#pragma pop_macro("STR_UTF16LE")
#pragma pop_macro("STR_UTF8")
#pragma pop_macro("UCS_4_BIG_ENDIAN")
#pragma pop_macro("UCS_4_LITTLE_ENDIAN")
#pragma pop_macro("UCS_4_UNUSUAL_BYTE_ORDER")
#pragma pop_macro("UTF_16_BIG_ENDIAN")
#pragma pop_macro("UTF_16_BIG_ENDIAN_WITH_BOM")
#pragma pop_macro("UTF_16_LITTLE_ENDIAN")
#pragma pop_macro("UTF_16_LITTLE_ENDIAN_WITH_BOM")
#pragma pop_macro("UTF_8")
#pragma pop_macro("UTF_8_WITH_BOM")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityManager$EncodingInfo_h_