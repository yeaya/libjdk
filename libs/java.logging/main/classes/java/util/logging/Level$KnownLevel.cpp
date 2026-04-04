#include <java/util/logging/Level$KnownLevel.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/logging/Level.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/ClassLoaderValue.h>
#include <jcpp.h>

#undef CUSTOM_LEVEL_CLV
#undef QUEUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Level = ::java::util::logging::Level;
using $ClassLoaderValue = ::jdk::internal::loader::ClassLoaderValue;

namespace java {
	namespace util {
		namespace logging {

class Level$KnownLevel$$Lambda$lambda$remove$0 : public $Consumer {
	$class(Level$KnownLevel$$Lambda$lambda$remove$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Level$KnownLevel* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* x) override {
		$nc(inst$)->lambda$remove$0($cast($List, x));
	}
	Level$KnownLevel* inst$ = nullptr;
};
$Class* Level$KnownLevel$$Lambda$lambda$remove$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Level$KnownLevel$$Lambda$lambda$remove$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Level$KnownLevel;)V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$lambda$remove$0, init$, void, Level$KnownLevel*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$lambda$remove$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$lambda$remove$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$lambda$remove$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$lambda$remove$0);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$lambda$remove$0::class$ = nullptr;

class Level$KnownLevel$$Lambda$getClassLoader$1 : public $PrivilegedAction {
	$class(Level$KnownLevel$$Lambda$getClassLoader$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getClassLoader();
	}
	$Class* inst$ = nullptr;
};
$Class* Level$KnownLevel$$Lambda$getClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Level$KnownLevel$$Lambda$getClassLoader$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$getClassLoader$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$getClassLoader$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$getClassLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$getClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$getClassLoader$1);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$getClassLoader$1::class$ = nullptr;

class Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2 : public $BiFunction {
	$class(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c, Object$* v) override {
		 return Level$KnownLevel::lambda$registerWithClassLoader$2($cast($ClassLoader, c), $cast($ClassLoaderValue, v));
	}
};
$Class* Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2::class$ = nullptr;

class Level$KnownLevel$$Lambda$lambda$add$3$3 : public $Function {
	$class(Level$KnownLevel$$Lambda$lambda$add$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return Level$KnownLevel::lambda$add$3($cast($String, k));
	}
};
$Class* Level$KnownLevel$$Lambda$lambda$add$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$lambda$add$3$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$lambda$add$3$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$lambda$add$3$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$lambda$add$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$lambda$add$3$3);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$lambda$add$3$3::class$ = nullptr;

class Level$KnownLevel$$Lambda$lambda$add$4$4 : public $Function {
	$class(Level$KnownLevel$$Lambda$lambda$add$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return Level$KnownLevel::lambda$add$4($cast($Integer, k));
	}
};
$Class* Level$KnownLevel$$Lambda$lambda$add$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$lambda$add$4$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$lambda$add$4$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$lambda$add$4$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$lambda$add$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$lambda$add$4$4);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$lambda$add$4$4::class$ = nullptr;

class Level$KnownLevel$$Lambda$stream$5 : public $Function {
	$class(Level$KnownLevel$$Lambda$stream$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Optional, inst$)->stream();
	}
};
$Class* Level$KnownLevel$$Lambda$stream$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$stream$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$stream$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$stream$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$stream$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$stream$5);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$stream$5::class$ = nullptr;

class Level$KnownLevel$$Lambda$stream$6 : public $Function {
	$class(Level$KnownLevel$$Lambda$stream$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Collection, inst$)->stream();
	}
};
$Class* Level$KnownLevel$$Lambda$stream$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$stream$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$stream$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$stream$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$stream$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$stream$6);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$stream$6::class$ = nullptr;

class Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7 : public $Predicate {
	$class(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual bool test(Object$* l) override {
		 return Level$KnownLevel::lambda$findByLocalizedLevelName$5(name, $cast($Level, l));
	}
	$String* name = nullptr;
};
$Class* Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7);
	});
	return class$;
}
$Class* Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7::class$ = nullptr;

