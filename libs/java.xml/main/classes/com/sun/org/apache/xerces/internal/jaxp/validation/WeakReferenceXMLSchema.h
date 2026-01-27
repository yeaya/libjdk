#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_WeakReferenceXMLSchema_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_WeakReferenceXMLSchema_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.WeakReferenceXMLSchema
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema

#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {
								class XMLGrammarPool;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
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

class WeakReferenceXMLSchema : public ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema {
	$class(WeakReferenceXMLSchema, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema)
public:
	WeakReferenceXMLSchema();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getGrammarPool() override;
	virtual bool isFullyComposed() override;
	::java::lang::ref::WeakReference* fGrammarPool = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_WeakReferenceXMLSchema_h_