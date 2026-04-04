#include <Test6919629$1.h>
#include <Test6919629.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef MAGENTA

using $Test6919629 = ::Test6919629;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;

void Test6919629$1::init$($Test6919629* this$0) {
	$set(this, this$0, this$0);
}

void Test6919629$1::run() {
	$useLocalObjectStack();
	$var($UIDefaults, d, $new($UIDefaults));
	$init($Color);
	d->put("Label.textForeground"_s, $Color::MAGENTA);
	$var($JLabel, l, $new($JLabel));
	$set(this->this$0, ref, $new($WeakReference, l));
	l->putClientProperty("Nimbus.Overrides"_s, d);
	$set(this->this$0, f, $new($JFrame));
	$$nc(this->this$0->f->getContentPane())->add(l);
	$nc(this->this$0->f)->pack();
	$nc(this->this$0->f)->setVisible(true);
}

Test6919629$1::Test6919629$1() {
}

$Class* Test6919629$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest6919629;", nullptr, $FINAL | $SYNTHETIC, $field(Test6919629$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest6919629;)V", nullptr, 0, $method(Test6919629$1, init$, void, $Test6919629*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6919629$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6919629",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6919629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6919629$1",
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
		"Test6919629"
	};
	$loadClass(Test6919629$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6919629$1);
	});
	return class$;
}

$Class* Test6919629$1::class$ = nullptr;