#ifndef _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLErrorReporter
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <java/lang/Array.h>

#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SEVERITY_ERROR")
#undef SEVERITY_ERROR
#pragma push_macro("SEVERITY_FATAL_ERROR")
#undef SEVERITY_FATAL_ERROR
#pragma push_macro("SEVERITY_WARNING")
#undef SEVERITY_WARNING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class MessageFormatter;
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
							class XMLLocator;
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
								class XMLComponentManager;
								class XMLErrorHandler;
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
		class Exception;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ErrorHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLErrorReporter : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent {
	$class(XMLErrorReporter, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent)
public:
	XMLErrorReporter();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler();
	virtual bool getFeature($String* featureId);
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::java::util::Locale* getLocale();
	virtual ::com::sun::org::apache::xerces::internal::util::MessageFormatter* getMessageFormatter($String* domain);
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual ::org::xml::sax::ErrorHandler* getSAXErrorHandler();
	virtual void putMessageFormatter($String* domain, ::com::sun::org::apache::xerces::internal::util::MessageFormatter* messageFormatter);
	virtual ::com::sun::org::apache::xerces::internal::util::MessageFormatter* removeMessageFormatter($String* domain);
	virtual $String* reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity);
	virtual $String* reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity, ::java::lang::Exception* exception);
	virtual $String* reportError(::com::sun::org::apache::xerces::internal::xni::XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity);
	virtual $String* reportError(::com::sun::org::apache::xerces::internal::xni::XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity, ::java::lang::Exception* exception);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void setDocumentLocator(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator);
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLocale(::java::util::Locale* locale);
	virtual void setProperty($String* propertyId, Object$* value) override;
	static const int16_t SEVERITY_WARNING = 0;
	static const int16_t SEVERITY_ERROR = 1;
	static const int16_t SEVERITY_FATAL_ERROR = 2;
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* ERROR_HANDLER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	::java::util::Locale* fLocale = nullptr;
	::java::util::Map* fMessageFormatters = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	bool fContinueAfterFatalError = false;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* fDefaultErrorHandler = nullptr;
	::org::xml::sax::ErrorHandler* fSaxProxy = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SEVERITY_ERROR")
#pragma pop_macro("SEVERITY_FATAL_ERROR")
#pragma pop_macro("SEVERITY_WARNING")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter_h_