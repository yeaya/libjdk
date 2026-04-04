#include <JInternalFrameIconTest$2$1.h>
#include <JInternalFrameIconTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $JInternalFrameIconTest$2 = ::JInternalFrameIconTest$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JInternalFrameIconTest$2$1::init$($JInternalFrameIconTest$2* this$0) {
	$set(this, this$0, this$0);
}

int32_t JInternalFrameIconTest$2$1::getIconWidth() {
	return 16;
}

int32_t JInternalFrameIconTest$2$1::getIconHeight() {
	return 16;
}

void JInternalFrameIconTest$2$1::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($Color);
	$nc(g)->setColor($Color::black);
	g->fillRect(x, y, 16, 16);
}

JInternalFrameIconTest$2$1::JInternalFrameIconTest$2$1() {
}

$Class* JInternalFrameIconTest$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJInternalFrameIconTest$2;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrameIconTest$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJInternalFrameIconTest$2;)V", nullptr, 0, $method(JInternalFrameIconTest$2$1, init$, void, $JInternalFrameIconTest$2*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$2$1, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$2$1, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$2$1, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JInternalFrameIconTest$2",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JInternalFrameIconTest$2", nullptr, nullptr, 0},
		{"JInternalFrameIconTest$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JInternalFrameIconTest$2$1",
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
		"JInternalFrameIconTest"
	};
	$loadClass(JInternalFrameIconTest$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JInternalFrameIconTest$2$1);
	});
	return class$;
}

$Class* JInternalFrameIconTest$2$1::class$ = nullptr;