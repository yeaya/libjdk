#include <com/sun/source/util/TreePath$1.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreePath = ::com::sun::source::util::TreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TreePath$1::init$($TreePath* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool TreePath$1::hasNext() {
	return this->next$ != nullptr;
}

$Object* TreePath$1::next() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Tree, t, $nc(this->next$)->leaf);
	$set(this, next$, this->next$->parent);
	return t;
}

void TreePath$1::remove() {
	$throwNew($UnsupportedOperationException);
}

TreePath$1::TreePath$1() {
}

$Class* TreePath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/source/util/TreePath;", nullptr, $FINAL | $SYNTHETIC, $field(TreePath$1, this$0)},
		{"next", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(TreePath$1, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/TreePath;)V", nullptr, 0, $method(TreePath$1, init$, void, $TreePath*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(TreePath$1, hasNext, bool)},
		{"next", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC, $virtualMethod(TreePath$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TreePath$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.TreePath",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.TreePath$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.TreePath$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/source/tree/Tree;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.util.TreePath"
	};
	$loadClass(TreePath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePath$1);
	});
	return class$;
}

$Class* TreePath$1::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com