#ifndef _com_sun_org_apache_xpath_internal_objects_XString_h_
#define _com_sun_org_apache_xpath_internal_objects_XString_h_
//$ class com.sun.org.apache.xpath.internal.objects.XString
//$ extends com.sun.org.apache.xpath.internal.objects.XObject
//$ implements com.sun.org.apache.xml.internal.utils.XMLString

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class ExpressionOwner;
						class XPathContext;
						class XPathVisitor;
					}
				}
			}
		}
	}
}
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
				namespace xpath {
					namespace internal {
						namespace objects {

class $import XString : public ::com::sun::org::apache::xpath::internal::objects::XObject, public ::com::sun::org::apache::xml::internal::utils::XMLString {
	$class(XString, 0, ::com::sun::org::apache::xpath::internal::objects::XObject, ::com::sun::org::apache::xml::internal::utils::XMLString)
public:
	XString();
	using ::com::sun::org::apache::xpath::internal::objects::XObject::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::error;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::bool$;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(Object$* val);
	void init$($String* val);
	virtual bool bool$() override;
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual char16_t charAt(int32_t index) override;
	virtual int32_t compareTo(::com::sun::org::apache::xml::internal::utils::XMLString* xstr) override;
	virtual int32_t compareToIgnoreCase(::com::sun::org::apache::xml::internal::utils::XMLString* str) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* concat($String* str) override;
	virtual void dispatchAsComment(::org::xml::sax::ext::LexicalHandler* lh) override;
	virtual void dispatchCharactersEvents(::org::xml::sax::ContentHandler* ch) override;
	virtual bool endsWith($String* suffix) override;
	virtual bool equals(::com::sun::org::apache::xpath::internal::objects::XObject* obj2) override;
	virtual bool equals($String* obj2) override;
	virtual bool equals(::com::sun::org::apache::xml::internal::utils::XMLString* obj2) override;
	virtual bool equals(Object$* obj2) override;
	virtual bool equalsIgnoreCase($String* anotherString) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) override;
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) override;
	virtual int32_t getType() override;
	virtual $String* getTypeString() override;
	virtual bool hasString() override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(int32_t ch) override;
	virtual int32_t indexOf(int32_t ch, int32_t fromIndex) override;
	virtual int32_t indexOf($String* str) override;
	virtual int32_t indexOf(::com::sun::org::apache::xml::internal::utils::XMLString* str) override;
	virtual int32_t indexOf($String* str, int32_t fromIndex) override;
	static bool isSpace(char16_t ch);
	virtual int32_t lastIndexOf(int32_t ch) override;
	virtual int32_t lastIndexOf(int32_t ch, int32_t fromIndex) override;
	virtual int32_t lastIndexOf($String* str) override;
	virtual int32_t lastIndexOf($String* str, int32_t fromIndex) override;
	virtual int32_t length() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::num;
	virtual double num() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::rtf;
	virtual int32_t rtf(::com::sun::org::apache::xpath::internal::XPathContext* support) override;
	virtual bool startsWith($String* prefix, int32_t toffset) override;
	virtual bool startsWith($String* prefix) override;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix, int32_t toffset) override;
	virtual bool startsWith(::com::sun::org::apache::xml::internal::utils::XMLString* prefix) override;
	virtual $String* str() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* substring(int32_t beginIndex, int32_t endIndex) override;
	virtual double toDouble() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase(::java::util::Locale* locale) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toLowerCase() override;
	virtual $String* toString() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase(::java::util::Locale* locale) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* toUpperCase() override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* trim() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::xstr;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* xstr() override;
	static const int64_t serialVersionUID = (int64_t)0x1C0A273B4816C5FD;
	static ::com::sun::org::apache::xpath::internal::objects::XString* EMPTYSTRING;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTYSTRING")

#endif // _com_sun_org_apache_xpath_internal_objects_XString_h_