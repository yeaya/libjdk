#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>

#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef ELEMENT_ATTRIBUTE_LIMIT
#undef ENTITY_EXPANSION_LIMIT
#undef ENTITY_REPLACEMENT_LIMIT
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef JDK_ELEMENT_ATTRIBUTE_LIMIT
#undef JDK_ENTITY_EXPANSION_LIMIT
#undef JDK_ENTITY_REPLACEMENT_LIMIT
#undef JDK_GENERAL_ENTITY_SIZE_LIMIT
#undef JDK_MAX_ELEMENT_DEPTH
#undef JDK_MAX_OCCUR_LIMIT
#undef JDK_PARAMETER_ENTITY_SIZE_LIMIT
#undef JDK_TOTAL_ENTITY_SIZE_LIMIT
#undef JDK_XML_NAME_LIMIT
#undef LEGACY_APIPROPERTY
#undef MAX_ELEMENT_DEPTH_LIMIT
#undef MAX_NAME_LIMIT
#undef MAX_OCCUR_NODE_LIMIT
#undef PARAMETER_ENTITY_SIZE_LIMIT
#undef SP_ELEMENT_ATTRIBUTE_LIMIT
#undef SP_ENTITY_EXPANSION_LIMIT
#undef SP_ENTITY_REPLACEMENT_LIMIT
#undef SP_GENERAL_ENTITY_SIZE_LIMIT
#undef SP_MAX_ELEMENT_DEPTH
#undef SP_MAX_OCCUR_LIMIT
#undef SP_PARAMETER_ENTITY_SIZE_LIMIT
#undef SP_TOTAL_ENTITY_SIZE_LIMIT
#undef SP_XML_NAME_LIMIT
#undef TOTAL_ENTITY_SIZE_LIMIT

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

$FieldInfo _XMLSecurityManager$Limit_FieldInfo_[] = {
	{"ENTITY_EXPANSION_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, ENTITY_EXPANSION_LIMIT)},
	{"MAX_OCCUR_NODE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, MAX_OCCUR_NODE_LIMIT)},
	{"ELEMENT_ATTRIBUTE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, ELEMENT_ATTRIBUTE_LIMIT)},
	{"TOTAL_ENTITY_SIZE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, TOTAL_ENTITY_SIZE_LIMIT)},
	{"GENERAL_ENTITY_SIZE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, GENERAL_ENTITY_SIZE_LIMIT)},
	{"PARAMETER_ENTITY_SIZE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, PARAMETER_ENTITY_SIZE_LIMIT)},
	{"MAX_ELEMENT_DEPTH_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, MAX_ELEMENT_DEPTH_LIMIT)},
	{"MAX_NAME_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, MAX_NAME_LIMIT)},
	{"ENTITY_REPLACEMENT_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$Limit, ENTITY_REPLACEMENT_LIMIT)},
	{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLSecurityManager$Limit, $VALUES)},
	{"key", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityManager$Limit, key$)},
	{"apiProperty", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityManager$Limit, apiProperty$)},
	{"systemProperty", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityManager$Limit, systemProperty$)},
	{"defaultValue", "I", nullptr, $FINAL, $field(XMLSecurityManager$Limit, defaultValue$)},
	{"secureValue", "I", nullptr, $FINAL, $field(XMLSecurityManager$Limit, secureValue$)},
	{}
};

$MethodInfo _XMLSecurityManager$Limit_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLSecurityManager$Limit, $values, $XMLSecurityManager$LimitArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V", $PRIVATE, $method(XMLSecurityManager$Limit, init$, void, $String*, int32_t, $String*, $String*, $String*, int32_t, int32_t)},
	{"apiProperty", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, apiProperty, $String*)},
	{"defaultValue", "()I", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, defaultValue, int32_t)},
	{"getState", "(Ljava/lang/String;)Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, getState, $JdkProperty$State*, $String*)},
	{"is", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, is, bool, $String*)},
	{"key", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, key, $String*)},
	{"secureValue", "()I", nullptr, 0, $method(XMLSecurityManager$Limit, secureValue, int32_t)},
	{"systemProperty", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityManager$Limit, systemProperty, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityManager$Limit, valueOf, XMLSecurityManager$Limit*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityManager$Limit, values, $XMLSecurityManager$LimitArray*)},
	{}
};

