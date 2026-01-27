#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter$1.h>
#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <org/xml/sax/ErrorHandler.h>
#include <jcpp.h>

#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef FEATURE_DEFAULTS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX

using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter$1 = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter$1;
using $DefaultErrorHandler = ::com::sun::org::apache::xerces::internal::util::DefaultErrorHandler;
using $ErrorHandlerProxy = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLErrorReporter_FieldInfo_[] = {
	{"SEVERITY_WARNING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorReporter, SEVERITY_WARNING)},
	{"SEVERITY_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorReporter, SEVERITY_ERROR)},
	{"SEVERITY_FATAL_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorReporter, SEVERITY_FATAL_ERROR)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLErrorReporter, CONTINUE_AFTER_FATAL_ERROR)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLErrorReporter, ERROR_HANDLER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorReporter, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorReporter, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorReporter, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorReporter, PROPERTY_DEFAULTS)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XMLErrorReporter, fLocale)},
	{"fMessageFormatters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;>;", $PROTECTED, $field(XMLErrorReporter, fMessageFormatters)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $field(XMLErrorReporter, fErrorHandler)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XMLErrorReporter, fLocator)},
	{"fContinueAfterFatalError", "Z", nullptr, $PROTECTED, $field(XMLErrorReporter, fContinueAfterFatalError)},
	{"fDefaultErrorHandler", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $field(XMLErrorReporter, fDefaultErrorHandler)},
	{"fSaxProxy", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(XMLErrorReporter, fSaxProxy)},
	{}
};

$MethodInfo _XMLErrorReporter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorReporter, init$, void)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getFeatureDefault, $Boolean*, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getLocale, $Locale*)},
	{"getMessageFormatter", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getMessageFormatter, $MessageFormatter*, $String*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getRecognizedProperties, $StringArray*)},
	{"getSAXErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, getSAXErrorHandler, $ErrorHandler*)},
	{"putMessageFormatter", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, putMessageFormatter, void, $String*, $MessageFormatter*)},
	{"removeMessageFormatter", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, removeMessageFormatter, $MessageFormatter*, $String*)},
	{"reportError", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;S)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, reportError, $String*, $String*, $String*, $ObjectArray*, int16_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;SLjava/lang/Exception;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, reportError, $String*, $String*, $String*, $ObjectArray*, int16_t, $Exception*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;S)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, reportError, $String*, $XMLLocator*, $String*, $String*, $ObjectArray*, int16_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;SLjava/lang/Exception;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, reportError, $String*, $XMLLocator*, $String*, $String*, $ObjectArray*, int16_t, $Exception*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentLocator", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, setDocumentLocator, void, $XMLLocator*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, setLocale, void, $Locale*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLErrorReporter, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$InnerClassInfo _XMLErrorReporter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLErrorReporter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent",
	_XMLErrorReporter_FieldInfo_,
	_XMLErrorReporter_MethodInfo_,
	nullptr,
	nullptr,
	_XMLErrorReporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1"
};

$Object* allocate$XMLErrorReporter($Class* clazz) {
	return $of($alloc(XMLErrorReporter));
}

$String* XMLErrorReporter::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XMLErrorReporter::ERROR_HANDLER = nullptr;
$StringArray* XMLErrorReporter::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLErrorReporter::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLErrorReporter::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLErrorReporter::PROPERTY_DEFAULTS = nullptr;

void XMLErrorReporter::init$() {
	$set(this, fSaxProxy, nullptr);
	$set(this, fMessageFormatters, $new($HashMap));
}

void XMLErrorReporter::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
}

$Locale* XMLErrorReporter::getLocale() {
	return this->fLocale;
}

void XMLErrorReporter::setDocumentLocator($XMLLocator* locator) {
	$set(this, fLocator, locator);
}

void XMLErrorReporter::putMessageFormatter($String* domain, $MessageFormatter* messageFormatter) {
	$nc(this->fMessageFormatters)->put(domain, messageFormatter);
}

$MessageFormatter* XMLErrorReporter::getMessageFormatter($String* domain) {
	return $cast($MessageFormatter, $nc(this->fMessageFormatters)->get(domain));
}

$MessageFormatter* XMLErrorReporter::removeMessageFormatter($String* domain) {
	return $cast($MessageFormatter, $nc(this->fMessageFormatters)->remove(domain));
}

$String* XMLErrorReporter::reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity) {
	return reportError(this->fLocator, domain, key, arguments, severity);
}

$String* XMLErrorReporter::reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity, $Exception* exception) {
	return reportError(this->fLocator, domain, key, arguments, severity, exception);
}

$String* XMLErrorReporter::reportError($XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity) {
	return reportError(location, domain, key, arguments, severity, nullptr);
}

