#include <com/sun/tools/javac/comp/AttrContextEnv.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void AttrContextEnv::init$($JCTree* tree, $AttrContext* info) {
	$Env::init$(tree, info);
}

AttrContextEnv::AttrContextEnv() {
}

$Class* AttrContextEnv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/AttrContext;)V", nullptr, $PUBLIC, $method(AttrContextEnv, init$, void, $JCTree*, $AttrContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.AttrContextEnv",
		"com.sun.tools.javac.comp.Env",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;"
	};
	$loadClass(AttrContextEnv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttrContextEnv);
	});
	return class$;
}

$Class* AttrContextEnv::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com