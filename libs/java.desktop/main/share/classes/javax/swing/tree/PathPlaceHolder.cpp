#include <javax/swing/tree/PathPlaceHolder.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

void PathPlaceHolder::init$($TreePath* path, bool isNew) {
	$set(this, path, path);
	this->isNew = isNew;
}

PathPlaceHolder::PathPlaceHolder() {
}

$Class* PathPlaceHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isNew", "Z", nullptr, $PROTECTED, $field(PathPlaceHolder, isNew)},
		{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(PathPlaceHolder, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, 0, $method(PathPlaceHolder, init$, void, $TreePath*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.tree.PathPlaceHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PathPlaceHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathPlaceHolder);
	});
	return class$;
}

$Class* PathPlaceHolder::class$ = nullptr;

		} // tree
	} // swing
} // javax