#ifndef _com_sun_org_apache_xml_internal_utils_XMLString_h_
#define _com_sun_org_apache_xml_internal_utils_XMLString_h_
//$ interface com.sun.org.apache.xml.internal.utils.XMLString
//$ extends java.lang.Object

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

class $export XMLString : public ::java::lang::Object {
	$interface(XMLString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual char16_t charAt(int32_t index) {return 0;}
	virtual int32_t compareTo(::com::sun::org::apache::xml::internal::utils::XMLString* anotherString) {return 0;}
	virtual int32_t compareToIgnoreCase(::com::sun::org::apache::xml::internal::utils::XMLString* str) {return 0;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* concat($String* str) {return nullptr;}
	virtual void dispatchAsComment(::org::xml::sax::ext::LexicalHandler* lh) {}
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) {}
	virtual bool endsWith($String* suffix) {return false;}
	virtual bool equals(Object$* anObject) override;
	virtual bool equals(::com::sun::org::apache::xml::internal::utils::XMLString* anObject) {return false;}
	virtual bool equals($String* anotherString) {return false;}
	virtual bool equalsIgnoreCase($String* anotherString) {return false;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) {return nullptr;}
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {}
	virtual bool hasString() {return false;}
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(int32_t ch) {return 0;}
	virtual int32_t indexOf(int32_t ch, int32_t fromIndex) {return 0;}
	virtual int32_t indexOf($String* str) {return 0;}
	virtual int32_t indexOf(::com::sun::org::apache::xml::internal::utils::XMLString* str) {return 0;}
	virtual int32_t indexOf($String* str, int32_t fromIndex) {return 0;}
	virtual int32_t lastIndexOf(int32_t ch) {return 0;}
	virtual int32_t lastIndexOf(int32_t ch, int32_t fromIndex) {return 0;}
	virtual int32_t lastIndexOf($String* str) {return 0;}
	virtual int32_t lastIndexOf($String* str, int32_t fromIndex) {return 0;}
	virtual int32_t length() {return 0;}
	virtual bool startsWith($String* prefix, int32_t toffset) {return false;}
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix, int32_t toffset) {return false;}
	virtual bool startsWith($String* prefix) {return false;}
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix) {return false;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex, int32_t endIndex) {return nullptr;}
	virtual double toDouble() {return 0.0;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase(::java::util::Locale* locale) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase() {return nullptr;}
	virtual $String* toString() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase(::java::util::Locale* locale) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* trim() {return nullptr;}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_XMLString_h_