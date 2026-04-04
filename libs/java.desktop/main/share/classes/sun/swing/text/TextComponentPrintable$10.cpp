#include <sun/swing/text/TextComponentPrintable$10.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

void TextComponentPrintable$10::init$($TextComponentPrintable* this$0, int32_t val$width) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
}

$Object* TextComponentPrintable$10::call() {
	this->this$0->layoutOnEDT(this->val$width);
	return nullptr;
}

TextComponentPrintable$10::TextComponentPrintable$10() {
}

$Class* TextComponentPrintable$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$10, this$0)},
		{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$10, val$width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/text/TextComponentPrintable;I)V", "()V", 0, $method(TextComponentPrintable$10, init$, void, $TextComponentPrintable*, int32_t)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$10, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"layout",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$10",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.text.TextComponentPrintable"
	};
	$loadClass(TextComponentPrintable$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextComponentPrintable$10);
	});
	return class$;
}

$Class* TextComponentPrintable$10::class$ = nullptr;

		} // text
	} // swing
} // sun