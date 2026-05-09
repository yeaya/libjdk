#include <javax/management/MBeanServerFactory.h>
#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Supplier.h>
#include <javax/management/JMException.h>
#include <javax/management/JMRuntimeException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerBuilder.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerPermission.h>
#include <javax/management/ObjectName.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef DEBUG
#undef DELEGATE_NAME
#undef MBEANSERVER_LOGGER
#undef MISC_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Supplier = ::java::util::function::Supplier;
using $JMException = ::javax::management::JMException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerBuilder = ::javax::management::MBeanServerBuilder;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {

class MBeanServerFactory$$Lambda$toString : public $Supplier {
	$class(MBeanServerFactory$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->toString());
	}
	$StringBuilder* inst$ = nullptr;
};
$Class* MBeanServerFactory$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MBeanServerFactory$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(MBeanServerFactory$$Lambda$toString, init$, void, $StringBuilder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanServerFactory$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.management.MBeanServerFactory$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanServerFactory$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFactory$$Lambda$toString);
	});
	return class$;
}
$Class* MBeanServerFactory$$Lambda$toString::class$ = nullptr;

$MBeanServerBuilder* MBeanServerFactory::builder = nullptr;
$ArrayList* MBeanServerFactory::mBeanServerList = nullptr;

void MBeanServerFactory::init$() {
}

void MBeanServerFactory::releaseMBeanServer($MBeanServer* mbeanServer) {
	$init(MBeanServerFactory);
	checkPermission("releaseMBeanServer"_s);
	removeMBeanServer(mbeanServer);
}

$MBeanServer* MBeanServerFactory::createMBeanServer() {
	$init(MBeanServerFactory);
	return createMBeanServer(nullptr);
}

$MBeanServer* MBeanServerFactory::createMBeanServer($String* domain) {
	$init(MBeanServerFactory);
	checkPermission("createMBeanServer"_s);
	$var($MBeanServer, mBeanServer, newMBeanServer(domain));
	addMBeanServer(mBeanServer);
	return mBeanServer;
}

$MBeanServer* MBeanServerFactory::newMBeanServer() {
	$init(MBeanServerFactory);
	return newMBeanServer(nullptr);
}

$MBeanServer* MBeanServerFactory::newMBeanServer($String* domain) {
	$init(MBeanServerFactory);
	$useLocalObjectStack();
	checkPermission("newMBeanServer"_s);
	$var($MBeanServerBuilder, mbsBuilder, getNewMBeanServerBuilder());
	$synchronized(mbsBuilder) {
		$var($MBeanServerDelegate, delegate, mbsBuilder->newMBeanServerDelegate());
		if (delegate == nullptr) {
			$var($String, msg, "MBeanServerBuilder.newMBeanServerDelegate() returned null"_s);
			$throwNew($JMRuntimeException, msg);
		}
		$var($MBeanServer, mbeanServer, mbsBuilder->newMBeanServer(domain, nullptr, delegate));
		if (mbeanServer == nullptr) {
			$var($String, msg, "MBeanServerBuilder.newMBeanServer() returned null"_s);
			$throwNew($JMRuntimeException, msg);
		}
		return mbeanServer;
	}
}

$ArrayList* MBeanServerFactory::findMBeanServer($String* agentId) {
	$init(MBeanServerFactory);
	$synchronized(class$) {
		$useLocalObjectStack();
		checkPermission("findMBeanServer"_s);
		if (agentId == nullptr) {
			return $new($ArrayList, $cast($AbstractCollection, MBeanServerFactory::mBeanServerList));
		}
		$var($ArrayList, result, $new($ArrayList));
		{
			$var($Iterator, i$, MBeanServerFactory::mBeanServerList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MBeanServer, mbs, $cast($MBeanServer, i$->next()));
				{
					$var($String, name, mBeanServerId(mbs));
					if ($nc(agentId)->equals(name)) {
						result->add(mbs);
					}
				}
			}
		}
		return result;
	}
}

$ClassLoaderRepository* MBeanServerFactory::getClassLoaderRepository($MBeanServer* server) {
	$init(MBeanServerFactory);
	return $nc(server)->getClassLoaderRepository();
}

$String* MBeanServerFactory::mBeanServerId($MBeanServer* mbs) {
	$init(MBeanServerFactory);
	try {
		$init($MBeanServerDelegate);
		return $cast($String, $nc(mbs)->getAttribute($MBeanServerDelegate::DELEGATE_NAME, "MBeanServerId"_s));
	} catch ($JMException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Ignoring exception while getting MBeanServerId: "_s, e}));
		return nullptr;
	}
	$shouldNotReachHere();
}

void MBeanServerFactory::checkPermission($String* action) {
	$init(MBeanServerFactory);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanServerPermission, action));
		sm->checkPermission(perm);
	}
}

void MBeanServerFactory::addMBeanServer($MBeanServer* mbs) {
	$init(MBeanServerFactory);
	$synchronized(class$) {
		MBeanServerFactory::mBeanServerList->add(mbs);
	}
}

void MBeanServerFactory::removeMBeanServer($MBeanServer* mbs) {
	$init(MBeanServerFactory);
	$synchronized(class$) {
		bool removed = MBeanServerFactory::mBeanServerList->remove(mbs);
		if (!removed) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, "MBeanServer was not in list!"_s);
			$throwNew($IllegalArgumentException, "MBeanServer was not in list!"_s);
		}
	}
}

