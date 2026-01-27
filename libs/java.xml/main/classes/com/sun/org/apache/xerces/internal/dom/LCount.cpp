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
		 return $of(LCount::lambda$lookup$0($cast($String, key)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LCount$$Lambda$lambda$lookup$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LCount$$Lambda$lambda$lookup$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LCount$$Lambda$lambda$lookup$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LCount$$Lambda$lambda$lookup$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo LCount$$Lambda$lambda$lookup$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.dom.LCount$$Lambda$lambda$lookup$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LCount$$Lambda$lambda$lookup$0::load$($String* name, bool initialize) {
	$loadClass(LCount$$Lambda$lambda$lookup$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LCount$$Lambda$lambda$lookup$0::class$ = nullptr;

$FieldInfo _LCount_FieldInfo_[] = {
	{"lCounts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/LCount;>;", $STATIC | $FINAL, $staticField(LCount, lCounts)},
	{"captures", "I", nullptr, $PUBLIC, $field(LCount, captures)},
	{"bubbles", "I", nullptr, $PUBLIC, $field(LCount, bubbles)},
	{"defaults", "I", nullptr, $PUBLIC, $field(LCount, defaults)},
	{"total", "I", nullptr, $PUBLIC, $field(LCount, total)},
	{}
};

$MethodInfo _LCount_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LCount, init$, void)},
	{"lambda$lookup$0", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/dom/LCount;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LCount, lambda$lookup$0, LCount*, $String*)},
	{"lookup", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/dom/LCount;", nullptr, $STATIC, $staticMethod(LCount, lookup, LCount*, $String*)},
	{}
};

$ClassInfo _LCount_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.LCount",
	"java.lang.Object",
	nullptr,
	_LCount_FieldInfo_,
	_LCount_MethodInfo_
};

$Object* allocate$LCount($Class* clazz) {
	return $of($alloc(LCount));
}

$Map* LCount::lCounts = nullptr;

void LCount::init$() {
	this->captures = 0;
	this->bubbles = 0;
	this->total = 0;
}

LCount* LCount::lookup($String* evtName) {
	$init(LCount);
	return $cast(LCount, $nc(LCount::lCounts)->computeIfAbsent(evtName, static_cast<$Function*>($$new(LCount$$Lambda$lambda$lookup$0))));
}

LCount* LCount::lambda$lookup$0($String* key) {
	$init(LCount);
	return $new(LCount);
}

void clinit$LCount($Class* class$) {
	$assignStatic(LCount::lCounts, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

LCount::LCount() {
}

$Class* LCount::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LCount$$Lambda$lambda$lookup$0::classInfo$.name)) {
			return LCount$$Lambda$lambda$lookup$0::load$(name, initialize);
		}
	}
	$loadClass(LCount, name, initialize, &_LCount_ClassInfo_, clinit$LCount, allocate$LCount);
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