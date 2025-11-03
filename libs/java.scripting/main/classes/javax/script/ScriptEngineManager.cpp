#include <javax/script/ScriptEngineManager.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/TreeSet.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/script/Bindings.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/ScriptEngine.h>
#include <javax/script/ScriptEngineFactory.h>
#include <javax/script/SimpleBindings.h>
#include <jcpp.h>

#undef COMPARATOR
#undef DEBUG
#undef GLOBAL_SCOPE

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $TreeSet = ::java::util::TreeSet;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Bindings = ::javax::script::Bindings;
using $ScriptContext = ::javax::script::ScriptContext;
using $ScriptEngine = ::javax::script::ScriptEngine;
using $ScriptEngineFactory = ::javax::script::ScriptEngineFactory;
using $SimpleBindings = ::javax::script::SimpleBindings;

namespace javax {
	namespace script {

class ScriptEngineManager$$Lambda$getEngineName : public $Function {
	$class(ScriptEngineManager$$Lambda$getEngineName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ScriptEngineFactory, inst$)->getEngineName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$getEngineName>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScriptEngineManager$$Lambda$getEngineName::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$getEngineName::*)()>(&ScriptEngineManager$$Lambda$getEngineName::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$getEngineName::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$getEngineName",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$getEngineName::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$getEngineName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getEngineName::class$ = nullptr;

class ScriptEngineManager$$Lambda$lambda$initEngines$0$1 : public $PrivilegedAction {
	$class(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(ScriptEngineManager* inst, $ClassLoader* loader) {
		$set(this, inst$, inst);
		$set(this, loader, loader);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$initEngines$0(loader));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$lambda$initEngines$0$1>());
	}
	ScriptEngineManager* inst$ = nullptr;
	$ClassLoader* loader = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ScriptEngineManager$$Lambda$lambda$initEngines$0$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, inst$)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, loader)},
	{}
};
$MethodInfo ScriptEngineManager$$Lambda$lambda$initEngines$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/script/ScriptEngineManager;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$lambda$initEngines$0$1::*)(ScriptEngineManager*,$ClassLoader*)>(&ScriptEngineManager$$Lambda$lambda$initEngines$0$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$lambda$initEngines$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$lambda$initEngines$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$lambda$initEngines$0$1::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$lambda$initEngines$0$1::class$ = nullptr;

class ScriptEngineManager$$Lambda$getNames$2 : public $Function {
	$class(ScriptEngineManager$$Lambda$getNames$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ScriptEngineFactory, inst$)->getNames());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$getNames$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScriptEngineManager$$Lambda$getNames$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$getNames$2::*)()>(&ScriptEngineManager$$Lambda$getNames$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$getNames$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$getNames$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$getNames$2::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$getNames$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getNames$2::class$ = nullptr;

class ScriptEngineManager$$Lambda$getExtensions$3 : public $Function {
	$class(ScriptEngineManager$$Lambda$getExtensions$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ScriptEngineFactory, inst$)->getExtensions());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$getExtensions$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScriptEngineManager$$Lambda$getExtensions$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$getExtensions$3::*)()>(&ScriptEngineManager$$Lambda$getExtensions$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$getExtensions$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$getExtensions$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$getExtensions$3::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$getExtensions$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getExtensions$3::class$ = nullptr;

class ScriptEngineManager$$Lambda$getMimeTypes$4 : public $Function {
	$class(ScriptEngineManager$$Lambda$getMimeTypes$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ScriptEngineFactory, inst$)->getMimeTypes());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$getMimeTypes$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScriptEngineManager$$Lambda$getMimeTypes$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$getMimeTypes$4::*)()>(&ScriptEngineManager$$Lambda$getMimeTypes$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$getMimeTypes$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$getMimeTypes$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$getMimeTypes$4::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$getMimeTypes$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getMimeTypes$4::class$ = nullptr;

class ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5 : public $Predicate {
	$class(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Function* valuesFn, $String* selector) {
		$set(this, valuesFn, valuesFn);
		$set(this, selector, selector);
	}
	virtual bool test(Object$* spi) override {
		 return ScriptEngineManager::lambda$getEngineBy$1(valuesFn, selector, $cast($ScriptEngineFactory, spi));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5>());
	}
	$Function* valuesFn = nullptr;
	$String* selector = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::fieldInfos[3] = {
	{"valuesFn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, valuesFn)},
	{"selector", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, selector)},
	{}
};
$MethodInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::*)($Function*,$String*)>(&ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::class$ = nullptr;

class ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6 : public $Function {
	$class(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, $NO_CLASS_INIT, $Function)
public:
	void init$(ScriptEngineManager* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* spi) override {
		 return $of($nc(inst$)->lambda$getEngineBy$2($cast($ScriptEngineFactory, spi)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6>());
	}
	ScriptEngineManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, inst$)},
	{}
};
$MethodInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::methodInfos[3] = {
	{"<init>", "(Ljavax/script/ScriptEngineManager;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::*)(ScriptEngineManager*)>(&ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::class$ = nullptr;

class ScriptEngineManager$$Lambda$nonNull$7 : public $Predicate {
	$class(ScriptEngineManager$$Lambda$nonNull$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* arg0) override {
		 return $Objects::nonNull(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScriptEngineManager$$Lambda$nonNull$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScriptEngineManager$$Lambda$nonNull$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager$$Lambda$nonNull$7::*)()>(&ScriptEngineManager$$Lambda$nonNull$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScriptEngineManager$$Lambda$nonNull$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.script.ScriptEngineManager$$Lambda$nonNull$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ScriptEngineManager$$Lambda$nonNull$7::load$($String* name, bool initialize) {
	$loadClass(ScriptEngineManager$$Lambda$nonNull$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScriptEngineManager$$Lambda$nonNull$7::class$ = nullptr;

$FieldInfo _ScriptEngineManager_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScriptEngineManager, DEBUG)},
	{"COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ScriptEngineManager, COMPARATOR)},
	{"engineSpis", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, engineSpis)},
	{"nameAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, nameAssociations)},
	{"extensionAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, extensionAssociations)},
	{"mimeTypeAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, mimeTypeAssociations)},
	{"globalScope", "Ljavax/script/Bindings;", nullptr, $PRIVATE, $field(ScriptEngineManager, globalScope)},
	{}
};

$MethodInfo _ScriptEngineManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager::*)()>(&ScriptEngineManager::init$))},
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptEngineManager::*)($ClassLoader*)>(&ScriptEngineManager::init$))},
	{"associateFactory", "(Ljava/util/Map;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", "(Ljava/util/Map<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*,$String*,$ScriptEngineFactory*)>(&ScriptEngineManager::associateFactory))},
	{"debugPrint", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&ScriptEngineManager::debugPrint))},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBindings", "()Ljavax/script/Bindings;", nullptr, $PUBLIC},
	{"getEngineBy", "(Ljava/lang/String;Ljava/util/Map;Ljava/util/function/Function;)Ljavax/script/ScriptEngine;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;Ljava/util/function/Function<Ljavax/script/ScriptEngineFactory;Ljava/util/List<Ljava/lang/String;>;>;)Ljavax/script/ScriptEngine;", $PRIVATE, $method(static_cast<$ScriptEngine*(ScriptEngineManager::*)($String*,$Map*,$Function*)>(&ScriptEngineManager::getEngineBy))},
	{"getEngineByExtension", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC},
	{"getEngineByMimeType", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC},
	{"getEngineByName", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC},
	{"getEngineFactories", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/script/ScriptEngineFactory;>;", $PUBLIC},
	{"getServiceLoader", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE, $method(static_cast<$ServiceLoader*(ScriptEngineManager::*)($ClassLoader*)>(&ScriptEngineManager::getServiceLoader))},
	{"initEngines", "(Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(ScriptEngineManager::*)($ClassLoader*)>(&ScriptEngineManager::initEngines))},
	{"lambda$getEngineBy$1", "(Ljava/util/function/Function;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Function*,$String*,$ScriptEngineFactory*)>(&ScriptEngineManager::lambda$getEngineBy$1))},
	{"lambda$getEngineBy$2", "(Ljavax/script/ScriptEngineFactory;)Ljavax/script/ScriptEngine;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ScriptEngine*(ScriptEngineManager::*)($ScriptEngineFactory*)>(&ScriptEngineManager::lambda$getEngineBy$2))},
	{"lambda$initEngines$0", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ServiceLoader*(ScriptEngineManager::*)($ClassLoader*)>(&ScriptEngineManager::lambda$initEngines$0))},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"registerEngineExtension", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC},
	{"registerEngineMimeType", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC},
	{"registerEngineName", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC},
	{"reportException", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Throwable*)>(&ScriptEngineManager::reportException))},
	{"setBindings", "(Ljavax/script/Bindings;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScriptEngineManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.script.ScriptEngineManager",
	"java.lang.Object",
	nullptr,
	_ScriptEngineManager_FieldInfo_,
	_ScriptEngineManager_MethodInfo_
};

