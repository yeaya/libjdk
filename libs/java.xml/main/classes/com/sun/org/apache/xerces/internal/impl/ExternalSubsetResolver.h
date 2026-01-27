#ifndef _com_sun_org_apache_xerces_internal_impl_ExternalSubsetResolver_h_
#define _com_sun_org_apache_xerces_internal_impl_ExternalSubsetResolver_h_
//$ interface com.sun.org.apache.xerces.internal.impl.ExternalSubsetResolver
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {
								class XMLDTDDescription;
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
						namespace impl {

class ExternalSubsetResolver : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver {
	$interface(ExternalSubsetResolver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* getExternalSubset(::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription* grammarDescription) {return nullptr;}
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_ExternalSubsetResolver_h_