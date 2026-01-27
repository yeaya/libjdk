#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/xml/internal/stream/StaxEntityResolverWrapper.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLOutputFactory.h>
#include <javax/xml/stream/XMLResolver.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jcpp.h>

#undef ADD_NAMESPACE_DECL_AS_ATTRIBUTE
#undef ALLOCATOR
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef APIPROPERTY
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef CONTEXT_READER
#undef CONTEXT_WRITER
#undef ESCAPE_CHARACTERS
#undef FALSE
#undef IGNORE_EXTERNAL_DTD
#undef IS_COALESCING
#undef IS_NAMESPACE_AWARE
#undef IS_REPAIRING_NAMESPACES
#undef IS_REPLACING_ENTITY_REFERENCES
#undef IS_SUPPORTING_EXTERNAL_ENTITIES
#undef IS_VALIDATING
#undef NAMESPACES_FEATURE
#undef READER_IN_DEFINED_STATE
#undef REPORTER
#undef RESOLVER
#undef REUSE_INSTANCE
#undef SAX_FEATURE_PREFIX
#undef SECURITY_MANAGER
#undef STAX_ENTITIES
#undef STAX_ENTITY_RESOLVER_PROPERTY
#undef STAX_NOTATIONS
#undef STAX_REPORT_CDATA_EVENT
#undef STRING_INTERNING
#undef STRING_INTERNING_FEATURE
#undef SUPPORT_DTD
#undef TRUE
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WARN_ON_DUPLICATE_ENTITYDEF_FEATURE
#undef WARN_ON_UNDECLARED_ELEMDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_SECURITY_PROPERTY_MANAGER
#undef ZEPHYR_PROPERTY_PREFIX

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $StaxEntityResolverWrapper = ::com::sun::xml::internal::stream::StaxEntityResolverWrapper;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLOutputFactory = ::javax::xml::stream::XMLOutputFactory;
using $XMLResolver = ::javax::xml::stream::XMLResolver;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _PropertyManager_FieldInfo_[] = {
	{"STAX_NOTATIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyManager, STAX_NOTATIONS)},
	{"STAX_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PropertyManager, STAX_ENTITIES)},
	{"STRING_INTERNING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyManager, STRING_INTERNING)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyManager, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyManager, XML_SECURITY_PROPERTY_MANAGER)},
	{"supportedProps", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", 0, $field(PropertyManager, supportedProps)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(PropertyManager, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(PropertyManager, fSecurityPropertyMgr)},
	{"CONTEXT_READER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PropertyManager, CONTEXT_READER)},
	{"CONTEXT_WRITER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PropertyManager, CONTEXT_WRITER)},
	{}
};

$MethodInfo _PropertyManager_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(PropertyManager, init$, void, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(PropertyManager, init$, void, PropertyManager*)},
	{"containsProperty", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(PropertyManager, containsProperty, bool, $String*)},
	{"getProperties", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(PropertyManager, getProperties, $HashMap*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PropertyManager, getProperty, $Object*, $String*)},
	{"initConfigurableReaderProperties", "()V", nullptr, $PRIVATE, $method(PropertyManager, initConfigurableReaderProperties, void)},
	{"initWriterProps", "()V", nullptr, $PRIVATE, $method(PropertyManager, initWriterProps, void)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PropertyManager, setProperty, void, $String*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PropertyManager, toString, $String*)},
	{}
};

$ClassInfo _PropertyManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.PropertyManager",
	"java.lang.Object",
	nullptr,
	_PropertyManager_FieldInfo_,
	_PropertyManager_MethodInfo_
};

$Object* allocate$PropertyManager($Class* clazz) {
	return $of($alloc(PropertyManager));
}

$String* PropertyManager::STAX_NOTATIONS = nullptr;
$String* PropertyManager::STAX_ENTITIES = nullptr;
$String* PropertyManager::STRING_INTERNING = nullptr;
$String* PropertyManager::SECURITY_MANAGER = nullptr;
$String* PropertyManager::XML_SECURITY_PROPERTY_MANAGER = nullptr;

void PropertyManager::init$(int32_t context) {
	$set(this, supportedProps, $new($HashMap));
	switch (context) {
	case PropertyManager::CONTEXT_READER:
		{
			{
				initConfigurableReaderProperties();
				break;
			}
		}
	case PropertyManager::CONTEXT_WRITER:
		{
			{
				initWriterProps();
				break;
			}
		}
	}
}

void PropertyManager::init$(PropertyManager* propertyManager) {
	$set(this, supportedProps, $new($HashMap));
	$var($HashMap, properties, $nc(propertyManager)->getProperties());
	$nc(this->supportedProps)->putAll(properties);
	$set(this, fSecurityManager, $cast($XMLSecurityManager, getProperty(PropertyManager::SECURITY_MANAGER)));
	$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, getProperty(PropertyManager::XML_SECURITY_PROPERTY_MANAGER)));
}

$HashMap* PropertyManager::getProperties() {
	return this->supportedProps;
}

void PropertyManager::initConfigurableReaderProperties() {
	$useLocalCurrentObjectStackCache();
	$init($XMLInputFactory);
	$init($Boolean);
	$nc(this->supportedProps)->put($XMLInputFactory::IS_NAMESPACE_AWARE, $Boolean::TRUE);
	$nc(this->supportedProps)->put($XMLInputFactory::IS_VALIDATING, $Boolean::FALSE);
	$nc(this->supportedProps)->put($XMLInputFactory::IS_REPLACING_ENTITY_REFERENCES, $Boolean::TRUE);
	$nc(this->supportedProps)->put($XMLInputFactory::IS_SUPPORTING_EXTERNAL_ENTITIES, $Boolean::TRUE);
	$nc(this->supportedProps)->put($XMLInputFactory::IS_COALESCING, $Boolean::FALSE);
	$nc(this->supportedProps)->put($XMLInputFactory::SUPPORT_DTD, $Boolean::TRUE);
	$nc(this->supportedProps)->put($XMLInputFactory::REPORTER, nullptr);
	$nc(this->supportedProps)->put($XMLInputFactory::RESOLVER, nullptr);
	$nc(this->supportedProps)->put($XMLInputFactory::ALLOCATOR, nullptr);
	$nc(this->supportedProps)->put(PropertyManager::STAX_NOTATIONS, nullptr);
	$init($Constants);
	$nc(this->supportedProps)->put($$str({$Constants::SAX_FEATURE_PREFIX, $Constants::STRING_INTERNING_FEATURE}), $($Boolean::valueOf(true)));
	$nc(this->supportedProps)->put($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}), $($Boolean::valueOf(true)));
	$nc(this->supportedProps)->put($Constants::ADD_NAMESPACE_DECL_AS_ATTRIBUTE, $Boolean::FALSE);
	$nc(this->supportedProps)->put($Constants::READER_IN_DEFINED_STATE, $($Boolean::valueOf(true)));
	$nc(this->supportedProps)->put($Constants::REUSE_INSTANCE, $($Boolean::valueOf(true)));
	$nc(this->supportedProps)->put($$str({$Constants::ZEPHYR_PROPERTY_PREFIX, $Constants::STAX_REPORT_CDATA_EVENT}), $($Boolean::valueOf(false)));
	$nc(this->supportedProps)->put($$str({$Constants::ZEPHYR_PROPERTY_PREFIX, $Constants::IGNORE_EXTERNAL_DTD}), $Boolean::FALSE);
	$nc(this->supportedProps)->put($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}), $($Boolean::valueOf(false)));
	$nc(this->supportedProps)->put($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}), $($Boolean::valueOf(false)));
	$nc(this->supportedProps)->put($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}), $($Boolean::valueOf(false)));
	$set(this, fSecurityManager, $new($XMLSecurityManager, true));
	$nc(this->supportedProps)->put(PropertyManager::SECURITY_MANAGER, this->fSecurityManager);
	$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
	$nc(this->supportedProps)->put(PropertyManager::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$init($XMLConstants);
	$init($JdkXmlUtils);
	$nc(this->supportedProps)->put($XMLConstants::USE_CATALOG, $($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT)));
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* f = arr$->get(i$);
			{
				$nc(this->supportedProps)->put($($nc(f)->getPropertyName()), nullptr);
			}
		}
	}
	$init($JdkConstants);
	$nc(this->supportedProps)->put($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)));
}

