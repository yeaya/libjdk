#include <javax/swing/KeyboardManager$ComponentKeyStrokePair.h>
#include <javax/swing/KeyboardManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyboardManager = ::javax::swing::KeyboardManager;

namespace javax {
	namespace swing {

void KeyboardManager$ComponentKeyStrokePair::init$($KeyboardManager* this$0, Object$* comp, Object$* key) {
	$set(this, this$0, this$0);
	$set(this, component, comp);
	$set(this, keyStroke, key);
}

bool KeyboardManager$ComponentKeyStrokePair::equals(Object$* o) {
	if (!($instanceOf(KeyboardManager$ComponentKeyStrokePair, o))) {
		return false;
	}
	$var(KeyboardManager$ComponentKeyStrokePair, ckp, $cast(KeyboardManager$ComponentKeyStrokePair, o));
	bool var$0 = $nc(this->component)->equals($nc(ckp)->component);
	return (var$0 && ($nc(this->keyStroke)->equals(ckp->keyStroke)));
}

int32_t KeyboardManager$ComponentKeyStrokePair::hashCode() {
	int32_t var$0 = $nc(this->component)->hashCode();
	return var$0 * $nc(this->keyStroke)->hashCode();
}

KeyboardManager$ComponentKeyStrokePair::KeyboardManager$ComponentKeyStrokePair() {
}

$Class* KeyboardManager$ComponentKeyStrokePair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/KeyboardManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardManager$ComponentKeyStrokePair, this$0)},
		{"component", "Ljava/lang/Object;", nullptr, 0, $field(KeyboardManager$ComponentKeyStrokePair, component)},
		{"keyStroke", "Ljava/lang/Object;", nullptr, 0, $field(KeyboardManager$ComponentKeyStrokePair, keyStroke)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/KeyboardManager;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(KeyboardManager$ComponentKeyStrokePair, init$, void, $KeyboardManager*, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KeyboardManager$ComponentKeyStrokePair, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KeyboardManager$ComponentKeyStrokePair, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.KeyboardManager$ComponentKeyStrokePair", "javax.swing.KeyboardManager", "ComponentKeyStrokePair", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.KeyboardManager$ComponentKeyStrokePair",
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
		"javax.swing.KeyboardManager"
	};
	$loadClass(KeyboardManager$ComponentKeyStrokePair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardManager$ComponentKeyStrokePair);
	});
	return class$;
}

$Class* KeyboardManager$ComponentKeyStrokePair::class$ = nullptr;

	} // swing
} // javax