#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLParserConfiguration_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLDTDContentModelHandler;
							class XMLDTDHandler;
							class XMLDocumentHandler;
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
							namespace parser {

class XMLParserConfiguration : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager {
	$interface(XMLParserConfiguration, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager)
public:
	virtual void addRecognizedFeatures($StringArray* featureIds) {}
	virtual void addRecognizedProperties($StringArray* propertyIds) {}
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() {return nullptr;}
	using ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager::getFeature;
	virtual bool getFeature($String* featureId) override {return false;}
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	using ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager::getProperty;
	virtual $Object* getProperty($String* propertyId) override {return nullptr;}
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) {}
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* dtdContentModelHandler) {}
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) {}
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) {}
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver) {}
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) {}
	virtual void setFeature($String* featureId, bool state) {}
	virtual void setLocale(::java::util::Locale* locale) {}
	virtual void setProperty($String* propertyId, Object$* value) {}
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLParserConfiguration_h_