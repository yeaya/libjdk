#include <javax/swing/plaf/nimbus/NimbusStyle$1.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$RuntimeState.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusStyle$RuntimeState = ::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusStyle$1::init$() {
}

int32_t NimbusStyle$1::compare($NimbusStyle$RuntimeState* a, $NimbusStyle$RuntimeState* b) {
	return $nc(a)->state - $nc(b)->state;
}

int32_t NimbusStyle$1::compare(Object$* a, Object$* b) {
	return this->compare($cast($NimbusStyle$RuntimeState, a), $cast($NimbusStyle$RuntimeState, b));
}

NimbusStyle$1::NimbusStyle$1() {
}

$Class* NimbusStyle$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NimbusStyle$1, init$, void)},
		{"compare", "(Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;)I", nullptr, $PUBLIC, $virtualMethod(NimbusStyle$1, compare, int32_t, $NimbusStyle$RuntimeState*, $NimbusStyle$RuntimeState*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(NimbusStyle$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.nimbus.NimbusStyle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusStyle$1", nullptr, nullptr, 0},
		{"javax.swing.plaf.nimbus.NimbusStyle$RuntimeState", "javax.swing.plaf.nimbus.NimbusStyle", "RuntimeState", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusStyle$1",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusStyle"
	};
	$loadClass(NimbusStyle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusStyle$1);
	});
	return class$;
}

$Class* NimbusStyle$1::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax