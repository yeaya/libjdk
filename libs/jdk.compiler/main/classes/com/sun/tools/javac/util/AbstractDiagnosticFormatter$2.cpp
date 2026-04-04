#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$2.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef COLUMN
#undef CONDEXPR
#undef END
#undef ERROR
#undef FRAGMENT
#undef LAMBDA
#undef LINE
#undef NOTE
#undef OFFSET
#undef PARENS
#undef REFERENCE
#undef START
#undef WARNING

using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind = nullptr;
$ints* AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType = nullptr;

void AbstractDiagnosticFormatter$2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PARENS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::LAMBDA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::CONDEXPR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind, $new($ints, $($DiagnosticFormatter$PositionKind::values())->length));
	{
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind->set($DiagnosticFormatter$PositionKind::START->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind->set($DiagnosticFormatter$PositionKind::END->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind->set($DiagnosticFormatter$PositionKind::LINE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind->set($DiagnosticFormatter$PositionKind::COLUMN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind->set($DiagnosticFormatter$PositionKind::OFFSET->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType, $new($ints, $($JCDiagnostic$DiagnosticType::values())->length));
	{
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::FRAGMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::NOTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType->set($JCDiagnostic$DiagnosticType::ERROR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AbstractDiagnosticFormatter$2::AbstractDiagnosticFormatter$2() {
}

$Class* AbstractDiagnosticFormatter$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{"$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)},
		{"$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDiagnosticFormatter$2, $SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2",
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
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter"
	};
	$loadClass(AbstractDiagnosticFormatter$2, name, initialize, &classInfo$$, AbstractDiagnosticFormatter$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDiagnosticFormatter$2);
	});
	return class$;
}

$Class* AbstractDiagnosticFormatter$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com