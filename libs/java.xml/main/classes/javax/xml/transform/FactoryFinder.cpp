#include <javax/xml/transform/FactoryFinder.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/transform/FactoryFinder$1.h>
#include <javax/xml/transform/TransformerFactoryConfigurationError.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_PACKAGE

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $FactoryFinder$1 = ::javax::xml::transform::FactoryFinder$1;
using $TransformerFactoryConfigurationError = ::javax::xml::transform::TransformerFactoryConfigurationError;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace transform {

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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$newInstance$0>());
	}
	$Class* providerClass = nullptr;
	$ClassLoader* clD = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$newInstance$0::fieldInfos[3] = {
	{"providerClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass)},
	{"clD", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, clD)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$newInstance$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$newInstance$0, init$, void, $Class*, $ClassLoader*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$newInstance$0, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$newInstance$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$newInstance$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$newInstance$0::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$newInstance$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$1$1>());
	}
	$String* factoryId = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$1$1::fieldInfos[2] = {
	{"factoryId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$1$1, factoryId)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$1$1, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$1$1, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$find$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$1$1::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$2$2>());
	}
	$String* systemProp = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$2$2::fieldInfos[2] = {
	{"systemProp", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$2$2, systemProp)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$2$2, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$2$2, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$find$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$2$2::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$2$2::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$3$3 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$3(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$3$3>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$3$3::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$3$3, f)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$3$3, init$, void, $File*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$3$3, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$find$3$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$3$3::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$3$3::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$4$4 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryClassName) {
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$4(factoryClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$4$4>());
	}
	$String* factoryClassName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$4$4::fieldInfos[2] = {
	{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$4$4, factoryClassName)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$4$4, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$4$4, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$find$4$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$4$4::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$4$4::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$5$5 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* fallbackClassName) {
		$set(this, fallbackClassName, fallbackClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$5(fallbackClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$5$5>());
	}
	$String* fallbackClassName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$5$5::fieldInfos[2] = {
	{"fallbackClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$5$5, fallbackClassName)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryFinder$$Lambda$lambda$find$5$5, init$, void, $String*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FactoryFinder$$Lambda$lambda$find$5$5, get, $Object*)},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.transform.FactoryFinder$$Lambda$lambda$find$5$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$5$5::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$5$5::class$ = nullptr;

$FieldInfo _FactoryFinder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FactoryFinder, $assertionsDisabled)},
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, DEFAULT_PACKAGE)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FactoryFinder, debug)},
	{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, cacheProps)},
	{"firstTime", "Z", nullptr, $STATIC | $VOLATILE, $staticField(FactoryFinder, firstTime)},
	{}
};

