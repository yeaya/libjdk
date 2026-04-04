#include <com/sun/tools/javac/comp/Resolve$AccessError.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef HIDDEN
#undef PCK

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
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

void Resolve$AccessError::init$($Resolve* this$0, $Env* env, $Type* site, $Symbol* sym) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InvalidSymbolError::init$(this$0, $Kinds$Kind::HIDDEN, sym, "access error"_s);
	$set(this, env, env);
	$set(this, site, site);
}

bool Resolve$AccessError::exists() {
	return false;
}

$JCDiagnostic* Resolve$AccessError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	if ($nc(this->sym)->name == $nc(this->this$0->names)->init && !$equals(this->sym->owner, $nc(site)->tsym)) {
		$init($Kinds$Kind);
		return $$new($Resolve$SymbolNotFoundError, this->this$0, $Kinds$Kind::ABSENT_MTH)->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes);
	} else {
		bool var$0 = (this->sym->flags() & 1) != 0;
		if (var$0 || (this->env != nullptr && this->site != nullptr && !this->this$0->isAccessible(this->env, this->site))) {
			$init($Kinds$Kind);
			if ($nc($nc(this->sym)->owner)->kind == $Kinds$Kind::PCK) {
				$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
				$var($String, var$2, "not.def.access.package.cant.access"_s);
				return $nc(this->this$0->diags)->create(dkind, var$1, pos, var$2, $$new($ObjectArray, {
					this->sym,
					$(this->sym->location()),
					$(this->this$0->inaccessiblePackageReason(this->env, $(this->sym->packge())))
				}));
			} else {
				bool var$3 = this->sym->packge() != $nc(this->this$0->syms)->rootPackage;
				if (var$3 && !this->this$0->symbolPackageVisible(this->env, this->sym)) {
					$var($DiagnosticSource, var$4, $nc(this->this$0->log)->currentSource());
					$var($String, var$5, "not.def.access.class.intf.cant.access.reason"_s);
					return $nc(this->this$0->diags)->create(dkind, var$4, pos, var$5, $$new($ObjectArray, {
						this->sym,
						$($nc(this->sym)->location()),
						$($$nc($nc(this->sym)->location())->packge()),
						$(this->this$0->inaccessiblePackageReason(this->env, $($nc(this->sym)->packge())))
					}));
				} else {
					$var($DiagnosticSource, var$6, $nc(this->this$0->log)->currentSource());
					$var($String, var$7, "not.def.access.class.intf.cant.access"_s);
					return $nc(this->this$0->diags)->create(dkind, var$6, pos, var$7, $$new($ObjectArray, {
						this->sym,
						$($nc(this->sym)->location())
					}));
				}
			}
		} else if (($nc(this->sym)->flags() & (2 | 4)) != 0) {
			$var($DiagnosticSource, var$8, $nc(this->this$0->log)->currentSource());
			$var($String, var$9, "report.access"_s);
			return $nc(this->this$0->diags)->create(dkind, var$8, pos, var$9, $$new($ObjectArray, {
				this->sym,
				$($Flags::asFlagSet($nc(this->sym)->flags() & (2 | 4))),
				$($nc(this->sym)->location())
			}));
		} else {
			$var($DiagnosticSource, var$10, $nc(this->this$0->log)->currentSource());
			$var($String, var$11, "not.def.public.cant.access"_s);
			return $nc(this->this$0->diags)->create(dkind, var$10, pos, var$11, $$new($ObjectArray, {
				this->sym,
				$($nc(this->sym)->location())
			}));
		}
	}
}

$String* Resolve$AccessError::toString($Type* type) {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(type);
	if (type != nullptr) {
		sb->append("[tsym:"_s)->append(type->tsym);
		if (type->tsym != nullptr) {
			sb->append("packge:"_s)->append($(type->tsym->packge()));
		}
		sb->append("]"_s);
	}
	return sb->toString();
}

Resolve$AccessError::Resolve$AccessError() {
}

$Class* Resolve$AccessError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AccessError, this$0)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(Resolve$AccessError, env)},
		{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Resolve$AccessError, site)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", 0, $method(Resolve$AccessError, init$, void, $Resolve*, $Env*, $Type*, $Symbol*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$AccessError, exists, bool)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$AccessError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"toString", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Resolve$AccessError, toString, $String*, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$AccessError", "com.sun.tools.javac.comp.Resolve", "AccessError", 0},
		{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$AccessError",
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
	$loadClass(Resolve$AccessError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$AccessError));
	});
	return class$;
}

$Class* Resolve$AccessError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com