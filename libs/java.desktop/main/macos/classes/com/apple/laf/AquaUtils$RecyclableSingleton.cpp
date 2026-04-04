#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Supplier.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Supplier = ::java::util::function::Supplier;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0 : public $Supplier {
	$class(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(AquaUtils$RecyclableSingleton* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $nc(inst$)->lambda$get$0();
	}
	AquaUtils$RecyclableSingleton* inst$ = nullptr;
};
$Class* AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtils$RecyclableSingleton;)V", nullptr, $PUBLIC, $method(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, init$, void, AquaUtils$RecyclableSingleton*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0);
	});
	return class$;
}
$Class* AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::class$ = nullptr;

void AquaUtils$RecyclableSingleton::init$() {
}

$Object* AquaUtils$RecyclableSingleton::get() {
	return $AppContext::getSoftReferenceValue(this, $$new(AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0, this));
}

void AquaUtils$RecyclableSingleton::reset() {
	$$nc($AppContext::getAppContext())->remove(this);
}

$Object* AquaUtils$RecyclableSingleton::lambda$get$0() {
	return getInstance();
}

AquaUtils$RecyclableSingleton::AquaUtils$RecyclableSingleton() {
}

$Class* AquaUtils$RecyclableSingleton::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.apple.laf.AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0")) {
			return AquaUtils$RecyclableSingleton$$Lambda$lambda$get$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$RecyclableSingleton, init$, void)},
		{"get", "()Ljava/lang/Object;", "()TT;", $FINAL, $method(AquaUtils$RecyclableSingleton, get, $Object*)},
		{"getInstance", "()Ljava/lang/Object;", "()TT;", $ABSTRACT, $virtualMethod(AquaUtils$RecyclableSingleton, getInstance, $Object*)},
		{"lambda$get$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(AquaUtils$RecyclableSingleton, lambda$get$0, $Object*)},
		{"reset", "()V", nullptr, 0, $virtualMethod(AquaUtils$RecyclableSingleton, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$RecyclableSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$RecyclableSingleton);
	});
	return class$;
}

$Class* AquaUtils$RecyclableSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com