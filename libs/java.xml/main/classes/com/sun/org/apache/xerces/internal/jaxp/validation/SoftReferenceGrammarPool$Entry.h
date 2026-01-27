#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$Entry_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$Entry_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class SoftReferenceGrammarPool$SoftGrammarReference;
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

class SoftReferenceGrammarPool$Entry : public ::java::lang::Object {
	$class(SoftReferenceGrammarPool$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftReferenceGrammarPool$Entry();
	void init$(int32_t hash, int32_t bucket, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc, ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar, ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* next, ::java::lang::ref::ReferenceQueue* queue);
	void clear();
	int32_t hash = 0;
	int32_t bucket = 0;
	::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* prev = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry* next = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$SoftGrammarReference* grammar = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_SoftReferenceGrammarPool$Entry_h_