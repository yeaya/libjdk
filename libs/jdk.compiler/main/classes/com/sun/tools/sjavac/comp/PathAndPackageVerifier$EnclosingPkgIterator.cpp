#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier$EnclosingPkgIterator.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

void PathAndPackageVerifier$EnclosingPkgIterator::init$($JCTree* initial) {
	$set(this, next$, initial);
}

bool PathAndPackageVerifier$EnclosingPkgIterator::hasNext() {
	return this->next$ != nullptr;
}

$Object* PathAndPackageVerifier$EnclosingPkgIterator::next() {
	$useLocalObjectStack();
	$var($Name, name, nullptr);
	{
		$var($JCTree$JCIdent, identNext, nullptr);
		$var($JCTree, patt5067$temp, this->next$);
		bool var$0 = $instanceOf($JCTree$JCIdent, patt5067$temp);
		if (var$0) {
			$assign(identNext, $cast($JCTree$JCIdent, patt5067$temp));
			var$0 = true;
		}
		if (var$0) {
			$assign(name, $nc(identNext)->name);
			$set(this, next$, nullptr);
		} else {
			$var($JCTree$JCFieldAccess, fa, $cast($JCTree$JCFieldAccess, this->next$));
			$assign(name, $nc(fa)->name);
			$set(this, next$, fa->selected);
		}
	}
	return $of($nc(name)->toString());
}

PathAndPackageVerifier$EnclosingPkgIterator::PathAndPackageVerifier$EnclosingPkgIterator() {
}

$Class* PathAndPackageVerifier$EnclosingPkgIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(PathAndPackageVerifier$EnclosingPkgIterator, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(PathAndPackageVerifier$EnclosingPkgIterator, init$, void, $JCTree*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PathAndPackageVerifier$EnclosingPkgIterator, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PathAndPackageVerifier$EnclosingPkgIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.comp.PathAndPackageVerifier$EnclosingPkgIterator", "com.sun.tools.sjavac.comp.PathAndPackageVerifier", "EnclosingPkgIterator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.comp.PathAndPackageVerifier$EnclosingPkgIterator",
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
	$loadClass(PathAndPackageVerifier$EnclosingPkgIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathAndPackageVerifier$EnclosingPkgIterator);
	});
	return class$;
}

$Class* PathAndPackageVerifier$EnclosingPkgIterator::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com