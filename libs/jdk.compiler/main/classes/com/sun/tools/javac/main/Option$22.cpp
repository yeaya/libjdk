#include <com/sun/tools/javac/main/Option$22.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef JAVAC
#undef LINT_KEY_FORMAT
#undef STDOUT

using $Lint$LintCategoryArray = $Array<::com::sun::tools::javac::code::Lint$LintCategory>;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$22::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
	$set(this, LINT_KEY_FORMAT, $str({"  "_s, "  "_s, "%-"_s, $$str((28 - "        "_s->length())), "s %s"_s}));
}

void Option$22::process($OptionHelper* helper, $String* option) {
	$useLocalObjectStack();
	$var($Log, log, $nc(helper)->getLog());
	$init($Log$WriterKind);
	$init($Log$PrefixKind);
	$nc(log)->printRawLines($Log$WriterKind::STDOUT, $($nc(log)->localize($Log$PrefixKind::JAVAC, "opt.help.lint.header"_s, $$new($ObjectArray, 0))));
	log->printRawLines($Log$WriterKind::STDOUT, $($String::format(this->LINT_KEY_FORMAT, $$new($ObjectArray, {
		"all"_s,
		$(log->localize($Log$PrefixKind::JAVAC, "opt.Xlint.all"_s, $$new($ObjectArray, 0)))
	}))));
	{
		$var($Lint$LintCategoryArray, arr$, $Lint$LintCategory::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Lint$LintCategory* lc = arr$->get(i$);
			{
				log->printRawLines($Log$WriterKind::STDOUT, $($String::format(this->LINT_KEY_FORMAT, $$new($ObjectArray, {
					$nc(lc)->option,
					$(log->localize($Log$PrefixKind::JAVAC, $$str({"opt.Xlint.desc."_s, $nc(lc)->option}), $$new($ObjectArray, 0)))
				}))));
			}
		}
	}
	log->printRawLines($Log$WriterKind::STDOUT, $($String::format(this->LINT_KEY_FORMAT, $$new($ObjectArray, {
		"none"_s,
		$(log->localize($Log$PrefixKind::JAVAC, "opt.Xlint.none"_s, $$new($ObjectArray, 0)))
	}))));
	$Option::process(helper, option);
}

Option$22::Option$22() {
}

$Class* Option$22::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LINT_KEY_FORMAT", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Option$22, LINT_KEY_FORMAT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$22, init$, void, $String*, int32_t, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$22, process, void, $OptionHelper*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$22", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$22",
		"com.sun.tools.javac.main.Option",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$22));
	});
	return class$;
}

$Class* Option$22::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com