$String* XMLErrorReporter::reportError($XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity, $Exception* exception) {
	$useLocalCurrentObjectStackCache();
	$var($MessageFormatter, messageFormatter, getMessageFormatter(domain));
	$var($String, message, nullptr);
	if (messageFormatter != nullptr) {
		$assign(message, messageFormatter->formatMessage(this->fLocale, key, arguments));
	} else {
		$var($StringBuffer, str, $new($StringBuffer));
		str->append(domain);
		str->append(u'#');
		str->append(key);
		int32_t argCount = arguments != nullptr ? $nc(arguments)->length : 0;
		if (argCount > 0) {
			str->append(u'?');
			for (int32_t i = 0; i < argCount; ++i) {
				str->append(arguments->get(i));
				if (i < argCount - 1) {
					str->append(u'&');
				}
			}
		}
		$assign(message, str->toString());
	}
	$var($XMLParseException, parseException, (exception != nullptr) ? $new($XMLParseException, location, message, exception) : $new($XMLParseException, location, message));
	$var($XMLErrorHandler, errorHandler, this->fErrorHandler);
	if (errorHandler == nullptr) {
		if (this->fDefaultErrorHandler == nullptr) {
			$set(this, fDefaultErrorHandler, $new($DefaultErrorHandler));
		}
		$assign(errorHandler, this->fDefaultErrorHandler);
	}
	switch (severity) {
	case XMLErrorReporter::SEVERITY_WARNING:
		{
			{
				$nc(errorHandler)->warning(domain, key, parseException);
				break;
			}
		}
	case XMLErrorReporter::SEVERITY_ERROR:
		{
			{
				$nc(errorHandler)->error(domain, key, parseException);
				break;
			}
		}
	case XMLErrorReporter::SEVERITY_FATAL_ERROR:
		{
			{
				$nc(errorHandler)->fatalError(domain, key, parseException);
				if (!this->fContinueAfterFatalError) {
					$throw(parseException);
				}
				break;
			}
		}
	}
	return message;
}

void XMLErrorReporter::reset($XMLComponentManager* componentManager) {
	this->fContinueAfterFatalError = $nc(componentManager)->getFeature(XMLErrorReporter::CONTINUE_AFTER_FATAL_ERROR, false);
	$set(this, fErrorHandler, $cast($XMLErrorHandler, componentManager->getProperty(XMLErrorReporter::ERROR_HANDLER)));
}

$StringArray* XMLErrorReporter::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLErrorReporter::RECOGNIZED_FEATURES)->clone());
}

void XMLErrorReporter::setFeature($String* featureId, bool state) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE)) {
			this->fContinueAfterFatalError = state;
		}
	}
}

bool XMLErrorReporter::getFeature($String* featureId) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE)) {
			return this->fContinueAfterFatalError;
		}
	}
	return false;
}

$StringArray* XMLErrorReporter::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLErrorReporter::RECOGNIZED_PROPERTIES)->clone());
}

void XMLErrorReporter::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::ERROR_HANDLER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::ERROR_HANDLER_PROPERTY)) {
			$set(this, fErrorHandler, $cast($XMLErrorHandler, value));
		}
	}
}

$Boolean* XMLErrorReporter::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLErrorReporter::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLErrorReporter::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLErrorReporter::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLErrorReporter::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLErrorReporter::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLErrorReporter::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLErrorReporter::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

$XMLErrorHandler* XMLErrorReporter::getErrorHandler() {
	return this->fErrorHandler;
}

$ErrorHandler* XMLErrorReporter::getSAXErrorHandler() {
	if (this->fSaxProxy == nullptr) {
		$set(this, fSaxProxy, $new($XMLErrorReporter$1, this));
	}
	return this->fSaxProxy;
}

void clinit$XMLErrorReporter($Class* class$) {
	$init($Constants);
	$assignStatic(XMLErrorReporter::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XMLErrorReporter::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLErrorReporter::RECOGNIZED_FEATURES, $new($StringArray, {XMLErrorReporter::CONTINUE_AFTER_FATAL_ERROR}));
	$assignStatic(XMLErrorReporter::FEATURE_DEFAULTS, $new($BooleanArray, {($Boolean*)nullptr}));
	$assignStatic(XMLErrorReporter::RECOGNIZED_PROPERTIES, $new($StringArray, {XMLErrorReporter::ERROR_HANDLER}));
	$assignStatic(XMLErrorReporter::PROPERTY_DEFAULTS, $new($ObjectArray, {($Object*)nullptr}));
}

XMLErrorReporter::XMLErrorReporter() {
}

$Class* XMLErrorReporter::load$($String* name, bool initialize) {
	$loadClass(XMLErrorReporter, name, initialize, &_XMLErrorReporter_ClassInfo_, clinit$XMLErrorReporter, allocate$XMLErrorReporter);
	return class$;
}

$Class* XMLErrorReporter::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com