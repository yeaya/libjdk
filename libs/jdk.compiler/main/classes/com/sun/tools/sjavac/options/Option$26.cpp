#include <com/sun/tools/sjavac/options/Option$26.h>
#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Paths = ::java::nio::file::Paths;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

void Option$26::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$26::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalObjectStack();
	$var($String, p, $$nc($nc(iter)->current())->substring($nc(this->arg)->length()));
	$nc(helper)->stateDir($($Paths::get(p, $$new($StringArray, 0))));
}

Option$26::Option$26() {
}

$Class* Option$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Option$26, init$, void, $String*, int32_t, $String*, $String*)},
		{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED, $virtualMethod(Option$26, processMatching, void, $ArgumentIterator*, $OptionHelper*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.options.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.options.Option$26", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.sjavac.options.Option$26",
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
	$loadClass(Option$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$26));
	});
	return class$;
}

$Class* Option$26::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com