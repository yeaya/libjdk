#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLParseException_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLParseException_h_
//$ class com.sun.org.apache.xerces.internal.xni.parser.XMLParseException
//$ extends com.sun.org.apache.xerces.internal.xni.XNIException

#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLLocator;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLParseException : public ::com::sun::org::apache::xerces::internal::xni::XNIException {
	$class(XMLParseException, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XNIException)
public:
	XMLParseException();
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* message);
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* message, ::java::lang::Exception* exception);
	virtual $String* getBaseSystemId();
	virtual int32_t getCharacterOffset();
	virtual int32_t getColumnNumber();
	virtual $String* getExpandedSystemId();
	virtual int32_t getLineNumber();
	virtual $String* getLiteralSystemId();
	virtual $String* getPublicId();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x180CB55B161E8A4F;
	$String* fPublicId = nullptr;
	$String* fLiteralSystemId = nullptr;
	$String* fExpandedSystemId = nullptr;
	$String* fBaseSystemId = nullptr;
	int32_t fLineNumber = 0;
	int32_t fColumnNumber = 0;
	int32_t fCharacterOffset = 0;
	XMLParseException(const XMLParseException& e);
	virtual void throw$() override;
	inline XMLParseException* operator ->() {
		return (XMLParseException*)throwing$;
	}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLParseException_h_