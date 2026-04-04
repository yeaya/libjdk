#include <com/sun/tools/sjavac/options/Option$16.h>
#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

void Option$16::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$16::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalObjectStack();
	$nc(helper)->implicit($($$nc($nc(iter)->current())->substring($nc(this->arg)->length())));
}

Option$16::Option$16() {
}

$Class* Option$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Option$16, init$, void, $String*, int32_t, $String*, $String*)},
		{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED, $virtualMethod(Option$16, processMatching, void, $ArgumentIterator*, $OptionHelper*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.options.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.options.Option$16", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.sjavac.options.Option$16",
		"com.sun.tools.sjavac.options.Option",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.options.Option"
	};
	$loadClass(Option$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$16));
	});
	return class$;
}

$Class* Option$16::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com