$InnerClassInfo _XMLSecurityManager$Limit_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager$Limit", "com.sun.org.apache.xerces.internal.utils.XMLSecurityManager", "Limit", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityManager$Limit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager$Limit",
	"java.lang.Enum",
	nullptr,
	_XMLSecurityManager$Limit_FieldInfo_,
	_XMLSecurityManager$Limit_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;>;",
	nullptr,
	_XMLSecurityManager$Limit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager"
};

$Object* allocate$XMLSecurityManager$Limit($Class* clazz) {
	return $of($alloc(XMLSecurityManager$Limit));
}

XMLSecurityManager$Limit* XMLSecurityManager$Limit::ENTITY_EXPANSION_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::ELEMENT_ATTRIBUTE_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::MAX_NAME_LIMIT = nullptr;
XMLSecurityManager$Limit* XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT = nullptr;
$XMLSecurityManager$LimitArray* XMLSecurityManager$Limit::$VALUES = nullptr;

$XMLSecurityManager$LimitArray* XMLSecurityManager$Limit::$values() {
	$init(XMLSecurityManager$Limit);
	return $new($XMLSecurityManager$LimitArray, {
		XMLSecurityManager$Limit::ENTITY_EXPANSION_LIMIT,
		XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT,
		XMLSecurityManager$Limit::ELEMENT_ATTRIBUTE_LIMIT,
		XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT,
		XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT,
		XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT,
		XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT,
		XMLSecurityManager$Limit::MAX_NAME_LIMIT,
		XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT
	});
}

$XMLSecurityManager$LimitArray* XMLSecurityManager$Limit::values() {
	$init(XMLSecurityManager$Limit);
	return $cast($XMLSecurityManager$LimitArray, XMLSecurityManager$Limit::$VALUES->clone());
}

XMLSecurityManager$Limit* XMLSecurityManager$Limit::valueOf($String* name) {
	$init(XMLSecurityManager$Limit);
	return $cast(XMLSecurityManager$Limit, $Enum::valueOf(XMLSecurityManager$Limit::class$, name));
}

void XMLSecurityManager$Limit::init$($String* $enum$name, int32_t $enum$ordinal, $String* key, $String* apiProperty, $String* systemProperty, int32_t value, int32_t secureValue) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, key$, key);
	$set(this, apiProperty$, apiProperty);
	$set(this, systemProperty$, systemProperty);
	this->defaultValue$ = value;
	this->secureValue$ = secureValue;
}

bool XMLSecurityManager$Limit::is($String* name) {
	bool var$0 = (this->systemProperty$ != nullptr && $nc(this->systemProperty$)->equals(name));
	return var$0 || ($nc(this->apiProperty$)->equals(name));
}

$JdkProperty$State* XMLSecurityManager$Limit::getState($String* name) {
	if (this->systemProperty$ != nullptr && $nc(this->systemProperty$)->equals(name)) {
		$init($JdkProperty$State);
		return $JdkProperty$State::APIPROPERTY;
	} else if ($nc(this->apiProperty$)->equals(name)) {
		$init($JdkProperty$State);
		return $JdkProperty$State::LEGACY_APIPROPERTY;
	}
	return nullptr;
}

$String* XMLSecurityManager$Limit::key() {
	return this->key$;
}

$String* XMLSecurityManager$Limit::apiProperty() {
	return this->apiProperty$;
}

$String* XMLSecurityManager$Limit::systemProperty() {
	return this->systemProperty$;
}

int32_t XMLSecurityManager$Limit::defaultValue() {
	return this->defaultValue$;
}

int32_t XMLSecurityManager$Limit::secureValue() {
	return this->secureValue$;
}

