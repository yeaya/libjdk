#include <com/sun/org/apache/xerces/internal/utils/XMLLimitAnalyzer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <java/util/Formatter.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ELEMENT_ATTRIBUTE_LIMIT
#undef ENTITY_EXPANSION_LIMIT
#undef ENTITY_REPLACEMENT_LIMIT
#undef GENERAL_ENTITY_SIZE_LIMIT
#undef MAX_ELEMENT_DEPTH_LIMIT
#undef MAX_NAME_LIMIT
#undef MAX_OCCUR_NODE_LIMIT
#undef PARAMETER_ENTITY_SIZE_LIMIT
#undef TOTAL_ENTITY_SIZE_LIMIT

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit>;
using $MapArray = $Array<::java::util::Map>;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

void XMLLimitAnalyzer::init$() {
	$useLocalObjectStack();
	$set(this, values, $new($ints, $($XMLSecurityManager$Limit::values())->length));
	$set(this, totalValue, $new($ints, $($XMLSecurityManager$Limit::values())->length));
	$set(this, names, $new($StringArray, $($XMLSecurityManager$Limit::values())->length));
	$set(this, caches, $new($MapArray, $($XMLSecurityManager$Limit::values())->length));
}

void XMLLimitAnalyzer::addValue($XMLSecurityManager$Limit* limit, $String* entityName, int32_t value) {
	addValue($nc(limit)->ordinal(), entityName, value);
}

void XMLLimitAnalyzer::addValue(int32_t index, $String* entityName, int32_t value) {
	$useLocalObjectStack();
	$init($XMLSecurityManager$Limit);
	bool var$3 = index == $XMLSecurityManager$Limit::ENTITY_EXPANSION_LIMIT->ordinal();
	bool var$2 = var$3 || index == $XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT->ordinal();
	bool var$1 = var$2 || index == $XMLSecurityManager$Limit::ELEMENT_ATTRIBUTE_LIMIT->ordinal();
	bool var$0 = var$1 || index == $XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT->ordinal();
	if (var$0 || index == $XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT->ordinal()) {
		(*this->totalValue)[index] += value;
		return;
	}
	bool var$4 = index == $XMLSecurityManager$Limit::MAX_ELEMENT_DEPTH_LIMIT->ordinal();
	if (var$4 || index == $XMLSecurityManager$Limit::MAX_NAME_LIMIT->ordinal()) {
		this->values->set(index, value);
		this->totalValue->set(index, value);
		return;
	}
	$var($Map, cache, nullptr);
	if (this->caches->get(index) == nullptr) {
		$assign(cache, $new($HashMap, 10));
		this->caches->set(index, cache);
	} else {
		$assign(cache, this->caches->get(index));
	}
	int32_t accumulatedValue = value;
	if ($nc(cache)->containsKey(entityName)) {
		accumulatedValue += $$sure($Integer, cache->get(entityName))->intValue();
		cache->put(entityName, $($Integer::valueOf(accumulatedValue)));
	} else {
		cache->put(entityName, $($Integer::valueOf(value)));
	}
	if (accumulatedValue > this->values->get(index)) {
		this->values->set(index, accumulatedValue);
		this->names->set(index, entityName);
	}
	bool var$5 = index == $XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT->ordinal();
	if (var$5 || index == $XMLSecurityManager$Limit::PARAMETER_ENTITY_SIZE_LIMIT->ordinal()) {
		(*this->totalValue)[$XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT->ordinal()] += value;
	}
}

int32_t XMLLimitAnalyzer::getValue($XMLSecurityManager$Limit* limit) {
	return getValue($nc(limit)->ordinal());
}

int32_t XMLLimitAnalyzer::getValue(int32_t index) {
	$init($XMLSecurityManager$Limit);
	if (index == $XMLSecurityManager$Limit::ENTITY_REPLACEMENT_LIMIT->ordinal()) {
		return this->totalValue->get(index);
	}
	return this->values->get(index);
}

int32_t XMLLimitAnalyzer::getTotalValue($XMLSecurityManager$Limit* limit) {
	return this->totalValue->get($nc(limit)->ordinal());
}

int32_t XMLLimitAnalyzer::getTotalValue(int32_t index) {
	return this->totalValue->get(index);
}

int32_t XMLLimitAnalyzer::getValueByIndex(int32_t index) {
	return this->values->get(index);
}

void XMLLimitAnalyzer::startEntity($String* name) {
	$set(this, entityStart, name);
}

