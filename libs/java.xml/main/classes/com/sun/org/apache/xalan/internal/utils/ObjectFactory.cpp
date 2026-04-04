#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/utils/ConfigurationError.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/function/Supplier.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEBUG
#undef JAXP_INTERNAL
#undef STAX_INTERNAL

using $ConfigurationError = ::com::sun::org::apache::xalan::internal::utils::ConfigurationError;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Supplier = ::java::util::function::Supplier;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class ObjectFactory$$Lambda$lambda$newInstance$0 : public $Supplier {
	$class(ObjectFactory$$Lambda$lambda$newInstance$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* providerClass, $ClassLoader* cl) {
		this->providerClass = providerClass;
		$set(this, cl, cl);
	}
	virtual $Object* get() override {
		 return $of(ObjectFactory::lambda$newInstance$0(providerClass, cl));
	}
	$Class* providerClass = nullptr;
	$ClassLoader* cl = nullptr;
};
$Class* ObjectFactory$$Lambda$lambda$newInstance$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"providerClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ObjectFactory$$Lambda$lambda$newInstance$0, providerClass)},
		{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ObjectFactory$$Lambda$lambda$newInstance$0, cl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(ObjectFactory$$Lambda$lambda$newInstance$0, init$, void, $Class*, $ClassLoader*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectFactory$$Lambda$lambda$newInstance$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.org.apache.xalan.internal.utils.ObjectFactory$$Lambda$lambda$newInstance$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectFactory$$Lambda$lambda$newInstance$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactory$$Lambda$lambda$newInstance$0);
	});
	return class$;
}
$Class* ObjectFactory$$Lambda$lambda$newInstance$0::class$ = nullptr;

$String* ObjectFactory::JAXP_INTERNAL = nullptr;
$String* ObjectFactory::STAX_INTERNAL = nullptr;

void ObjectFactory::init$() {
}

void ObjectFactory::debugPrintln($Supplier* msgGen) {
	$init(ObjectFactory);
	;
}

$ClassLoader* ObjectFactory::findClassLoader() {
	$init(ObjectFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() != nullptr) {
		return nullptr;
	}
	$var($ClassLoader, context, $SecuritySupport::getContextClassLoader());
	$var($ClassLoader, system, $SecuritySupport::getSystemClassLoader());
	$var($ClassLoader, chain, system);
	while (true) {
		if (context == chain) {
			$var($ClassLoader, current, ObjectFactory::class$->getClassLoader());
			$assign(chain, system);
			while (true) {
				if (current == chain) {
					return system;
				}
				if (chain == nullptr) {
					break;
				}
				$assign(chain, $SecuritySupport::getParentClassLoader(chain));
			}
			return current;
		}
		if (chain == nullptr) {
			break;
		}
		$assign(chain, $SecuritySupport::getParentClassLoader(chain));
	}
	return context;
}

$Object* ObjectFactory::newInstance($String* className, bool doFallback) {
	$init(ObjectFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $System::getSecurityManager() != nullptr ? ($ClassLoader*)nullptr : findClassLoader());
	try {
		$Class* providerClass = findProviderClass(className, cl, doFallback);
		$var($Object, instance, $$nc($nc(providerClass)->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0)));
		debugPrintln($$new(ObjectFactory$$Lambda$lambda$newInstance$0, providerClass, cl));
		return instance;
	} catch ($ClassNotFoundException& x) {
		$throwNew($ConfigurationError, $$str({"Provider "_s, className, " not found"_s}), x);
	} catch ($Exception& x) {
		$throwNew($ConfigurationError, $$str({"Provider "_s, className, " could not be instantiated: "_s, x}), x);
	}
	$shouldNotReachHere();
}

$Class* ObjectFactory::findProviderClass($String* className, bool doFallback) {
	$init(ObjectFactory);
	return findProviderClass(className, $(findClassLoader()), doFallback);
}

$Class* ObjectFactory::findProviderClass($String* className, $ClassLoader* cl$renamed, bool doFallback) {
	$init(ObjectFactory);
	$useLocalObjectStack();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	$var($SecurityManager, security, $System::getSecurityManager());
	try {
		if (security != nullptr) {
			bool var$0 = $nc(className)->startsWith(ObjectFactory::JAXP_INTERNAL);
			if (var$0 || className->startsWith(ObjectFactory::STAX_INTERNAL)) {
				$assign(cl, nullptr);
			} else {
				int32_t lastDot = className->lastIndexOf("."_s);
				$var($String, packageName, className);
				if (lastDot != -1) {
					$assign(packageName, className->substring(0, lastDot));
				}
				security->checkPackageAccess(packageName);
			}
		}
	} catch ($SecurityException& e) {
		$throw(e);
	}
	$Class* providerClass = nullptr;
	if (cl == nullptr) {
		providerClass = $Class::forName(className, false, $(ObjectFactory::class$->getClassLoader()));
	} else {
		try {
			providerClass = cl->loadClass(className);
		} catch ($ClassNotFoundException& x) {
			if (doFallback) {
				$var($ClassLoader, current, ObjectFactory::class$->getClassLoader());
				if (current == nullptr) {
					providerClass = $Class::forName(className);
				} else if (cl != current) {
					$assign(cl, current);
					providerClass = cl->loadClass(className);
				} else {
					$throw(x);
				}
			} else {
				$throw(x);
			}
		}
	}
	return providerClass;
}

$String* ObjectFactory::lambda$newInstance$0($Class* providerClass, $ClassLoader* cl) {
	$init(ObjectFactory);
	return $str({"created new instance of "_s, providerClass, " using ClassLoader: "_s, cl});
}

ObjectFactory::ObjectFactory() {
}

void ObjectFactory::clinit$($Class* clazz) {
	$assignStatic(ObjectFactory::JAXP_INTERNAL, "com.sun.org.apache"_s);
	$assignStatic(ObjectFactory::STAX_INTERNAL, "com.sun.xml.internal"_s);
}

$Class* ObjectFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.org.apache.xalan.internal.utils.ObjectFactory$$Lambda$lambda$newInstance$0")) {
			return ObjectFactory$$Lambda$lambda$newInstance$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"JAXP_INTERNAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactory, JAXP_INTERNAL)},
		{"STAX_INTERNAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactory, STAX_INTERNAL)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectFactory, DEBUG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectFactory, init$, void)},
		{"debugPrintln", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(ObjectFactory, debugPrintln, void, $Supplier*)},
		{"findClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $staticMethod(ObjectFactory, findClassLoader, $ClassLoader*)},
		{"findProviderClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(ObjectFactory, findProviderClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException,com.sun.org.apache.xalan.internal.utils.ConfigurationError"},
		{"findProviderClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(ObjectFactory, findProviderClass, $Class*, $String*, $ClassLoader*, bool), "java.lang.ClassNotFoundException,com.sun.org.apache.xalan.internal.utils.ConfigurationError"},
		{"lambda$newInstance$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectFactory, lambda$newInstance$0, $String*, $Class*, $ClassLoader*)},
		{"newInstance", "(Ljava/lang/String;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(ObjectFactory, newInstance, $Object*, $String*, bool), "com.sun.org.apache.xalan.internal.utils.ConfigurationError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.utils.ObjectFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectFactory, name, initialize, &classInfo$$, ObjectFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactory);
	});
	return class$;
}

$Class* ObjectFactory::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com