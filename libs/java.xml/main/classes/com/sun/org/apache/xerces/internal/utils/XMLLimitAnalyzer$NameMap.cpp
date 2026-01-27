#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap.h>

#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
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

using $XMLLimitAnalyzer$NameMapArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer$NameMap>;
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

$FieldInfo _XMLLimitAnalyzer$NameMap_FieldInfo_[] = {
	{"ENTITY_EXPANSION_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLLimitAnalyzer$NameMap, ENTITY_EXPANSION_LIMIT)},
	{"MAX_OCCUR_NODE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLLimitAnalyzer$NameMap, MAX_OCCUR_NODE_LIMIT)},
	{"ELEMENT_ATTRIBUTE_LIMIT", "Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLLimitAnalyzer$NameMap, ELEMENT_ATTRIBUTE_LIMIT)},
	{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLLimitAnalyzer$NameMap, $VALUES)},
	{"newName", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLLimitAnalyzer$NameMap, newName)},
	{"oldName", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLLimitAnalyzer$NameMap, oldName)},
	{}
};

$MethodInfo _XMLLimitAnalyzer$NameMap_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLLimitAnalyzer$NameMap, $values, $XMLLimitAnalyzer$NameMapArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(XMLLimitAnalyzer$NameMap, init$, void, $String*, int32_t, $String*, $String*)},
	{"getOldName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(XMLLimitAnalyzer$NameMap, getOldName, $String*, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLLimitAnalyzer$NameMap, valueOf, XMLLimitAnalyzer$NameMap*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLLimitAnalyzer$NameMap, values, $XMLLimitAnalyzer$NameMapArray*)},
	{}
};

$InnerClassInfo _XMLLimitAnalyzer$NameMap_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer$NameMap", "com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer", "NameMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLLimitAnalyzer$NameMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer$NameMap",
	"java.lang.Enum",
	nullptr,
	_XMLLimitAnalyzer$NameMap_FieldInfo_,
	_XMLLimitAnalyzer$NameMap_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer$NameMap;>;",
	nullptr,
	_XMLLimitAnalyzer$NameMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer"
};

$Object* allocate$XMLLimitAnalyzer$NameMap($Class* clazz) {
	return $of($alloc(XMLLimitAnalyzer$NameMap));
}

XMLLimitAnalyzer$NameMap* XMLLimitAnalyzer$NameMap::ENTITY_EXPANSION_LIMIT = nullptr;
XMLLimitAnalyzer$NameMap* XMLLimitAnalyzer$NameMap::MAX_OCCUR_NODE_LIMIT = nullptr;
XMLLimitAnalyzer$NameMap* XMLLimitAnalyzer$NameMap::ELEMENT_ATTRIBUTE_LIMIT = nullptr;
$XMLLimitAnalyzer$NameMapArray* XMLLimitAnalyzer$NameMap::$VALUES = nullptr;

$XMLLimitAnalyzer$NameMapArray* XMLLimitAnalyzer$NameMap::$values() {
	$init(XMLLimitAnalyzer$NameMap);
	return $new($XMLLimitAnalyzer$NameMapArray, {
		XMLLimitAnalyzer$NameMap::ENTITY_EXPANSION_LIMIT,
		XMLLimitAnalyzer$NameMap::MAX_OCCUR_NODE_LIMIT,
		XMLLimitAnalyzer$NameMap::ELEMENT_ATTRIBUTE_LIMIT
	});
}

$XMLLimitAnalyzer$NameMapArray* XMLLimitAnalyzer$NameMap::values() {
	$init(XMLLimitAnalyzer$NameMap);
	return $cast($XMLLimitAnalyzer$NameMapArray, XMLLimitAnalyzer$NameMap::$VALUES->clone());
}

XMLLimitAnalyzer$NameMap* XMLLimitAnalyzer$NameMap::valueOf($String* name) {
	$init(XMLLimitAnalyzer$NameMap);
	return $cast(XMLLimitAnalyzer$NameMap, $Enum::valueOf(XMLLimitAnalyzer$NameMap::class$, name));
}

void XMLLimitAnalyzer$NameMap::init$($String* $enum$name, int32_t $enum$ordinal, $String* newName, $String* oldName) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, newName, newName);
	$set(this, oldName, oldName);
}

$String* XMLLimitAnalyzer$NameMap::getOldName($String* newName) {
	if ($nc(newName)->equals(this->newName)) {
		return this->oldName;
	}
	return nullptr;
}

void clinit$XMLLimitAnalyzer$NameMap($Class* class$) {
	$init($JdkConstants);
	$assignStatic(XMLLimitAnalyzer$NameMap::ENTITY_EXPANSION_LIMIT, $new(XMLLimitAnalyzer$NameMap, "ENTITY_EXPANSION_LIMIT"_s, 0, $JdkConstants::SP_ENTITY_EXPANSION_LIMIT, $JdkConstants::ENTITY_EXPANSION_LIMIT));
	$assignStatic(XMLLimitAnalyzer$NameMap::MAX_OCCUR_NODE_LIMIT, $new(XMLLimitAnalyzer$NameMap, "MAX_OCCUR_NODE_LIMIT"_s, 1, $JdkConstants::SP_MAX_OCCUR_LIMIT, $JdkConstants::MAX_OCCUR_LIMIT));
	$assignStatic(XMLLimitAnalyzer$NameMap::ELEMENT_ATTRIBUTE_LIMIT, $new(XMLLimitAnalyzer$NameMap, "ELEMENT_ATTRIBUTE_LIMIT"_s, 2, $JdkConstants::SP_ELEMENT_ATTRIBUTE_LIMIT, $JdkConstants::ELEMENT_ATTRIBUTE_LIMIT));
	$assignStatic(XMLLimitAnalyzer$NameMap::$VALUES, XMLLimitAnalyzer$NameMap::$values());
}

XMLLimitAnalyzer$NameMap::XMLLimitAnalyzer$NameMap() {
}

$Class* XMLLimitAnalyzer$NameMap::load$($String* name, bool initialize) {
	$loadClass(XMLLimitAnalyzer$NameMap, name, initialize, &_XMLLimitAnalyzer$NameMap_ClassInfo_, clinit$XMLLimitAnalyzer$NameMap, allocate$XMLLimitAnalyzer$NameMap);
	return class$;
}

$Class* XMLLimitAnalyzer$NameMap::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com