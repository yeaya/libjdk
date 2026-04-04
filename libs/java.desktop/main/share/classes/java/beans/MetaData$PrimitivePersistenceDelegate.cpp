#include <java/beans/MetaData$PrimitivePersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$PrimitivePersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$PrimitivePersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$PrimitivePersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Object, var$0, $nc($of(oldInstance))->getClass());
	$var($String, var$1, "new"_s);
	return $new($Expression, oldInstance, var$0, var$1, $$new($ObjectArray, {$($of(oldInstance)->toString())}));
}

MetaData$PrimitivePersistenceDelegate::MetaData$PrimitivePersistenceDelegate() {
}

$Class* MetaData$PrimitivePersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$PrimitivePersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$PrimitivePersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$PrimitivePersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$PrimitivePersistenceDelegate", "java.beans.MetaData", "PrimitivePersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$PrimitivePersistenceDelegate",
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
	$loadClass(MetaData$PrimitivePersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$PrimitivePersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$PrimitivePersistenceDelegate::class$ = nullptr;

	} // beans
} // java