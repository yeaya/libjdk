#include <com/sun/tools/javac/code/Type$UndetVar$UndetVarListener.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$UndetVar$UndetVarListener::varInstantiated($Type$UndetVar* uv) {
	$Assert::error();
}

$Class* Type$UndetVar$UndetVarListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"varBoundChanged", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Type$UndetVar$UndetVarListener, varBoundChanged, void, $Type$UndetVar*, $Type$UndetVar$InferenceBound*, $Type*, bool)},
		{"varInstantiated", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, $PUBLIC, $virtualMethod(Type$UndetVar$UndetVarListener, varInstantiated, void, $Type$UndetVar*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener", "com.sun.tools.javac.code.Type$UndetVar", "UndetVarListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$UndetVar$UndetVarListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type$UndetVar$UndetVarListener);
	});
	return class$;
}

$Class* Type$UndetVar$UndetVarListener::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com