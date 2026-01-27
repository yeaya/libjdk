#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ReadOnlyGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ReadOnlyGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ReadOnlyGrammarPool
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>

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

class ReadOnlyGrammarPool : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(ReadOnlyGrammarPool, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	ReadOnlyGrammarPool();
	void init$(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* pool);
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual void clear() override;
	virtual void lockPool() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual void unlockPool() override;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* core = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ReadOnlyGrammarPool_h_