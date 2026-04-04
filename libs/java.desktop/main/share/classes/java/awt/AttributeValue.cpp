#include <java/awt/AttributeValue.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef FINEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$PlatformLogger* AttributeValue::log = nullptr;

void AttributeValue::init$(int32_t value, $StringArray* names) {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(AttributeValue::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		AttributeValue::log->finest($$str({"value = "_s, $$str(value), ", names = "_s, names}));
	}
	if (AttributeValue::log->isLoggable($PlatformLogger$Level::FINER)) {
		if ((value < 0) || (names == nullptr) || (value >= names->length)) {
			AttributeValue::log->finer("Assertion failed"_s);
		}
	}
	this->value = value;
	$set(this, names, names);
}

int32_t AttributeValue::hashCode() {
	return this->value;
}

$String* AttributeValue::toString() {
	return $nc(this->names)->get(this->value);
}

void AttributeValue::clinit$($Class* clazz) {
	$assignStatic(AttributeValue::log, $PlatformLogger::getLogger("java.awt.AttributeValue"_s));
}

AttributeValue::AttributeValue() {
}

$Class* AttributeValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeValue, log)},
		{"value", "I", nullptr, $PRIVATE | $FINAL, $field(AttributeValue, value)},
		{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AttributeValue, names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AttributeValue, init$, void, int32_t, $StringArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AttributeValue, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeValue, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.awt.AttributeValue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeValue, name, initialize, &classInfo$$, AttributeValue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeValue);
	});
	return class$;
}

$Class* AttributeValue::class$ = nullptr;

	} // awt
} // java