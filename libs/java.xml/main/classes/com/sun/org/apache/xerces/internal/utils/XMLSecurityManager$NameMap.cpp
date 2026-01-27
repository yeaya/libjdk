#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap.h>

#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jcpp.h>

#undef ELEMENT_ATTRIBUTE_LIMIT
#undef ENTITY_EXPANSION_LIMIT
#undef MAX_OCCUR_LIMIT
#undef MAX_OCCUR_NODE_LIMIT
#undef SP_ELEMENT_ATTRIBUTE_LIMIT
#undef SP_ENTITY_EXPANSION_LIMIT
#undef SP_MAX_OCCUR_LIMIT

using $XMLSecurityManager$NameMapArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$NameMap>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

$FieldInfo _XMLSecurityManager$NameMap_FieldInfo_[] = {
	{"ENTITY_EXPANSION_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$NameMap, ENTITY_EXPANSION_LIMIT)},
	{"MAX_OCCUR_NODE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$NameMap, MAX_OCCUR_NODE_LIMIT)},
	{"ELEMENT_ATTRIBUTE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityManager$NameMap, ELEMENT_ATTRIBUTE_LIMIT)},
	{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLSecurityManager$NameMap, $VALUES)},
	{"newName", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityManager$NameMap, newName)},
	{"oldName", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityManager$NameMap, oldName)},
	{}
};

$MethodInfo _XMLSecurityManager$NameMap_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLSecurityManager$NameMap, $values, $XMLSecurityManager$NameMapArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(XMLSecurityManager$NameMap, init$, void, $String*, int32_t, $String*, $String*)},
	{"getOldName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(XMLSecurityManager$NameMap, getOldName, $String*, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityManager$NameMap, valueOf, XMLSecurityManager$NameMap*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityManager$NameMap, values, $XMLSecurityManager$NameMapArray*)},
	{}
};

$InnerClassInfo _XMLSecurityManager$NameMap_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager$NameMap", "com.sun.org.apache.xerces.internal.utils.XMLSecurityManager", "NameMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityManager$NameMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager$NameMap",
	"java.lang.Enum",
	nullptr,
	_XMLSecurityManager$NameMap_FieldInfo_,
	_XMLSecurityManager$NameMap_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$NameMap;>;",
	nullptr,
	_XMLSecurityManager$NameMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityManager"
};

$Object* allocate$XMLSecurityManager$NameMap($Class* clazz) {
	return $of($alloc(XMLSecurityManager$NameMap));
}

XMLSecurityManager$NameMap* XMLSecurityManager$NameMap::ENTITY_EXPANSION_LIMIT = nullptr;
XMLSecurityManager$NameMap* XMLSecurityManager$NameMap::MAX_OCCUR_NODE_LIMIT = nullptr;
XMLSecurityManager$NameMap* XMLSecurityManager$NameMap::ELEMENT_ATTRIBUTE_LIMIT = nullptr;
$XMLSecurityManager$NameMapArray* XMLSecurityManager$NameMap::$VALUES = nullptr;

$XMLSecurityManager$NameMapArray* XMLSecurityManager$NameMap::$values() {
	$init(XMLSecurityManager$NameMap);
	return $new($XMLSecurityManager$NameMapArray, {
		XMLSecurityManager$NameMap::ENTITY_EXPANSION_LIMIT,
		XMLSecurityManager$NameMap::MAX_OCCUR_NODE_LIMIT,
		XMLSecurityManager$NameMap::ELEMENT_ATTRIBUTE_LIMIT
	});
}

$XMLSecurityManager$NameMapArray* XMLSecurityManager$NameMap::values() {
	$init(XMLSecurityManager$NameMap);
	return $cast($XMLSecurityManager$NameMapArray, XMLSecurityManager$NameMap::$VALUES->clone());
}

XMLSecurityManager$NameMap* XMLSecurityManager$NameMap::valueOf($String* name) {
	$init(XMLSecurityManager$NameMap);
	return $cast(XMLSecurityManager$NameMap, $Enum::valueOf(XMLSecurityManager$NameMap::class$, name));
}

void XMLSecurityManager$NameMap::init$($String* $enum$name, int32_t $enum$ordinal, $String* newName, $String* oldName) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, newName, newName);
	$set(this, oldName, oldName);
}

$String* XMLSecurityManager$NameMap::getOldName($String* newName) {
	if ($nc(newName)->equals(this->newName)) {
		return this->oldName;
	}
	return nullptr;
}

void clinit$XMLSecurityManager$NameMap($Class* class$) {
	$init($JdkConstants);
	$assignStatic(XMLSecurityManager$NameMap::ENTITY_EXPANSION_LIMIT, $new(XMLSecurityManager$NameMap, "ENTITY_EXPANSION_LIMIT"_s, 0, $JdkConstants::SP_ENTITY_EXPANSION_LIMIT, $JdkConstants::ENTITY_EXPANSION_LIMIT));
	$assignStatic(XMLSecurityManager$NameMap::MAX_OCCUR_NODE_LIMIT, $new(XMLSecurityManager$NameMap, "MAX_OCCUR_NODE_LIMIT"_s, 1, $JdkConstants::SP_MAX_OCCUR_LIMIT, $JdkConstants::MAX_OCCUR_LIMIT));
	$assignStatic(XMLSecurityManager$NameMap::ELEMENT_ATTRIBUTE_LIMIT, $new(XMLSecurityManager$NameMap, "ELEMENT_ATTRIBUTE_LIMIT"_s, 2, $JdkConstants::SP_ELEMENT_ATTRIBUTE_LIMIT, $JdkConstants::ELEMENT_ATTRIBUTE_LIMIT));
	$assignStatic(XMLSecurityManager$NameMap::$VALUES, XMLSecurityManager$NameMap::$values());
}

XMLSecurityManager$NameMap::XMLSecurityManager$NameMap() {
}

$Class* XMLSecurityManager$NameMap::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityManager$NameMap, name, initialize, &_XMLSecurityManager$NameMap_ClassInfo_, clinit$XMLSecurityManager$NameMap, allocate$XMLSecurityManager$NameMap);
	return class$;
}

$Class* XMLSecurityManager$NameMap::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com