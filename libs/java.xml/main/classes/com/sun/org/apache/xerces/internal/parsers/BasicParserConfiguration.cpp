#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef EXTERNAL_GENERAL_ENTITIES
#undef EXTERNAL_GENERAL_ENTITIES_FEATURE
#undef EXTERNAL_PARAMETER_ENTITIES
#undef EXTERNAL_PARAMETER_ENTITIES_FEATURE
#undef FALSE
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NOT_SUPPORTED
#undef PARSER_SETTINGS
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_STRING
#undef XML_STRING_PROPERTY

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _BasicParserConfiguration_FieldInfo_[] = {
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, VALIDATION)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, NAMESPACES)},
	{"EXTERNAL_GENERAL_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, EXTERNAL_GENERAL_ENTITIES)},
	{"EXTERNAL_PARAMETER_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, EXTERNAL_PARAMETER_ENTITIES)},
	{"XML_STRING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, XML_STRING)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, SYMBOL_TABLE)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicParserConfiguration, ENTITY_RESOLVER)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fSymbolTable)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fLocale)},
	{"fComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(BasicParserConfiguration, fComponents)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fDocumentHandler)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fDTDHandler)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fDTDContentModelHandler)},
	{"fLastComponent", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(BasicParserConfiguration, fLastComponent)},
	{}
};

$MethodInfo _BasicParserConfiguration_MethodInfo_[] = {
	{"*addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"*getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(BasicParserConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PROTECTED, $method(BasicParserConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PROTECTED, $method(BasicParserConfiguration, init$, void, $SymbolTable*, $XMLComponentManager*)},
	{"addComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(BasicParserConfiguration, addComponent, void, $XMLComponent*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(BasicParserConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(BasicParserConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getDTDHandler, $XMLDTDHandler*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getDocumentHandler, $XMLDocumentHandler*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getErrorHandler, $XMLErrorHandler*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, getLocale, $Locale*)},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(BasicParserConfiguration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(BasicParserConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicParserConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration",
	_BasicParserConfiguration_FieldInfo_,
	_BasicParserConfiguration_MethodInfo_
};

$Object* allocate$BasicParserConfiguration($Class* clazz) {
	return $of($alloc(BasicParserConfiguration));
}

void BasicParserConfiguration::addRecognizedFeatures($StringArray* featureIds) {
	this->$ParserConfigurationSettings::addRecognizedFeatures(featureIds);
}

void BasicParserConfiguration::addRecognizedProperties($StringArray* propertyIds) {
	this->$ParserConfigurationSettings::addRecognizedProperties(propertyIds);
}

bool BasicParserConfiguration::getFeature($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeature(featureId);
}

bool BasicParserConfiguration::getFeature($String* featureId, bool defaultValue) {
	 return this->$ParserConfigurationSettings::getFeature(featureId, defaultValue);
}

$FeatureState* BasicParserConfiguration::getFeatureState($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeatureState(featureId);
}

$Object* BasicParserConfiguration::getProperty($String* propertyId) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId);
}

$Object* BasicParserConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId, defaultValue);
}

$PropertyState* BasicParserConfiguration::getPropertyState($String* propertyId) {
	 return this->$ParserConfigurationSettings::getPropertyState(propertyId);
}

int32_t BasicParserConfiguration::hashCode() {
	 return this->$ParserConfigurationSettings::hashCode();
}

bool BasicParserConfiguration::equals(Object$* arg0) {
	 return this->$ParserConfigurationSettings::equals(arg0);
}

$Object* BasicParserConfiguration::clone() {
	 return this->$ParserConfigurationSettings::clone();
}

$String* BasicParserConfiguration::toString() {
	 return this->$ParserConfigurationSettings::toString();
}

void BasicParserConfiguration::finalize() {
	this->$ParserConfigurationSettings::finalize();
}

$String* BasicParserConfiguration::VALIDATION = nullptr;
$String* BasicParserConfiguration::NAMESPACES = nullptr;
$String* BasicParserConfiguration::EXTERNAL_GENERAL_ENTITIES = nullptr;
$String* BasicParserConfiguration::EXTERNAL_PARAMETER_ENTITIES = nullptr;
$String* BasicParserConfiguration::XML_STRING = nullptr;
$String* BasicParserConfiguration::SYMBOL_TABLE = nullptr;
$String* BasicParserConfiguration::ERROR_HANDLER = nullptr;
$String* BasicParserConfiguration::ENTITY_RESOLVER = nullptr;

void BasicParserConfiguration::init$() {
	BasicParserConfiguration::init$(nullptr, nullptr);
}

void BasicParserConfiguration::init$($SymbolTable* symbolTable) {
	BasicParserConfiguration::init$(symbolTable, nullptr);
}

void BasicParserConfiguration::init$($SymbolTable* symbolTable$renamed, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, symbolTable, symbolTable$renamed);
	$ParserConfigurationSettings::init$(parentSettings);
	$set(this, fComponents, $new($ArrayList));
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
	$init($ParserConfigurationSettings);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		$ParserConfigurationSettings::PARSER_SETTINGS,
		BasicParserConfiguration::VALIDATION,
		BasicParserConfiguration::NAMESPACES,
		BasicParserConfiguration::EXTERNAL_GENERAL_ENTITIES,
		BasicParserConfiguration::EXTERNAL_PARAMETER_ENTITIES
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$nc(this->fFeatures)->put(BasicParserConfiguration::VALIDATION, $Boolean::FALSE);
	$nc(this->fFeatures)->put(BasicParserConfiguration::NAMESPACES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(BasicParserConfiguration::EXTERNAL_GENERAL_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(BasicParserConfiguration::EXTERNAL_PARAMETER_ENTITIES, $Boolean::TRUE);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		BasicParserConfiguration::XML_STRING,
		BasicParserConfiguration::SYMBOL_TABLE,
		BasicParserConfiguration::ERROR_HANDLER,
		BasicParserConfiguration::ENTITY_RESOLVER
	}));
	addRecognizedProperties(recognizedProperties);
	if (symbolTable == nullptr) {
		$assign(symbolTable, $new($SymbolTable));
	}
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fProperties)->put(BasicParserConfiguration::SYMBOL_TABLE, this->fSymbolTable);
}

