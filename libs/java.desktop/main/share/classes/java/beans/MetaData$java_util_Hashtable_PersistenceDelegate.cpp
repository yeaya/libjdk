#include <java/beans/MetaData$java_util_Hashtable_PersistenceDelegate.h>
#include <java/beans/MetaData$java_util_Map_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $MetaData$java_util_Map_PersistenceDelegate = ::java::beans::MetaData$java_util_Map_PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_util_Hashtable_PersistenceDelegate::init$() {
	$MetaData$java_util_Map_PersistenceDelegate::init$();
}

MetaData$java_util_Hashtable_PersistenceDelegate::MetaData$java_util_Hashtable_PersistenceDelegate() {
}

$Class* MetaData$java_util_Hashtable_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Hashtable_PersistenceDelegate, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Hashtable_PersistenceDelegate", "java.beans.MetaData", "java_util_Hashtable_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_Map_PersistenceDelegate", "java.beans.MetaData", "java_util_Map_PersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_util_Hashtable_PersistenceDelegate",
		"java.beans.MetaData$java_util_Map_PersistenceDelegate",
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
	$loadClass(MetaData$java_util_Hashtable_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Hashtable_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Hashtable_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java