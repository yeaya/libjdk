#include <sun/swing/JLightweightFrame$3$1.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JPanel.h>
#include <sun/swing/JLightweightFrame$3.h>
#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame$3 = ::sun::swing::JLightweightFrame$3;

namespace sun {
	namespace swing {

void JLightweightFrame$3$1::init$($JLightweightFrame$3* this$1, $Rectangle* val$clip) {
	$set(this, this$1, this$1);
	$set(this, val$clip, val$clip);
}

void JLightweightFrame$3$1::run() {
	$useLocalObjectStack();
	$var($Rectangle, c, $$nc($nc($nc(this->this$1->this$0)->contentPane)->getBounds())->intersection(this->val$clip));
	this->this$1->this$0->notifyImageUpdated($nc(c)->x, $nc(c)->y, $nc(c)->width, $nc(c)->height);
}

JLightweightFrame$3$1::JLightweightFrame$3$1() {
}

$Class* JLightweightFrame$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/swing/JLightweightFrame$3;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$3$1, this$1)},
		{"val$clip", "Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$3$1, val$clip)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/JLightweightFrame$3;Ljava/awt/Rectangle;)V", "()V", 0, $method(JLightweightFrame$3$1, init$, void, $JLightweightFrame$3*, $Rectangle*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$3$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.JLightweightFrame$3",
		"paint",
		"(Ljava/awt/Graphics;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.JLightweightFrame$3", nullptr, nullptr, 0},
		{"sun.swing.JLightweightFrame$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.JLightweightFrame$3$1",
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
		"sun.swing.JLightweightFrame"
	};
	$loadClass(JLightweightFrame$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLightweightFrame$3$1);
	});
	return class$;
}

$Class* JLightweightFrame$3$1::class$ = nullptr;

	} // swing
} // sun