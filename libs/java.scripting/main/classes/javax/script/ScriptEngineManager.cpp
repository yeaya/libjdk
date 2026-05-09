#include <javax/script/ScriptEngineManager.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
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

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
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
};
$Class* ScriptEngineManager$$Lambda$getEngineName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$getEngineName, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$getEngineName, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$getEngineName",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$getEngineName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$getEngineName);
	});
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
		return $nc(inst$)->lambda$initEngines$0(loader);
	}
	ScriptEngineManager* inst$ = nullptr;
	$ClassLoader* loader = nullptr;
};
$Class* ScriptEngineManager$$Lambda$lambda$initEngines$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, inst$)},
		{"loader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/script/ScriptEngineManager;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, init$, void, ScriptEngineManager*, $ClassLoader*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$lambda$initEngines$0$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$lambda$initEngines$0$1);
	});
	return class$;
}
$Class* ScriptEngineManager$$Lambda$lambda$initEngines$0$1::class$ = nullptr;

class ScriptEngineManager$$Lambda$getNames$2 : public $Function {
	$class(ScriptEngineManager$$Lambda$getNames$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($ScriptEngineFactory, inst$)->getNames();
	}
};
$Class* ScriptEngineManager$$Lambda$getNames$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$getNames$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$getNames$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$getNames$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$getNames$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$getNames$2);
	});
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getNames$2::class$ = nullptr;

class ScriptEngineManager$$Lambda$getExtensions$3 : public $Function {
	$class(ScriptEngineManager$$Lambda$getExtensions$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($ScriptEngineFactory, inst$)->getExtensions();
	}
};
$Class* ScriptEngineManager$$Lambda$getExtensions$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$getExtensions$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$getExtensions$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$getExtensions$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$getExtensions$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$getExtensions$3);
	});
	return class$;
}
$Class* ScriptEngineManager$$Lambda$getExtensions$3::class$ = nullptr;

class ScriptEngineManager$$Lambda$getMimeTypes$4 : public $Function {
	$class(ScriptEngineManager$$Lambda$getMimeTypes$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $sure($ScriptEngineFactory, inst$)->getMimeTypes();
	}
};
$Class* ScriptEngineManager$$Lambda$getMimeTypes$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$getMimeTypes$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$getMimeTypes$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$getMimeTypes$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$getMimeTypes$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$getMimeTypes$4);
	});
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
	$Function* valuesFn = nullptr;
	$String* selector = nullptr;
};
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"valuesFn", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, valuesFn)},
		{"selector", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, selector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, init$, void, $Function*, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5);
	});
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
		return $nc(inst$)->lambda$getEngineBy$2($cast($ScriptEngineFactory, spi));
	}
	ScriptEngineManager* inst$ = nullptr;
};
$Class* ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/script/ScriptEngineManager;)V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, init$, void, ScriptEngineManager*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6);
	});
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
};
$Class* ScriptEngineManager$$Lambda$nonNull$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager$$Lambda$nonNull$7, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager$$Lambda$nonNull$7, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.script.ScriptEngineManager$$Lambda$nonNull$7",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager$$Lambda$nonNull$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager$$Lambda$nonNull$7);
	});
	return class$;
}
$Class* ScriptEngineManager$$Lambda$nonNull$7::class$ = nullptr;

$Comparator* ScriptEngineManager::COMPARATOR = nullptr;

void ScriptEngineManager::init$() {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Iterator, itr, nullptr);
	try {
		$var($ServiceLoader, sl, $cast($ServiceLoader, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(ScriptEngineManager$$Lambda$lambda$initEngines$0$1, this, loader)))));
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
	return $nc(this->globalScope)->get(key);
}

$ScriptEngine* ScriptEngineManager::getEngineByName($String* shortName) {
	return getEngineBy(shortName, this->nameAssociations, $$new(ScriptEngineManager$$Lambda$getNames$2));
}

$ScriptEngine* ScriptEngineManager::getEngineByExtension($String* extension) {
	return getEngineBy(extension, this->extensionAssociations, $$new(ScriptEngineManager$$Lambda$getExtensions$3));
}

$ScriptEngine* ScriptEngineManager::getEngineByMimeType($String* mimeType) {
	return getEngineBy(mimeType, this->mimeTypeAssociations, $$new(ScriptEngineManager$$Lambda$getMimeTypes$4));
}

$ScriptEngine* ScriptEngineManager::getEngineBy($String* selector, $Map* associations, $Function* valuesFn) {
	$useLocalObjectStack();
	$Objects::requireNonNull(selector);
	$var($Stream, var$0, $Stream::ofNullable($$cast($ScriptEngineFactory, $nc(associations)->get(selector))));
	$var($Stream, spis, $Stream::concat(var$0, $($$nc($nc(this->engineSpis)->stream())->filter($$new(ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5, valuesFn, selector)))));
	return $cast($ScriptEngine, $$nc($$nc($$nc($nc(spis)->map($$new(ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6, this)))->filter($$new(ScriptEngineManager$$Lambda$nonNull$7)))->findFirst())->orElse(nullptr));
}

void ScriptEngineManager::reportException($String* msg, $Throwable* exp) {
	$init(ScriptEngineManager);
	$useLocalObjectStack();
	$nc($System::err)->println($$str({msg, $($nc(exp)->getMessage())}));
	debugPrint(exp);
}

void ScriptEngineManager::debugPrint($Throwable* exp) {
	$init(ScriptEngineManager);
	;
}

