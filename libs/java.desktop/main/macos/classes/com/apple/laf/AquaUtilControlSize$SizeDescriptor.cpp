#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef MINI
#undef REGULAR
#undef SMALL

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtilControlSize$SizeDescriptor::init$($AquaUtilControlSize$SizeVariant* variant) {
	$useLocalObjectStack();
	$set(this, regular, deriveRegular(variant));
	$set(this, small, deriveSmall($$new($AquaUtilControlSize$SizeVariant, this->regular)));
	$set(this, mini, deriveMini($$new($AquaUtilControlSize$SizeVariant, this->small)));
}

$AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeDescriptor::deriveRegular($AquaUtilControlSize$SizeVariant* v) {
	$init($JRSUIConstants$Size);
	$set($nc(v), size, $JRSUIConstants$Size::REGULAR);
	return v;
}

$AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeDescriptor::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	$init($JRSUIConstants$Size);
	$set($nc(v), size, $JRSUIConstants$Size::SMALL);
	return v;
}

$AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeDescriptor::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	$init($JRSUIConstants$Size);
	$set($nc(v), size, $JRSUIConstants$Size::MINI);
	return v;
}

$AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeDescriptor::get($JComponent* c) {
	if (c == nullptr) {
		return this->regular;
	}
	return get($($AquaUtilControlSize::getUserSizeFrom(c)));
}

$AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeDescriptor::get($JRSUIConstants$Size* size) {
	$init($JRSUIConstants$Size);
	if (size == $JRSUIConstants$Size::REGULAR) {
		return this->regular;
	}
	if (size == $JRSUIConstants$Size::SMALL) {
		return this->small;
	}
	if (size == $JRSUIConstants$Size::MINI) {
		return this->mini;
	}
	return this->regular;
}

$String* AquaUtilControlSize$SizeDescriptor::toString() {
	return $str({"regular["_s, this->regular, "] small["_s, this->small, "] mini["_s, this->mini, "]"_s});
}

AquaUtilControlSize$SizeDescriptor::AquaUtilControlSize$SizeDescriptor() {
}

$Class* AquaUtilControlSize$SizeDescriptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"regular", "Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, 0, $field(AquaUtilControlSize$SizeDescriptor, regular)},
		{"small", "Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, 0, $field(AquaUtilControlSize$SizeDescriptor, small)},
		{"mini", "Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, 0, $field(AquaUtilControlSize$SizeDescriptor, mini)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, $PUBLIC, $method(AquaUtilControlSize$SizeDescriptor, init$, void, $AquaUtilControlSize$SizeVariant*)},
		{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, deriveMini, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveRegular", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, deriveRegular, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, deriveSmall, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"get", "(Ljavax/swing/JComponent;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, get, $AquaUtilControlSize$SizeVariant*, $JComponent*)},
		{"get", "(Lapple/laf/JRSUIConstants$Size;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, get, $AquaUtilControlSize$SizeVariant*, $JRSUIConstants$Size*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$SizeDescriptor, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaUtilControlSize$SizeDescriptor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtilControlSize"
	};
	$loadClass(AquaUtilControlSize$SizeDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtilControlSize$SizeDescriptor);
	});
	return class$;
}

$Class* AquaUtilControlSize$SizeDescriptor::class$ = nullptr;

		} // laf
	} // apple
} // com