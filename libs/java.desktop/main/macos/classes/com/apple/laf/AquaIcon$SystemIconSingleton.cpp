#include <com/apple/laf/AquaIcon$SystemIconSingleton.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaIcon$SystemIconSingleton::init$($String* selector) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, selector, selector);
}

$Object* AquaIcon$SystemIconSingleton::getInstance() {
	return $of($new($AquaIcon$SystemIcon, this->selector));
}

AquaIcon$SystemIconSingleton::AquaIcon$SystemIconSingleton() {
}

$Class* AquaIcon$SystemIconSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selector", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaIcon$SystemIconSingleton, selector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AquaIcon$SystemIconSingleton, init$, void, $String*)},
		{"getInstance", "()Lcom/apple/laf/AquaIcon$SystemIcon;", nullptr, $PROTECTED, $virtualMethod(AquaIcon$SystemIconSingleton, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$SystemIconSingleton", "com.apple.laf.AquaIcon", "SystemIconSingleton", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaIcon$SystemIcon", "com.apple.laf.AquaIcon", "SystemIcon", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaIcon$SystemIconSingleton",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaIcon$SystemIcon;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$SystemIconSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaIcon$SystemIconSingleton);
	});
	return class$;
}

$Class* AquaIcon$SystemIconSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com