#include <com/apple/laf/AquaUtils$LazyKeyedSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$LazyKeyedSingleton::init$() {
}

$Object* AquaUtils$LazyKeyedSingleton::get(Object$* key) {
	$useLocalObjectStack();
	if (this->refs == nullptr) {
		$set(this, refs, $new($HashMap));
	}
	$var($Object, cachedValue, $nc(this->refs)->get(key));
	if (cachedValue != nullptr) {
		return cachedValue;
	}
	$var($Object, value, getInstance(key));
	$nc(this->refs)->put(key, value);
	return value;
}

AquaUtils$LazyKeyedSingleton::AquaUtils$LazyKeyedSingleton() {
}

$Class* AquaUtils$LazyKeyedSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"refs", "Ljava/util/Map;", "Ljava/util/Map<TK;TV;>;", $PRIVATE, $field(AquaUtils$LazyKeyedSingleton, refs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$LazyKeyedSingleton, init$, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", 0, $virtualMethod(AquaUtils$LazyKeyedSingleton, get, $Object*, Object$*)},
		{"getInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PROTECTED | $ABSTRACT, $virtualMethod(AquaUtils$LazyKeyedSingleton, getInstance, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$LazyKeyedSingleton", "com.apple.laf.AquaUtils", "LazyKeyedSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaUtils$LazyKeyedSingleton",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$LazyKeyedSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$LazyKeyedSingleton);
	});
	return class$;
}

$Class* AquaUtils$LazyKeyedSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com