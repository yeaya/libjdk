#include <bug4128979$1.h>
#include <bug4128979.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4128979 = ::bug4128979;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

void bug4128979$1::init$($bug4128979* this$0) {
	$set(this, this$0, this$0);
}

void bug4128979$1::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$nc(g)->setColor($($UIManager::getColor("ToggleButton.highlight"_s)));
	g->fillRect(x, y, 49, 49);
	g->setColor($$new($Color, ~$$nc($UIManager::getColor("ToggleButton.highlight"_s))->getRGB()));
	g->drawRect(x, y, 49, 49);
}

int32_t bug4128979$1::getIconWidth() {
	return 50;
}

int32_t bug4128979$1::getIconHeight() {
	return 50;
}

bug4128979$1::bug4128979$1() {
}

$Class* bug4128979$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4128979;", nullptr, $FINAL | $SYNTHETIC, $field(bug4128979$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4128979;)V", nullptr, 0, $method(bug4128979$1, init$, void, $bug4128979*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(bug4128979$1, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(bug4128979$1, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(bug4128979$1, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4128979",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4128979$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4128979$1",
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
		"bug4128979"
	};
	$loadClass(bug4128979$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4128979$1);
	});
	return class$;
}

$Class* bug4128979$1::class$ = nullptr;