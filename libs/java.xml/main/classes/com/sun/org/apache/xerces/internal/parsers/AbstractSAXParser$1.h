#ifndef _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$1_h_
#define _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$1_h_
//$ class com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$1
//$ extends org.xml.sax.helpers.LocatorImpl

#include <org/xml/sax/helpers/LocatorImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class AbstractSAXParser;
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
						namespace parsers {

class AbstractSAXParser$1 : public ::org::xml::sax::helpers::LocatorImpl {
	$class(AbstractSAXParser$1, $NO_CLASS_INIT, ::org::xml::sax::helpers::LocatorImpl)
public:
	AbstractSAXParser$1();
	void init$(::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser* this$0);
	virtual $String* getEncoding();
	virtual $String* getXMLVersion();
	::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser* this$0 = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_AbstractSAXParser$1_h_