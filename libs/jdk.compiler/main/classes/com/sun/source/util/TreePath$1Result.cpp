#include <com/sun/source/util/TreePath$1Result.h>
#include <com/sun/source/util/TreePath.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $TreePath = ::com::sun::source::util::TreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TreePath$1Result::init$($TreePath* path) {
	$Error::init$();
	$set(this, path, path);
}

TreePath$1Result::TreePath$1Result() {
}

TreePath$1Result::TreePath$1Result(const TreePath$1Result& e) : $Error(e) {
}

void TreePath$1Result::throw$() {
	throw *this;
}

$Class* TreePath$1Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TreePath$1Result, serialVersionUID)},
		{"path", "Lcom/sun/source/util/TreePath;", nullptr, 0, $field(TreePath$1Result, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/TreePath;)V", nullptr, 0, $method(TreePath$1Result, init$, void, $TreePath*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.TreePath",
		"getPath",
		"(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.TreePath$1Result", nullptr, "Result", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.TreePath$1Result",
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
		"com.sun.source.util.TreePath"
	};
	$loadClass(TreePath$1Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePath$1Result);
	});
	return class$;
}

$Class* TreePath$1Result::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com