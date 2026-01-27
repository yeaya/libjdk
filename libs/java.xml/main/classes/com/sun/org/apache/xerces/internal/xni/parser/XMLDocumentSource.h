#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentSource_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentSource_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLDocumentHandler;
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

class XMLDocumentSource : public ::java::lang::Object {
	$interface(XMLDocumentSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() {return nullptr;}
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentSource_h_