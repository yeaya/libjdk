#include <com/sun/tools/javac/comp/Modules$UsesProvidesVisitor.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/code/Directive$ProvidesDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Directive$UsesDirective.h>
#include <com/sun/tools/javac/code/Directive.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules$PackageNameFinder.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef MANDATED
#undef MTH
#undef PUBLIC
#undef SOURCE
#undef TYP

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$ProvidesDirective = ::com::sun::tools::javac::code::Directive$ProvidesDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Directive$UsesDirective = ::com::sun::tools::javac::code::Directive$UsesDirective;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0 : public $Consumer {
	$class(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Modules$UsesProvidesVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->lambda$visitModuleDef$0($cast($JCTree$JCDirective, t));
	}
	Modules$UsesProvidesVisitor* inst$ = nullptr;
};
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Modules$UsesProvidesVisitor;)V", nullptr, $PUBLIC, $method(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, init$, void, Modules$UsesProvidesVisitor*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0);
	});
	return class$;
}
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0::class$ = nullptr;

class Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1 : public $Predicate {
	$class(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Modules$UsesProvidesVisitor::lambda$factoryMethod$1($cast($Symbol, sym));
	}
};
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1);
	});
	return class$;
}
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1::class$ = nullptr;

class Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2 : public $Function {
	$class(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return Modules$UsesProvidesVisitor::lambda$visitProvides$2($cast($Symbol$ClassSymbol, s));
	}
};
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2);
	});
	return class$;
}
$Class* Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2::class$ = nullptr;

void Modules$UsesProvidesVisitor::init$($Modules* this$0, $Symbol$ModuleSymbol* msym, $Env* env) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
	$set(this, allUses, $new($HashSet));
	$set(this, allProvides, $new($HashMap));
	$set(this, directiveToTreeMap, $new($HashMap));
	$set(this, msym, msym);
	$set(this, env, env);
}

void Modules$UsesProvidesVisitor::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$useLocalObjectStack();
	$set($nc(this->msym), directives, $List::nil());
	$set(this->msym, provides, $List::nil());
	$set(this->msym, uses, $List::nil());
	$nc($nc(tree)->directives)->forEach($$new(Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0, this));
	$set(this->msym, directives, $nc(this->msym->directives)->reverse());
	$set(this->msym, provides, $nc(this->msym->provides)->reverse());
	$set(this->msym, uses, $nc(this->msym->uses)->reverse());
	bool var$0 = $nc(this->msym->requires)->nonEmpty();
	$init($Directive$RequiresFlag);
	if (var$0 && $nc($nc(($cast($Directive$RequiresDirective, this->msym->requires->head)))->flags)->contains($Directive$RequiresFlag::MANDATED)) {
		$set(this->msym, directives, $nc(this->msym->directives)->prepend($cast($Directive, $nc(this->msym->requires)->head)));
	}
	$set(this->msym, directives, $nc(this->msym->directives)->appendList($($List::from($$cast($Iterable, $nc(this->this$0->addReads)->getOrDefault(this->msym, $($Collections::emptySet())))))));
	checkForCorrectness();
}

void Modules$UsesProvidesVisitor::visitExports($JCTree$JCExports* tree) {
	$useLocalObjectStack();
	$var($Iterable, packageContent, $$nc($nc($nc($nc(tree)->directive)->packge)->members())->getSymbols());
	$var($List, filesToCheck, $List::nil());
	bool packageNotEmpty = false;
	{
		$var($Iterator, i$, $nc(packageContent)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind != $Kinds$Kind::TYP) {
					continue;
				}
				$var($Symbol$ClassSymbol, csym, $cast($Symbol$ClassSymbol, sym));
				bool var$0 = $nc(sym->completer)->isTerminal();
				$init($JavaFileObject$Kind);
				if (var$0 || $nc(csym->classfile)->getKind() == $JavaFileObject$Kind::CLASS) {
					packageNotEmpty = true;
					$assign(filesToCheck, $List::nil());
					break;
				}
				if ($nc(csym->classfile)->getKind() == $JavaFileObject$Kind::SOURCE) {
					$assign(filesToCheck, $nc(filesToCheck)->prepend(csym->classfile));
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(filesToCheck)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, jfo, $cast($JavaFileObject, i$->next()));
			if ($nc(this->this$0->findPackageInFile)->findPackageNameOf(jfo) == $nc(tree->directive)->packge->fullname) {
				packageNotEmpty = true;
				break;
			}
		}
	}
	if (!packageNotEmpty) {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree->qualid)->pos());
		$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::PackageEmptyOrNotFound($nc(tree->directive)->packge)));
	}
	$set($nc(this->msym), directives, $nc($nc(this->msym)->directives)->prepend(tree->directive));
}

