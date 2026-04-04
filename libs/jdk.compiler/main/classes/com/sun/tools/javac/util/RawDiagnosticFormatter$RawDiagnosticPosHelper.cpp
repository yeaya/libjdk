#include <com/sun/tools/javac/util/RawDiagnosticFormatter$RawDiagnosticPosHelper.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/RawDiagnosticFormatter.h>
#include <jcpp.h>

using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void RawDiagnosticFormatter$RawDiagnosticPosHelper::init$($JCDiagnostic* diag) {
	$set(this, diag, diag);
}

$String* RawDiagnosticFormatter$RawDiagnosticPosHelper::getPosition($JCTree$JCExpression* exp) {
	$useLocalObjectStack();
	$var($DiagnosticSource, diagSource, $nc(this->diag)->getDiagnosticSource());
	int64_t diagLine = this->diag->getLineNumber();
	int64_t expLine = $nc(diagSource)->getLineNumber($nc(exp)->pos$);
	int64_t expCol = diagSource->getColumnNumber(exp->pos$, false);
	return (expLine == diagLine) ? $String::valueOf(expCol) : $str({$$str(expLine), ":"_s, $$str(expCol)});
}

RawDiagnosticFormatter$RawDiagnosticPosHelper::RawDiagnosticFormatter$RawDiagnosticPosHelper() {
}

$Class* RawDiagnosticFormatter$RawDiagnosticPosHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $FINAL, $field(RawDiagnosticFormatter$RawDiagnosticPosHelper, diag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(RawDiagnosticFormatter$RawDiagnosticPosHelper, init$, void, $JCDiagnostic*)},
		{"getPosition", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Ljava/lang/String;", nullptr, 0, $virtualMethod(RawDiagnosticFormatter$RawDiagnosticPosHelper, getPosition, $String*, $JCTree$JCExpression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper", "com.sun.tools.javac.util.RawDiagnosticFormatter", "RawDiagnosticPosHelper", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.RawDiagnosticFormatter"
	};
	$loadClass(RawDiagnosticFormatter$RawDiagnosticPosHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawDiagnosticFormatter$RawDiagnosticPosHelper);
	});
	return class$;
}

$Class* RawDiagnosticFormatter$RawDiagnosticPosHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com