#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier$ParentIterator.h>
#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

void PathAndPackageVerifier$ParentIterator::init$($Path* initial) {
	$set(this, next$, initial);
}

bool PathAndPackageVerifier$ParentIterator::hasNext() {
	return this->next$ != nullptr;
}

$Object* PathAndPackageVerifier$ParentIterator::next() {
	$useLocalObjectStack();
	$var($String, tmp, $$nc($nc(this->next$)->getFileName())->toString());
	$set(this, next$, this->next$->getParent());
	return $of(tmp);
}

PathAndPackageVerifier$ParentIterator::PathAndPackageVerifier$ParentIterator() {
}

$Class* PathAndPackageVerifier$ParentIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Ljava/nio/file/Path;", nullptr, 0, $field(PathAndPackageVerifier$ParentIterator, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(PathAndPackageVerifier$ParentIterator, init$, void, $Path*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PathAndPackageVerifier$ParentIterator, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PathAndPackageVerifier$ParentIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator", "com.sun.tools.sjavac.comp.PathAndPackageVerifier", "ParentIterator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.comp.PathAndPackageVerifier"
	};
	$loadClass(PathAndPackageVerifier$ParentIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathAndPackageVerifier$ParentIterator);
	});
	return class$;
}

$Class* PathAndPackageVerifier$ParentIterator::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com