void BasicParserConfiguration::addComponent($XMLComponent* component) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fComponents)->contains(component)) {
		return;
	}
	$nc(this->fComponents)->add(component);
	$var($StringArray, recognizedFeatures, $nc(component)->getRecognizedFeatures());
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, component->getRecognizedProperties());
	addRecognizedProperties(recognizedProperties);
	if (recognizedFeatures != nullptr) {
		for (int32_t i = 0; i < recognizedFeatures->length; ++i) {
			$var($String, featureId, recognizedFeatures->get(i));
			$var($Boolean, state, component->getFeatureDefault(featureId));
			if (state != nullptr) {
				$ParserConfigurationSettings::setFeature(featureId, state->booleanValue());
			}
		}
	}
	if (recognizedProperties != nullptr) {
		for (int32_t i = 0; i < recognizedProperties->length; ++i) {
			$var($String, propertyId, recognizedProperties->get(i));
			$var($Object, value, component->getPropertyDefault(propertyId));
			if (value != nullptr) {
				$ParserConfigurationSettings::setProperty(propertyId, value);
			}
		}
	}
}

void BasicParserConfiguration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
	if (this->fLastComponent != nullptr) {
		$nc(this->fLastComponent)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fLastComponent);
		}
	}
}

$XMLDocumentHandler* BasicParserConfiguration::getDocumentHandler() {
	return this->fDocumentHandler;
}

void BasicParserConfiguration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* BasicParserConfiguration::getDTDHandler() {
	return this->fDTDHandler;
}

void BasicParserConfiguration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	$set(this, fDTDContentModelHandler, handler);
}

$XMLDTDContentModelHandler* BasicParserConfiguration::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void BasicParserConfiguration::setEntityResolver($XMLEntityResolver* resolver) {
	$nc(this->fProperties)->put(BasicParserConfiguration::ENTITY_RESOLVER, resolver);
}

$XMLEntityResolver* BasicParserConfiguration::getEntityResolver() {
	return $cast($XMLEntityResolver, $nc(this->fProperties)->get(BasicParserConfiguration::ENTITY_RESOLVER));
}

void BasicParserConfiguration::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fProperties)->put(BasicParserConfiguration::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* BasicParserConfiguration::getErrorHandler() {
	return $cast($XMLErrorHandler, $nc(this->fProperties)->get(BasicParserConfiguration::ERROR_HANDLER));
}

void BasicParserConfiguration::setFeature($String* featureId, bool state) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setFeature(featureId, state);
			}
		}
	}
	$ParserConfigurationSettings::setFeature(featureId, state);
}

void BasicParserConfiguration::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setProperty(propertyId, value);
			}
		}
	}
	$ParserConfigurationSettings::setProperty(propertyId, value);
}

void BasicParserConfiguration::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
}

$Locale* BasicParserConfiguration::getLocale() {
	return this->fLocale;
}

void BasicParserConfiguration::reset() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			}
		}
	}
}

$PropertyState* BasicParserConfiguration::checkProperty($String* propertyId) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::XML_STRING_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::XML_STRING_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkProperty(propertyId);
}

$FeatureState* BasicParserConfiguration::checkFeature($String* featureId) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::PARSER_SETTINGS)->length();
		if (var$1 && featureId->endsWith($Constants::PARSER_SETTINGS)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkFeature(featureId);
}

BasicParserConfiguration::BasicParserConfiguration() {
}

void clinit$BasicParserConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(BasicParserConfiguration::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(BasicParserConfiguration::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(BasicParserConfiguration::EXTERNAL_GENERAL_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE}));
	$assignStatic(BasicParserConfiguration::EXTERNAL_PARAMETER_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE}));
	$assignStatic(BasicParserConfiguration::XML_STRING, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::XML_STRING_PROPERTY}));
	$assignStatic(BasicParserConfiguration::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(BasicParserConfiguration::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(BasicParserConfiguration::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
}

$Class* BasicParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(BasicParserConfiguration, name, initialize, &_BasicParserConfiguration_ClassInfo_, clinit$BasicParserConfiguration, allocate$BasicParserConfiguration);
	return class$;
}

$Class* BasicParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com