void Modules$UsesProvidesVisitor::visitOpens($JCTree$JCOpens* tree) {
	$nc(this->this$0->chk)->checkPackageExistsForOpens($nc(tree)->qualid, $nc($nc(tree)->directive)->packge);
	$set($nc(this->msym), directives, $nc($nc(this->msym)->directives)->prepend(tree->directive));
}

$Symbol$MethodSymbol* Modules$UsesProvidesVisitor::noArgsConstructor($Symbol$ClassSymbol* tsym) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($$nc($nc(tsym)->members())->getSymbolsByName($nc(this->this$0->names)->init))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Symbol, sym, $cast($Symbol, i$->next()));
		{
			$var($Symbol$MethodSymbol, mSym, $cast($Symbol$MethodSymbol, sym));
			if ($$nc($nc(mSym)->params())->isEmpty()) {
				return mSym;
			}
		}
	}
	return nullptr;
}

$Symbol$MethodSymbol* Modules$UsesProvidesVisitor::factoryMethod($Symbol$ClassSymbol* tsym) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($$nc($nc(tsym)->members())->getSymbolsByName($nc(this->this$0->names)->provider, $$new(Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1)))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Symbol, sym, $cast($Symbol, i$->next()));
		{
			$var($Symbol$MethodSymbol, mSym, $cast($Symbol$MethodSymbol, sym));
			bool var$1 = $nc(mSym)->isStatic();
			bool var$0 = var$1 && (mSym->flags() & $Flags::PUBLIC) != 0;
			if (var$0 && $$nc(mSym->params())->isEmpty()) {
				return mSym;
			}
		}
	}
	return nullptr;
}

void Modules$UsesProvidesVisitor::visitProvides($JCTree$JCProvides* tree) {
	$useLocalObjectStack();
	$var($Type, st, $nc(this->this$0->attr)->attribType($nc(tree)->serviceName, this->env, $nc(this->this$0->syms)->objectType));
	$var($Symbol$ClassSymbol, service, $cast($Symbol$ClassSymbol, $nc(st)->tsym));
	if (this->allProvides->containsKey(service)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->serviceName)->pos());
		$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::RepeatedProvidesForService(service)));
	}
	$var($ListBuffer, impls, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(tree->implNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, implName, $cast($JCTree$JCExpression, i$->next()));
			{
				$var($Type, it, nullptr);
				bool prevVisitingServiceImplementation = $nc(($cast($AttrContext, $nc(this->env)->info)))->visitingServiceImplementation;
				$var($Throwable, var$1, nullptr);
				try {
					($cast($AttrContext, this->env->info))->visitingServiceImplementation = true;
					$assign(it, this->this$0->attr->attribType(implName, this->env, this->this$0->syms->objectType));
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$nc(($cast($AttrContext, this->env->info)))->visitingServiceImplementation = prevVisitingServiceImplementation;
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
				$var($Symbol$ClassSymbol, impl, $cast($Symbol$ClassSymbol, $nc(it)->tsym));
				if (($nc(impl)->flags_field & 1) == 0) {
					$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(implName)->pos());
					$nc(this->this$0->log)->error(var$3, $($CompilerProperties$Errors::NotDefPublic(impl, $(impl->location()))));
				}
				$var($Symbol$MethodSymbol, factory, factoryMethod(impl));
				if (factory != nullptr) {
					$var($Type, returnType, $nc(factory->type)->getReturnType());
					if (!$nc(this->this$0->types)->isSubtype(returnType, st)) {
						$init($CompilerProperties$Errors);
						$nc(this->this$0->log)->error($($nc(implName)->pos()), $CompilerProperties$Errors::ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface);
					}
				} else if (!$nc(this->this$0->types)->isSubtype(it, st)) {
					$init($CompilerProperties$Errors);
					$nc(this->this$0->log)->error($($nc(implName)->pos()), $CompilerProperties$Errors::ServiceImplementationMustBeSubtypeOfServiceInterface);
				} else if ((impl->flags() & 0x0400) != 0) {
					$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(implName)->pos());
					$nc(this->this$0->log)->error(var$4, $($CompilerProperties$Errors::ServiceImplementationIsAbstract(impl)));
				} else if (impl->isInner()) {
					$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(implName)->pos());
					$nc(this->this$0->log)->error(var$5, $($CompilerProperties$Errors::ServiceImplementationIsInner(impl)));
				} else {
					$var($Symbol$MethodSymbol, constr, noArgsConstructor(impl));
					if (constr == nullptr) {
						$var($JCDiagnostic$DiagnosticPosition, var$6, $nc(implName)->pos());
						$nc(this->this$0->log)->error(var$6, $($CompilerProperties$Errors::ServiceImplementationDoesntHaveANoArgsConstructor(impl)));
					} else if ((constr->flags() & 1) == 0) {
						$var($JCDiagnostic$DiagnosticPosition, var$7, $nc(implName)->pos());
						$nc(this->this$0->log)->error(var$7, $($CompilerProperties$Errors::ServiceImplementationNoArgsConstructorNotPublic(impl)));
					}
				}
				$init($TypeTag);
				if (it->hasTag($TypeTag::CLASS)) {
					if ($$sure($Set, this->allProvides->computeIfAbsent(service, $$new(Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2)))->add(impl)) {
						impls->append(impl);
					} else {
						$var($JCDiagnostic$DiagnosticPosition, var$8, $nc(implName)->pos());
						$nc(this->this$0->log)->error(var$8, $($CompilerProperties$Errors::DuplicateProvides(service, impl)));
					}
				}
			}
		}
	}
	$init($TypeTag);
	bool var$9 = st->hasTag($TypeTag::CLASS);
	if (var$9 && !impls->isEmpty()) {
		$var($Directive$ProvidesDirective, d, $new($Directive$ProvidesDirective, service, $(impls->toList())));
		$set($nc(this->msym), provides, $nc($nc(this->msym)->provides)->prepend(d));
		$set(this->msym, directives, $nc(this->msym->directives)->prepend(d));
		$nc(this->directiveToTreeMap)->put(d, tree);
	}
}

