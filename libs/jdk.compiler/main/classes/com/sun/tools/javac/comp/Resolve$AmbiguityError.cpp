#include <com/sun/tools/javac/comp/Resolve$AmbiguityError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
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
#include <java/util/Optional.h>
#include <jcpp.h>

#undef AMBIGUOUS
#undef TYP

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$AmbiguityError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AmbiguityError, this$0)},
	{"ambiguousSyms", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Resolve$AmbiguityError, ambiguousSyms)},
	{}
};

$MethodInfo _Resolve$AmbiguityError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Resolve$AmbiguityError, init$, void, $Resolve*, $Symbol*, $Symbol*)},
	{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED, $virtualMethod(Resolve$AmbiguityError, access, $Symbol*, $Name*, $Symbol$TypeSymbol*)},
	{"addAmbiguousSymbol", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Resolve$AmbiguityError;", nullptr, 0, $virtualMethod(Resolve$AmbiguityError, addAmbiguousSymbol, Resolve$AmbiguityError*, $Symbol*)},
	{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$AmbiguityError, exists, bool)},
	{"flatten", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $method(Resolve$AmbiguityError, flatten, $List*, $Symbol*)},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$AmbiguityError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
	{"mergeAbstracts", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve$AmbiguityError, mergeAbstracts, $Symbol*, $Type*)},
	{}
};

$InnerClassInfo _Resolve$AmbiguityError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$AmbiguityError", "com.sun.tools.javac.comp.Resolve", "AmbiguityError", 0},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$AmbiguityError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$AmbiguityError",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$AmbiguityError_FieldInfo_,
	_Resolve$AmbiguityError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$AmbiguityError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$AmbiguityError($Class* clazz) {
	return $of($alloc(Resolve$AmbiguityError));
}

bool Resolve$AmbiguityError::exists() {
	return true;
}

void Resolve$AmbiguityError::init$($Resolve* this$0, $Symbol* sym1, $Symbol* sym2) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$ResolveError::init$(this$0, $Kinds$Kind::AMBIGUOUS, "ambiguity error"_s);
	$set(this, ambiguousSyms, $List::nil());
	$set(this, ambiguousSyms, $nc($(flatten(sym2)))->appendList($(flatten(sym1))));
}

$List* Resolve$AmbiguityError::flatten($Symbol* sym) {
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::AMBIGUOUS) {
		return $nc(($cast(Resolve$AmbiguityError, $(sym->baseSymbol()))))->ambiguousSyms;
	} else {
		return $List::of(sym);
	}
}

Resolve$AmbiguityError* Resolve$AmbiguityError::addAmbiguousSymbol($Symbol* s) {
	$set(this, ambiguousSyms, $nc(this->ambiguousSyms)->prepend(s));
	return this;
}

$JCDiagnostic* Resolve$AmbiguityError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($List, diagSyms, $nc(this->ambiguousSyms)->reverse());
	$var($Symbol, s1, $cast($Symbol, $nc(diagSyms)->head));
	$var($Symbol, s2, $cast($Symbol, $nc(diagSyms->tail)->head));
	$var($Name, sname, $nc(s1)->name);
	if (sname == $nc(this->this$0->names)->init) {
		$assign(sname, $nc(s1->owner)->name);
	}
	$var($JCDiagnostic$DiagnosticType, var$0, dkind);
	$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
	$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
	$var($String, var$3, "ref.ambiguous"_s);
	return $nc(this->this$0->diags)->create(var$0, var$1, var$2, var$3, $$new($ObjectArray, {
		$of(sname),
		$($of($Kinds::kindName(s1))),
		$of(s1),
		$($of(s1->location(site, this->this$0->types))),
		$($of($Kinds::kindName(s2))),
		$of(s2),
		$($of($nc(s2)->location(site, this->this$0->types)))
	}));
}

$Symbol* Resolve$AmbiguityError::mergeAbstracts($Type* site) {
	$useLocalCurrentObjectStackCache();
	$var($List, ambiguousInOrder, $nc(this->ambiguousSyms)->reverse());
	return $cast($Symbol, $nc($($nc(this->this$0->types)->mergeAbstracts(ambiguousInOrder, site, true)))->orElse(this));
}

$Symbol* Resolve$AmbiguityError::access($Name* name, $Symbol$TypeSymbol* location) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, firstAmbiguity, $cast($Symbol, $nc(this->ambiguousSyms)->last()));
	$init($Kinds$Kind);
	return $nc(firstAmbiguity)->kind == $Kinds$Kind::TYP ? static_cast<$Symbol*>($nc($($nc(this->this$0->types)->createErrorType(name, location, $nc(firstAmbiguity)->type)))->tsym) : firstAmbiguity;
}

Resolve$AmbiguityError::Resolve$AmbiguityError() {
}

$Class* Resolve$AmbiguityError::load$($String* name, bool initialize) {
	$loadClass(Resolve$AmbiguityError, name, initialize, &_Resolve$AmbiguityError_ClassInfo_, allocate$Resolve$AmbiguityError);
	return class$;
}

$Class* Resolve$AmbiguityError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com