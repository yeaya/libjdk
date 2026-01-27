#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelSource_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelSource_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLDTDContentModelHandler;
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

class XMLDTDContentModelSource : public ::java::lang::Object {
	$interface(XMLDTDContentModelSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() {return nullptr;}
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* handler) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelSource_h_