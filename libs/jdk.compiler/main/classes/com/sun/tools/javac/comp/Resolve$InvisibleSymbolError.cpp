#include <com/sun/tools/javac/comp/Resolve$InvisibleSymbolError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef HIDDEN
#undef PCK
#undef SELECT

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$InvisibleSymbolError::init$($Resolve* this$0, $Env* env, bool suppressError, $Symbol* sym) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InvalidSymbolError::init$(this$0, $Kinds$Kind::HIDDEN, sym, "invisible class error"_s);
	$set(this, env, env);
	this->suppressError = suppressError;
	$set(this, name, $nc(sym)->name);
}

$JCDiagnostic* Resolve$InvisibleSymbolError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos$renamed, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, pos, pos$renamed);
	if (this->suppressError) {
		return nullptr;
	}
	$init($Kinds$Kind);
	if ($nc(this->sym)->kind == $Kinds$Kind::PCK) {
		$var($JCDiagnostic, details, this->this$0->inaccessiblePackageReason(this->env, $(this->sym->packge())));
		return $nc(this->this$0->diags)->create(dkind, $($nc(this->this$0->log)->currentSource()), pos, "package.not.visible"_s, $$new($ObjectArray, {
			this->sym,
			details
		}));
	}
	$var($JCDiagnostic, details, this->this$0->inaccessiblePackageReason(this->env, $($nc(this->sym)->packge())));
	if ($nc(pos)->getTree() != nullptr) {
		$var($Symbol, o, this->sym);
		$var($JCTree, tree, pos->getTree());
		$init($JCTree$Tag);
		while ($nc(o)->kind != $Kinds$Kind::PCK && $nc(tree)->hasTag($JCTree$Tag::SELECT)) {
			$assign(o, o->owner);
			$assign(tree, $cast($JCTree$JCFieldAccess, tree)->selected);
		}
		if ($nc(o)->kind == $Kinds$Kind::PCK) {
			$assign(pos, $nc(tree)->pos());
			return $nc(this->this$0->diags)->create(dkind, $($nc(this->this$0->log)->currentSource()), pos, "package.not.visible"_s, $$new($ObjectArray, {
				o,
				details
			}));
		}
	}
	$var($DiagnosticSource, var$0, $nc(this->this$0->log)->currentSource());
	$var($String, var$1, "not.def.access.package.cant.access"_s);
	return $nc(this->this$0->diags)->create(dkind, var$0, pos, var$1, $$new($ObjectArray, {
		this->sym,
		$($nc(this->sym)->packge()),
		details
	}));
}

Resolve$InvisibleSymbolError::Resolve$InvisibleSymbolError() {
}

$Class* Resolve$InvisibleSymbolError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InvisibleSymbolError, this$0)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE | $FINAL, $field(Resolve$InvisibleSymbolError, env)},
		{"suppressError", "Z", nullptr, $PRIVATE | $FINAL, $field(Resolve$InvisibleSymbolError, suppressError)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Env;ZLcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;ZLcom/sun/tools/javac/code/Symbol;)V", 0, $method(Resolve$InvisibleSymbolError, init$, void, $Resolve*, $Env*, bool, $Symbol*)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$InvisibleSymbolError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$InvisibleSymbolError", "com.sun.tools.javac.comp.Resolve", "InvisibleSymbolError", 0},
		{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$InvisibleSymbolError",
		"com.sun.tools.javac.comp.Resolve$InvalidSymbolError",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$InvisibleSymbolError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$InvisibleSymbolError));
	});
	return class$;
}

$Class* Resolve$InvisibleSymbolError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com