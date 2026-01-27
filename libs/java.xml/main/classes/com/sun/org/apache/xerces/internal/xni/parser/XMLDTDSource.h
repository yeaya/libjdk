#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDSource_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDSource_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLDTDHandler;
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

class XMLDTDSource : public ::java::lang::Object {
	$interface(XMLDTDSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() {return nullptr;}
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* handler) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDSource_h_