$Map* Level$KnownLevel::nameToLevels = nullptr;
$Map* Level$KnownLevel::intToLevels = nullptr;
$ReferenceQueue* Level$KnownLevel::QUEUE = nullptr;
$ClassLoaderValue* Level$KnownLevel::CUSTOM_LEVEL_CLV = nullptr;

void Level$KnownLevel::init$($Level* l) {
	$WeakReference::init$(l, Level$KnownLevel::QUEUE);
	$load($Level);
	if ($nc($of(l))->getClass() == $Level::class$) {
		$set(this, mirroredLevel, l);
	} else {
		$set(this, mirroredLevel, $new($Level, l->name, l->value, l->resourceBundleName, false));
	}
}

$Optional* Level$KnownLevel::mirrored() {
	return $Optional::of(this->mirroredLevel);
}

$Optional* Level$KnownLevel::referent() {
	return $Optional::ofNullable($$cast($Level, get()));
}

void Level$KnownLevel::remove() {
	$useLocalObjectStack();
	$$nc($Optional::ofNullable($$cast($List, $nc(Level$KnownLevel::nameToLevels)->get($nc(this->mirroredLevel)->name))))->ifPresent($$new(Level$KnownLevel$$Lambda$lambda$remove$0, this));
	$$nc($Optional::ofNullable($$cast($List, $nc(Level$KnownLevel::intToLevels)->get($($Integer::valueOf(this->mirroredLevel->value))))))->ifPresent($$new(Level$KnownLevel$$Lambda$lambda$remove$0, this));
}

void Level$KnownLevel::purge() {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$var($Reference, ref, nullptr);
		while (($assign(ref, Level$KnownLevel::QUEUE->poll())) != nullptr) {
			if ($instanceOf(Level$KnownLevel, ref)) {
				$cast(Level$KnownLevel, ref)->remove();
			}
		}
	}
}

void Level$KnownLevel::registerWithClassLoader($Level* customLevel) {
	$init(Level$KnownLevel);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(Level$KnownLevel$$Lambda$getClassLoader$1, $nc($of(customLevel))->getClass()));
	$var($ClassLoader, cl, $cast($ClassLoader, $AccessController::doPrivileged(pa)));
	$$sure($List, Level$KnownLevel::CUSTOM_LEVEL_CLV->computeIfAbsent(cl, $$new(Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2)))->add(customLevel);
}

void Level$KnownLevel::add($Level* l) {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$useLocalObjectStack();
		purge();
		$var(Level$KnownLevel, o, $new(Level$KnownLevel, l));
		$$sure($List, $nc(Level$KnownLevel::nameToLevels)->computeIfAbsent($nc(l)->name, $$new(Level$KnownLevel$$Lambda$lambda$add$3$3)))->add(o);
		$var($Object, var$0, $Integer::valueOf(l->value));
		$$sure($List, $nc(Level$KnownLevel::intToLevels)->computeIfAbsent(var$0, $$new(Level$KnownLevel$$Lambda$lambda$add$4$4)))->add(o);
		if (o->mirroredLevel != l) {
			registerWithClassLoader(l);
		}
	}
}

$Optional* Level$KnownLevel::findByName($String* name, $Function* selector) {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$useLocalObjectStack();
		purge();
		return $$nc($$nc($$nc($$sure($List, $nc(Level$KnownLevel::nameToLevels)->getOrDefault(name, $($Collections::emptyList())))->stream())->map(selector))->flatMap($$new(Level$KnownLevel$$Lambda$stream$5)))->findFirst();
	}
}

$Optional* Level$KnownLevel::findByValue(int32_t value, $Function* selector) {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$useLocalObjectStack();
		purge();
		$var($Object, var$0, $Integer::valueOf(value));
		return $$nc($$nc($$nc($$sure($List, $nc(Level$KnownLevel::intToLevels)->getOrDefault(var$0, $($Collections::emptyList())))->stream())->map(selector))->flatMap($$new(Level$KnownLevel$$Lambda$stream$5)))->findFirst();
	}
}

