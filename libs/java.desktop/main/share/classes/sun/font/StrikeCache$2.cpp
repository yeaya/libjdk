#include <sun/font/StrikeCache$2.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace font {

void StrikeCache$2::init$($FontStrikeDisposer* val$disposer) {
	$set(this, val$disposer, val$disposer);
}

void StrikeCache$2::run() {
	$StrikeCache::doDispose(this->val$disposer);
	$Disposer::pollRemove();
}

StrikeCache$2::StrikeCache$2() {
}

$Class* StrikeCache$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $FINAL | $SYNTHETIC, $field(StrikeCache$2, val$disposer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/FontStrikeDisposer;)V", "()V", 0, $method(StrikeCache$2, init$, void, $FontStrikeDisposer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StrikeCache$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.StrikeCache",
		"disposeStrike",
		"(Lsun/font/FontStrikeDisposer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.StrikeCache$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.StrikeCache$2",
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
		"sun.font.StrikeCache"
	};
	$loadClass(StrikeCache$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StrikeCache$2);
	});
	return class$;
}

$Class* StrikeCache$2::class$ = nullptr;

	} // font
} // sun