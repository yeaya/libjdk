#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$SoftGrammarReference_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$SoftGrammarReference_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$SoftGrammarReference
//$ extends java.lang.ref.SoftReference

#include <java/lang/ref/SoftReference.h>

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

class SoftReferenceGrammarPool$SoftGrammarReference : public ::java::lang::ref::SoftReference {
	$class(SoftReferenceGrammarPool$SoftGrammarReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	SoftReferenceGrammarPool$SoftGrammarReference();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* entry, ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar, ::java::lang::ref::ReferenceQueue* queue);
	::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* entry = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$SoftGrammarReference_h_