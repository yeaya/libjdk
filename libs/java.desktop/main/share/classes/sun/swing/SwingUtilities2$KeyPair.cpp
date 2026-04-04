#include <sun/swing/SwingUtilities2$KeyPair.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

void SwingUtilities2$KeyPair::init$(Object$* key1, Object$* key2) {
	$set(this, key1, key1);
	$set(this, key2, key2);
}

bool SwingUtilities2$KeyPair::equals(Object$* obj) {
	if (!($instanceOf(SwingUtilities2$KeyPair, obj))) {
		return false;
	}
	$var(SwingUtilities2$KeyPair, that, $cast(SwingUtilities2$KeyPair, obj));
	bool var$0 = $nc(this->key1)->equals($nc(that)->key1);
	return var$0 && $nc(this->key2)->equals(that->key2);
}

int32_t SwingUtilities2$KeyPair::hashCode() {
	int32_t var$0 = $nc(this->key1)->hashCode();
	return var$0 + 37 * $nc(this->key2)->hashCode();
}

SwingUtilities2$KeyPair::SwingUtilities2$KeyPair() {
}

$Class* SwingUtilities2$KeyPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key1", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SwingUtilities2$KeyPair, key1)},
		{"key2", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SwingUtilities2$KeyPair, key2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SwingUtilities2$KeyPair, init$, void, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SwingUtilities2$KeyPair, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SwingUtilities2$KeyPair, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingUtilities2$KeyPair", "sun.swing.SwingUtilities2", "KeyPair", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.SwingUtilities2$KeyPair",
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
		"sun.swing.SwingUtilities2"
	};
	$loadClass(SwingUtilities2$KeyPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingUtilities2$KeyPair);
	});
	return class$;
}

$Class* SwingUtilities2$KeyPair::class$ = nullptr;

	} // swing
} // sun