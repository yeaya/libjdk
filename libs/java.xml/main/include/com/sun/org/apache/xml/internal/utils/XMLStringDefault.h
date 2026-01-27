#ifndef _com_sun_org_apache_xml_internal_utils_XMLStringDefault_h_
#define _com_sun_org_apache_xml_internal_utils_XMLStringDefault_h_
//$ class com.sun.org.apache.xml.internal.utils.XMLStringDefault
//$ extends com.sun.org.apache.xml.internal.utils.XMLString

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import XMLStringDefault : public ::com::sun::org::apache::xml::internal::utils::XMLString {
	$class(XMLStringDefault, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::utils::XMLString)
public:
	XMLStringDefault();
	void init$($String* str);
	virtual char16_t charAt(int32_t index) override;
	virtual int32_t compareTo(::com::sun::org::apache::xml::internal::utils::XMLString* anotherString) override;
	virtual int32_t compareToIgnoreCase(::com::sun::org::apache::xml::internal::utils::XMLString* str) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* concat($String* str) override;
	virtual void dispatchAsComment(::org::xml::sax::ext::LexicalHandler* lh) override;
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) override;
	virtual bool endsWith($String* suffix) override;
	virtual bool equals($String* obj2) override;
	virtual bool equals(::com::sun::org::apache::xml::internal::utils::XMLString* anObject) override;
	virtual bool equals(Object$* anObject) override;
	virtual bool equalsIgnoreCase($String* anotherString) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) override;
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) override;
	virtual bool hasString() override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(int32_t ch) override;
	virtual int32_t indexOf(int32_t ch, int32_t fromIndex) override;
	virtual int32_t indexOf($String* str) override;
	virtual int32_t indexOf(::com::sun::org::apache::xml::internal::utils::XMLString* str) override;
	virtual int32_t indexOf($String* str, int32_t fromIndex) override;
	virtual int32_t lastIndexOf(int32_t ch) override;
	virtual int32_t lastIndexOf(int32_t ch, int32_t fromIndex) override;
	virtual int32_t lastIndexOf($String* str) override;
	virtual int32_t lastIndexOf($String* str, int32_t fromIndex) override;
	virtual int32_t length() override;
	virtual bool startsWith($String* prefix, int32_t toffset) override;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix, int32_t toffset) override;
	virtual bool startsWith($String* prefix) override;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex, int32_t endIndex) override;
	virtual double toDouble() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase(::java::util::Locale* locale) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase() override;
	virtual $String* toString() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase(::java::util::Locale* locale) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* trim() override;
	$String* m_str = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLStringDefault_h_