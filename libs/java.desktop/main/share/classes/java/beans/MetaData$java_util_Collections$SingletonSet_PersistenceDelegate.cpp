#include <java/beans/MetaData$java_util_Collections$SingletonSet_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData$java_util_Collections.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData$java_util_Collections = ::java::beans::MetaData$java_util_Collections;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

void MetaData$java_util_Collections$SingletonSet_PersistenceDelegate::init$() {
	$MetaData$java_util_Collections::init$();
}

$Expression* MetaData$java_util_Collections$SingletonSet_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Set, set, $cast($Set, oldInstance));
	$load($Collections);
	return $new($Expression, oldInstance, $Collections::class$, "singleton"_s, $$new($ObjectArray, {$($$nc($nc(set)->iterator())->next())}));
}

MetaData$java_util_Collections$SingletonSet_PersistenceDelegate::MetaData$java_util_Collections$SingletonSet_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collections$SingletonSet_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Collections$SingletonSet_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_util_Collections$SingletonSet_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.beans.MetaData$java_util_Collections$SingletonSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "SingletonSet_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_util_Collections$SingletonSet_PersistenceDelegate",
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
	$loadClass(MetaData$java_util_Collections$SingletonSet_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Collections$SingletonSet_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Collections$SingletonSet_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java