#ifndef _com_sun_org_apache_xerces_internal_util_EntityResolver2Wrapper_h_
#define _com_sun_org_apache_xerces_internal_util_EntityResolver2Wrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.EntityResolver2Wrapper
//$ extends com.sun.org.apache.xerces.internal.impl.ExternalSubsetResolver

#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>

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
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class EntityResolver2;
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

class EntityResolver2Wrapper : public ::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver {
	$class(EntityResolver2Wrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver)
public:
	EntityResolver2Wrapper();
	void init$();
	void init$(::org::xml::sax::ext::EntityResolver2* entityResolver);
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* createXMLInputSource(::org::xml::sax::InputSource* source, $String* baseURI);
	virtual ::org::xml::sax::ext::EntityResolver2* getEntityResolver();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* getExternalSubset(::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription* grammarDescription) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier) override;
	virtual void setEntityResolver(::org::xml::sax::ext::EntityResolver2* entityResolver);
	::org::xml::sax::ext::EntityResolver2* fEntityResolver = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_EntityResolver2Wrapper_h_