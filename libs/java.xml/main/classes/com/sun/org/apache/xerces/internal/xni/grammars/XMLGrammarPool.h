#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarPool_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool
//$ extends java.lang.Object

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
						namespace xni {
							namespace grammars {

class XMLGrammarPool : public ::java::lang::Object {
	$interface(XMLGrammarPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cacheGrammars($String* grammarType, $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* grammars) {}
	virtual void clear() {}
	virtual void lockPool() {}
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* retrieveGrammar(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc) {return nullptr;}
	virtual $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>* retrieveInitialGrammarSet($String* grammarType) {return nullptr;}
	virtual void unlockPool() {}
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarPool_h_