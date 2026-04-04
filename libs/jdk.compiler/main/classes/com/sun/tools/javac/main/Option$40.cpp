#include <com/sun/tools/javac/main/Option$40.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef PRIMARY
#undef US

using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$40::init$() {
	$init($Locale);
	$set(this, collator, $Collator::getInstance($Locale::US));
	{
		$nc(this->collator)->setStrength($Collator::PRIMARY);
	}
}

int32_t Option$40::compare($Option* o1, $Option* o2) {
	return $nc(this->collator)->compare($nc(o1)->primaryName, $nc(o2)->primaryName);
}

int32_t Option$40::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Option, o1), $cast($Option, o2));
}

Option$40::Option$40() {
}

$Class* Option$40::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"collator", "Ljava/text/Collator;", nullptr, $FINAL, $field(Option$40, collator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Option$40, init$, void)},
		{"compare", "(Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/main/Option;)I", nullptr, $PUBLIC, $virtualMethod(Option$40, compare, int32_t, $Option*, $Option*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Option$40, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		"showHelp",
		"(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/main/Option$OptionKind;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$40", nullptr, nullptr, 0},
		{"com.sun.tools.javac.main.Option$OptionKind", "com.sun.tools.javac.main.Option", "OptionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.main.Option$40",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lcom/sun/tools/javac/main/Option;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$40, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$40);
	});
	return class$;
}

$Class* Option$40::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com