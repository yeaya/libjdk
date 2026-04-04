#include <javax/xml/stream/FactoryFinder.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
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
#include <java/security/AccessController.h>
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/stream/FactoryConfigurationError.h>
#include <javax/xml/stream/FactoryFinder$1.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_PACKAGE

using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $FactoryConfigurationError = ::javax::xml::stream::FactoryConfigurationError;
using $FactoryFinder$1 = ::javax::xml::stream::FactoryFinder$1;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace stream {

class FactoryFinder$$Lambda$lambda$newInstance$0 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$newInstance$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* providerClass, $ClassLoader* clD) {
		this->providerClass = providerClass;
		$set(this, clD, clD);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$newInstance$0(providerClass, clD));
	}
	$Class* providerClass = nullptr;
	$ClassLoader* clD = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$newInstance$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"providerClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass)},
		{"clD", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, clD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$newInstance$0, init$, void, $Class*, $ClassLoader*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$newInstance$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$newInstance$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$newInstance$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$newInstance$0);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$newInstance$0::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$1$1 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryId) {
		$set(this, factoryId, factoryId);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$1(factoryId));
	}
	$String* factoryId = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$find$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factoryId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$1$1, factoryId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$1$1, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$find$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$find$1$1);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$1$1::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$2$2 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* systemProp) {
		$set(this, systemProp, systemProp);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$2(systemProp));
	}
	$String* systemProp = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$find$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"systemProp", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$2$2, systemProp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$2$2, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$find$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$find$2$2);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$2$2::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$3$3 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* fStax) {
		$set(this, fStax, fStax);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$3(fStax));
	}
	$File* fStax = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$find$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fStax", "Ljava/io/File;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$3$3, fStax)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$3$3, init$, void, $File*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$find$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$find$3$3);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$3$3::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$5$4 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$5$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* foundIn, $String* factoryClassName) {
		$set(this, foundIn, foundIn);
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$5(foundIn, factoryClassName));
	}
	$String* foundIn = nullptr;
	$String* factoryClassName = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$find$5$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"foundIn", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$5$4, foundIn)},
		{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$5$4, factoryClassName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$5$4, init$, void, $String*, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$5$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$5$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$find$5$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$find$5$4);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$5$4::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$6$5 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$6$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* fallbackClassName) {
		$set(this, fallbackClassName, fallbackClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$6(fallbackClassName));
	}
	$String* fallbackClassName = nullptr;
};
$Class* FactoryFinder$$Lambda$lambda$find$6$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fallbackClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$6$5, fallbackClassName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$6$5, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$6$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$6$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FactoryFinder$$Lambda$lambda$find$6$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$$Lambda$lambda$find$6$5);
	});
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$6$5::class$ = nullptr;

bool FactoryFinder::$assertionsDisabled = false;
$String* FactoryFinder::DEFAULT_PACKAGE = nullptr;
bool FactoryFinder::debug = false;
$Properties* FactoryFinder::cacheProps = nullptr;
$volatile(bool) FactoryFinder::firstTime = false;

void FactoryFinder::init$() {
}

void FactoryFinder::dPrint($Supplier* msgGen) {
	$init(FactoryFinder);
	$useLocalObjectStack();
	if (FactoryFinder::debug) {
		$nc($System::err)->println($$str({"JAXP: "_s, $$cast($String, $nc(msgGen)->get())}));
	}
}

$Class* FactoryFinder::getProviderClass($String* className, $ClassLoader* cl$renamed, bool doFallback, bool useBSClsLoader) {
	$init(FactoryFinder);
	$useLocalObjectStack();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	try {
		if (cl == nullptr) {
			if (useBSClsLoader) {
				return $Class::forName(className, false, $(FactoryFinder::class$->getClassLoader()));
			} else {
				$assign(cl, $SecuritySupport::getContextClassLoader());
				if (cl == nullptr) {
					$throwNew($ClassNotFoundException);
				} else {
					return $Class::forName(className, false, cl);
				}
			}
		} else {
			return $Class::forName(className, false, cl);
		}
	} catch ($ClassNotFoundException& e1) {
		if (doFallback) {
			return $Class::forName(className, false, $(FactoryFinder::class$->getClassLoader()));
		} else {
			$throw(e1);
		}
	}
	$shouldNotReachHere();
}

$Object* FactoryFinder::newInstance($Class* type, $String* className, $ClassLoader* cl, bool doFallback) {
	$init(FactoryFinder);
	return newInstance(type, className, cl, doFallback, false);
}

