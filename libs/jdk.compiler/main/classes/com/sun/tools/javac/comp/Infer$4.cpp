#include <com/sun/tools/javac/comp/Infer$4.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef EQ
#undef EXEC
#undef LOWER
#undef TYPECAST
#undef UPPER

using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$ints* Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound = nullptr;
$ints* Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void Infer$4::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound, $new($ints, $($Type$UndetVar$InferenceBound::values())->length));
	{
		try {
			Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::EQ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::LOWER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound->set($Type$UndetVar$InferenceBound::UPPER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::TYPECAST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::EXEC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Infer$4::Infer$4() {
}

$Class* Infer$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$4, $SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)},
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$4, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.Infer$4",
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
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$4, name, initialize, &classInfo$$, Infer$4::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$4);
	});
	return class$;
}

$Class* Infer$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com