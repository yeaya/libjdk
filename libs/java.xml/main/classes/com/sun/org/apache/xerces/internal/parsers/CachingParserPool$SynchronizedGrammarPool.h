#ifndef _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$SynchronizedGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$SynchronizedGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.parsers.CachingParserPool$SynchronizedGrammarPool
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
						namespace parsers {

class CachingParserPool$SynchronizedGrammarPool : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(CachingParserPool$SynchronizedGrammarPool, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	CachingParserPool$SynchronizedGrammarPool();
	void init$(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual void clear() override;
	virtual void lockPool() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* gDesc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual void unlockPool() override;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_CachingParserPool$SynchronizedGrammarPool_h_