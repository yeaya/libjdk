#ifndef _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl_h_
#define _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TABLE_SIZE")
#undef TABLE_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLGrammarPoolImpl$Entry;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLGrammarPoolImpl : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(XMLGrammarPoolImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	XMLGrammarPoolImpl();
	using ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool::hashCode;
	using ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool::equals;
	void init$();
	void init$(int32_t initialCapacity);
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual void clear() override;
	virtual bool containsGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual bool equals(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc1, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc2);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* getGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual int32_t hashCode(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual void lockPool() override;
	virtual void putGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* removeGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual void unlockPool() override;
	static const int32_t TABLE_SIZE = 11;
	$Array<::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry>* fGrammars = nullptr;
	bool fPoolIsLocked = false;
	int32_t fGrammarCount = 0;
	static const bool DEBUG = false;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("TABLE_SIZE")

#endif // _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl_h_