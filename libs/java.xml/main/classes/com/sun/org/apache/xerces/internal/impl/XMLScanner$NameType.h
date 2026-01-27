#ifndef _com_sun_org_apache_xerces_internal_impl_XMLScanner$NameType_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLScanner$NameType_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLScanner$NameType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("ATTRIBUTENAME")
#undef ATTRIBUTENAME
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("DOCTYPE")
#undef DOCTYPE
#pragma push_macro("ELEMENTEND")
#undef ELEMENTEND
#pragma push_macro("ELEMENTSTART")
#undef ELEMENTSTART
#pragma push_macro("ENTITY")
#undef ENTITY
#pragma push_macro("NOTATION")
#undef NOTATION
#pragma push_macro("PI")
#undef PI
#pragma push_macro("REFERENCE")
#undef REFERENCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLScanner$NameType : public ::java::lang::Enum {
	$class(XMLScanner$NameType, 0, ::java::lang::Enum)
public:
	XMLScanner$NameType();
	static $Array<::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	virtual $String* literal();
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* valueOf($String* name);
	static $Array<::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType>* values();
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* ATTRIBUTE;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* ATTRIBUTENAME;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* COMMENT;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* DOCTYPE;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* ELEMENTSTART;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* ELEMENTEND;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* ENTITY;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* NOTATION;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* PI;
	static ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType* REFERENCE;
	static $Array<::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType>* $VALUES;
	$String* literal$ = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("ATTRIBUTENAME")
#pragma pop_macro("COMMENT")
#pragma pop_macro("DOCTYPE")
#pragma pop_macro("ELEMENTEND")
#pragma pop_macro("ELEMENTSTART")
#pragma pop_macro("ENTITY")
#pragma pop_macro("NOTATION")
#pragma pop_macro("PI")
#pragma pop_macro("REFERENCE")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLScanner$NameType_h_