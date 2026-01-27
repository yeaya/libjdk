#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarLoader_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarLoader_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader
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
							namespace parser {
								class XMLEntityResolver;
								class XMLErrorHandler;
								class XMLInputSource;
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
		class Locale;
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

class XMLGrammarLoader : public ::java::lang::Object {
	$interface(XMLGrammarLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* featureId) {return false;}
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	virtual $Object* getProperty($String* propertyId) {return nullptr;}
	virtual $StringArray* getRecognizedFeatures() {return nullptr;}
	virtual $StringArray* getRecognizedProperties() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* loadGrammar(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) {return nullptr;}
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver) {}
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) {}
	virtual void setFeature($String* featureId, bool state) {}
	virtual void setLocale(::java::util::Locale* locale) {}
	virtual void setProperty($String* propertyId, Object$* state) {}
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XMLGrammarLoader_h_