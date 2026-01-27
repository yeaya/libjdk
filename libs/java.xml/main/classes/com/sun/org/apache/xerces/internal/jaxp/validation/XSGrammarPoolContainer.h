#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_XSGrammarPoolContainer_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_XSGrammarPoolContainer_h_
//$ interface com.sun.org.apache.xerces.internal.jaxp.validation.XSGrammarPoolContainer
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
								class XMLGrammarPool;
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
		class Boolean;
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

class XSGrammarPoolContainer : public ::java::lang::Object {
	$interface(XSGrammarPoolContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Boolean* getFeature($String* featureId) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getGrammarPool() {return nullptr;}
	virtual $Object* getProperty($String* propertyId) {return nullptr;}
	virtual bool isFullyComposed() {return false;}
	virtual void setFeature($String* featureId, bool state) {}
	virtual void setProperty($String* propertyId, Object$* state) {}
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_XSGrammarPoolContainer_h_