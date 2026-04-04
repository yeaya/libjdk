#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* DiagnosticFormatter$Configuration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter$Configuration, getMultilineLimit, int32_t, $DiagnosticFormatter$Configuration$MultilineLimit*)},
		{"getVisible", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter$Configuration, getVisible, $Set*)},
		{"setMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter$Configuration, setMultilineLimit, void, $DiagnosticFormatter$Configuration$MultilineLimit*, int32_t)},
		{"setVisible", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter$Configuration, setVisible, void, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "MultilineLimit", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "DiagnosticPart", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.api.DiagnosticFormatter$Configuration",
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
		"com.sun.tools.javac.api.DiagnosticFormatter"
	};
	$loadClass(DiagnosticFormatter$Configuration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DiagnosticFormatter$Configuration);
	});
	return class$;
}

$Class* DiagnosticFormatter$Configuration::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com