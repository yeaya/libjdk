#include <bug4697612$6.h>
#include <bug4697612.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BadLocationException = ::javax::swing::text::BadLocationException;

void bug4697612$6::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$6::run() {
	try {
		$init($bug4697612);
		int32_t pos0 = $nc($bug4697612::text)->getCaretPosition();
		$var($Rectangle, dotBounds, $nc($bug4697612::text)->modelToView(pos0));
		$nc(this->val$result)->set(0, $nc(dotBounds)->height);
	} catch ($BadLocationException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

bug4697612$6::bug4697612$6() {
}

$Class* bug4697612$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$6, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", "()V", 0, $method(bug4697612$6, init$, void, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4697612$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4697612",
		"getTextCaretHeight",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4697612$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4697612$6",
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
		"bug4697612"
	};
	$loadClass(bug4697612$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4697612$6);
	});
	return class$;
}

$Class* bug4697612$6::class$ = nullptr;