$Object* allocate$ScriptEngineManager($Class* clazz) {
	return $of($alloc(ScriptEngineManager));
}

$Comparator* ScriptEngineManager::COMPARATOR = nullptr;

void ScriptEngineManager::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	ScriptEngineManager::init$($($($Thread::currentThread())->getContextClassLoader()));
}

void ScriptEngineManager::init$($ClassLoader* loader) {
	$set(this, engineSpis, $new($TreeSet, ScriptEngineManager::COMPARATOR));
	$set(this, nameAssociations, $new($HashMap));
	$set(this, extensionAssociations, $new($HashMap));
	$set(this, mimeTypeAssociations, $new($HashMap));
	$set(this, globalScope, $new($SimpleBindings));
	initEngines(loader);
}

$ServiceLoader* ScriptEngineManager::getServiceLoader($ClassLoader* loader) {
	$beforeCallerSensitive();
	if (loader != nullptr) {
		$load($ScriptEngineFactory);
		return $ServiceLoader::load($ScriptEngineFactory::class$, loader);
	} else {
		$load($ScriptEngineFactory);
		return $ServiceLoader::loadInstalled($ScriptEngineFactory::class$);
	}
}

void ScriptEngineManager::initEngines($ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Iterator, itr, nullptr);
	try {
		$var($ServiceLoader, sl, $cast($ServiceLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, this, loader)))));
		$assign(itr, $nc(sl)->iterator());
	} catch ($ServiceConfigurationError& err) {
		reportException("Can\'t find ScriptEngineFactory providers: "_s, err);
		return;
	}
	try {
		while ($nc(itr)->hasNext()) {
			try {
				$var($ScriptEngineFactory, fact, $cast($ScriptEngineFactory, itr->next()));
				$nc(this->engineSpis)->add(fact);
			} catch ($ServiceConfigurationError& err) {
				reportException("ScriptEngineManager providers.next(): "_s, err);
			}
		}
	} catch ($ServiceConfigurationError& err) {
		reportException("ScriptEngineManager providers.hasNext(): "_s, err);
	}
}

