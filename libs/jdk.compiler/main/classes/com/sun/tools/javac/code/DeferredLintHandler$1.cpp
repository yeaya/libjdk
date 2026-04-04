#include <com/sun/tools/javac/code/DeferredLintHandler$1.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void DeferredLintHandler$1::init$() {
}

$JCTree* DeferredLintHandler$1::getTree() {
	$Assert::error();
	return nullptr;
}

int32_t DeferredLintHandler$1::getStartPosition() {
	$Assert::error();
	return -1;
}

int32_t DeferredLintHandler$1::getPreferredPosition() {
	$Assert::error();
	return -1;
}

int32_t DeferredLintHandler$1::getEndPosition($EndPosTable* endPosTable) {
	$Assert::error();
	return -1;
}

DeferredLintHandler$1::DeferredLintHandler$1() {
}

$Class* DeferredLintHandler$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredLintHandler$1, init$, void)},
		{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler$1, getEndPosition, int32_t, $EndPosTable*)},
		{"getPreferredPosition", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler$1, getPreferredPosition, int32_t)},
		{"getStartPosition", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler$1, getStartPosition, int32_t)},
		{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler$1, getTree, $JCTree*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.DeferredLintHandler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredLintHandler$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredLintHandler$1",
		"java.lang.Object",
		"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredLintHandler"
	};
	$loadClass(DeferredLintHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredLintHandler$1);
	});
	return class$;
}

$Class* DeferredLintHandler$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com