bool XMLLimitAnalyzer::isTracking($String* name) {
	if (this->entityStart == nullptr) {
		return false;
	}
	return $nc(this->entityStart)->equals(name);
}

void XMLLimitAnalyzer::endEntity($XMLSecurityManager$Limit* limit, $String* name) {
	$set(this, entityStart, ""_s);
	$var($Map, cache, this->caches->get($nc(limit)->ordinal()));
	if (cache != nullptr) {
		cache->remove(name);
	}
}

void XMLLimitAnalyzer::reset($XMLSecurityManager$Limit* limit) {
	int32_t var$0 = $nc(limit)->ordinal();
	if (var$0 == $XMLSecurityManager$Limit::TOTAL_ENTITY_SIZE_LIMIT->ordinal()) {
		this->totalValue->set(limit->ordinal(), 0);
	} else {
		int32_t var$1 = limit->ordinal();
		if (var$1 == $XMLSecurityManager$Limit::GENERAL_ENTITY_SIZE_LIMIT->ordinal()) {
			this->names->set(limit->ordinal(), nullptr);
			this->values->set(limit->ordinal(), 0);
			this->caches->set(limit->ordinal(), nullptr);
			this->totalValue->set(limit->ordinal(), 0);
		}
	}
}

void XMLLimitAnalyzer::debugPrint($XMLSecurityManager* securityManager) {
	$useLocalObjectStack();
	$var($Formatter, formatter, $new($Formatter));
	$nc($System::out)->println($(formatter->format("%30s %15s %15s %15s %30s"_s, $$new($ObjectArray, {
		"Property"_s,
		"Limit"_s,
		"Total size"_s,
		"Size"_s,
		"Entity Name"_s
	}))));
	{
		$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$XMLSecurityManager$Limit* limit = arr$->get(i$);
			{
				$assign(formatter, $new($Formatter));
				$System::out->println($(formatter->format("%30s %15d %15d %15d %30s"_s, $$new($ObjectArray, {
					$($nc(limit)->name()),
					$($Integer::valueOf($nc(securityManager)->getLimit(limit))),
					$($Integer::valueOf(this->totalValue->get($nc(limit)->ordinal()))),
					$($Integer::valueOf(this->values->get($nc(limit)->ordinal()))),
					this->names->get($nc(limit)->ordinal())
				}))));
			}
		}
	}
}

XMLLimitAnalyzer::XMLLimitAnalyzer() {
}

$Class* XMLLimitAnalyzer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"values", "[I", nullptr, $PRIVATE | $FINAL, $field(XMLLimitAnalyzer, values)},
		{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLLimitAnalyzer, names)},
		{"totalValue", "[I", nullptr, $PRIVATE | $FINAL, $field(XMLLimitAnalyzer, totalValue)},
		{"caches", "[Ljava/util/Map;", "[Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(XMLLimitAnalyzer, caches)},
		{"entityStart", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLLimitAnalyzer, entityStart)},
		{"entityEnd", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLLimitAnalyzer, entityEnd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, init$, void)},
		{"addValue", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, addValue, void, $XMLSecurityManager$Limit*, $String*, int32_t)},
		{"addValue", "(ILjava/lang/String;I)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, addValue, void, int32_t, $String*, int32_t)},
		{"debugPrint", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, debugPrint, void, $XMLSecurityManager*)},
		{"endEntity", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, endEntity, void, $XMLSecurityManager$Limit*, $String*)},
		{"getTotalValue", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;)I", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, getTotalValue, int32_t, $XMLSecurityManager$Limit*)},
		{"getTotalValue", "(I)I", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, getTotalValue, int32_t, int32_t)},
		{"getValue", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;)I", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, getValue, int32_t, $XMLSecurityManager$Limit*)},
		{"getValue", "(I)I", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, getValue, int32_t, int32_t)},
		{"getValueByIndex", "(I)I", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, getValueByIndex, int32_t, int32_t)},
		{"isTracking", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, isTracking, bool, $String*)},
		{"reset", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit;)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, reset, void, $XMLSecurityManager$Limit*)},
		{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLLimitAnalyzer, startEntity, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer$NameMap", "com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer", "NameMap", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.utils.XMLLimitAnalyzer$NameMap"
	};
	$loadClass(XMLLimitAnalyzer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLLimitAnalyzer);
	});
	return class$;
}

$Class* XMLLimitAnalyzer::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com