#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XSGrammar_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XSGrammar_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XSGrammar
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.Grammar

#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSModel;
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

class XSGrammar : public ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar {
	$interface(XSGrammar, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel($Array<::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar>* grammars) {return nullptr;}
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XSGrammar_h_