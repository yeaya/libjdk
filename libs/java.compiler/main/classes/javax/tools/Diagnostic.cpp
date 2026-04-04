#include <javax/tools/Diagnostic.h>
#include <java/util/Locale.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <jcpp.h>

#undef NOPOS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace javax {
	namespace tools {

$Class* Diagnostic::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOPOS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Diagnostic, NOPOS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getCode, $String*)},
		{"getColumnNumber", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getColumnNumber, int64_t)},
		{"getEndPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getEndPosition, int64_t)},
		{"getKind", "()Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getKind, $Diagnostic$Kind*)},
		{"getLineNumber", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getLineNumber, int64_t)},
		{"getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getMessage, $String*, $Locale*)},
		{"getPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getPosition, int64_t)},
		{"getSource", "()Ljava/lang/Object;", "()TS;", $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getSource, $Object*)},
		{"getStartPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Diagnostic, getStartPosition, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.Diagnostic$Kind", "javax.tools.Diagnostic", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.Diagnostic",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.tools.Diagnostic$Kind"
	};
	$loadClass(Diagnostic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Diagnostic);
	});
	return class$;
}

$Class* Diagnostic::class$ = nullptr;

	} // tools
} // javax