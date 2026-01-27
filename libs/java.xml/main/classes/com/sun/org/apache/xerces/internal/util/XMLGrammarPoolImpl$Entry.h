#ifndef _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl$Entry_h_
#define _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl$Entry_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry
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

class XMLGrammarPoolImpl$Entry : public ::java::lang::Object {
	$class(XMLGrammarPoolImpl$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLGrammarPoolImpl$Entry();
	void init$(int32_t hash, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc, ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar, ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry* next);
	void clear();
	int32_t hash = 0;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription* desc = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* grammar = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry* next = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLGrammarPoolImpl$Entry_h_