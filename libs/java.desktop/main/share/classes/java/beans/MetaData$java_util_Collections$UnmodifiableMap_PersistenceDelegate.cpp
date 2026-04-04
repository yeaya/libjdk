#include <java/beans/MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData$java_util_Collections.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData$java_util_Collections = ::java::beans::MetaData$java_util_Collections;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace java {
	namespace beans {

void MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate::init$() {
	$MetaData$java_util_Collections::init$();
}

$Expression* MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Map, map, $new($HashMap, $cast($Map, oldInstance)));
	$load($Collections);
	return $new($Expression, oldInstance, $Collections::class$, "unmodifiableMap"_s, $$new($ObjectArray, {map}));
}

MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate::MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.beans.MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableMap_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate",
		"java.beans.MetaData$java_util_Collections",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Collections$UnmodifiableMap_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java