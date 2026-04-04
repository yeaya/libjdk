#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/lang/ReflectiveOperationException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$RecyclableSingletonFromDefaultConstructor::init$($Class* clazz) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, clazz, clazz);
}

$Object* AquaUtils$RecyclableSingletonFromDefaultConstructor::getInstance() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->clazz);
		return $nc(this->clazz)->newInstance();
	} catch ($ReflectiveOperationException& ignored) {
	}
	return nullptr;
}

AquaUtils$RecyclableSingletonFromDefaultConstructor::AquaUtils$RecyclableSingletonFromDefaultConstructor() {
}

$Class* AquaUtils$RecyclableSingletonFromDefaultConstructor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(AquaUtils$RecyclableSingletonFromDefaultConstructor, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", 0, $method(AquaUtils$RecyclableSingletonFromDefaultConstructor, init$, void, $Class*)},
		{"getInstance", "()Ljava/lang/Object;", "()TT;", 0, $virtualMethod(AquaUtils$RecyclableSingletonFromDefaultConstructor, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor", "com.apple.laf.AquaUtils", "RecyclableSingletonFromDefaultConstructor", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Lcom/apple/laf/AquaUtils$RecyclableSingleton<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$RecyclableSingletonFromDefaultConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$RecyclableSingletonFromDefaultConstructor);
	});
	return class$;
}

$Class* AquaUtils$RecyclableSingletonFromDefaultConstructor::class$ = nullptr;

		} // laf
	} // apple
} // com