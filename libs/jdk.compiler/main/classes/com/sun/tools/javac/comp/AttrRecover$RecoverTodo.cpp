#include <com/sun/tools/javac/comp/AttrRecover$RecoverTodo.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void AttrRecover$RecoverTodo::init$($JCTree* tree, $Type* site, $Symbol* errSym, $Symbol* candSym, $Env* env, $Attr$ResultInfo* resultInfo) {
	$set(this, tree, tree);
	$set(this, site, site);
	$set(this, errSym, errSym);
	$set(this, candSym, candSym);
	$set(this, env, env);
	$set(this, resultInfo, resultInfo);
}

AttrRecover$RecoverTodo::AttrRecover$RecoverTodo() {
}

$Class* AttrRecover$RecoverTodo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, tree)},
		{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, site)},
		{"errSym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, errSym)},
		{"candSym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, candSym)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, env)},
		{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoverTodo, resultInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", $PUBLIC, $method(AttrRecover$RecoverTodo, init$, void, $JCTree*, $Type*, $Symbol*, $Symbol*, $Env*, $Attr$ResultInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.AttrRecover$RecoverTodo", "com.sun.tools.javac.comp.AttrRecover", "RecoverTodo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.AttrRecover$RecoverTodo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.AttrRecover"
	};
	$loadClass(AttrRecover$RecoverTodo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttrRecover$RecoverTodo);
	});
	return class$;
}

$Class* AttrRecover$RecoverTodo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com