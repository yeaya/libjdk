#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_Grammar_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_Grammar_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.Grammar
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

class Grammar : public ::java::lang::Object {
	$interface(Grammar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* getGrammarDescription() {return nullptr;}
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_Grammar_h_