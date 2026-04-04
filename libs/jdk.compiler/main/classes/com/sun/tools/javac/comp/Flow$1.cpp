#include <com/sun/tools/javac/comp/Flow$1.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef AND
#undef CLASS
#undef CLASSDEF
#undef GUARDPATTERN
#undef LAMBDA
#undef NOT
#undef OR
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef TYP
#undef TYPEVAR
#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
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

$ints* Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Flow$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Flow$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;

void Flow$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::NOT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PREINC->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::POSTINC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::PREDEC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::POSTDEC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::AND->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::OR->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::CLASSDEF->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::GUARDPATTERN->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::LAMBDA->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Flow$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::TYPEVAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Flow$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::VAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Flow$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::TYP->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Flow$1::Flow$1() {
}

$Class* Flow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$1, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Flow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.Flow$1",
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
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$1, name, initialize, &classInfo$$, Flow$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$1);
	});
	return class$;
}

$Class* Flow$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com