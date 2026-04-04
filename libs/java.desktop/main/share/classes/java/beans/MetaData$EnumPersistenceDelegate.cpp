#include <java/beans/MetaData$EnumPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$EnumPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$EnumPersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $equals(oldInstance, newInstance);
}

$Expression* MetaData$EnumPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Enum, e, $cast($Enum, oldInstance));
	return $new($Expression, e, $Enum::class$, "valueOf"_s, $$new($ObjectArray, {
		$nc(e)->getDeclaringClass(),
		$($nc(e)->name())
	}));
}

MetaData$EnumPersistenceDelegate::MetaData$EnumPersistenceDelegate() {
}

$Class* MetaData$EnumPersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$EnumPersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$EnumPersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$EnumPersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$EnumPersistenceDelegate", "java.beans.MetaData", "EnumPersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$EnumPersistenceDelegate",
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
	$loadClass(MetaData$EnumPersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$EnumPersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$EnumPersistenceDelegate::class$ = nullptr;

	} // beans
} // java