void ScriptEngineManager::setBindings($Bindings* bindings) {
	if (bindings == nullptr) {
		$throwNew($IllegalArgumentException, "Global scope cannot be null."_s);
	}
	$set(this, globalScope, bindings);
}

$Bindings* ScriptEngineManager::getBindings() {
	return this->globalScope;
}

void ScriptEngineManager::put($String* key, Object$* value) {
	$nc(this->globalScope)->put(key, value);
}

$Object* ScriptEngineManager::get($String* key) {
	return $of($nc(this->globalScope)->get(key));
}

$ScriptEngine* ScriptEngineManager::getEngineByName($String* shortName) {
	return getEngineBy(shortName, this->nameAssociations, static_cast<$Function*>($$new(ScriptEngineManager$$Lambda$getNames$2)));
}

$ScriptEngine* ScriptEngineManager::getEngineByExtension($String* extension) {
	return getEngineBy(extension, this->extensionAssociations, static_cast<$Function*>($$new(ScriptEngineManager$$Lambda$getExtensions$3)));
}

$ScriptEngine* ScriptEngineManager::getEngineByMimeType($String* mimeType) {
	return getEngineBy(mimeType, this->mimeTypeAssociations, static_cast<$Function*>($$new(ScriptEngineManager$$Lambda$getMimeTypes$4)));
}

