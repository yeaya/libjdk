#include <com/sun/tools/javac/comp/Lower$ClassMap.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$ClassMap::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Lower$ClassMap::visitClassDef($JCTree$JCClassDecl* tree) {
	$nc(this->this$0->classdefs)->put($nc(tree)->sym, tree);
	$TreeScanner::visitClassDef(tree);
}

Lower$ClassMap::Lower$ClassMap() {
}

$Class* Lower$ClassMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$ClassMap, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(Lower$ClassMap, init$, void, $Lower*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Lower$ClassMap, visitClassDef, void, $JCTree$JCClassDecl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$ClassMap", "com.sun.tools.javac.comp.Lower", "ClassMap", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$ClassMap",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$ClassMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$ClassMap);
	});
	return class$;
}

$Class* Lower$ClassMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com