$List* ScriptEngineManager::getEngineFactories() {
	return $List::copyOf($cast($AbstractCollection, this->engineSpis));
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
	$useLocalObjectStack();
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

void ScriptEngineManager::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($Function, var$0, $new(ScriptEngineManager$$Lambda$getEngineName));
	$assignStatic(ScriptEngineManager::COMPARATOR, $Comparator::comparing(var$0, $($Comparator::nullsLast($($Comparator::naturalOrder())))));
}

ScriptEngineManager::ScriptEngineManager() {
}

$Class* ScriptEngineManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$getEngineName")) {
			return ScriptEngineManager$$Lambda$getEngineName::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$lambda$initEngines$0$1")) {
			return ScriptEngineManager$$Lambda$lambda$initEngines$0$1::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$getNames$2")) {
			return ScriptEngineManager$$Lambda$getNames$2::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$getExtensions$3")) {
			return ScriptEngineManager$$Lambda$getExtensions$3::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$getMimeTypes$4")) {
			return ScriptEngineManager$$Lambda$getMimeTypes$4::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5")) {
			return ScriptEngineManager$$Lambda$lambda$getEngineBy$1$5::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6")) {
			return ScriptEngineManager$$Lambda$lambda$getEngineBy$2$6::load$(name, initialize);
		}
		if (name->equals("javax.script.ScriptEngineManager$$Lambda$nonNull$7")) {
			return ScriptEngineManager$$Lambda$nonNull$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScriptEngineManager, DEBUG)},
		{"COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ScriptEngineManager, COMPARATOR)},
		{"engineSpis", "Ljava/util/TreeSet;", "Ljava/util/TreeSet<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, engineSpis)},
		{"nameAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, nameAssociations)},
		{"extensionAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, extensionAssociations)},
		{"mimeTypeAssociations", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;", $PRIVATE | $FINAL, $field(ScriptEngineManager, mimeTypeAssociations)},
		{"globalScope", "Ljavax/script/Bindings;", nullptr, $PRIVATE, $field(ScriptEngineManager, globalScope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScriptEngineManager, init$, void)},
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(ScriptEngineManager, init$, void, $ClassLoader*)},
		{"associateFactory", "(Ljava/util/Map;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", "(Ljava/util/Map<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", $PRIVATE | $STATIC, $staticMethod(ScriptEngineManager, associateFactory, void, $Map*, $String*, $ScriptEngineFactory*)},
		{"debugPrint", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ScriptEngineManager, debugPrint, void, $Throwable*)},
		{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, get, $Object*, $String*)},
		{"getBindings", "()Ljavax/script/Bindings;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, getBindings, $Bindings*)},
		{"getEngineBy", "(Ljava/lang/String;Ljava/util/Map;Ljava/util/function/Function;)Ljavax/script/ScriptEngine;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljavax/script/ScriptEngineFactory;>;Ljava/util/function/Function<Ljavax/script/ScriptEngineFactory;Ljava/util/List<Ljava/lang/String;>;>;)Ljavax/script/ScriptEngine;", $PRIVATE, $method(ScriptEngineManager, getEngineBy, $ScriptEngine*, $String*, $Map*, $Function*)},
		{"getEngineByExtension", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, getEngineByExtension, $ScriptEngine*, $String*)},
		{"getEngineByMimeType", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, getEngineByMimeType, $ScriptEngine*, $String*)},
		{"getEngineByName", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, getEngineByName, $ScriptEngine*, $String*)},
		{"getEngineFactories", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/script/ScriptEngineFactory;>;", $PUBLIC, $virtualMethod(ScriptEngineManager, getEngineFactories, $List*)},
		{"getServiceLoader", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader<Ljavax/script/ScriptEngineFactory;>;", $PRIVATE, $method(ScriptEngineManager, getServiceLoader, $ServiceLoader*, $ClassLoader*)},
		{"initEngines", "(Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(ScriptEngineManager, initEngines, void, $ClassLoader*)},
		{"lambda$getEngineBy$1", "(Ljava/util/function/Function;Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ScriptEngineManager, lambda$getEngineBy$1, bool, $Function*, $String*, $ScriptEngineFactory*)},
		{"lambda$getEngineBy$2", "(Ljavax/script/ScriptEngineFactory;)Ljavax/script/ScriptEngine;", nullptr, $PRIVATE | $SYNTHETIC, $method(ScriptEngineManager, lambda$getEngineBy$2, $ScriptEngine*, $ScriptEngineFactory*)},
		{"lambda$initEngines$0", "(Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;", nullptr, $PRIVATE | $SYNTHETIC, $method(ScriptEngineManager, lambda$initEngines$0, $ServiceLoader*, $ClassLoader*)},
		{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, put, void, $String*, Object$*)},
		{"registerEngineExtension", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, registerEngineExtension, void, $String*, $ScriptEngineFactory*)},
		{"registerEngineMimeType", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, registerEngineMimeType, void, $String*, $ScriptEngineFactory*)},
		{"registerEngineName", "(Ljava/lang/String;Ljavax/script/ScriptEngineFactory;)V", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, registerEngineName, void, $String*, $ScriptEngineFactory*)},
		{"reportException", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ScriptEngineManager, reportException, void, $String*, $Throwable*)},
		{"setBindings", "(Ljavax/script/Bindings;)V", nullptr, $PUBLIC, $virtualMethod(ScriptEngineManager, setBindings, void, $Bindings*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.script.ScriptEngineManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScriptEngineManager, name, initialize, &classInfo$$, ScriptEngineManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScriptEngineManager);
	});
	return class$;
}

$Class* ScriptEngineManager::class$ = nullptr;

	} // script
} // javax