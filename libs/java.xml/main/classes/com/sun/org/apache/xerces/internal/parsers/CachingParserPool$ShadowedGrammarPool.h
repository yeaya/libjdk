#ifndef _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$ShadowedGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$ShadowedGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.parsers.CachingParserPool$ShadowedGrammarPool
//$ extends com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl

#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
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
						namespace parsers {

class CachingParserPool$ShadowedGrammarPool : public ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl {
	$class(CachingParserPool$ShadowedGrammarPool, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl)
public:
	CachingParserPool$ShadowedGrammarPool();
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::equals;
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::hashCode;
	void init$(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual bool containsGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* getGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* gDesc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$ShadowedGrammarPool_h_