void PropertyManager::initWriterProps() {
	$init($XMLOutputFactory);
	$init($Boolean);
	$nc(this->supportedProps)->put($XMLOutputFactory::IS_REPAIRING_NAMESPACES, $Boolean::FALSE);
	$init($Constants);
	$nc(this->supportedProps)->put($Constants::ESCAPE_CHARACTERS, $Boolean::TRUE);
	$nc(this->supportedProps)->put($Constants::REUSE_INSTANCE, $($Boolean::valueOf(true)));
}

bool PropertyManager::containsProperty($String* property) {
	bool var$1 = $nc(this->supportedProps)->containsKey(property);
	bool var$0 = var$1 || (this->fSecurityManager != nullptr && $nc(this->fSecurityManager)->getIndex(property) > -1);
	return var$0 || (this->fSecurityPropertyMgr != nullptr && $nc(this->fSecurityPropertyMgr)->getIndex(property) > -1);
}

$Object* PropertyManager::getProperty($String* property) {
	$var($String, propertyValue, (this->fSecurityManager != nullptr) ? $nc(this->fSecurityManager)->getLimitAsString(property) : ($String*)nullptr);
	return $of(propertyValue != nullptr ? $of(propertyValue) : $nc(this->supportedProps)->get(property));
}

void PropertyManager::setProperty($String* property, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, equivalentProperty, nullptr);
	$init($XMLInputFactory);
	if ($nc(property)->equals($XMLInputFactory::IS_NAMESPACE_AWARE)) {
		$init($Constants);
		$assign(equivalentProperty, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	} else {
		if (property->equals($XMLInputFactory::IS_VALIDATING)) {
			if (($instanceOf($Boolean, value)) && $nc(($cast($Boolean, value)))->booleanValue()) {
				$throwNew($IllegalArgumentException, "true value of isValidating not supported"_s);
			}
		} else if (property->equals(PropertyManager::STRING_INTERNING)) {
			if (($instanceOf($Boolean, value)) && !$nc(($cast($Boolean, value)))->booleanValue()) {
				$throwNew($IllegalArgumentException, $$str({"false value of "_s, PropertyManager::STRING_INTERNING, "feature is not supported"_s}));
			}
		} else {
			if (property->equals($XMLInputFactory::RESOLVER)) {
				$init($Constants);
				$nc(this->supportedProps)->put($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::STAX_ENTITY_RESOLVER_PROPERTY}), $$new($StaxEntityResolverWrapper, $cast($XMLResolver, value)));
			}
		}
	}
	$init($Constants);
	if ($nc(property)->equals($Constants::SECURITY_MANAGER)) {
		$set(this, fSecurityManager, $XMLSecurityManager::convert(value, this->fSecurityManager));
		$nc(this->supportedProps)->put($Constants::SECURITY_MANAGER, this->fSecurityManager);
		return;
	}
	$init($JdkConstants);
	if ($nc(property)->equals($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)) {
		if (value == nullptr) {
			$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
		} else {
			$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, value));
		}
		$nc(this->supportedProps)->put($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
		return;
	}
	$init($JdkProperty$State);
	if (this->fSecurityManager == nullptr || !$nc(this->fSecurityManager)->setLimit(property, $JdkProperty$State::APIPROPERTY, value)) {
		$init($XMLSecurityPropertyManager$State);
		if (this->fSecurityPropertyMgr == nullptr || !$nc(this->fSecurityPropertyMgr)->setValue(property, $XMLSecurityPropertyManager$State::APIPROPERTY, value)) {
			$nc(this->supportedProps)->put(property, value);
		}
	}
	if (equivalentProperty != nullptr) {
		$nc(this->supportedProps)->put(equivalentProperty, value);
	}
}

$String* PropertyManager::toString() {
	return $nc(this->supportedProps)->toString();
}

PropertyManager::PropertyManager() {
}

void clinit$PropertyManager($Class* class$) {
	$assignStatic(PropertyManager::STAX_NOTATIONS, "javax.xml.stream.notations"_s);
	$assignStatic(PropertyManager::STAX_ENTITIES, "javax.xml.stream.entities"_s);
	$assignStatic(PropertyManager::STRING_INTERNING, "http://xml.org/sax/features/string-interning"_s);
	$init($Constants);
	$assignStatic(PropertyManager::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
	$init($JdkConstants);
	$assignStatic(PropertyManager::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
}

$Class* PropertyManager::load$($String* name, bool initialize) {
	$loadClass(PropertyManager, name, initialize, &_PropertyManager_ClassInfo_, clinit$PropertyManager, allocate$PropertyManager);
	return class$;
}

$Class* PropertyManager::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com