#ifndef _com_sun_org_apache_xerces_internal_util_EntityResolverWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_EntityResolverWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.EntityResolverWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>

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
	namespace xml {
		namespace sax {
			class EntityResolver;
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

class EntityResolverWrapper : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver {
	$class(EntityResolverWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver)
public:
	EntityResolverWrapper();
	void init$();
	void init$(::org::xml::sax::EntityResolver* entityResolver);
	virtual ::org::xml::sax::EntityResolver* getEntityResolver();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* entityResolver);
	::org::xml::sax::EntityResolver* fEntityResolver = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_EntityResolverWrapper_h_