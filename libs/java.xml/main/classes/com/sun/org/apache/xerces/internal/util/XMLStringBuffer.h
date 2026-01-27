#ifndef _com_sun_org_apache_xerces_internal_util_XMLStringBuffer_h_
#define _com_sun_org_apache_xerces_internal_util_XMLStringBuffer_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLStringBuffer
//$ extends com.sun.org.apache.xerces.internal.xni.XMLString

#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_SIZE")
#undef DEFAULT_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLStringBuffer : public ::com::sun::org::apache::xerces::internal::xni::XMLString {
	$class(XMLStringBuffer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLString)
public:
	XMLStringBuffer();
	using ::com::sun::org::apache::xerces::internal::xni::XMLString::equals;
	void init$();
	void init$(int32_t size);
	void init$(char16_t c);
	void init$($String* s);
	void init$($chars* ch, int32_t offset, int32_t length);
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLString* s);
	virtual void append(char16_t c);
	virtual void append($String* s);
	virtual void append($chars* ch, int32_t offset, int32_t length);
	virtual void append(::com::sun::org::apache::xerces::internal::xni::XMLString* s);
	virtual void clear() override;
	static const int32_t DEFAULT_SIZE = 32;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_SIZE")

#endif // _com_sun_org_apache_xerces_internal_util_XMLStringBuffer_h_