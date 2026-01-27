#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLConfigurationException_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLConfigurationException_h_
//$ class com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException
//$ extends com.sun.org.apache.xerces.internal.xni.XNIException

#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class Status;
						}
					}
				}
			}
		}
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

class XMLConfigurationException : public ::com::sun::org::apache::xerces::internal::xni::XNIException {
	$class(XMLConfigurationException, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XNIException)
public:
	XMLConfigurationException();
	void init$(::com::sun::org::apache::xerces::internal::util::Status* type, $String* identifier);
	void init$(::com::sun::org::apache::xerces::internal::util::Status* type, $String* identifier, $String* message);
	virtual $String* getIdentifier();
	virtual ::com::sun::org::apache::xerces::internal::util::Status* getType();
	static const int64_t serialVersionUID = (int64_t)0xB48A609593F6433C;
	::com::sun::org::apache::xerces::internal::util::Status* fType = nullptr;
	$String* fIdentifier = nullptr;
	XMLConfigurationException(const XMLConfigurationException& e);
	virtual void throw$() override;
	inline XMLConfigurationException* operator ->() {
		return (XMLConfigurationException*)throwing$;
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

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLConfigurationException_h_