$Class* MBeanServerFactory::loadBuilderClass($String* builderClassName) {
	$init(MBeanServerFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader != nullptr) {
		return loader->loadClass(builderClassName);
	}
	return $ReflectUtil::forName(builderClassName);
}

$MBeanServerBuilder* MBeanServerFactory::newBuilder($Class* builderClass) {
	$init(MBeanServerFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($Object, abuilder, $nc(builderClass)->newInstance());
		return $cast($MBeanServerBuilder, abuilder);
	} catch ($RuntimeException& x) {
		$throw(x);
	} catch ($Exception& x) {
		$var($String, msg, $str({"Failed to instantiate a MBeanServerBuilder from "_s, builderClass, ": "_s, x}));
		$throwNew($JMRuntimeException, msg, x);
	}
	$shouldNotReachHere();
}

void MBeanServerFactory::checkMBeanServerBuilder() {
	$init(MBeanServerFactory);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "javax.management.builder.initial"_s));
			$var($String, builderClassName, $cast($String, $AccessController::doPrivileged(act)));
			try {
				$Class* newBuilderClass = nullptr;
				if (builderClassName == nullptr || builderClassName->length() == 0) {
					$load($MBeanServerBuilder);
					newBuilderClass = $MBeanServerBuilder::class$;
				} else {
					newBuilderClass = loadBuilderClass(builderClassName);
				}
				if (MBeanServerFactory::builder != nullptr) {
					$Class* builderClass = MBeanServerFactory::builder->getClass();
					if (newBuilderClass == builderClass) {
						return;
					}
				}
				$assignStatic(MBeanServerFactory::builder, newBuilder(newBuilderClass));
			} catch ($ClassNotFoundException& x) {
				$var($String, msg, $str({"Failed to load MBeanServerBuilder class "_s, builderClassName, ": "_s, x}));
				$throwNew($JMRuntimeException, msg, x);
			}
		} catch ($RuntimeException& x) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
				$var($StringBuilder, strb, $$new($StringBuilder)->append("Failed to instantiate MBeanServerBuilder: "_s)->append($of(x))->append("\n\t\tCheck the value of the "_s)->append("javax.management.builder.initial"_s)->append(" property."_s));
				$JmxProperties::MBEANSERVER_LOGGER->log($System$Logger$Level::DEBUG, $$new(MBeanServerFactory$$Lambda$toString, strb));
			}
			$throw(x);
		}
	}
}

$MBeanServerBuilder* MBeanServerFactory::getNewMBeanServerBuilder() {
	$init(MBeanServerFactory);
	$synchronized(class$) {
		checkMBeanServerBuilder();
		return MBeanServerFactory::builder;
	}
}

void MBeanServerFactory::clinit$($Class* clazz) {
	$assignStatic(MBeanServerFactory::builder, nullptr);
	$assignStatic(MBeanServerFactory::mBeanServerList, $new($ArrayList));
}

MBeanServerFactory::MBeanServerFactory() {
}

$Class* MBeanServerFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.management.MBeanServerFactory$$Lambda$toString")) {
			return MBeanServerFactory$$Lambda$toString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"builder", "Ljavax/management/MBeanServerBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(MBeanServerFactory, builder)},
		{"mBeanServerList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/management/MBeanServer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerFactory, mBeanServerList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MBeanServerFactory, init$, void)},
		{"addMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MBeanServerFactory, addMBeanServer, void, $MBeanServer*)},
		{"checkMBeanServerBuilder", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MBeanServerFactory, checkMBeanServerBuilder, void)},
		{"checkPermission", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanServerFactory, checkPermission, void, $String*), "java.lang.SecurityException"},
		{"createMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, createMBeanServer, $MBeanServer*)},
		{"createMBeanServer", "(Ljava/lang/String;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, createMBeanServer, $MBeanServer*, $String*)},
		{"findMBeanServer", "(Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;)Ljava/util/ArrayList<Ljavax/management/MBeanServer;>;", $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(MBeanServerFactory, findMBeanServer, $ArrayList*, $String*)},
		{"getClassLoaderRepository", "(Ljavax/management/MBeanServer;)Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, getClassLoaderRepository, $ClassLoaderRepository*, $MBeanServer*)},
		{"getNewMBeanServerBuilder", "()Ljavax/management/MBeanServerBuilder;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MBeanServerFactory, getNewMBeanServerBuilder, $MBeanServerBuilder*)},
		{"loadBuilderClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(MBeanServerFactory, loadBuilderClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"mBeanServerId", "(Ljavax/management/MBeanServer;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanServerFactory, mBeanServerId, $String*, $MBeanServer*)},
		{"newBuilder", "(Ljava/lang/Class;)Ljavax/management/MBeanServerBuilder;", "(Ljava/lang/Class<*>;)Ljavax/management/MBeanServerBuilder;", $PRIVATE | $STATIC, $staticMethod(MBeanServerFactory, newBuilder, $MBeanServerBuilder*, $Class*)},
		{"newMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, newMBeanServer, $MBeanServer*)},
		{"newMBeanServer", "(Ljava/lang/String;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, newMBeanServer, $MBeanServer*, $String*)},
		{"releaseMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFactory, releaseMBeanServer, void, $MBeanServer*)},
		{"removeMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MBeanServerFactory, removeMBeanServer, void, $MBeanServer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanServerFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanServerFactory, name, initialize, &classInfo$$, MBeanServerFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFactory);
	});
	return class$;
}

$Class* MBeanServerFactory::class$ = nullptr;

	} // management
} // javax