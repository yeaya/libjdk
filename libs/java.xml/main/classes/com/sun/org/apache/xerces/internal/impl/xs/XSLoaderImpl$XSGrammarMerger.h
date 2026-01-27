#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl$XSGrammarMerger_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl$XSGrammarMerger_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl$XSGrammarMerger
//$ extends com.sun.org.apache.xerces.internal.impl.xs.util.XSGrammarPool

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSGrammarPool.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
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

class XSLoaderImpl$XSGrammarMerger : public ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool {
	$class(XSLoaderImpl$XSGrammarMerger, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool)
public:
	XSLoaderImpl$XSGrammarMerger();
	using ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool::equals;
	using ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool::hashCode;
	void init$();
	virtual bool containsGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* getGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	void mergeSchemaGrammars(::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* cachedGrammar, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* newGrammar);
	virtual void putGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) override;
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) override;
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* toSchemaGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar);
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSLoaderImpl$XSGrammarMerger_h_