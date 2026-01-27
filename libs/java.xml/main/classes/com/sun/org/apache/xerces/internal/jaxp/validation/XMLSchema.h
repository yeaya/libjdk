#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchema_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchema_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchema
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class XMLSchema : public ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema {
	$class(XMLSchema, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema)
public:
	XMLSchema();
	void init$(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, bool fullyComposed);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getGrammarPool() override;
	virtual bool isFullyComposed() override;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	bool fFullyComposed = false;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchema_h_