$Optional* Level$KnownLevel::findByLocalizedLevelName($String* name, $Function* selector) {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$useLocalObjectStack();
		purge();
		return $$nc($$nc($$nc($$nc($$nc($$nc($nc(Level$KnownLevel::nameToLevels)->values())->stream())->flatMap($$new(Level$KnownLevel$$Lambda$stream$6)))->map(selector))->flatMap($$new(Level$KnownLevel$$Lambda$stream$5)))->filter($$new(Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7, name)))->findFirst();
	}
}

$Optional* Level$KnownLevel::matches($Level* l) {
	$init(Level$KnownLevel);
	$synchronized(class$) {
		$useLocalObjectStack();
		purge();
		$var($List, list, $cast($List, $nc(Level$KnownLevel::nameToLevels)->get($nc(l)->name)));
		if (list != nullptr) {
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(Level$KnownLevel, ref, $cast(Level$KnownLevel, i$->next()));
				{
					$var($Level, levelObject, $cast($Level, $nc(ref)->get()));
					if (levelObject == nullptr) {
						continue;
					}
					$var($Level, other, ref->mirroredLevel);
					$Class* type = $nc(levelObject)->getClass();
					if (l->value == $nc(other)->value && (l->resourceBundleName == other->resourceBundleName || (l->resourceBundleName != nullptr && l->resourceBundleName->equals(other->resourceBundleName)))) {
						if (type == $of(l)->getClass()) {
							return $Optional::of(levelObject);
						}
					}
				}
			}
		}
		return $Optional::empty();
	}
}

bool Level$KnownLevel::lambda$findByLocalizedLevelName$5($String* name, $Level* l) {
	$init(Level$KnownLevel);
	return $nc(name)->equals($($nc(l)->getLocalizedLevelName()));
}

$List* Level$KnownLevel::lambda$add$4($Integer* k) {
	$init(Level$KnownLevel);
	return $new($ArrayList);
}

$List* Level$KnownLevel::lambda$add$3($String* k) {
	$init(Level$KnownLevel);
	return $new($ArrayList);
}

$List* Level$KnownLevel::lambda$registerWithClassLoader$2($ClassLoader* c, $ClassLoaderValue* v) {
	$init(Level$KnownLevel);
	return $new($ArrayList);
}

void Level$KnownLevel::lambda$remove$0($List* x) {
	$nc(x)->remove(this);
}

void Level$KnownLevel::clinit$($Class* clazz) {
	$assignStatic(Level$KnownLevel::nameToLevels, $new($HashMap));
	$assignStatic(Level$KnownLevel::intToLevels, $new($HashMap));
	$assignStatic(Level$KnownLevel::QUEUE, $new($ReferenceQueue));
	$assignStatic(Level$KnownLevel::CUSTOM_LEVEL_CLV, $new($ClassLoaderValue));
}

Level$KnownLevel::Level$KnownLevel() {
}

