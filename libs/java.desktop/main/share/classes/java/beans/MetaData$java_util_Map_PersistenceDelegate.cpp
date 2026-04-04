#include <java/beans/MetaData$java_util_Map_PersistenceDelegate.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace java {
	namespace beans {

void MetaData$java_util_Map_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_util_Map_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Map, oldMap, $cast($Map, oldInstance));
	$var($Map, newMap, $cast($Map, newInstance));
	if (newMap != nullptr) {
		$var($ObjectArray, arr$, $$nc(newMap->keySet())->toArray());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, newKey, arr$->get(i$));
			if (!$nc(oldMap)->containsKey(newKey)) {
				invokeStatement(oldInstance, "remove"_s, $$new($ObjectArray, {newKey}), out);
			}
		}
	}
	{
		$var($Iterator, i$, $$nc($nc(oldMap)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, oldKey, i$->next());
			{
				$var($Expression, oldGetExp, $new($Expression, oldInstance, "get"_s, $$new($ObjectArray, {oldKey})));
				$var($Expression, newGetExp, $new($Expression, newInstance, "get"_s, $$new($ObjectArray, {oldKey})));
				try {
					$var($Object, oldValue, oldGetExp->getValue());
					$var($Object, newValue, newGetExp->getValue());
					$nc(out)->writeExpression(oldGetExp);
					if (!$Objects::equals(newValue, $(out->get(oldValue)))) {
						invokeStatement(oldInstance, "put"_s, $$new($ObjectArray, {
							oldKey,
							oldValue
						}), out);
					} else if ((newValue == nullptr) && !$nc(newMap)->containsKey(oldKey)) {
						invokeStatement(oldInstance, "put"_s, $$new($ObjectArray, {
							oldKey,
							oldValue
						}), out);
					}
				} catch ($Exception& e) {
					$$nc($nc(out)->getExceptionListener())->exceptionThrown(e);
				}
			}
		}
	}
}

MetaData$java_util_Map_PersistenceDelegate::MetaData$java_util_Map_PersistenceDelegate() {
}

$Class* MetaData$java_util_Map_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_util_Map_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_util_Map_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_util_Map_PersistenceDelegate", "java.beans.MetaData", "java_util_Map_PersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.MetaData$java_util_Map_PersistenceDelegate",
		"java.beans.DefaultPersistenceDelegate",
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
	$loadClass(MetaData$java_util_Map_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_util_Map_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_util_Map_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java