void Modules$UsesProvidesVisitor::visitRequires($JCTree$JCRequires* tree) {
	$useLocalObjectStack();
	if ($nc(tree)->directive != nullptr && $$nc(this->this$0->allModules())->contains(tree->directive->module)) {
		$nc(this->this$0->chk)->checkDeprecated($($nc(tree->moduleName)->pos()), this->msym, tree->directive->module);
		this->this$0->chk->checkPreview($($nc(tree->moduleName)->pos()), this->msym, $nc(tree->directive)->module);
		this->this$0->chk->checkModuleRequires($($nc(tree->moduleName)->pos()), tree->directive);
		$set($nc(this->msym), directives, $nc($nc(this->msym)->directives)->prepend(tree->directive));
	}
}

void Modules$UsesProvidesVisitor::visitUses($JCTree$JCUses* tree) {
	$useLocalObjectStack();
	$var($Type, st, $nc(this->this$0->attr)->attribType($nc(tree)->qualid, this->env, $nc(this->this$0->syms)->objectType));
	$var($Symbol, sym, $TreeInfo::symbol(tree->qualid));
	if (($nc(sym)->flags() & 0x4000) != 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->qualid)->pos());
		$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ServiceDefinitionIsEnum($nc(st)->tsym)));
	} else {
		$init($TypeTag);
		if ($nc(st)->hasTag($TypeTag::CLASS)) {
			$var($Symbol$ClassSymbol, service, $cast($Symbol$ClassSymbol, st->tsym));
			if (this->allUses->add(service)) {
				$var($Directive$UsesDirective, d, $new($Directive$UsesDirective, service));
				$set($nc(this->msym), uses, $nc($nc(this->msym)->uses)->prepend(d));
				$set(this->msym, directives, $nc(this->msym->directives)->prepend(d));
			} else {
				$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
				$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::DuplicateUses(service)));
			}
		}
	}
}

void Modules$UsesProvidesVisitor::checkForCorrectness() {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc($nc(this->msym)->provides)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Directive$ProvidesDirective, provides, $cast($Directive$ProvidesDirective, i$->next()));
		{
			$var($JCTree$JCProvides, tree, $cast($JCTree$JCProvides, $nc(this->directiveToTreeMap)->get(provides)));
			{
				$var($Iterator, i$, $nc($nc(provides)->impls)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol$ClassSymbol, impl, $cast($Symbol$ClassSymbol, i$->next()));
					{
						$var($Symbol$PackageSymbol, implementationDefiningPackage, $nc(impl)->packge());
						if ($nc(implementationDefiningPackage)->modle != this->msym) {
							$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
							$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ServiceImplementationNotInRightModule(implementationDefiningPackage->modle)));
						}
						$var($Symbol$PackageSymbol, interfaceDeclaringPackage, $nc(provides->service)->packge());
						bool isInterfaceDeclaredInCurrentModule = $nc(interfaceDeclaringPackage)->modle == this->msym;
						bool isInterfaceExportedFromAReadableModule = $equals($nc(this->msym->visiblePackages)->get(interfaceDeclaringPackage->fullname), interfaceDeclaringPackage);
						if (isInterfaceDeclaredInCurrentModule && !isInterfaceExportedFromAReadableModule) {
							bool warn = true;
							{
								$var($Iterator, i$, $nc(this->msym->exports)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Directive$ExportsDirective, export$, $cast($Directive$ExportsDirective, i$->next()));
									if (interfaceDeclaringPackage == $nc(export$)->packge) {
										warn = false;
										break;
									}
								}
							}
							if (warn) {
								$var($Iterator, i$, $nc(this->msym->uses)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Directive$UsesDirective, uses, $cast($Directive$UsesDirective, i$->next()));
									if (provides->service == $nc(uses)->service) {
										warn = false;
										break;
									}
								}
							}
							if (warn) {
								$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
								$nc(this->this$0->log)->warning(var$1, $($CompilerProperties$Warnings::ServiceProvidedButNotExportedOrUsed(provides->service)));
							}
						}
					}
				}
			}
		}
	}
}

