#include <bug8032667$1.h>
#include <bug8032667$1$1.h>
#include <bug8032667.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Canvas.h>
#include <java/awt/Container.h>
#include <java/awt/Image.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef CENTER

using $bug8032667 = ::bug8032667;
using $bug8032667$1$1 = ::bug8032667$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Canvas = ::java::awt::Canvas;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8032667$1::init$($bug8032667* this$0) {
	$set(this, this$0, this$0);
}

void bug8032667$1::run() {
	$useLocalObjectStack();
	$var($Image, image1, $bug8032667::getImage($($bug8032667::getCheckBox("Deselected"_s, false))));
	$var($Image, image2, $bug8032667::getImage($($bug8032667::getCheckBox("Selected"_s, true))));
	$var($Canvas, canvas, $new($bug8032667$1$1, this, image1, image2));
	$init($BorderLayout);
	$$nc(this->this$0->getContentPane())->add(canvas, $BorderLayout::CENTER);
}

bug8032667$1::bug8032667$1() {
}

$Class* bug8032667$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8032667;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8032667;)V", nullptr, 0, $method(bug8032667$1, init$, void, $bug8032667*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032667$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032667",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032667$1", nullptr, nullptr, 0},
		{"bug8032667$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032667$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8032667"
	};
	$loadClass(bug8032667$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032667$1);
	});
	return class$;
}

$Class* bug8032667$1::class$ = nullptr;