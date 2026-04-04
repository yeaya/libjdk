#include <com/sun/tools/javac/comp/Check$5.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/NestingKind.h>
#include <jcpp.h>

#undef ANONYMOUS
#undef ARRAY
#undef CLASS
#undef IDENT
#undef LOCAL
#undef MEMBER
#undef MTH
#undef RUNTIME
#undef SELECT
#undef TOP_LEVEL
#undef TYP
#undef UNCHECKED
#undef VAR
#undef VARARGS

using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $NestingKind = ::javax::lang::model::element::NestingKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$ints* Check$5::$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory = nullptr;
$ints* Check$5::$SwitchMap$javax$lang$model$element$NestingKind = nullptr;
$ints* Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy = nullptr;
$ints* Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;

void Check$5::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Check$5::$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory, $new($ints, $($Lint$LintCategory::values())->length));
	{
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory->set($Lint$LintCategory::UNCHECKED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory->set($Lint$LintCategory::VARARGS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Check$5::$SwitchMap$javax$lang$model$element$NestingKind, $new($ints, $($NestingKind::values())->length));
	{
		try {
			Check$5::$SwitchMap$javax$lang$model$element$NestingKind->set($NestingKind::ANONYMOUS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$javax$lang$model$element$NestingKind->set($NestingKind::LOCAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$javax$lang$model$element$NestingKind->set($NestingKind::TOP_LEVEL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$javax$lang$model$element$NestingKind->set($NestingKind::MEMBER->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::ARRAY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy, $new($ints, $($Attribute$RetentionPolicy::values())->length));
	{
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy->set($Attribute$RetentionPolicy::RUNTIME->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy->set($Attribute$RetentionPolicy::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::SELECT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag->set($JCTree$Tag::IDENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::VAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::MTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind->set($Kinds$Kind::TYP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Check$5::Check$5() {
}

$Class* Check$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$com$sun$tools$javac$code$Lint$LintCategory)},
		{"$SwitchMap$javax$lang$model$element$NestingKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$javax$lang$model$element$NestingKind)},
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{"$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)},
		{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
		{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Check$5, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Check",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.comp.Check$5",
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
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$5, name, initialize, &classInfo$$, Check$5::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Check$5);
	});
	return class$;
}

$Class* Check$5::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com