#include <com/apple/laf/AquaKeyBindings$SimpleBinding.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaKeyBindings$SimpleBinding::init$($StringArray* bindings) {
	$set(this, bindings, bindings);
}

$StringArray* AquaKeyBindings$SimpleBinding::getBindings() {
	return this->bindings;
}

AquaKeyBindings$SimpleBinding::AquaKeyBindings$SimpleBinding() {
}

$Class* AquaKeyBindings$SimpleBinding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bindings", "[Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$SimpleBinding, bindings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AquaKeyBindings$SimpleBinding, init$, void, $StringArray*)},
		{"getBindings", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaKeyBindings$SimpleBinding, getBindings, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaKeyBindings$SimpleBinding", "com.apple.laf.AquaKeyBindings", "SimpleBinding", $STATIC},
		{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaKeyBindings$SimpleBinding",
		"java.lang.Object",
		"com.apple.laf.AquaKeyBindings$BindingsProvider",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaKeyBindings"
	};
	$loadClass(AquaKeyBindings$SimpleBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaKeyBindings$SimpleBinding);
	});
	return class$;
}

$Class* AquaKeyBindings$SimpleBinding::class$ = nullptr;

		} // laf
	} // apple
} // com