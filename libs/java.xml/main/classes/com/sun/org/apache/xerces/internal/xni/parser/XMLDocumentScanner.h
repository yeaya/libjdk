#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentScanner_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentScanner_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentScanner
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
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

class XMLDocumentScanner : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource {
	$interface(XMLDocumentScanner, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource)
public:
	virtual int32_t next() {return 0;}
	virtual bool scanDocument(bool complete) {return false;}
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentScanner_h_