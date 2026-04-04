#include <Test6888156$1.h>
#include <Test6888156.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $Test6888156 = ::Test6888156;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6888156$1::init$($Test6888156* this$0) {
	$set(this, this$0, this$0);
}

int32_t Test6888156$1::getIconWidth() {
	return 24;
}

int32_t Test6888156$1::getIconHeight() {
	return 24;
}

void Test6888156$1::paintIcon($Component* c, $Graphics* g, int32_t w, int32_t h) {
}

Test6888156$1::Test6888156$1() {
}

$Class* Test6888156$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest6888156;)V", nullptr, 0, $method(Test6888156$1, init$, void, $Test6888156*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(Test6888156$1, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(Test6888156$1, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(Test6888156$1, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6888156",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6888156$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6888156$1",
		"java.lang.Object",
		"javax.swing.Icon",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6888156"
	};
	$loadClass(Test6888156$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6888156$1);
	});
	return class$;
}

$Class* Test6888156$1::class$ = nullptr;