#include <javax/imageio/spi/SubRegistry.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <javax/imageio/spi/PartiallyOrderedSet.h>
#include <javax/imageio/spi/RegisterableService.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $PartiallyOrderedSet = ::javax::imageio::spi::PartiallyOrderedSet;
using $RegisterableService = ::javax::imageio::spi::RegisterableService;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

class SubRegistry$$Lambda$lambda$clear$0 : public $PrivilegedAction {
	$class(SubRegistry$$Lambda$lambda$clear$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SubRegistry* inst, $RegisterableService* rs) {
		$set(this, inst$, inst);
		$set(this, rs, rs);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$clear$0(rs);
	}
	SubRegistry* inst$ = nullptr;
	$RegisterableService* rs = nullptr;
};
$Class* SubRegistry$$Lambda$lambda$clear$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SubRegistry$$Lambda$lambda$clear$0, inst$)},
		{"rs", "Ljavax/imageio/spi/RegisterableService;", nullptr, $PUBLIC, $field(SubRegistry$$Lambda$lambda$clear$0, rs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/spi/SubRegistry;Ljavax/imageio/spi/RegisterableService;)V", nullptr, $PUBLIC, $method(SubRegistry$$Lambda$lambda$clear$0, init$, void, SubRegistry*, $RegisterableService*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SubRegistry$$Lambda$lambda$clear$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.imageio.spi.SubRegistry$$Lambda$lambda$clear$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SubRegistry$$Lambda$lambda$clear$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubRegistry$$Lambda$lambda$clear$0);
	});
	return class$;
}
$Class* SubRegistry$$Lambda$lambda$clear$0::class$ = nullptr;

void SubRegistry::init$($ServiceRegistry* registry, $Class* category) {
	$set(this, poset, $new($PartiallyOrderedSet));
	$set(this, map, $new($HashMap));
	$set(this, accMap, $new($HashMap));
	$set(this, registry, registry);
	$set(this, category, category);
}

bool SubRegistry::registerServiceProvider(Object$* provider) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Object, oprovider, this->map->get($nc($of(provider))->getClass()));
		bool present = oprovider != nullptr;
		if (present) {
			deregisterServiceProvider(oprovider);
		}
		this->map->put($of(provider)->getClass(), provider);
		$var($Object, var$0, $of(provider)->getClass());
		this->accMap->put(var$0, $($AccessController::getContext()));
		this->poset->add(provider);
		if ($instanceOf($RegisterableService, provider)) {
			$var($RegisterableService, rs, $cast($RegisterableService, provider));
			try {
				rs->onRegistration(this->registry, this->category);
			} catch ($Throwable& t) {
				$nc($System::err)->println("Caught and handled this exception :"_s);
				t->printStackTrace();
			}
		}
		return !present;
	}
}

bool SubRegistry::deregisterServiceProvider(Object$* provider) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Object, oprovider, this->map->get($nc($of(provider))->getClass()));
		if ($equals(provider, oprovider)) {
			this->map->remove($of(provider)->getClass());
			this->accMap->remove($of(provider)->getClass());
			this->poset->remove(provider);
			if ($instanceOf($RegisterableService, provider)) {
				$var($RegisterableService, rs, $cast($RegisterableService, provider));
				rs->onDeregistration(this->registry, this->category);
			}
			return true;
		}
		return false;
	}
}

bool SubRegistry::contains(Object$* provider) {
	$synchronized(this) {
		$var($Object, oprovider, this->map->get($nc($of(provider))->getClass()));
		return $equals(oprovider, provider);
	}
}

bool SubRegistry::setOrdering(Object$* firstProvider, Object$* secondProvider) {
	$synchronized(this) {
		return this->poset->setOrdering(firstProvider, secondProvider);
	}
}

bool SubRegistry::unsetOrdering(Object$* firstProvider, Object$* secondProvider) {
	$synchronized(this) {
		return this->poset->unsetOrdering(firstProvider, secondProvider);
	}
}

$Iterator* SubRegistry::getServiceProviders(bool useOrdering) {
	$synchronized(this) {
		if (useOrdering) {
			return this->poset->iterator();
		} else {
			return $$nc(this->map->values())->iterator();
		}
	}
}

$Object* SubRegistry::getServiceProviderByClass($Class* providerClass) {
	$synchronized(this) {
		return this->map->get(providerClass);
	}
}

void SubRegistry::clear() {
	$synchronized(this) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$var($Iterator, iter, $$nc(this->map->values())->iterator());
		while ($nc(iter)->hasNext()) {
			$var($Object, provider, iter->next());
			iter->remove();
			if ($instanceOf($RegisterableService, provider)) {
				$var($RegisterableService, rs, $cast($RegisterableService, provider));
				$var($AccessControlContext, acc, $cast($AccessControlContext, this->accMap->get(provider->getClass())));
				if (acc != nullptr || $System::getSecurityManager() == nullptr) {
					$AccessController::doPrivileged($cast($PrivilegedAction, $$new(SubRegistry$$Lambda$lambda$clear$0, this, rs)), acc);
				}
			}
		}
		this->poset->clear();
		this->accMap->clear();
	}
}

void SubRegistry::finalize() {
	$synchronized(this) {
		clear();
	}
}

$Void* SubRegistry::lambda$clear$0($RegisterableService* rs) {
	$nc(rs)->onDeregistration(this->registry, this->category);
	return nullptr;
}

SubRegistry::SubRegistry() {
}

$Class* SubRegistry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.imageio.spi.SubRegistry$$Lambda$lambda$clear$0")) {
			return SubRegistry$$Lambda$lambda$clear$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"registry", "Ljavax/imageio/spi/ServiceRegistry;", nullptr, 0, $field(SubRegistry, registry)},
		{"category", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", 0, $field(SubRegistry, category)},
		{"poset", "Ljavax/imageio/spi/PartiallyOrderedSet;", "Ljavax/imageio/spi/PartiallyOrderedSet<Ljava/lang/Object;>;", $FINAL, $field(SubRegistry, poset)},
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Object;>;", $FINAL, $field(SubRegistry, map)},
		{"accMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/security/AccessControlContext;>;", $FINAL, $field(SubRegistry, accMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC, $method(SubRegistry, init$, void, $ServiceRegistry*, $Class*)},
		{"clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, contains, bool, Object$*)},
		{"deregisterServiceProvider", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, deregisterServiceProvider, bool, Object$*)},
		{"finalize", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, finalize, void)},
		{"getServiceProviderByClass", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, getServiceProviderByClass, $Object*, $Class*)},
		{"getServiceProviders", "(Z)Ljava/util/Iterator;", "(Z)Ljava/util/Iterator<Ljava/lang/Object;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, getServiceProviders, $Iterator*, bool)},
		{"lambda$clear$0", "(Ljavax/imageio/spi/RegisterableService;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(SubRegistry, lambda$clear$0, $Void*, $RegisterableService*)},
		{"registerServiceProvider", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, registerServiceProvider, bool, Object$*)},
		{"setOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, setOrdering, bool, Object$*, Object$*)},
		{"unsetOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubRegistry, unsetOrdering, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.spi.SubRegistry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SubRegistry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubRegistry);
	});
	return class$;
}

$Class* SubRegistry::class$ = nullptr;

		} // spi
	} // imageio
} // javax