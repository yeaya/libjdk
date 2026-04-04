#include <javax/swing/text/DefaultCaret$SafeScroller.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace javax {
	namespace swing {
		namespace text {

void DefaultCaret$SafeScroller::init$($DefaultCaret* this$0, $Rectangle* r) {
	$set(this, this$0, this$0);
	$set(this, r, r);
}

void DefaultCaret$SafeScroller::run() {
	if (this->this$0->component != nullptr) {
		this->this$0->component->scrollRectToVisible(this->r);
	}
}

DefaultCaret$SafeScroller::DefaultCaret$SafeScroller() {
}

$Class* DefaultCaret$SafeScroller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$SafeScroller, this$0)},
		{"r", "Ljava/awt/Rectangle;", nullptr, 0, $field(DefaultCaret$SafeScroller, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultCaret;Ljava/awt/Rectangle;)V", nullptr, 0, $method(DefaultCaret$SafeScroller, init$, void, $DefaultCaret*, $Rectangle*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultCaret$SafeScroller, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultCaret$SafeScroller", "javax.swing.text.DefaultCaret", "SafeScroller", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultCaret$SafeScroller",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultCaret"
	};
	$loadClass(DefaultCaret$SafeScroller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultCaret$SafeScroller);
	});
	return class$;
}

$Class* DefaultCaret$SafeScroller::class$ = nullptr;

		} // text
	} // swing
} // javax