$ScriptEngine* ScriptEngineManager::getEngineBy($String* selector, $Map* associations, $Function* valuesFn) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(selector);
	$var($Stream, var$0, $Stream::ofNullable($cast($ScriptEngineFactory, $($nc(associations)->get(selector)))));
	$var($Stream, spis, $Stream::concat(var$0, $($nc($($nc(this->engineSpis)->stream()))->filter(static_cast<$Predicate*>($$new(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, valuesFn, selector))))));
	return $cast($ScriptEngine, $nc($($nc($($nc($($nc(spis)->map(static_cast<$Function*>($$new(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, this)))))->filter(static_cast<$Predicate*>($$new(ScriptEngineManager$$Lambda$nonNull$7)))))->findFirst()))->orElse(nullptr));
}

void ScriptEngineManager::reportException($String* msg, $Throwable* exp) {
	$init(ScriptEngineManager);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({msg, $($nc(exp)->getMessage())}));
	debugPrint(exp);
}

void ScriptEngineManager::debugPrint($Throwable* exp) {
	$init(ScriptEngineManager);
}

$List* ScriptEngineManager::getEngineFactories() {
	return $List::copyOf(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(this->engineSpis))));
}

void ScriptEngineManager::registerEngineName($String* name, $ScriptEngineFactory* factory) {
	associateFactory(this->nameAssociations, name, factory);
}

void ScriptEngineManager::registerEngineMimeType($String* type, $ScriptEngineFactory* factory) {
	associateFactory(this->mimeTypeAssociations, type, factory);
}

void ScriptEngineManager::registerEngineExtension($String* extension, $ScriptEngineFactory* factory) {
	associateFactory(this->extensionAssociations, extension, factory);
}

void ScriptEngineManager::associateFactory($Map* associations, $String* association, $ScriptEngineFactory* factory) {
	$init(ScriptEngineManager);
	if (association == nullptr || factory == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc(associations)->put(association, factory);
}

$ScriptEngine* ScriptEngineManager::lambda$getEngineBy$2($ScriptEngineFactory* spi) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ScriptEngine, engine, $nc(spi)->getScriptEngine());
		$nc(engine)->setBindings($(getBindings()), $ScriptContext::GLOBAL_SCOPE);
		return engine;
	} catch ($Exception& exp) {
		debugPrint(exp);
		return nullptr;
	}
	$shouldNotReachHere();
}

bool ScriptEngineManager::lambda$getEngineBy$1($Function* valuesFn, $String* selector, $ScriptEngineFactory* spi) {
	$init(ScriptEngineManager);
	try {
		$var($List, matches, $cast($List, $nc(valuesFn)->apply(spi)));
		return matches != nullptr && matches->contains(selector);
	} catch ($Exception& exp) {
		debugPrint(exp);
		return false;
	}
	$shouldNotReachHere();
}

$ServiceLoader* ScriptEngineManager::lambda$initEngines$0($ClassLoader* loader) {
	return getServiceLoader(loader);
}

void clinit$ScriptEngineManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Function, var$0, static_cast<$Function*>($new(ScriptEngineManager$$Lambda$getEngineName)));
	$assignStatic(ScriptEngineManager::COMPARATOR, $Comparator::comparing(var$0, $($Comparator::nullsLast($($Comparator::naturalOrder())))));
}

ScriptEngineManager::ScriptEngineManager() {
}

$Class* ScriptEngineManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ScriptEngineManager$$Lambda$getEngineName::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$getEngineName::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$lambda$initEngines$0$1::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$lambda$initEngines$0$1::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$getNames$2::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$getNames$2::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$getExtensions$3::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$getExtensions$3::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$getMimeTypes$4::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$getMimeTypes$4::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::load$(name, initialize);
		}
		if (name->equals(ScriptEngineManager$$Lambda$nonNull$7::classInfo$.name)) {
			return ScriptEngineManager$$Lambda$nonNull$7::load$(name, initialize);
		}
	}
	$loadClass(ScriptEngineManager, name, initialize, &_ScriptEngineManager_ClassInfo_, clinit$ScriptEngineManager, allocate$ScriptEngineManager);
	return class$;
}

$Class* ScriptEngineManager::class$ = nullptr;

	} // script
} // javax