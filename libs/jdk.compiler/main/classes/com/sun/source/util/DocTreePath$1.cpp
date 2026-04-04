#include <com/sun/source/util/DocTreePath$1.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreePath.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
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

void DocTreePath$1::init$($DocTreePath* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool DocTreePath$1::hasNext() {
	return this->next$ != nullptr;
}

$Object* DocTreePath$1::next() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($DocTree, t, $nc(this->next$)->leaf);
	$set(this, next$, this->next$->parent);
	return t;
}

void DocTreePath$1::remove() {
	$throwNew($UnsupportedOperationException);
}

DocTreePath$1::DocTreePath$1() {
}

$Class* DocTreePath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/source/util/DocTreePath;", nullptr, $FINAL | $SYNTHETIC, $field(DocTreePath$1, this$0)},
		{"next", "Lcom/sun/source/util/DocTreePath;", nullptr, $PRIVATE, $field(DocTreePath$1, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/DocTreePath;)V", nullptr, 0, $method(DocTreePath$1, init$, void, $DocTreePath*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(DocTreePath$1, hasNext, bool)},
		{"next", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC, $virtualMethod(DocTreePath$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(DocTreePath$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.DocTreePath",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.DocTreePath$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.DocTreePath$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/source/doctree/DocTree;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.util.DocTreePath"
	};
	$loadClass(DocTreePath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTreePath$1);
	});
	return class$;
}

$Class* DocTreePath$1::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com