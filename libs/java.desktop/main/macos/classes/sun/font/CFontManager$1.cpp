#include <sun/font/CFontManager$1.h>
#include <sun/font/CFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CFontManager = ::sun::font::CFontManager;

namespace sun {
	namespace font {

void CFontManager$1::init$($CFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* CFontManager$1::run() {
	if (!this->this$0->loadedAllFonts) {
		this->this$0->loadNativeFonts();
		this->this$0->registerItalicDerived();
		this->this$0->loadedAllFonts = true;
	}
	return nullptr;
}

CFontManager$1::CFontManager$1() {
}

$Class* CFontManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/CFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(CFontManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/CFontManager;)V", nullptr, 0, $method(CFontManager$1, init$, void, $CFontManager*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CFontManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.CFontManager",
		"loadFonts",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CFontManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CFontManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.CFontManager"
	};
	$loadClass(CFontManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFontManager$1);
	});
	return class$;
}

$Class* CFontManager$1::class$ = nullptr;

	} // font
} // sun