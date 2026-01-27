#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLEntityResolver_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLEntityResolver_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLResourceIdentifier;
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

class XMLEntityResolver : public ::java::lang::Object {
	$interface(XMLEntityResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier) {return nullptr;}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLEntityResolver_h_