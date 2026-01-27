#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_EmptyXMLSchema_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_EmptyXMLSchema_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.EmptyXMLSchema
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema
//$ implements com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool

#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>

#pragma push_macro("ZERO_LENGTH_GRAMMAR_ARRAY")
#undef ZERO_LENGTH_GRAMMAR_ARRAY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {
								class Grammar;
								class XMLGrammarDescription;
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

class EmptyXMLSchema : public ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema, public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(EmptyXMLSchema, 0, ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	EmptyXMLSchema();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual void clear() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getGrammarPool() override;
	virtual bool isFullyComposed() override;
	virtual void lockPool() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual $String* toString() override;
	virtual void unlockPool() override;
	static $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* ZERO_LENGTH_GRAMMAR_ARRAY;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ZERO_LENGTH_GRAMMAR_ARRAY")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_EmptyXMLSchema_h_