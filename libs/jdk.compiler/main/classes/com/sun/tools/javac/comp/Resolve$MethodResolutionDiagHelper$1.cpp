#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$1.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$MethodResolutionDiagHelper$1::init$($String* key, $Resolve$MethodResolutionDiagHelper$TemplateArray* subTemplates) {
	$Resolve$MethodResolutionDiagHelper$Template::init$(key, subTemplates);
}

bool Resolve$MethodResolutionDiagHelper$1::matches(Object$* d) {
	return true;
}

Resolve$MethodResolutionDiagHelper$1::Resolve$MethodResolutionDiagHelper$1() {
}

$Class* Resolve$MethodResolutionDiagHelper$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;)V", nullptr, $TRANSIENT, $method(Resolve$MethodResolutionDiagHelper$1, init$, void, $String*, $Resolve$MethodResolutionDiagHelper$TemplateArray*)},
		{"matches", "(Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(Resolve$MethodResolutionDiagHelper$1, matches, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1",
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$MethodResolutionDiagHelper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$1);
	});
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com