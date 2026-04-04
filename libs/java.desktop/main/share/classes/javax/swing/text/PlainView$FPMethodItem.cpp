#include <javax/swing/text/PlainView$FPMethodItem.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

void PlainView$FPMethodItem::init$($Class* className, $String* methodName) {
	$set(this, className, className);
	$set(this, methodName, methodName);
}

bool PlainView$FPMethodItem::equals(Object$* obj) {
	if ($instanceOf(PlainView$FPMethodItem, obj)) {
		$var(PlainView$FPMethodItem, that, $cast(PlainView$FPMethodItem, obj));
		bool var$0 = $nc(this->className)->equals(that->className);
		return var$0 && $nc(this->methodName)->equals(that->methodName);
	}
	return false;
}

int32_t PlainView$FPMethodItem::hashCode() {
	int32_t var$0 = 31 * $nc(this->methodName)->hashCode();
	return var$0 + $nc(this->className)->hashCode();
}

PlainView$FPMethodItem::PlainView$FPMethodItem() {
}

$Class* PlainView$FPMethodItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(PlainView$FPMethodItem, className)},
		{"methodName", "Ljava/lang/String;", nullptr, $FINAL, $field(PlainView$FPMethodItem, methodName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $PUBLIC, $method(PlainView$FPMethodItem, init$, void, $Class*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PlainView$FPMethodItem, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PlainView$FPMethodItem, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.PlainView$FPMethodItem", "javax.swing.text.PlainView", "FPMethodItem", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.PlainView$FPMethodItem",
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
		"javax.swing.text.PlainView"
	};
	$loadClass(PlainView$FPMethodItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainView$FPMethodItem);
	});
	return class$;
}

$Class* PlainView$FPMethodItem::class$ = nullptr;

		} // text
	} // swing
} // javax