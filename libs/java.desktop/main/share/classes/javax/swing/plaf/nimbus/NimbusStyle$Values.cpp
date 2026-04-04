#include <javax/swing/plaf/nimbus/NimbusStyle$Values.h>
#include <java/awt/Insets.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$RuntimeState.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusStyle$Values::init$() {
	$set(this, stateTypes, nullptr);
	$set(this, states, nullptr);
	$set(this, defaults, $new($UIDefaults, 10, 0.7f));
	$set(this, cache, $new($HashMap));
}

NimbusStyle$Values::NimbusStyle$Values() {
}

$Class* NimbusStyle$Values::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stateTypes", "[Ljavax/swing/plaf/nimbus/State;", "[Ljavax/swing/plaf/nimbus/State<*>;", 0, $field(NimbusStyle$Values, stateTypes)},
		{"states", "[Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;", nullptr, 0, $field(NimbusStyle$Values, states)},
		{"contentMargins", "Ljava/awt/Insets;", nullptr, 0, $field(NimbusStyle$Values, contentMargins)},
		{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(NimbusStyle$Values, defaults)},
		{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/plaf/nimbus/NimbusStyle$CacheKey;Ljava/lang/Object;>;", 0, $field(NimbusStyle$Values, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NimbusStyle$Values, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusStyle$Values", "javax.swing.plaf.nimbus.NimbusStyle", "Values", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusStyle$Values",
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
		"javax.swing.plaf.nimbus.NimbusStyle"
	};
	$loadClass(NimbusStyle$Values, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusStyle$Values);
	});
	return class$;
}

$Class* NimbusStyle$Values::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax