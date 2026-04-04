#include <java/beans/MetaData$java_util_AbstractList_PersistenceDelegate.h>
#include <java/beans/MetaData$java_util_List_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $MetaData$java_util_List_PersistenceDelegate = ::java::beans::MetaData$java_util_List_PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_util_AbstractList_PersistenceDelegate::init$() {
	$MetaData$java_util_List_PersistenceDelegate::init$();
}

MetaData$java_util_AbstractList_PersistenceDelegate::MetaData$java_util_AbstractList_PersistenceDelegate() {
}

$Class* MetaData$java_util_AbstractList_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_AbstractList_PersistenceDelegate, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_AbstractList_PersistenceDelegate", "java.beans.MetaData", "java_util_AbstractList_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_List_PersistenceDelegate", "java.beans.MetaData", "java_util_List_PersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_util_AbstractList_PersistenceDelegate",
		"java.beans.MetaData$java_util_List_PersistenceDelegate",
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
	$loadClass(MetaData$java_util_AbstractList_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_AbstractList_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_AbstractList_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java