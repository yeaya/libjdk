#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector$1.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ANALYZE
#undef COMPILATION

using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

$ints* PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind = nullptr;

void PublicApiCollector$1::clinit$($Class* clazz) {
	$assignStatic(PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind, $new($ints, $($TaskEvent$Kind::values())->length));
	{
		try {
			PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind->set($TaskEvent$Kind::ANALYZE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind->set($TaskEvent$Kind::COMPILATION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PublicApiCollector$1::PublicApiCollector$1() {
}

$Class* PublicApiCollector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$source$util$TaskEvent$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PublicApiCollector$1, $SwitchMap$com$sun$source$util$TaskEvent$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector"
	};
	$loadClass(PublicApiCollector$1, name, initialize, &classInfo$$, PublicApiCollector$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PublicApiCollector$1);
	});
	return class$;
}

$Class* PublicApiCollector$1::class$ = nullptr;

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com