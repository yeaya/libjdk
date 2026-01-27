#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSAnnotationGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSAnnotationGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSAnnotationGrammarPool
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSGrammarBucket;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class XSDHandler$XSAnnotationGrammarPool : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool {
	$class(XSDHandler$XSAnnotationGrammarPool, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool)
public:
	XSDHandler$XSAnnotationGrammarPool();
	void init$();
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) override;
	virtual void clear() override;
	virtual void lockPool() override;
	virtual void refreshGrammars(::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* gBucket);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	virtual void unlockPool() override;
	::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket* fGrammarBucket = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* fInitialGrammarSet = nullptr;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDHandler$XSAnnotationGrammarPool_h_