#include <bug4962534$3.h>
#include <bug4962534.h>
#include <java/awt/Component.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef FRAME_CONTENT_LAYER

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayeredPane = ::javax::swing::JLayeredPane;

void bug4962534$3::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$3::run() {
	$useLocalObjectStack();
	$init($JLayeredPane);
	for (int32_t j = 0; j < $nc($($nc(this->this$0->lPane)->getComponentsInLayer($nc($JLayeredPane::FRAME_CONTENT_LAYER)->intValue())))->length; ++j) {
		$set(this->this$0, titleComponent, $nc($(this->this$0->lPane->getComponentsInLayer($JLayeredPane::FRAME_CONTENT_LAYER->intValue())))->get(j));
		if ($$nc($nc($of(this->this$0->titleComponent))->getClass()->getName())->equals("javax.swing.plaf.metal.MetalTitlePane"_s)) {
			this->this$0->titleFound = true;
			break;
		}
	}
}

bug4962534$3::bug4962534$3() {
}

$Class* bug4962534$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(bug4962534$3, init$, void, $bug4962534*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4962534",
		"setTitleComponentEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4962534$3",
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
		"bug4962534"
	};
	$loadClass(bug4962534$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$3);
	});
	return class$;
}

$Class* bug4962534$3::class$ = nullptr;