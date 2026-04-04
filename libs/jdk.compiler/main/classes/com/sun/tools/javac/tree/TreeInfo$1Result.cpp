#include <com/sun/tools/javac/tree/TreeInfo$1Result.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void TreeInfo$1Result::init$($List* path) {
	$Error::init$();
	$set(this, path, path);
}

TreeInfo$1Result::TreeInfo$1Result() {
}

TreeInfo$1Result::TreeInfo$1Result(const TreeInfo$1Result& e) : $Error(e) {
}

void TreeInfo$1Result::throw$() {
	throw *this;
}

$Class* TreeInfo$1Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TreeInfo$1Result, serialVersionUID)},
		{"path", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(TreeInfo$1Result, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0, $method(TreeInfo$1Result, init$, void, $List*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.TreeInfo",
		"pathFor",
		"(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.TreeInfo$1Result", nullptr, "Result", 0},
		{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.tree.TreeInfo$1Result",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.TreeInfo"
	};
	$loadClass(TreeInfo$1Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeInfo$1Result);
	});
	return class$;
}

$Class* TreeInfo$1Result::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com