void clinit$XMLSecurityManager$Limit($Class* class$) {
	$init($JdkConstants);
	$assignStatic(XMLSecurityManager$Limit::ENTITY_EXPANSION_LIMIT, $new(XMLSecurityManager$Limit, "ENTITY_EXPANSION_LIMIT"_s, 0, "EntityExpansionLimit"_s, $JdkConstants::JDK_ENTITY_EXPANSION_LIMIT, $JdkConstants::SP_ENTITY_EXPANSION_LIMIT, 0, 0x0000FA00));
	$assignStatic(XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT, $new(XMLSecurityManager$Limit, "MAX_OCCUR_NODE_LIMIT"_s, 1, "MaxOccurLimit"_s, $JdkConstants::JDK_MAX_OCCUR_LIMIT, $JdkConstants::SP_MAX_OCCUR_LIMIT, 0, 5000));
	$assignStatic(XMLSecurityManager$Limit::ELEMENT_ATTRIBUTE_LIMIT, $new(XMLSecurityManager$Limit, "ELEMENT_ATTRIBUTE_LIMIT"_s, 2, "ElementAttributeLimit"_s, $JdkConstants::JDK_ELEMENT_ATTRIBUTE_LIMIT, $JdkConstants::SP_ELEMENT_ATTRIBUTE_LIMIT, 0, 10000));
	$assignStatic(XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT, $new(XMLSecurityManager$Limit, "TOTAL_ENTITY_SIZE_LIMIT"_s, 3, "TotalEntitySizeLimit"_s, $JdkConstants::JDK_TOTAL_ENTITY_SIZE_LIMIT, $JdkConstants::SP_TOTAL_ENTITY_SIZE_LIMIT, 0, 0x02FAF080));
	$assignStatic(XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT, $new(XMLSecurityManager$Limit, "GENERAL_ENTITY_SIZE_LIMIT"_s, 4, "MaxEntitySizeLimit"_s, $JdkConstants::JDK_GENERAL_ENTITY_SIZE_LIMIT, $JdkConstants::SP_GENERAL_ENTITY_SIZE_LIMIT, 0, 0));
	$assignStatic(XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT, $new(XMLSecurityManager$Limit, "PARAMETER_ENTITY_SIZE_LIMIT"_s, 5, "MaxEntitySizeLimit"_s, $JdkConstants::JDK_PARAMETER_ENTITY_SIZE_LIMIT, $JdkConstants::SP_PARAMETER_ENTITY_SIZE_LIMIT, 0, 0x000F4240));
	$assignStatic(XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT, $new(XMLSecurityManager$Limit, "MAX_ELEMENT_DEPTH_LIMIT"_s, 6, "MaxElementDepthLimit"_s, $JdkConstants::JDK_MAX_ELEMENT_DEPTH, $JdkConstants::SP_MAX_ELEMENT_DEPTH, 0, 0));
	$assignStatic(XMLSecurityManager$Limit::MAX_NAME_LIMIT, $new(XMLSecurityManager$Limit, "MAX_NAME_LIMIT"_s, 7, "MaxXMLNameLimit"_s, $JdkConstants::JDK_XML_NAME_LIMIT, $JdkConstants::SP_XML_NAME_LIMIT, 1000, 1000));
	$assignStatic(XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT, $new(XMLSecurityManager$Limit, "ENTITY_REPLACEMENT_LIMIT"_s, 8, "EntityReplacementLimit"_s, $JdkConstants::JDK_ENTITY_REPLACEMENT_LIMIT, $JdkConstants::SP_ENTITY_REPLACEMENT_LIMIT, 0, 0x002DC6C0));
	$assignStatic(XMLSecurityManager$Limit::$VALUES, XMLSecurityManager$Limit::$values());
}

XMLSecurityManager$Limit::XMLSecurityManager$Limit() {
}

$Class* XMLSecurityManager$Limit::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityManager$Limit, name, initialize, &_XMLSecurityManager$Limit_ClassInfo_, clinit$XMLSecurityManager$Limit, allocate$XMLSecurityManager$Limit);
	return class$;
}

$Class* XMLSecurityManager$Limit::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com