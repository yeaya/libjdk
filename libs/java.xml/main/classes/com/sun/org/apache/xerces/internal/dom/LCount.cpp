#include <com/sun/org/apache/xerces/internal/dom/LCount.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class LCount$$Lambda$lambda$lookup$0 : public $Function {
	$class(LCount$$Lambda$lambda$lookup$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* key) override {
		 return LCount::lambda$lookup$0($cast($String, key));
	}
};
$Class* LCount$$Lambda$lambda$lookup$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LCount$$Lambda$lambda$lookup$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LCount$$Lambda$lambda$lookup$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.org.apache.xerces.internal.dom.LCount$$Lambda$lambda$lookup$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(LCount$$Lambda$lambda$lookup$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LCount$$Lambda$lambda$lookup$0);
	});
	return class$;
}
$Class* LCount$$Lambda$lambda$lookup$0::class$ = nullptr;

$Map* LCount::lCounts = nullptr;

void LCount::init$() {
	this->captures = 0;
	this->bubbles = 0;
	this->total = 0;
}

LCount* LCount::lookup($String* evtName) {
	$init(LCount);
	return $cast(LCount, LCount::lCounts->computeIfAbsent(evtName, $$new(LCount$$Lambda$lambda$lookup$0)));
}

LCount* LCount::lambda$lookup$0($String* key) {
	$init(LCount);
	return $new(LCount);
}

void LCount::clinit$($Class* clazz) {
	$assignStatic(LCount::lCounts, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

LCount::LCount() {
}

$Class* LCount::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.org.apache.xerces.internal.dom.LCount$$Lambda$lambda$lookup$0")) {
			return LCount$$Lambda$lambda$lookup$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"lCounts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/LCount;>;", $STATIC | $FINAL, $staticField(LCount, lCounts)},
		{"captures", "I", nullptr, $PUBLIC, $field(LCount, captures)},
		{"bubbles", "I", nullptr, $PUBLIC, $field(LCount, bubbles)},
		{"defaults", "I", nullptr, $PUBLIC, $field(LCount, defaults)},
		{"total", "I", nullptr, $PUBLIC, $field(LCount, total)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LCount, init$, void)},
		{"lambda$lookup$0", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/dom/LCount;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LCount, lambda$lookup$0, LCount*, $String*)},
		{"lookup", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/dom/LCount;", nullptr, $STATIC, $staticMethod(LCount, lookup, LCount*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.LCount",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LCount, name, initialize, &classInfo$$, LCount::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LCount);
	});
	return class$;
}

$Class* LCount::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com