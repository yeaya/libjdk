#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void JCDiagnostic$SimpleDiagnosticPosition::init$(int32_t pos) {
	this->pos = pos;
}

$JCTree* JCDiagnostic$SimpleDiagnosticPosition::getTree() {
	return nullptr;
}

int32_t JCDiagnostic$SimpleDiagnosticPosition::getStartPosition() {
	return this->pos;
}

int32_t JCDiagnostic$SimpleDiagnosticPosition::getPreferredPosition() {
	return this->pos;
}

int32_t JCDiagnostic$SimpleDiagnosticPosition::getEndPosition($EndPosTable* endPosTable) {
	return this->pos;
}

JCDiagnostic$SimpleDiagnosticPosition::JCDiagnostic$SimpleDiagnosticPosition() {
}

$Class* JCDiagnostic$SimpleDiagnosticPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pos", "I", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic$SimpleDiagnosticPosition, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JCDiagnostic$SimpleDiagnosticPosition, init$, void, int32_t)},
		{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SimpleDiagnosticPosition, getEndPosition, int32_t, $EndPosTable*)},
		{"getPreferredPosition", "()I", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SimpleDiagnosticPosition, getPreferredPosition, int32_t)},
		{"getStartPosition", "()I", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SimpleDiagnosticPosition, getStartPosition, int32_t)},
		{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SimpleDiagnosticPosition, getTree, $JCTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$SimpleDiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "SimpleDiagnosticPosition", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.JCDiagnostic$SimpleDiagnosticPosition",
		"java.lang.Object",
		"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$SimpleDiagnosticPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$SimpleDiagnosticPosition);
	});
	return class$;
}

$Class* JCDiagnostic$SimpleDiagnosticPosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com