$Class* Level$KnownLevel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$lambda$remove$0")) {
			return Level$KnownLevel$$Lambda$lambda$remove$0::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$getClassLoader$1")) {
			return Level$KnownLevel$$Lambda$getClassLoader$1::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2")) {
			return Level$KnownLevel$$Lambda$lambda$registerWithClassLoader$2$2::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$lambda$add$3$3")) {
			return Level$KnownLevel$$Lambda$lambda$add$3$3::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$lambda$add$4$4")) {
			return Level$KnownLevel$$Lambda$lambda$add$4$4::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$stream$5")) {
			return Level$KnownLevel$$Lambda$stream$5::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$stream$6")) {
			return Level$KnownLevel$$Lambda$stream$6::load$(name, initialize);
		}
		if (name->equals("java.util.logging.Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7")) {
			return Level$KnownLevel$$Lambda$lambda$findByLocalizedLevelName$5$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"nameToLevels", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/util/logging/Level$KnownLevel;>;>;", $PRIVATE | $STATIC, $staticField(Level$KnownLevel, nameToLevels)},
		{"intToLevels", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/util/List<Ljava/util/logging/Level$KnownLevel;>;>;", $PRIVATE | $STATIC, $staticField(Level$KnownLevel, intToLevels)},
		{"QUEUE", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/util/logging/Level;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Level$KnownLevel, QUEUE)},
		{"CUSTOM_LEVEL_CLV", "Ljdk/internal/loader/ClassLoaderValue;", "Ljdk/internal/loader/ClassLoaderValue<Ljava/util/List<Ljava/util/logging/Level;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Level$KnownLevel, CUSTOM_LEVEL_CLV)},
		{"mirroredLevel", "Ljava/util/logging/Level;", nullptr, $FINAL, $field(Level$KnownLevel, mirroredLevel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Level;)V", nullptr, 0, $method(Level$KnownLevel, init$, void, $Level*)},
		{"add", "(Ljava/util/logging/Level;)V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, add, void, $Level*)},
		{"findByLocalizedLevelName", "(Ljava/lang/String;Ljava/util/function/Function;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/util/function/Function<Ljava/util/logging/Level$KnownLevel;Ljava/util/Optional<Ljava/util/logging/Level;>;>;)Ljava/util/Optional<Ljava/util/logging/Level;>;", $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, findByLocalizedLevelName, $Optional*, $String*, $Function*)},
		{"findByName", "(Ljava/lang/String;Ljava/util/function/Function;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/util/function/Function<Ljava/util/logging/Level$KnownLevel;Ljava/util/Optional<Ljava/util/logging/Level;>;>;)Ljava/util/Optional<Ljava/util/logging/Level;>;", $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, findByName, $Optional*, $String*, $Function*)},
		{"findByValue", "(ILjava/util/function/Function;)Ljava/util/Optional;", "(ILjava/util/function/Function<Ljava/util/logging/Level$KnownLevel;Ljava/util/Optional<Ljava/util/logging/Level;>;>;)Ljava/util/Optional<Ljava/util/logging/Level;>;", $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, findByValue, $Optional*, int32_t, $Function*)},
		{"lambda$add$3", "(Ljava/lang/String;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Level$KnownLevel, lambda$add$3, $List*, $String*)},
		{"lambda$add$4", "(Ljava/lang/Integer;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Level$KnownLevel, lambda$add$4, $List*, $Integer*)},
		{"lambda$findByLocalizedLevelName$5", "(Ljava/lang/String;Ljava/util/logging/Level;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Level$KnownLevel, lambda$findByLocalizedLevelName$5, bool, $String*, $Level*)},
		{"lambda$registerWithClassLoader$2", "(Ljava/lang/ClassLoader;Ljdk/internal/loader/ClassLoaderValue;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Level$KnownLevel, lambda$registerWithClassLoader$2, $List*, $ClassLoader*, $ClassLoaderValue*)},
		{"lambda$remove$0", "(Ljava/util/List;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Level$KnownLevel, lambda$remove$0, void, $List*)},
		{"matches", "(Ljava/util/logging/Level;)Ljava/util/Optional;", "(Ljava/util/logging/Level;)Ljava/util/Optional<Ljava/util/logging/Level;>;", $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, matches, $Optional*, $Level*)},
		{"mirrored", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/logging/Level;>;", 0, $method(Level$KnownLevel, mirrored, $Optional*)},
		{"purge", "()V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(Level$KnownLevel, purge, void)},
		{"referent", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/logging/Level;>;", 0, $method(Level$KnownLevel, referent, $Optional*)},
		{"registerWithClassLoader", "(Ljava/util/logging/Level;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Level$KnownLevel, registerWithClassLoader, void, $Level*)},
		{"remove", "()V", nullptr, $PRIVATE, $method(Level$KnownLevel, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Level$KnownLevel", "java.util.logging.Level", "KnownLevel", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.Level$KnownLevel",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/util/logging/Level;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Level"
	};
	$loadClass(Level$KnownLevel, name, initialize, &classInfo$$, Level$KnownLevel::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Level$KnownLevel);
	});
	return class$;
}

$Class* Level$KnownLevel::class$ = nullptr;

		} // logging
	} // util
} // java