#include <sun/swing/text/TextComponentPrintable$8.h>
#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace sun {
	namespace swing {
		namespace text {

void TextComponentPrintable$8::init$($TextComponentPrintable* this$0, $Graphics* val$graphics, $PageFormat* val$pf, int32_t val$pageIndex) {
	$set(this, this$0, this$0);
	$set(this, val$graphics, val$graphics);
	$set(this, val$pf, val$pf);
	this->val$pageIndex = val$pageIndex;
}

$Object* TextComponentPrintable$8::call() {
	return $of($Integer::valueOf(this->this$0->printOnEDT(this->val$graphics, this->val$pf, this->val$pageIndex)));
}

TextComponentPrintable$8::TextComponentPrintable$8() {
}

$Class* TextComponentPrintable$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, this$0)},
		{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$pageIndex)},
		{"val$pf", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$pf)},
		{"val$graphics", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$8, val$graphics)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/text/TextComponentPrintable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)V", "()V", 0, $method(TextComponentPrintable$8, init$, void, $TextComponentPrintable*, $Graphics*, $PageFormat*, int32_t)},
		{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$8, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"print",
		"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$8",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.text.TextComponentPrintable"
	};
	$loadClass(TextComponentPrintable$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextComponentPrintable$8);
	});
	return class$;
}

$Class* TextComponentPrintable$8::class$ = nullptr;

		} // text
	} // swing
} // sun