$Object* FactoryFinder::newInstance($Class* type, $String* className, $ClassLoader* cl$renamed, bool doFallback, bool useBSClsLoader) {
	$init(FactoryFinder);
	$useLocalObjectStack();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	if (!FactoryFinder::$assertionsDisabled && !(type != nullptr)) {
		$throwNew($AssertionError);
	}
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(FactoryFinder::DEFAULT_PACKAGE)) {
			$assign(cl, nullptr);
			useBSClsLoader = true;
		}
	}
	try {
		$Class* providerClass = getProviderClass(className, cl, doFallback, useBSClsLoader);
		if (!$nc(type)->isAssignableFrom(providerClass)) {
			$throwNew($ClassCastException, $$str({className, " cannot be cast to "_s, $(type->getName())}));
		}
		$var($Object, instance, $$nc($nc(providerClass)->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0)));
		$var($ClassLoader, clD, cl);
		dPrint($$new(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass, clD));
		return type->cast(instance);
	} catch ($ClassNotFoundException& x) {
		$throwNew($FactoryConfigurationError, $$str({"Provider "_s, className, " not found"_s}), x);
	} catch ($Exception& x) {
		$throwNew($FactoryConfigurationError, $$str({"Provider "_s, className, " could not be instantiated: "_s, x}), x);
	}
	$shouldNotReachHere();
}

$Object* FactoryFinder::find($Class* type, $String* fallbackClassName) {
	$init(FactoryFinder);
	return find(type, $($nc(type)->getName()), nullptr, fallbackClassName);
}

