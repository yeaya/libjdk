#include <com/sun/tools/javac/comp/TransPatterns$2.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BindingDeclarationFenceBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingDeclarationFenceBindingContext;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void TransPatterns$2::init$($TransPatterns* this$0, $ListBuffer* val$statements) {
	$set(this, this$0, this$0);
	$set(this, val$statements, val$statements);
	$TransPatterns$BindingDeclarationFenceBindingContext::init$(this$0);
}

bool TransPatterns$2::tryPrepend($Symbol$BindingSymbol* binding, $JCTree$JCVariableDecl* var) {
	$nc(this->hoistedVarMap)->put(binding, $nc(var)->sym);
	$nc(this->val$statements)->append(var);
	return true;
}

TransPatterns$2::TransPatterns$2() {
}

$Class* TransPatterns$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$2, this$0)},
		{"val$statements", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$2, val$statements)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(TransPatterns$2, init$, void, $TransPatterns*, $ListBuffer*)},
		{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0, $virtualMethod(TransPatterns$2, tryPrepend, bool, $Symbol$BindingSymbol*, $JCTree$JCVariableDecl*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.TransPatterns",
		"visitBlock",
		"(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.TransPatterns$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingDeclarationFenceBindingContext", $PRIVATE},
		{"com.sun.tools.javac.tree.JCTree$JCBlock", "com.sun.tools.javac.tree.JCTree", "JCBlock", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.TransPatterns$2",
		"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.TransPatterns"
	};
	$loadClass(TransPatterns$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransPatterns$2);
	});
	return class$;
}

$Class* TransPatterns$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com