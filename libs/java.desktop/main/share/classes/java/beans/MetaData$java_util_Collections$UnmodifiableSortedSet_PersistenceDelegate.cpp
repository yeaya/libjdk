#include <java/beans/MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData$java_util_Collections.h>
#include <java/util/Collections.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData$java_util_Collections = ::java::beans::MetaData$java_util_Collections;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;

namespace java {
	namespace beans {

void MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate::init$() {
	$MetaData$java_util_Collections::init$();
}

$Expression* MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($SortedSet, set, $new($TreeSet, $cast($SortedSet, oldInstance)));
	$load($Collections);
	return $new($Expression, oldInstance, $Collections::class$, "unmodifiableSortedSet"_s, $$new($ObjectArray, {set}));
}

MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate::MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate() {
}

$Class* MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Collections", "java.beans.MetaData", "java_util_Collections", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.beans.MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate", "java.beans.MetaData$java_util_Collections", "UnmodifiableSortedSet_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate",
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
	$loadClass(MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Collections$UnmodifiableSortedSet_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java