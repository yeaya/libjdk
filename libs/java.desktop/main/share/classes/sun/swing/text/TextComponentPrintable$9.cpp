#include <sun/swing/text/TextComponentPrintable$9.h>
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

void TextComponentPrintable$9::init$($TextComponentPrintable* this$0) {
	$set(this, this$0, this$0);
}

void TextComponentPrintable$9::run() {
}

TextComponentPrintable$9::TextComponentPrintable$9() {
}

$Class* TextComponentPrintable$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/text/TextComponentPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(TextComponentPrintable$9, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/text/TextComponentPrintable;)V", nullptr, 0, $method(TextComponentPrintable$9, init$, void, $TextComponentPrintable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable$9, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.text.TextComponentPrintable",
		"acquireReadLock",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.text.TextComponentPrintable$9",
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
		"sun.swing.text.TextComponentPrintable"
	};
	$loadClass(TextComponentPrintable$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextComponentPrintable$9);
	});
	return class$;
}

$Class* TextComponentPrintable$9::class$ = nullptr;

		} // text
	} // swing
} // sun