$Object* FactoryFinder::find($Class* type, $String* factoryId, $ClassLoader* cl, $String* fallbackClassName) {
	$init(FactoryFinder);
	$useLocalObjectStack();
	dPrint($$new(FactoryFinder$$Lambda$lambda$find$1$1, factoryId));
	try {
		$var($String, systemProp, nullptr);
		if ($$nc($nc(type)->getName())->equals(factoryId)) {
			$assign(systemProp, $SecuritySupport::getSystemProperty(factoryId));
		} else {
			$assign(systemProp, $System::getProperty(factoryId));
		}
		if (systemProp != nullptr) {
			dPrint($$new(FactoryFinder$$Lambda$lambda$find$2$2, systemProp));
			return newInstance(type, systemProp, cl, true);
		}
	} catch ($SecurityException& se) {
		$throwNew($FactoryConfigurationError, $$str({"Failed to read factoryId \'"_s, factoryId, "\'"_s}), se);
	}
	$var($String, configFile, nullptr);
	try {
		if (FactoryFinder::firstTime) {
			$synchronized(FactoryFinder::cacheProps) {
				if (FactoryFinder::firstTime) {
					$init($File);
					$assign(configFile, $str({$($SecuritySupport::getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "stax.properties"_s}));
					$var($File, fStax, $new($File, configFile));
					FactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(fStax)) {
						dPrint($$new(FactoryFinder$$Lambda$lambda$find$3$3, fStax));
						FactoryFinder::cacheProps->load($($SecuritySupport::getFileInputStream(fStax)));
					} else {
						$assign(configFile, $str({$($SecuritySupport::getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
						$var($File, fJaxp, $new($File, configFile));
						if ($SecuritySupport::doesFileExist(fJaxp)) {
							dPrint($$new(FactoryFinder$$Lambda$lambda$find$3$3, fJaxp));
							FactoryFinder::cacheProps->load($($SecuritySupport::getFileInputStream(fJaxp)));
						}
					}
				}
			}
		}
		$var($String, factoryClassName, FactoryFinder::cacheProps->getProperty(factoryId));
		if (factoryClassName != nullptr) {
			$var($String, foundIn, configFile);
			dPrint($$new(FactoryFinder$$Lambda$lambda$find$5$4, foundIn, factoryClassName));
			return newInstance(type, factoryClassName, cl, true);
		}
	} catch ($Exception& ex) {
		if (FactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	if ($$nc($nc(type)->getName())->equals(factoryId)) {
		$var($Object, provider, findServiceProvider(type, cl));
		if (provider != nullptr) {
			return provider;
		}
	} else if (!FactoryFinder::$assertionsDisabled && !(fallbackClassName == nullptr)) {
		$throwNew($AssertionError);
	}
	if (fallbackClassName == nullptr) {
		$throwNew($FactoryConfigurationError, $$str({"Provider for "_s, factoryId, " cannot be found"_s}), nullptr);
	}
	dPrint($$new(FactoryFinder$$Lambda$lambda$find$6$5, fallbackClassName));
	return newInstance(type, fallbackClassName, cl, true);
}

$Object* FactoryFinder::findServiceProvider($Class* type, $ClassLoader* cl) {
	$init(FactoryFinder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $AccessController::doPrivileged($$new($FactoryFinder$1, cl, type));
	} catch ($ServiceConfigurationError& e) {
		$var($RuntimeException, x, $new($RuntimeException, $$str({"Provider for "_s, type, " cannot be created"_s}), e));
		$var($FactoryConfigurationError, error, $new($FactoryConfigurationError, x, $(x->getMessage())));
		$throw(error);
	}
	$shouldNotReachHere();
}

$String* FactoryFinder::lambda$find$6($String* fallbackClassName) {
	$init(FactoryFinder);
	return $str({"loaded from fallback value: "_s, fallbackClassName});
}

$String* FactoryFinder::lambda$find$5($String* foundIn, $String* factoryClassName) {
	$init(FactoryFinder);
	return $str({"found in "_s, foundIn, " value="_s, factoryClassName});
}

$String* FactoryFinder::lambda$find$3($File* fStax) {
	$init(FactoryFinder);
	return $str({"Read properties file "_s, fStax});
}

$String* FactoryFinder::lambda$find$2($String* systemProp) {
	$init(FactoryFinder);
	return $str({"found system property, value="_s, systemProp});
}

$String* FactoryFinder::lambda$find$1($String* factoryId) {
	$init(FactoryFinder);
	return $str({"find factoryId ="_s, factoryId});
}

$String* FactoryFinder::lambda$newInstance$0($Class* providerClass, $ClassLoader* clD) {
	$init(FactoryFinder);
	return $str({"created new instance of "_s, providerClass, " using ClassLoader: "_s, clD});
}

void FactoryFinder::clinit$($Class* clazz) {
	$assignStatic(FactoryFinder::DEFAULT_PACKAGE, "com.sun.xml.internal."_s);
	FactoryFinder::$assertionsDisabled = !FactoryFinder::class$->desiredAssertionStatus();
	FactoryFinder::debug = false;
	$assignStatic(FactoryFinder::cacheProps, $new($Properties));
	FactoryFinder::firstTime = true;
	{
		try {
			$var($String, val, $SecuritySupport::getSystemProperty("jaxp.debug"_s));
			FactoryFinder::debug = val != nullptr && !"false"_s->equals(val);
		} catch ($SecurityException& se) {
			FactoryFinder::debug = false;
		}
	}
}

FactoryFinder::FactoryFinder() {
}

$Class* FactoryFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$newInstance$0")) {
			return FactoryFinder$$Lambda$lambda$newInstance$0::load$(name, initialize);
		}
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$find$1$1")) {
			return FactoryFinder$$Lambda$lambda$find$1$1::load$(name, initialize);
		}
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$find$2$2")) {
			return FactoryFinder$$Lambda$lambda$find$2$2::load$(name, initialize);
		}
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$find$3$3")) {
			return FactoryFinder$$Lambda$lambda$find$3$3::load$(name, initialize);
		}
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$find$5$4")) {
			return FactoryFinder$$Lambda$lambda$find$5$4::load$(name, initialize);
		}
		if (name->equals("javax.xml.stream.FactoryFinder$$Lambda$lambda$find$6$5")) {
			return FactoryFinder$$Lambda$lambda$find$6$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FactoryFinder, $assertionsDisabled)},
		{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, DEFAULT_PACKAGE)},
		{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FactoryFinder, debug)},
		{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, cacheProps)},
		{"firstTime", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(FactoryFinder, firstTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FactoryFinder, init$, void)},
		{"dPrint", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, dPrint, void, $Supplier*)},
		{"find", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)TT;", $STATIC, $staticMethod(FactoryFinder, find, $Object*, $Class*, $String*), "javax.xml.stream.FactoryConfigurationError"},
		{"find", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;)TT;", $STATIC, $staticMethod(FactoryFinder, find, $Object*, $Class*, $String*, $ClassLoader*, $String*), "javax.xml.stream.FactoryConfigurationError"},
		{"findServiceProvider", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)TT;", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, findServiceProvider, $Object*, $Class*, $ClassLoader*)},
		{"getProviderClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, getProviderClass, $Class*, $String*, $ClassLoader*, bool, bool), "java.lang.ClassNotFoundException"},
		{"lambda$find$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$1, $String*, $String*)},
		{"lambda$find$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$2, $String*, $String*)},
		{"lambda$find$3", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$3, $String*, $File*)},
		{"lambda$find$5", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$5, $String*, $String*, $String*)},
		{"lambda$find$6", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$6, $String*, $String*)},
		{"lambda$newInstance$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$newInstance$0, $String*, $Class*, $ClassLoader*)},
		{"newInstance", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;Z)TT;", $STATIC, $staticMethod(FactoryFinder, newInstance, $Object*, $Class*, $String*, $ClassLoader*, bool), "javax.xml.stream.FactoryConfigurationError"},
		{"newInstance", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)TT;", $STATIC, $staticMethod(FactoryFinder, newInstance, $Object*, $Class*, $String*, $ClassLoader*, bool, bool), "javax.xml.stream.FactoryConfigurationError"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.stream.FactoryFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.stream.FactoryFinder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.stream.FactoryFinder$1"
	};
	$loadClass(FactoryFinder, name, initialize, &classInfo$$, FactoryFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder);
	});
	return class$;
}

$Class* FactoryFinder::class$ = nullptr;

		} // stream
	} // xml
} // javax