$MethodInfo _FactoryFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FactoryFinder, init$, void)},
	{"dPrint", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, dPrint, void, $Supplier*)},
	{"find", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)TT;", $STATIC, $staticMethod(FactoryFinder, find, $Object*, $Class*, $String*), "javax.xml.transform.TransformerFactoryConfigurationError"},
	{"findServiceProvider", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, findServiceProvider, $Object*, $Class*), "javax.xml.transform.TransformerFactoryConfigurationError"},
	{"getProviderClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(FactoryFinder, getProviderClass, $Class*, $String*, $ClassLoader*, bool, bool), "java.lang.ClassNotFoundException"},
	{"lambda$find$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$1, $String*, $String*)},
	{"lambda$find$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$2, $String*, $String*)},
	{"lambda$find$3", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$3, $String*, $File*)},
	{"lambda$find$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$4, $String*, $String*)},
	{"lambda$find$5", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$find$5, $String*, $String*)},
	{"lambda$newInstance$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FactoryFinder, lambda$newInstance$0, $String*, $Class*, $ClassLoader*)},
	{"newInstance", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;Z)TT;", $STATIC, $staticMethod(FactoryFinder, newInstance, $Object*, $Class*, $String*, $ClassLoader*, bool), "javax.xml.transform.TransformerFactoryConfigurationError"},
	{}
};

$InnerClassInfo _FactoryFinder_InnerClassesInfo_[] = {
	{"javax.xml.transform.FactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FactoryFinder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.transform.FactoryFinder",
	"java.lang.Object",
	nullptr,
	_FactoryFinder_FieldInfo_,
	_FactoryFinder_MethodInfo_,
	nullptr,
	nullptr,
	_FactoryFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.transform.FactoryFinder$1"
};

$Object* allocate$FactoryFinder($Class* clazz) {
	return $of($alloc(FactoryFinder));
}

bool FactoryFinder::$assertionsDisabled = false;
$String* FactoryFinder::DEFAULT_PACKAGE = nullptr;
bool FactoryFinder::debug = false;
$Properties* FactoryFinder::cacheProps = nullptr;
$volatile(bool) FactoryFinder::firstTime = false;

void FactoryFinder::init$() {
}

void FactoryFinder::dPrint($Supplier* msgGen) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	if (FactoryFinder::debug) {
		$nc($System::err)->println($$str({"JAXP: "_s, $cast($String, $($nc(msgGen)->get()))}));
	}
}

$Class* FactoryFinder::getProviderClass($String* className, $ClassLoader* cl$renamed, bool doFallback, bool useBSClsLoader) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
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

$Object* FactoryFinder::newInstance($Class* type, $String* className, $ClassLoader* cl$renamed, bool doFallback) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	if (!FactoryFinder::$assertionsDisabled && !(type != nullptr)) {
		$throwNew($AssertionError);
	}
	bool useBSClsLoader = false;
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
		$var($Object, instance, $nc($($nc(providerClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		$var($ClassLoader, clD, cl);
		dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass, clD)));
		return $of($nc(type)->cast(instance));
	} catch ($ClassNotFoundException& x) {
		$throwNew($TransformerFactoryConfigurationError, x, $$str({"Provider "_s, className, " not found"_s}));
	} catch ($Exception& x) {
		$throwNew($TransformerFactoryConfigurationError, x, $$str({"Provider "_s, className, " could not be instantiated: "_s, x}));
	}
	$shouldNotReachHere();
}

$Object* FactoryFinder::find($Class* type, $String* fallbackClassName) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	if (!FactoryFinder::$assertionsDisabled && !(type != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($String, factoryId, $nc(type)->getName());
	dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$1$1, factoryId)));
	try {
		$var($String, systemProp, $SecuritySupport::getSystemProperty(factoryId));
		if (systemProp != nullptr) {
			dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$2$2, systemProp)));
			return $of(newInstance(type, systemProp, nullptr, true));
		}
	} catch ($SecurityException& se) {
		if (FactoryFinder::debug) {
			se->printStackTrace();
		}
	}
	try {
		if (FactoryFinder::firstTime) {
			$synchronized(FactoryFinder::cacheProps) {
				if (FactoryFinder::firstTime) {
					$init($File);
					$var($String, configFile, $str({$($SecuritySupport::getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
					$var($File, f, $new($File, configFile));
					FactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(f)) {
						dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$3$3, f)));
						$nc(FactoryFinder::cacheProps)->load($(static_cast<$InputStream*>($SecuritySupport::getFileInputStream(f))));
					}
				}
			}
		}
		$var($String, factoryClassName, $nc(FactoryFinder::cacheProps)->getProperty(factoryId));
		if (factoryClassName != nullptr) {
			dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$4$4, factoryClassName)));
			return $of(newInstance(type, factoryClassName, nullptr, true));
		}
	} catch ($Exception& ex) {
		if (FactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	$var($Object, provider, findServiceProvider(type));
	if (provider != nullptr) {
		return $of(provider);
	}
	if (fallbackClassName == nullptr) {
		$throwNew($TransformerFactoryConfigurationError, nullptr, $$str({"Provider for "_s, factoryId, " cannot be found"_s}));
	}
	dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$5$5, fallbackClassName)));
	return $of(newInstance(type, fallbackClassName, nullptr, true));
}

$Object* FactoryFinder::findServiceProvider($Class* type) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FactoryFinder$1, type))));
	} catch ($ServiceConfigurationError& e) {
		$var($RuntimeException, x, $new($RuntimeException, $$str({"Provider for "_s, type, " cannot be created"_s}), e));
		$var($TransformerFactoryConfigurationError, error, $new($TransformerFactoryConfigurationError, x, $(x->getMessage())));
		$throw(error);
	}
	$shouldNotReachHere();
}

$String* FactoryFinder::lambda$find$5($String* fallbackClassName) {
	$init(FactoryFinder);
	return $str({"loaded from fallback value: "_s, fallbackClassName});
}

$String* FactoryFinder::lambda$find$4($String* factoryClassName) {
	$init(FactoryFinder);
	return $str({"found in ${java.home}/conf/jaxp.properties, value="_s, factoryClassName});
}

$String* FactoryFinder::lambda$find$3($File* f) {
	$init(FactoryFinder);
	return $str({"Read properties file "_s, f});
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

void clinit$FactoryFinder($Class* class$) {
	$assignStatic(FactoryFinder::DEFAULT_PACKAGE, "com.sun.org.apache.xalan.internal."_s);
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
		if (name->equals(FactoryFinder$$Lambda$lambda$newInstance$0::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$newInstance$0::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$1$1::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$1$1::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$2$2::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$2$2::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$3$3::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$3$3::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$4$4::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$4$4::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$5$5::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$5$5::load$(name, initialize);
		}
	}
	$loadClass(FactoryFinder, name, initialize, &_FactoryFinder_ClassInfo_, clinit$FactoryFinder, allocate$FactoryFinder);
	return class$;
}

$Class* FactoryFinder::class$ = nullptr;

		} // transform
	} // xml
} // javax