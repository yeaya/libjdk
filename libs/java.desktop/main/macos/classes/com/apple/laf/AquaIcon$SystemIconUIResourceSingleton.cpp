#include <com/apple/laf/AquaIcon$SystemIconUIResourceSingleton.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;

namespace com {
	namespace apple {
		namespace laf {

void AquaIcon$SystemIconUIResourceSingleton::init$($String* selector) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, selector, selector);
}

$Object* AquaIcon$SystemIconUIResourceSingleton::getInstance() {
	return $of($new($IconUIResource, $$new($AquaIcon$SystemIcon, this->selector)));
}

AquaIcon$SystemIconUIResourceSingleton::AquaIcon$SystemIconUIResourceSingleton() {
}

$Class* AquaIcon$SystemIconUIResourceSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selector", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaIcon$SystemIconUIResourceSingleton, selector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AquaIcon$SystemIconUIResourceSingleton, init$, void, $String*)},
		{"getInstance", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PROTECTED, $virtualMethod(AquaIcon$SystemIconUIResourceSingleton, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$SystemIconUIResourceSingleton", "com.apple.laf.AquaIcon", "SystemIconUIResourceSingleton", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaIcon$SystemIconUIResourceSingleton",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/IconUIResource;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$SystemIconUIResourceSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaIcon$SystemIconUIResourceSingleton);
	});
	return class$;
}

$Class* AquaIcon$SystemIconUIResourceSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com