#include <com/sun/beans/finder/PersistenceDelegateFinder.h>
#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void PersistenceDelegateFinder::init$() {
	$load($PersistenceDelegate);
	$InstanceFinder::init$($PersistenceDelegate::class$, true, "PersistenceDelegate"_s, $$new($StringArray, 0));
	$set(this, registry, $new($HashMap));
}

void PersistenceDelegateFinder::register$($Class* type, $PersistenceDelegate* delegate) {
	$synchronized(this->registry) {
		if (delegate != nullptr) {
			this->registry->put(type, delegate);
		} else {
			this->registry->remove(type);
		}
	}
}

$Object* PersistenceDelegateFinder::find($Class* type) {
	$var($PersistenceDelegate, delegate, nullptr);
	$synchronized(this->registry) {
		$assign(delegate, $cast($PersistenceDelegate, this->registry->get(type)));
	}
	return (delegate != nullptr) ? delegate : $cast($PersistenceDelegate, $InstanceFinder::find(type));
}

void PersistenceDelegateFinder::setPackages($StringArray* packages) {
	$InstanceFinder::setPackages(packages);
}

$StringArray* PersistenceDelegateFinder::getPackages() {
	return $InstanceFinder::getPackages();
}

PersistenceDelegateFinder::PersistenceDelegateFinder() {
}

$Class* PersistenceDelegateFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"registry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/beans/PersistenceDelegate;>;", $PRIVATE | $FINAL, $field(PersistenceDelegateFinder, registry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PersistenceDelegateFinder, init$, void)},
		{"find", "(Ljava/lang/Class;)Ljava/beans/PersistenceDelegate;", "(Ljava/lang/Class<*>;)Ljava/beans/PersistenceDelegate;", $PUBLIC, $virtualMethod(PersistenceDelegateFinder, find, $Object*, $Class*)},
		{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PersistenceDelegateFinder, getPackages, $StringArray*)},
		{"register", "(Ljava/lang/Class;Ljava/beans/PersistenceDelegate;)V", "(Ljava/lang/Class<*>;Ljava/beans/PersistenceDelegate;)V", $PUBLIC, $method(PersistenceDelegateFinder, register$, void, $Class*, $PersistenceDelegate*)},
		{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PersistenceDelegateFinder, setPackages, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.finder.PersistenceDelegateFinder",
		"com.sun.beans.finder.InstanceFinder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/beans/finder/InstanceFinder<Ljava/beans/PersistenceDelegate;>;"
	};
	$loadClass(PersistenceDelegateFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PersistenceDelegateFinder);
	});
	return class$;
}

$Class* PersistenceDelegateFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com