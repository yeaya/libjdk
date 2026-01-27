#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_Util_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_Util_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.Util
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XNIException;
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
								class XMLParseException;
							}
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {
				class StreamSource;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class SAXException;
			class SAXParseException;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	void init$();
	static ::org::xml::sax::SAXException* toSAXException(::com::sun::org::apache::xerces::internal::xni::XNIException* e);
	static ::org::xml::sax::SAXParseException* toSAXParseException(::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* e);
	static ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* toXMLInputSource(::javax::xml::transform::stream::StreamSource* in);
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_Util_h_