#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>

#pragma push_macro("TABLE_SIZE")
#undef TABLE_SIZE
#pragma push_macro("ZERO_LENGTH_GRAMMAR_ARRAY")
#undef ZERO_LENGTH_GRAMMAR_ARRAY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class SoftReferenceGrammarPool$Entry;
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
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
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

class SoftReferenceGrammarPool : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(SoftReferenceGrammarPool, 0, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	SoftReferenceGrammarPool();
	using ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool::hashCode;
	using ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool::equals;
	void init$();
	void init$(int32_t initialCapacity);
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	void clean();
	virtual void clear() override;
	bool containsGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	bool equals(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc1, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc2);
	::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* getGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	int32_t hashCode(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual void lockPool() override;
	void putGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar);
	::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* removeEntry(::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* entry);
	::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* removeGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual void unlockPool() override;
	static const int32_t TABLE_SIZE = 11;
	static $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* ZERO_LENGTH_GRAMMAR_ARRAY;
	$Array<::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry>* fGrammars = nullptr;
	bool fPoolIsLocked = false;
	int32_t fGrammarCount = 0;
	::java::lang::ref::ReferenceQueue* fReferenceQueue = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("TABLE_SIZE")
#pragma pop_macro("ZERO_LENGTH_GRAMMAR_ARRAY")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool_h_