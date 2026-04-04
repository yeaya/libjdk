#include <java/beans/MetaData$NullPersistenceDelegate.h>
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

void MetaData$NullPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

void MetaData$NullPersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
}

$Expression* MetaData$NullPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	return nullptr;
}

void MetaData$NullPersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
}

MetaData$NullPersistenceDelegate::MetaData$NullPersistenceDelegate() {
}

$Class* MetaData$NullPersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$NullPersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$NullPersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$NullPersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC, $virtualMethod(MetaData$NullPersistenceDelegate, writeObject, void, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$NullPersistenceDelegate", "java.beans.MetaData", "NullPersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$NullPersistenceDelegate",
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
	$loadClass(MetaData$NullPersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$NullPersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$NullPersistenceDelegate::class$ = nullptr;

	} // beans
} // java