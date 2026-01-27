#ifndef _com_sun_org_apache_xerces_internal_util_DOMEntityResolverWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_DOMEntityResolverWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.DOMEntityResolverWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>

#pragma push_macro("XML_TYPE")
#undef XML_TYPE
#pragma push_macro("XSD_TYPE")
#undef XSD_TYPE

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
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSResourceResolver;
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
						namespace util {

class DOMEntityResolverWrapper : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver {
	$class(DOMEntityResolverWrapper, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver)
public:
	DOMEntityResolverWrapper();
	void init$();
	void init$(::org::w3c::dom::ls::LSResourceResolver* entityResolver);
	virtual ::org::w3c::dom::ls::LSResourceResolver* getEntityResolver();
	$String* getType(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier) override;
	virtual void setEntityResolver(::org::w3c::dom::ls::LSResourceResolver* entityResolver);
	static $String* XML_TYPE;
	static $String* XSD_TYPE;
	::org::w3c::dom::ls::LSResourceResolver* fEntityResolver = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XML_TYPE")
#pragma pop_macro("XSD_TYPE")

#endif // _com_sun_org_apache_xerces_internal_util_DOMEntityResolverWrapper_h_