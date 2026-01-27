#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammarBucket_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammarBucket_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammarBucket
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class DTDGrammar;
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
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class DTDGrammarBucket : public ::java::lang::Object {
	$class(DTDGrammarBucket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTDGrammarBucket();
	void init$();
	virtual void clear();
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* getActiveGrammar();
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* getGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc);
	virtual bool getStandalone();
	virtual void putGrammar(::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* grammar);
	virtual void setActiveGrammar(::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* grammar);
	virtual void setStandalone(bool standalone);
	::java::util::Map* fGrammars = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* fActiveGrammar = nullptr;
	bool fIsStandalone = false;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammarBucket_h_