#include <bug6771184$1$1.h>
#include <bug6771184$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6771184$1 = ::bug6771184$1;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

void bug6771184$1$1::init$($bug6771184$1* this$0) {
	$set(this, this$0, this$0);
}

void bug6771184$1$1::paint($Graphics* g, int32_t p0, int32_t p1, $Shape* bounds, $JTextComponent* c) {
}

bug6771184$1$1::bug6771184$1$1() {
}

$Class* bug6771184$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6771184$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6771184$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6771184$1;)V", nullptr, 0, $method(bug6771184$1$1, init$, void, $bug6771184$1*)},
		{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $virtualMethod(bug6771184$1$1, paint, void, $Graphics*, int32_t, int32_t, $Shape*, $JTextComponent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6771184$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6771184$1", nullptr, nullptr, 0},
		{"bug6771184$1$1", nullptr, nullptr, 0},
		{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6771184$1$1",
		"java.lang.Object",
		"javax.swing.text.Highlighter$HighlightPainter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6771184"
	};
	$loadClass(bug6771184$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6771184$1$1);
	});
	return class$;
}

$Class* bug6771184$1$1::class$ = nullptr;