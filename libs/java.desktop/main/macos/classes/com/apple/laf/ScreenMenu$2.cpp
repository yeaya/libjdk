#include <com/apple/laf/ScreenMenu$2.h>
#include <com/apple/laf/ScreenMenu.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $ScreenMenu = ::com::apple::laf::ScreenMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;

namespace com {
	namespace apple {
		namespace laf {

void ScreenMenu$2::init$($ScreenMenu* this$0, $JMenu* val$invoker) {
	$set(this, this$0, this$0);
	$set(this, val$invoker, val$invoker);
}

void ScreenMenu$2::run() {
	$nc(this->val$invoker)->setSelected(true);
	this->val$invoker->validate();
	this->this$0->updateItems();
	$set(this->this$0, fItemBounds, $new($RectangleArray, this->val$invoker->getMenuComponentCount()));
}

ScreenMenu$2::ScreenMenu$2() {
}

$Class* ScreenMenu$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/ScreenMenu;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$2, this$0)},
		{"val$invoker", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$2, val$invoker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/ScreenMenu;Ljavax/swing/JMenu;)V", "()V", 0, $method(ScreenMenu$2, init$, void, $ScreenMenu*, $JMenu*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScreenMenu$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.ScreenMenu",
		"invokeOpenLater",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.ScreenMenu$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.ScreenMenu$2",
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
		"com.apple.laf.ScreenMenu"
	};
	$loadClass(ScreenMenu$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenMenu$2);
	});
	return class$;
}

$Class* ScreenMenu$2::class$ = nullptr;

		} // laf
	} // apple
} // com