$Set* Modules$UsesProvidesVisitor::lambda$visitProvides$2($Symbol$ClassSymbol* s) {
	$init(Modules$UsesProvidesVisitor);
	return $new($HashSet);
}

bool Modules$UsesProvidesVisitor::lambda$factoryMethod$1($Symbol* sym) {
	$init(Modules$UsesProvidesVisitor);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::MTH;
}

void Modules$UsesProvidesVisitor::lambda$visitModuleDef$0($JCTree$JCDirective* t) {
	$nc(t)->accept(this);
}

Modules$UsesProvidesVisitor::Modules$UsesProvidesVisitor() {
}

$Class* Modules$UsesProvidesVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0")) {
			return Modules$UsesProvidesVisitor$$Lambda$lambda$visitModuleDef$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1")) {
			return Modules$UsesProvidesVisitor$$Lambda$lambda$factoryMethod$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2")) {
			return Modules$UsesProvidesVisitor$$Lambda$lambda$visitProvides$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$UsesProvidesVisitor, this$0)},
		{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $FINAL, $field(Modules$UsesProvidesVisitor, msym)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE | $FINAL, $field(Modules$UsesProvidesVisitor, env)},
		{"allUses", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE | $FINAL, $field(Modules$UsesProvidesVisitor, allUses)},
		{"allProvides", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;>;", $PRIVATE | $FINAL, $field(Modules$UsesProvidesVisitor, allProvides)},
		{"directiveToTreeMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Directive$ProvidesDirective;Lcom/sun/tools/javac/tree/JCTree$JCProvides;>;", 0, $field(Modules$UsesProvidesVisitor, directiveToTreeMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Modules;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC, $method(Modules$UsesProvidesVisitor, init$, void, $Modules*, $Symbol$ModuleSymbol*, $Env*)},
		{"checkForCorrectness", "()V", nullptr, $PRIVATE, $method(Modules$UsesProvidesVisitor, checkForCorrectness, void)},
		{"factoryMethod", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $virtualMethod(Modules$UsesProvidesVisitor, factoryMethod, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*)},
		{"lambda$factoryMethod$1", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules$UsesProvidesVisitor, lambda$factoryMethod$1, bool, $Symbol*)},
		{"lambda$visitModuleDef$0", "(Lcom/sun/tools/javac/tree/JCTree$JCDirective;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Modules$UsesProvidesVisitor, lambda$visitModuleDef$0, void, $JCTree$JCDirective*)},
		{"lambda$visitProvides$2", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules$UsesProvidesVisitor, lambda$visitProvides$2, $Set*, $Symbol$ClassSymbol*)},
		{"noArgsConstructor", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $virtualMethod(Modules$UsesProvidesVisitor, noArgsConstructor, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*)},
		{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitExports, void, $JCTree$JCExports*)},
		{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitModuleDef, void, $JCTree$JCModuleDecl*)},
		{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitOpens, void, $JCTree$JCOpens*)},
		{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitProvides, void, $JCTree$JCProvides*)},
		{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitRequires, void, $JCTree$JCRequires*)},
		{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC, $virtualMethod(Modules$UsesProvidesVisitor, visitUses, void, $JCTree$JCUses*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor", "com.sun.tools.javac.comp.Modules", "UsesProvidesVisitor", 0},
		{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor",
		"com.sun.tools.javac.tree.JCTree$Visitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Modules"
	};
	$loadClass(Modules$UsesProvidesVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$UsesProvidesVisitor);
	});
	return class$;
}

$Class* Modules$UsesProvidesVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com