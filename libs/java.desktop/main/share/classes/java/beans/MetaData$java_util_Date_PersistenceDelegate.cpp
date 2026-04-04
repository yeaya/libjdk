#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;

namespace java {
	namespace beans {

void MetaData$java_util_Date_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_util_Date_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	$useLocalObjectStack();
	if (!$PersistenceDelegate::mutatesTo(oldInstance, newInstance)) {
		return false;
	}
	$var($Date, oldDate, $cast($Date, oldInstance));
	$var($Date, newDate, $cast($Date, newInstance));
	int64_t var$0 = $nc(oldDate)->getTime();
	return var$0 == $nc(newDate)->getTime();
}

$Expression* MetaData$java_util_Date_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Date, date, $cast($Date, oldInstance));
	$var($Object, var$0, $nc($of(date))->getClass());
	$var($String, var$1, "new"_s);
	return $new($Expression, date, var$0, var$1, $$new($ObjectArray, {$($Long::valueOf(date->getTime()))}));
}

MetaData$java_util_Date_PersistenceDelegate::MetaData$java_util_Date_PersistenceDelegate() {
}

$Class* MetaData$java_util_Date_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Date_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_util_Date_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$java_util_Date_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Date_PersistenceDelegate", "java.beans.MetaData", "java_util_Date_PersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.MetaData$java_util_Date_PersistenceDelegate",
		"java.beans.PersistenceDelegate",
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
	$loadClass(MetaData$java_util_Date_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Date_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Date_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java