#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* JCDiagnostic$DiagnosticPosition::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCDiagnostic$DiagnosticPosition, getEndPosition, int32_t, $EndPosTable*)},
		{"getPreferredPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCDiagnostic$DiagnosticPosition, getPreferredPosition, int32_t)},
		{"getStartPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCDiagnostic$DiagnosticPosition, getStartPosition, int32_t)},
		{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JCDiagnostic$DiagnosticPosition, getTree, $JCTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
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
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$DiagnosticPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$DiagnosticPosition);
	});
	return class$;
}

$Class* JCDiagnostic$DiagnosticPosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com