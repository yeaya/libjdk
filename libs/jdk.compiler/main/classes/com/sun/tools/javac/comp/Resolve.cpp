#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/api/Formattable$LocalizedString.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UnionClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$1.h>
#include <com/sun/tools/javac/comp/Resolve$10.h>
#include <com/sun/tools/javac/comp/Resolve$11.h>
#include <com/sun/tools/javac/comp/Resolve$12.h>
#include <com/sun/tools/javac/comp/Resolve$13.h>
#include <com/sun/tools/javac/comp/Resolve$14.h>
#include <com/sun/tools/javac/comp/Resolve$15.h>
#include <com/sun/tools/javac/comp/Resolve$16.h>
#include <com/sun/tools/javac/comp/Resolve$17.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$2.h>
#include <com/sun/tools/javac/comp/Resolve$3.h>
#include <com/sun/tools/javac/comp/Resolve$4.h>
#include <com/sun/tools/javac/comp/Resolve$5.h>
#include <com/sun/tools/javac/comp/Resolve$6.h>
#include <com/sun/tools/javac/comp/Resolve$7.h>
#include <com/sun/tools/javac/comp/Resolve$8.h>
#include <com/sun/tools/javac/comp/Resolve$9.h>
#include <com/sun/tools/javac/comp/Resolve$AccessError.h>
#include <com/sun/tools/javac/comp/Resolve$AmbiguityError.h>
#include <com/sun/tools/javac/comp/Resolve$ArrayConstructorReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$BadClassFileError.h>
#include <com/sun/tools/javac/comp/Resolve$BadRestrictedTypeError.h>
#include <com/sun/tools/javac/comp/Resolve$BadVarargsMethod.h>
#include <com/sun/tools/javac/comp/Resolve$ConstructorReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>
#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase.h>
#include <com/sun/tools/javac/comp/Resolve$InvisibleSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$LogResolveHelper.h>
#include <com/sun/tools/javac/comp/Resolve$LookupFilter.h>
#include <com/sun/tools/javac/comp/Resolve$LookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$RecoveryLoadClass.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$StaticError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
#include <com/sun/tools/javac/comp/Resolve$VerboseResolutionMode.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/FatalError.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef ABSENT_TYP
#undef ABSENT_VAR
#undef ABSTRACT_OK
#undef AMBIGUOUS
#undef APPLICABLE
#undef ARRAY
#undef BASIC
#undef BOX
#undef CHECK
#undef CLASS
#undef DEFAULT_OK
#undef DEFERRED
#undef ERR
#undef ERROR
#undef FAILURE
#undef FORALL
#undef FRAGMENT
#undef FUNCTIONAL_INTERFACE_MOST_SPECIFIC
#undef HIDDEN
#undef IMPORT
#undef INAPPLICABLE
#undef INTERNAL
#undef LOCAL_VARIABLE_TYPE_INFERENCE
#undef MODULES
#undef MTH
#undef OBJECT_INIT
#undef PCK
#undef POST_APPLICABILITY_VARARGS_ACCESS_CHECK
#undef PREDEF
#undef RECORDS
#undef REFERENCE
#undef RESOLVE_ERROR
#undef SELECT
#undef SPECULATIVE
#undef STATIC
#undef SUCCESS
#undef SWITCH_EXPRESSION
#undef TYP
#undef TYPEVAR
#undef UNCHECKED
#undef VAL
#undef VAL_MTH
#undef VAR
#undef VARARITY
#undef WRONG_MTH
#undef WRONG_MTHS
#undef XDIAGS

using $ScopeArray = $Array<::com::sun::tools::javac::code::Scope>;
using $Resolve$InterfaceLookupPhaseArray = $Array<::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase>;
using $ListArray = $Array<::com::sun::tools::javac::util::List>;
using $Formattable$LocalizedString = ::com::sun::tools::javac::api::Formattable$LocalizedString;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UnionClassType = ::com::sun::tools::javac::code::Type$UnionClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $AttrRecover = ::com::sun::tools::javac::comp::AttrRecover;
using $Check = ::com::sun::tools::javac::comp::Check;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve$1 = ::com::sun::tools::javac::comp::Resolve$1;
using $Resolve$10 = ::com::sun::tools::javac::comp::Resolve$10;
using $Resolve$11 = ::com::sun::tools::javac::comp::Resolve$11;
using $Resolve$12 = ::com::sun::tools::javac::comp::Resolve$12;
using $Resolve$13 = ::com::sun::tools::javac::comp::Resolve$13;
using $Resolve$14 = ::com::sun::tools::javac::comp::Resolve$14;
using $Resolve$15 = ::com::sun::tools::javac::comp::Resolve$15;
using $Resolve$16 = ::com::sun::tools::javac::comp::Resolve$16;
using $Resolve$17 = ::com::sun::tools::javac::comp::Resolve$17;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$2 = ::com::sun::tools::javac::comp::Resolve$2;
using $Resolve$3 = ::com::sun::tools::javac::comp::Resolve$3;
using $Resolve$4 = ::com::sun::tools::javac::comp::Resolve$4;
using $Resolve$5 = ::com::sun::tools::javac::comp::Resolve$5;
using $Resolve$6 = ::com::sun::tools::javac::comp::Resolve$6;
using $Resolve$7 = ::com::sun::tools::javac::comp::Resolve$7;
using $Resolve$8 = ::com::sun::tools::javac::comp::Resolve$8;
using $Resolve$9 = ::com::sun::tools::javac::comp::Resolve$9;
using $Resolve$AccessError = ::com::sun::tools::javac::comp::Resolve$AccessError;
using $Resolve$AmbiguityError = ::com::sun::tools::javac::comp::Resolve$AmbiguityError;
using $Resolve$ArrayConstructorReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ArrayConstructorReferenceLookupHelper;
using $Resolve$BadClassFileError = ::com::sun::tools::javac::comp::Resolve$BadClassFileError;
using $Resolve$BadRestrictedTypeError = ::com::sun::tools::javac::comp::Resolve$BadRestrictedTypeError;
using $Resolve$BadVarargsMethod = ::com::sun::tools::javac::comp::Resolve$BadVarargsMethod;
using $Resolve$ConstructorReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ConstructorReferenceLookupHelper;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InapplicableSymbolsError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError;
using $Resolve$InterfaceLookupPhase = ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase;
using $Resolve$InvisibleSymbolError = ::com::sun::tools::javac::comp::Resolve$InvisibleSymbolError;
using $Resolve$LogResolveHelper = ::com::sun::tools::javac::comp::Resolve$LogResolveHelper;
using $Resolve$LookupFilter = ::com::sun::tools::javac::comp::Resolve$LookupFilter;
using $Resolve$LookupHelper = ::com::sun::tools::javac::comp::Resolve$LookupHelper;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodReferenceCheck = ::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck;
using $Resolve$MethodReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$RecoveryLoadClass = ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass;
using $Resolve$ReferenceChooser = ::com::sun::tools::javac::comp::Resolve$ReferenceChooser;
using $Resolve$ReferenceLookupHelper = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper;
using $Resolve$ReferenceLookupResult = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$StaticError = ::com::sun::tools::javac::comp::Resolve$StaticError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
using $Resolve$VerboseResolutionMode = ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $FatalError = ::com::sun::tools::javac::util::FatalError;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$MultilineDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic$MultilineDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$$Lambda$lambda$new$2 : public $Resolve$RecoveryLoadClass {
	$class(Resolve$$Lambda$lambda$new$2, $NO_CLASS_INIT, $Resolve$RecoveryLoadClass)
public:
	void init$() {
	}
	virtual $Symbol* loadClass($Env* env, $Name* name) override {
		return Resolve::lambda$new$2(env, name);
	}
};
$Class* Resolve$$Lambda$lambda$new$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$new$2, init$, void)},
		{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$new$2, loadClass, $Symbol*, $Env*, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$2",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
		nullptr,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$new$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$new$2);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$new$2::class$ = nullptr;

class Resolve$$Lambda$lambda$new$4$1 : public $Resolve$RecoveryLoadClass {
	$class(Resolve$$Lambda$lambda$new$4$1, $NO_CLASS_INIT, $Resolve$RecoveryLoadClass)
public:
	void init$(Resolve* inst) {
		$set(this, inst$, inst);
	}
	virtual $Symbol* loadClass($Env* env, $Name* name) override {
		return $nc(inst$)->lambda$new$4(env, name);
	}
	Resolve* inst$ = nullptr;
};
$Class* Resolve$$Lambda$lambda$new$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$new$4$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$new$4$1, init$, void, Resolve*)},
		{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$new$4$1, loadClass, $Symbol*, $Env*, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$4$1",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$new$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$new$4$1);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$new$4$1::class$ = nullptr;

class Resolve$$Lambda$lambda$new$6$2 : public $Resolve$RecoveryLoadClass {
	$class(Resolve$$Lambda$lambda$new$6$2, $NO_CLASS_INIT, $Resolve$RecoveryLoadClass)
public:
	void init$(Resolve* inst) {
		$set(this, inst$, inst);
	}
	virtual $Symbol* loadClass($Env* env, $Name* name) override {
		return $nc(inst$)->lambda$new$6(env, name);
	}
	Resolve* inst$ = nullptr;
};
$Class* Resolve$$Lambda$lambda$new$6$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$new$6$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$new$6$2, init$, void, Resolve*)},
		{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$new$6$2, loadClass, $Symbol*, $Env*, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$6$2",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$new$6$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$new$6$2);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$new$6$2::class$ = nullptr;

class Resolve$$Lambda$lambda$isAccessible$0$3 : public $Predicate {
	$class(Resolve$$Lambda$lambda$isAccessible$0$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Resolve* inst, $Env* env, bool checkInner) {
		$set(this, inst$, inst);
		$set(this, env, env);
		this->checkInner = checkInner;
	}
	virtual bool test(Object$* alternative) override {
		return $nc(inst$)->lambda$isAccessible$0(env, checkInner, $cast($Type, alternative));
	}
	Resolve* inst$ = nullptr;
	$Env* env = nullptr;
	bool checkInner = false;
};
$Class* Resolve$$Lambda$lambda$isAccessible$0$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$isAccessible$0$3, inst$)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$isAccessible$0$3, env)},
		{"checkInner", "Z", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$isAccessible$0$3, checkInner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Env;Z)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$isAccessible$0$3, init$, void, Resolve*, $Env*, bool)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$isAccessible$0$3, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$isAccessible$0$3",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$isAccessible$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$isAccessible$0$3);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$isAccessible$0$3::class$ = nullptr;

class Resolve$$Lambda$lambda$superclasses$1$4 : public $Iterable {
	$class(Resolve$$Lambda$lambda$superclasses$1$4, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Resolve* inst, $Type* intype) {
		$set(this, inst$, inst);
		$set(this, intype, intype);
	}
	virtual $Iterator* iterator() override {
		return $nc(inst$)->lambda$superclasses$1(intype);
	}
	Resolve* inst$ = nullptr;
	$Type* intype = nullptr;
};
$Class* Resolve$$Lambda$lambda$superclasses$1$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$superclasses$1$4, inst$)},
		{"intype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$superclasses$1$4, intype)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$superclasses$1$4, init$, void, Resolve*, $Type*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$superclasses$1$4, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$superclasses$1$4",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$superclasses$1$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$superclasses$1$4);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$superclasses$1$4::class$ = nullptr;

class Resolve$$Lambda$getPackagesForName$5 : public $Function {
	$class(Resolve$$Lambda$getPackagesForName$5, $NO_CLASS_INIT, $Function)
public:
	void init$($Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* candidate) override {
		return $nc(inst$)->getPackagesForName($cast($Name, candidate));
	}
	$Symtab* inst$ = nullptr;
};
$Class* Resolve$$Lambda$getPackagesForName$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$getPackagesForName$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$getPackagesForName$5, init$, void, $Symtab*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$getPackagesForName$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$getPackagesForName$5",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$getPackagesForName$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$getPackagesForName$5);
	});
	return class$;
}
$Class* Resolve$$Lambda$getPackagesForName$5::class$ = nullptr;

class Resolve$$Lambda$enterPackage$6 : public $BiFunction {
	$class(Resolve$$Lambda$enterPackage$6, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Symtab* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* currModule, Object$* fullname) override {
		return $of($nc(inst$)->enterPackage($cast($Symbol$ModuleSymbol, currModule), $cast($Name, fullname)));
	}
	$Symtab* inst$ = nullptr;
};
$Class* Resolve$$Lambda$enterPackage$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$$Lambda$enterPackage$6, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$enterPackage$6, init$, void, $Symtab*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$enterPackage$6, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$enterPackage$6",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$enterPackage$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$enterPackage$6);
	});
	return class$;
}
$Class* Resolve$$Lambda$enterPackage$6::class$ = nullptr;

class Resolve$$Lambda$lambda$lookupPackage$7$7 : public $Predicate {
	$class(Resolve$$Lambda$lambda$lookupPackage$7$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		return Resolve::lambda$lookupPackage$7($cast($Symbol$PackageSymbol, sym));
	}
};
$Class* Resolve$$Lambda$lambda$lookupPackage$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$lookupPackage$7$7, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$lookupPackage$7$7, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$lookupPackage$7$7",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$lookupPackage$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$lookupPackage$7$7);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$lookupPackage$7$7::class$ = nullptr;

class Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8 : public $Predicate {
	$class(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol$PackageSymbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* e) override {
		return Resolve::lambda$inaccessiblePackageReason$8(sym, $cast($Directive$ExportsDirective, e));
	}
	$Symbol$PackageSymbol* sym = nullptr;
};
$Class* Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, init$, void, $Symbol$PackageSymbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8::class$ = nullptr;

class Resolve$$Lambda$lambda$new$3$9 : public $Predicate {
	$class(Resolve$$Lambda$lambda$new$3$9, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Name* name) {
		$set(this, name, name);
	}
	virtual bool test(Object$* sym) override {
		return Resolve::lambda$new$3(name, $cast($Symbol, sym));
	}
	$Name* name = nullptr;
};
$Class* Resolve$$Lambda$lambda$new$3$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Resolve$$Lambda$lambda$new$3$9, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(Resolve$$Lambda$lambda$new$3$9, init$, void, $Name*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$$Lambda$lambda$new$3$9, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$3$9",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$$Lambda$lambda$new$3$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$$Lambda$lambda$new$3$9);
	});
	return class$;
}
$Class* Resolve$$Lambda$lambda$new$3$9::class$ = nullptr;

$Context$Key* Resolve::resolveKey = nullptr;

void Resolve::init$($Context* context) {
	$useLocalObjectStack();
	$set(this, accessibilityChecker, $new($Resolve$1, this));
	$set(this, nilMethodCheck, $new($Resolve$2, this));
	$set(this, arityMethodCheck, $new($Resolve$3, this));
	$set(this, resolveMethodCheck, $new($Resolve$4, this));
	$set(this, noteWarner, $new($Warner));
	$set(this, noRecovery, $new(Resolve$$Lambda$lambda$new$2));
	$set(this, doRecoveryLoadClass, $new($Resolve$6, this));
	$set(this, namedImportScopeRecovery, $new(Resolve$$Lambda$lambda$new$4$1, this));
	$set(this, starImportScopeRecovery, $new(Resolve$$Lambda$lambda$new$6$2, this));
	$set(this, basicLogResolveHelper, $new($Resolve$7, this));
	$set(this, silentLogResolveHelper, $new($Resolve$8, this));
	$set(this, methodLogResolveHelper, $new($Resolve$9, this));
	$set(this, basicReferenceChooser, $new($Resolve$16, this));
	$set(this, structuralReferenceChooser, $new($Resolve$17, this));
	$set(this, noArgs, $new($Formattable$LocalizedString, "compiler.misc.no.args"_s));
	$init($Resolve$MethodResolutionPhase);
	$set(this, methodResolutionSteps, $List::of($Resolve$MethodResolutionPhase::BASIC, $Resolve$MethodResolutionPhase::BOX, $Resolve$MethodResolutionPhase::VARARITY));
	$set(this, currentResolutionContext, nullptr);
	$nc(context)->put(Resolve::resolveKey, this);
	$set(this, syms, $Symtab::instance(context));
	$init($Kinds$Kind);
	$set(this, varNotFound, $new($Resolve$SymbolNotFoundError, this, $Kinds$Kind::ABSENT_VAR));
	$set(this, methodNotFound, $new($Resolve$SymbolNotFoundError, this, $Kinds$Kind::ABSENT_MTH));
	$set(this, typeNotFound, $new($Resolve$SymbolNotFoundError, this, $Kinds$Kind::ABSENT_TYP));
	$set(this, referenceNotFound, $Resolve$ReferenceLookupResult::error(this->methodNotFound));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, attrRecover, $AttrRecover::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, infer, $Infer::instance(context));
	$set(this, finder, $ClassFinder::instance(context));
	$set(this, moduleFinder, $ModuleFinder::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$var($Preview, preview, $Preview::instance(context));
	$Source* source = $Source::instance(context);
	$var($Options, options, $Options::instance(context));
	$init($Option);
	bool var$0 = $nc(options)->isSet($Option::XDIAGS, "compact"_s);
	if (!var$0) {
		bool var$1 = options->isUnset($Option::XDIAGS);
		var$0 = var$1 && options->isUnset("rawDiagnostics"_s);
	}
	this->compactMethodDiags = var$0;
	$set(this, verboseResolutionMode, $Resolve$VerboseResolutionMode::getVerboseResolutionMode(options));
	$Target* target = $Target::instance(context);
	$init($Source$Feature);
	this->allowFunctionalInterfaceMostSpecific = $Source$Feature::FUNCTIONAL_INTERFACE_MOST_SPECIFIC->allowedInSource(source);
	this->allowLocalVariableTypeInference = $Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE->allowedInSource(source);
	this->allowYieldStatement = $Source$Feature::SWITCH_EXPRESSION->allowedInSource(source);
	this->checkVarargsAccessAfterResolution = $Source$Feature::POST_APPLICABILITY_VARARGS_ACCESS_CHECK->allowedInSource(source);
	$set(this, polymorphicSignatureScope, $Scope$WriteableScope::create($nc(this->syms)->noSymbol));
	this->allowModules = $Source$Feature::MODULES->allowedInSource(source);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(source);
	this->dumpMethodReferenceSearchResults$ = options->isSet("debug.dumpMethodReferenceSearchResults"_s);
}

Resolve* Resolve::instance($Context* context) {
	$init(Resolve);
	$var(Resolve, instance, $cast(Resolve, $nc(context)->get(Resolve::resolveKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Resolve, context));
	}
	return instance;
}

$Symbol* Resolve::bestOf($Symbol* s1, $Symbol* s2) {
	$init(Resolve);
	return $nc($nc(s1)->kind)->betterThan($nc(s2)->kind) ? s1 : s2;
}

void Resolve::reportVerboseResolutionDiagnostic($JCDiagnostic$DiagnosticPosition* dpos, $Name* name, $Type* site, $List* argtypes, $List* typeargtypes, $Symbol* bestSoFar) {
	$useLocalObjectStack();
	bool success = !$nc($nc(bestSoFar)->kind)->isResolutionError();
	$init($Resolve$VerboseResolutionMode);
	if (success && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::SUCCESS)) {
		return;
	} else if (!success && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::FAILURE)) {
		return;
	}
	if (bestSoFar->name == $nc(this->names)->init && $equals(bestSoFar->owner, $nc($nc(this->syms)->objectType)->tsym) && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::OBJECT_INIT)) {
		return;
	} else if (site == $nc($nc(this->syms)->predefClass)->type && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::PREDEF)) {
		return;
	} else if ($nc(this->currentResolutionContext)->internalResolution && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::INTERNAL)) {
		return;
	}
	int32_t pos = 0;
	int32_t mostSpecificPos = -1;
	$var($ListBuffer, subDiags, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($nc(this->currentResolutionContext)->candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Resolve$MethodResolutionContext$Candidate, c, $cast($Resolve$MethodResolutionContext$Candidate, i$->next()));
			{
				bool var$1 = $nc(this->currentResolutionContext)->step != $nc(c)->step;
				if (!var$1) {
					bool var$2 = c->isApplicable();
					var$1 = var$2 && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::APPLICABLE);
				}
				bool var$0 = var$1;
				if (!var$0) {
					bool var$3 = !c->isApplicable();
					var$0 = var$3 && !$nc(this->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::INAPPLICABLE);
				}
				if (var$0) {
					continue;
				} else {
					subDiags->append(c->isApplicable() ? $(getVerboseApplicableCandidateDiag(pos, c->sym, c->mtype)) : $(getVerboseInapplicableCandidateDiag(pos, c->sym, c->details)));
					if (c->sym == bestSoFar) {
						mostSpecificPos = pos;
					}
					++pos;
				}
			}
		}
	}
	$var($String, key, success ? "verbose.resolve.multi"_s : "verbose.resolve.multi.1"_s);
	$init($DeferredAttr$AttrMode);
	$var($List, argtypes2, $nc(argtypes)->map($$new($DeferredAttr$RecoveryDeferredTypeMap, $nc(this->deferredAttr), $DeferredAttr$AttrMode::SPECULATIVE, bestSoFar, $nc(this->currentResolutionContext)->step)));
	$var($DiagnosticSource, var$4, $nc(this->log)->currentSource());
	$var($JCDiagnostic, main, $nc(this->diags)->note(var$4, dpos, key, $$new($ObjectArray, {
		name,
		$nc(site)->tsym,
		$($Integer::valueOf(mostSpecificPos)),
		$nc(this->currentResolutionContext)->step,
		$(methodArguments(argtypes2)),
		$(methodArguments(typeargtypes))
	})));
	$var($JCDiagnostic, d, $new($JCDiagnostic$MultilineDiagnostic, main, $(subDiags->toList())));
	$nc(this->log)->report(d);
}

$JCDiagnostic* Resolve::getVerboseApplicableCandidateDiag(int32_t pos, $Symbol* sym, $Type* inst) {
	$useLocalObjectStack();
	$var($JCDiagnostic, subDiag, nullptr);
	$init($TypeTag);
	if ($nc($nc(sym)->type)->hasTag($TypeTag::FORALL)) {
		$assign(subDiag, $nc(this->diags)->fragment($($CompilerProperties$Fragments::PartialInstSig(inst))));
	}
	$var($String, key, subDiag == nullptr ? "applicable.method.found"_s : "applicable.method.found.1"_s);
	return $nc(this->diags)->fragment(key, $$new($ObjectArray, {
		$($Integer::valueOf(pos)),
		sym,
		subDiag
	}));
}

$JCDiagnostic* Resolve::getVerboseInapplicableCandidateDiag(int32_t pos, $Symbol* sym, $JCDiagnostic* subDiag) {
	return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotApplicableMethodFound(pos, sym, subDiag)));
}

bool Resolve::isStatic($Env* env) {
	$init(Resolve);
	return $nc(env)->outer != nullptr && $nc(($cast($AttrContext, env->info)))->staticLevel > $nc(($cast($AttrContext, env->outer->info)))->staticLevel;
}

bool Resolve::isInitializer($Env* env) {
	$init(Resolve);
	$var($Symbol, owner, $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner);
	bool var$0 = $nc(owner)->isConstructor();
	if (!var$0) {
		$init($Kinds$Kind);
		bool var$1 = $nc(owner->owner)->kind == $Kinds$Kind::TYP && (owner->kind == $Kinds$Kind::VAR || owner->kind == $Kinds$Kind::MTH && (owner->flags() & 0x00100000) != 0);
		var$0 = var$1 && (owner->flags() & 8) == 0;
	}
	return var$0;
}

bool Resolve::isAccessible($Env* env, $Symbol$TypeSymbol* c) {
	return isAccessible(env, c, false);
}

bool Resolve::isAccessible($Env* env, $Symbol$TypeSymbol* c, bool checkInner) {
	$useLocalObjectStack();
	if ($nc(env)->enclMethod != nullptr && ($nc(env->enclMethod->mods)->flags & 0x20000000) != 0) {
		return true;
	}
	if ($nc(($cast($AttrContext, env->info)))->visitingServiceImplementation && $nc(env->toplevel)->modle == $nc($($nc(c)->packge()))->modle) {
		return true;
	}
	bool isAccessible = false;
	switch ((int16_t)($nc(c)->flags() & 7)) {
	case 2:
		isAccessible = $nc($nc(env->enclClass)->sym)->outermostClass() == $nc(c->owner)->outermostClass();
		break;
	case 0:
		isAccessible = $equals($nc(env->toplevel)->packge, c->owner) || env->toplevel->packge == c->packge();
		break;
	default:
		isAccessible = true;
		break;
	case 1:
		if (this->allowModules) {
			$var($Symbol$ModuleSymbol, currModule, $nc(env->toplevel)->modle);
			$nc(currModule)->complete();
			$var($Symbol$PackageSymbol, p, c->packge());
			bool var$0 = currModule == $nc(p)->modle || $equals($nc(currModule->visiblePackages)->get(p->fullname), p) || p == $nc(this->syms)->rootPackage;
			isAccessible = var$0 || (p->modle == $nc(this->syms)->unnamedModule && $nc(currModule->readModules)->contains(p->modle));
		} else {
			isAccessible = true;
		}
		break;
	case 4:
		{
			bool var$1 = $equals($nc(env->toplevel)->packge, c->owner) || env->toplevel->packge == c->packge();
			isAccessible = var$1 || isInnerSubClass($nc(env->enclClass)->sym, c->owner);
			break;
		}
	}
	$init($Type);
	return (checkInner == false || $equals($nc(c->type)->getEnclosingType(), $Type::noType)) ? isAccessible : isAccessible && this->isAccessible(env, $($nc(c->type)->getEnclosingType()), checkInner);
}

bool Resolve::isInnerSubClass($Symbol$ClassSymbol* c$renamed, $Symbol* base) {
	$var($Symbol$ClassSymbol, c, c$renamed);
	while (c != nullptr && !c->isSubClass(base, this->types)) {
		$assign(c, $nc(c->owner)->enclClass());
	}
	return c != nullptr;
}

bool Resolve::isAccessible($Env* env, $Type* t) {
	return isAccessible(env, t, false);
}

bool Resolve::isAccessible($Env* env, $Type* t, bool checkInner) {
	$useLocalObjectStack();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::ARRAY)) {
		return isAccessible(env, $($nc(this->types)->cvarUpperBound($($nc(this->types)->elemtype(t)))));
	} else if (t->isUnion()) {
		return $$nc($StreamSupport::stream($($$nc($cast($Type$UnionClassType, t)->getAlternativeTypes())->spliterator()), false))->allMatch($$new(Resolve$$Lambda$lambda$isAccessible$0$3, this, env, checkInner));
	} else {
		return isAccessible(env, t->tsym, checkInner);
	}
}

bool Resolve::isAccessible($Env* env, $Type* site, $Symbol* sym) {
	return isAccessible(env, site, sym, false);
}

bool Resolve::isAccessible($Env* env, $Type* site, $Symbol* sym, bool checkInner) {
	if ($nc(sym)->name == $nc(this->names)->init && !$equals(sym->owner, $nc(site)->tsym)) {
		return false;
	}
	if ($nc(env)->enclMethod != nullptr && ($nc(env->enclMethod->mods)->flags & 0x20000000) != 0) {
		return true;
	}
	if ($nc(($cast($AttrContext, env->info)))->visitingServiceImplementation && $nc(env->toplevel)->modle == $nc($(sym->packge()))->modle) {
		return true;
	}
	switch ((int16_t)(sym->flags() & 7)) {
	case 2:
		{
			bool var$1 = $equals($nc(env->enclClass)->sym, sym->owner);
			if (!var$1) {
				var$1 = $nc(env->enclClass->sym)->outermostClass() == $nc(sym->owner)->outermostClass();
			}
			bool var$0 = var$1;
			return var$0 && sym->isInheritedIn($nc(site)->tsym, this->types);
		}
	case 0:
		{
			bool var$4 = $equals($nc(env->toplevel)->packge, $nc(sym->owner)->owner) || env->toplevel->packge == sym->packge();
			bool var$3 = var$4 && isAccessible(env, site, checkInner);
			bool var$2 = var$3 && sym->isInheritedIn($nc(site)->tsym, this->types);
			return var$2 && notOverriddenIn(site, sym);
		}
	case 4:
		{
			bool var$8 = $equals($nc(env->toplevel)->packge, $nc(sym->owner)->owner) || env->toplevel->packge == sym->packge();
			bool var$7 = var$8 || isProtectedAccessible(sym, $nc(env->enclClass)->sym, site);
			$init($Kinds$Kind);
			bool var$6 = var$7 || $nc(($cast($AttrContext, env->info)))->selectSuper && (sym->flags() & 8) == 0 && sym->kind != $Kinds$Kind::TYP;
			bool var$5 = var$6 && isAccessible(env, site, checkInner);
			return var$5 && notOverriddenIn(site, sym);
		}
	default:
		{
			bool var$9 = isAccessible(env, site, checkInner);
			return var$9 && notOverriddenIn(site, sym);
		}
	}
}

bool Resolve::notOverriddenIn($Type* site, $Symbol* sym) {
	$useLocalObjectStack();
	$init($Kinds$Kind);
	bool var$0 = $nc(sym)->kind != $Kinds$Kind::MTH || sym->isConstructor();
	if (var$0 || sym->isStatic()) {
		return true;
	} else {
		$var($Symbol, s2, $cast($Symbol$MethodSymbol, sym)->implementation($nc(site)->tsym, this->types, true));
		bool var$1 = s2 == nullptr || s2 == sym || sym->owner == s2->owner;
		if (!var$1) {
			$var($Type, var$2, $nc(this->types)->memberType(site, s2));
			var$1 = !$nc(this->types)->isSubSignature(var$2, $(this->types->memberType(site, sym)));
		}
		return (var$1);
	}
}

bool Resolve::isProtectedAccessible($Symbol* sym, $Symbol$ClassSymbol* c$renamed, $Type* site) {
	$useLocalObjectStack();
	$var($Symbol$ClassSymbol, c, c$renamed);
	$init($TypeTag);
	$var($Type, newSite, $nc(site)->hasTag($TypeTag::TYPEVAR) ? site->getUpperBound() : site);
	while (true) {
		bool var$0 = c != nullptr;
		if (var$0) {
			bool var$2 = c->isSubClass($nc(sym)->owner, this->types);
			bool var$1 = var$2 && (c->flags() & 0x0200) == 0;
			if (var$1) {
				$init($Kinds$Kind);
				bool var$3 = (sym->flags() & 8) != 0 || sym->kind == $Kinds$Kind::TYP;
				var$1 = var$3 || $nc($nc(newSite)->tsym)->isSubClass(c, this->types);
			}
			var$0 = !(var$1);
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(c, $nc($nc(c)->owner)->enclClass());
		}
	}
	return c != nullptr;
}

void Resolve::checkAccessibleType($Env* env, $Type* t) {
	$nc(this->accessibilityChecker)->visit(t, env);
}

$Type* Resolve::rawInstantiate($Env* env, $Type* site, $Symbol* m, $Attr$ResultInfo* resultInfo, $List* argtypes, $List* typeargtypes$renamed, bool allowBoxing, bool useVarargs, $Warner* warn) {
	$useLocalObjectStack();
	$var($List, typeargtypes, typeargtypes$renamed);
	$var($Type, mt, $nc(this->types)->memberType(site, m));
	$var($List, tvars, $List::nil());
	if (typeargtypes == nullptr) {
		$assign(typeargtypes, $List::nil());
	}
	$init($TypeTag);
	bool var$0 = !$nc(mt)->hasTag($TypeTag::FORALL);
	if (var$0 && $nc(typeargtypes)->nonEmpty()) {
	} else {
		bool var$1 = mt->hasTag($TypeTag::FORALL);
		if (var$1 && $nc(typeargtypes)->nonEmpty()) {
			$var($Type$ForAll, pmt, $cast($Type$ForAll, mt));
			int32_t var$2 = typeargtypes->length();
			if (var$2 != $nc(pmt->tvars)->length()) {
				$throwNew($Resolve$InapplicableMethodException, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::WrongNumberTypeArgs($($Integer::toString($nc(pmt->tvars)->length())))))));
			}
			$var($List, formals, pmt->tvars);
			$var($List, actuals, typeargtypes);
			while (true) {
				bool var$3 = $nc(formals)->nonEmpty();
				if (!(var$3 && $nc(actuals)->nonEmpty())) {
					break;
				}
				{
					$var($List, bounds, $nc(this->types)->subst($($nc(this->types)->getBounds($cast($Type$TypeVar, formals->head))), pmt->tvars, typeargtypes));
					for (; $nc(bounds)->nonEmpty(); $assign(bounds, bounds->tail)) {
						if (!$nc(this->types)->isSubtypeUnchecked($cast($Type, $nc(actuals)->head), $cast($Type, bounds->head), warn)) {
							$throwNew($Resolve$InapplicableMethodException, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::ExplicitParamDoNotConformToBounds($cast($Type, actuals->head), bounds)))));
						}
					}
					$assign(formals, formals->tail);
					$assign(actuals, $nc(actuals)->tail);
				}
			}
			$assign(mt, $nc(this->types)->subst(pmt->qtype, pmt->tvars, typeargtypes));
		} else if (mt->hasTag($TypeTag::FORALL)) {
			$var($Type$ForAll, pmt, $cast($Type$ForAll, mt));
			$var($List, tvars1, $nc(this->types)->newInstances(pmt->tvars));
			$assign(tvars, $nc(tvars)->appendList(tvars1));
			$assign(mt, $nc(this->types)->subst(pmt->qtype, pmt->tvars, tvars1));
		}
	}
	bool instNeeded = $nc(tvars)->tail != nullptr;
	{
		$var($List, l, argtypes);
		for (; $nc(l)->tail != nullptr && !instNeeded; $assign(l, l->tail)) {
			if ($nc($cast($Type, l->head))->hasTag($TypeTag::FORALL)) {
				instNeeded = true;
			}
		}
	}
	if (instNeeded) {
		return $nc(this->infer)->instantiateMethod(env, tvars, $cast($Type$MethodType, mt), resultInfo, $cast($Symbol$MethodSymbol, m), argtypes, allowBoxing, useVarargs, this->currentResolutionContext, warn);
	}
	$var($DeferredAttr$DeferredAttrContext, dc, $nc(this->currentResolutionContext)->deferredAttrContext(m, $nc(this->infer)->emptyContext, resultInfo, warn));
	$nc($nc(this->currentResolutionContext)->methodCheck)->argumentsAcceptable(env, dc, argtypes, $($nc(mt)->getParameterTypes()), warn);
	$nc(dc)->complete();
	return mt;
}

$Type* Resolve::checkMethod($Env* env, $Type* site, $Symbol* m, $Attr$ResultInfo* resultInfo, $List* argtypes, $List* typeargtypes, $Warner* warn) {
	$useLocalObjectStack();
	$var($Resolve$MethodResolutionContext, prevContext, this->currentResolutionContext);
	$var($Throwable, var$0, nullptr);
	$var($Type, var$2, nullptr);
	bool return$1 = false;
	try {
		$set(this, currentResolutionContext, $new($Resolve$MethodResolutionContext, this));
		$init($Infer);
		$init($DeferredAttr$AttrMode);
		$set(this->currentResolutionContext, attrMode$, ($nc(resultInfo)->pt == $Infer::anyPoly) ? $DeferredAttr$AttrMode::SPECULATIVE : $DeferredAttr$AttrMode::CHECK);
		$init($JCTree$Tag);
		if ($nc($nc(env)->tree)->hasTag($JCTree$Tag::REFERENCE)) {
			$set($nc(this->currentResolutionContext), methodCheck, $new($Resolve$MethodReferenceCheck, this, $($nc(resultInfo->checkContext)->inferenceContext())));
		}
		$Resolve$MethodResolutionPhase* step = $set($nc(this->currentResolutionContext), step, $nc(($cast($AttrContext, env->info)))->pendingResolutionPhase);
		bool var$3 = $nc(step)->isBoxingRequired();
		$assign(var$2, rawInstantiate(env, site, m, resultInfo, argtypes, typeargtypes, var$3, step->isVarargsRequired(), warn));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} $finally: {
		$set(this, currentResolutionContext, prevContext);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$Type* Resolve::instantiate($Env* env, $Type* site, $Symbol* m, $Attr$ResultInfo* resultInfo, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs, $Warner* warn) {
	try {
		return rawInstantiate(env, site, m, resultInfo, argtypes, typeargtypes, allowBoxing, useVarargs, warn);
	} catch ($Resolve$InapplicableMethodException& ex) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Symbol* Resolve::findField($Env* env, $Type* site, $Name* name, $Symbol$TypeSymbol* c$renamed) {
	$useLocalObjectStack();
	$var($Symbol$TypeSymbol, c, c$renamed);
	$init($TypeTag);
	while ($nc($nc(c)->type)->hasTag($TypeTag::TYPEVAR)) {
		$assign(c, $nc($(c->type->getUpperBound()))->tsym);
	}
	$var($Symbol, bestSoFar, this->varNotFound);
	$var($Symbol, sym, nullptr);
	{
		$var($Iterator, i$, $$nc($$nc($nc(c)->members())->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(s)->kind == $Kinds$Kind::VAR && (s->flags_field & 0x1000) == 0) {
				return isAccessible(env, site, s) ? s : $cast($Symbol, $new($Resolve$AccessError, this, env, site, s));
			}
		}
	}
	$var($Type, st, $nc(this->types)->supertype(c->type));
	bool var$0 = st != nullptr;
	if (var$0) {
		bool var$1 = st->hasTag($TypeTag::CLASS);
		var$0 = var$1 || st->hasTag($TypeTag::TYPEVAR);
	}
	if (var$0) {
		$assign(sym, findField(env, site, name, $nc(st)->tsym));
		$assign(bestSoFar, bestOf(bestSoFar, sym));
	}
	{
		$init($Kinds$Kind);
		$var($List, l, $nc(this->types)->interfaces(c->type));
		for (; $nc(bestSoFar)->kind != $Kinds$Kind::AMBIGUOUS && $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$assign(sym, findField(env, site, name, $nc(($cast($Type, l->head)))->tsym));
			bool var$2 = bestSoFar->exists();
			if (var$2 && $nc(sym)->exists() && sym->owner != bestSoFar->owner) {
				$assign(bestSoFar, $new($Resolve$AmbiguityError, this, bestSoFar, sym));
			} else {
				$assign(bestSoFar, bestOf(bestSoFar, sym));
			}
		}
	}
	return bestSoFar;
}

$Symbol$VarSymbol* Resolve::resolveInternalField($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $Name* name) {
	$useLocalObjectStack();
	$var($Symbol, sym, findField(env, site, name, $nc(site)->tsym));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::VAR) {
		return $cast($Symbol$VarSymbol, sym);
	} else {
		$throwNew($FatalError, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::FatalErrCantLocateField(name)))));
	}
}

$Symbol* Resolve::findVar($Env* env, $Name* name) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->varNotFound);
	$var($Env, env1, env);
	bool staticOnly = false;
	while ($nc(env1)->outer != nullptr) {
		$var($Symbol, sym, nullptr);
		{
			$var($Iterator, i$, $$nc($nc($nc(($cast($AttrContext, env1->info)))->scope)->getSymbolsByName(name))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::VAR && (s->flags_field & 0x1000) == 0) {
					$assign(sym, s);
					if (staticOnly) {
						return $new($Resolve$StaticError, this, sym);
					}
					break;
				}
			}
		}
		if (isStatic(env1)) {
			staticOnly = true;
		}
		if (sym == nullptr) {
			$assign(sym, findField(env1, $nc($nc(env1->enclClass)->sym)->type, name, $nc(env1->enclClass)->sym));
		}
		if ($nc(sym)->exists()) {
			$init($Kinds$Kind);
			if (staticOnly && sym->kind == $Kinds$Kind::VAR && $nc(sym->owner)->kind == $Kinds$Kind::TYP && (sym->flags() & 8) == 0) {
				return $new($Resolve$StaticError, this, sym);
			} else {
				return sym;
			}
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
		if (($nc($nc(env1->enclClass)->sym)->flags() & 8) != 0) {
			staticOnly = true;
		}
		$assign(env1, env1->outer);
	}
	$var($Symbol, sym, findField(env, $nc($nc(this->syms)->predefClass)->type, name, $nc(this->syms)->predefClass));
	if ($nc(sym)->exists()) {
		return sym;
	}
	if ($nc(bestSoFar)->exists()) {
		return bestSoFar;
	}
	$var($Symbol, origin, nullptr);
	{
		$var($ScopeArray, arr$, $new($ScopeArray, {
			$nc($nc(env)->toplevel)->namedImportScope,
			$nc($nc(env)->toplevel)->starImportScope
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Scope, sc, arr$->get(i$));
			{
				{
					$var($Iterator, i$, $$nc($nc(sc)->getSymbolsByName(name))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, currentSymbol, $cast($Symbol, i$->next()));
						{
							$init($Kinds$Kind);
							if ($nc(currentSymbol)->kind != $Kinds$Kind::VAR) {
								continue;
							}
							if (!$nc($nc(bestSoFar)->kind)->isResolutionError() && currentSymbol->owner != bestSoFar->owner) {
								return $new($Resolve$AmbiguityError, this, bestSoFar, currentSymbol);
							} else if (!$nc(bestSoFar->kind)->betterThan($Kinds$Kind::VAR)) {
								$assign(origin, $nc($(sc->getOrigin(currentSymbol)))->owner);
								$assign(bestSoFar, isAccessible(env, $nc(origin)->type, currentSymbol) ? currentSymbol : $cast($Symbol, $new($Resolve$AccessError, this, env, origin->type, currentSymbol)));
							}
						}
					}
				}
				if ($nc(bestSoFar)->exists()) {
					break;
				}
			}
		}
	}
	$init($Kinds$Kind);
	if ($nc(bestSoFar)->kind == $Kinds$Kind::VAR && $nc(bestSoFar->owner)->type != $nc(origin)->type) {
		return bestSoFar->clone(origin);
	} else {
		return bestSoFar;
	}
}

$Symbol* Resolve::selectBest($Env* env, $Type* site, $List* argtypes, $List* typeargtypes, $Symbol* sym, $Symbol* bestSoFar$renamed, bool allowBoxing, bool useVarargs) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, bestSoFar$renamed);
	$init($Kinds$Kind);
	bool var$0 = $nc(sym)->kind == $Kinds$Kind::ERR || (!$equals($nc(site)->tsym, sym->owner) && !sym->isInheritedIn(site->tsym, this->types));
	if (var$0 || !notOverriddenIn(site, sym)) {
		return bestSoFar;
	} else if (useVarargs && (sym->flags() & (int64_t)0x0000000400000000) == 0) {
		return $nc($nc(bestSoFar)->kind)->isResolutionError() ? $cast($Symbol, $new($Resolve$BadVarargsMethod, this, $$cast($Resolve$ResolveError, bestSoFar->baseSymbol()))) : bestSoFar;
	}
	$Assert::check(!$nc(sym->kind)->isResolutionError());
	try {
		$nc($nc(this->types)->noWarnings)->clear();
		$var($Type, mt, rawInstantiate(env, site, sym, nullptr, argtypes, typeargtypes, allowBoxing, useVarargs, $nc(this->types)->noWarnings));
		$nc(this->currentResolutionContext)->addApplicableCandidate(sym, mt);
	} catch ($Resolve$InapplicableMethodException& ex) {
		$nc(this->currentResolutionContext)->addInapplicableCandidate(sym, $(ex->getDiagnostic()));
		$var($Resolve$AccessError, accessError, nullptr);
		$init($Resolve$18);
		switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(bestSoFar)->kind))->ordinal())) {
		case 1:
			return $new($Resolve$InapplicableSymbolError, this, this->currentResolutionContext);
		case 2:
			{
				bool var$1 = $instanceOf($Resolve$AccessError, bestSoFar);
				if (var$1) {
					$assign(accessError, $cast($Resolve$AccessError, bestSoFar));
					var$1 = true;
				}
				if (var$1) {
					$init($JCDiagnostic$DiagnosticType);
					$nc(this->currentResolutionContext)->addInapplicableCandidate($nc(accessError)->sym, $($nc(accessError)->getDiagnostic($JCDiagnostic$DiagnosticType::FRAGMENT, nullptr, nullptr, site, nullptr, argtypes, typeargtypes)));
				} else {
					return bestSoFar;
				}
			}
		case 3:
			$assign(bestSoFar, $new($Resolve$InapplicableSymbolsError, this, this->currentResolutionContext));
		default:
			return bestSoFar;
		}
	}
	if (!isAccessible(env, site, sym)) {
		$var($Resolve$AccessError, curAccessError, $new($Resolve$AccessError, this, env, site, sym));
		$init($JCDiagnostic$DiagnosticType);
		$var($JCDiagnostic, curDiagnostic, curAccessError->getDiagnostic($JCDiagnostic$DiagnosticType::FRAGMENT, nullptr, nullptr, site, nullptr, argtypes, typeargtypes));
		{
			$var($Resolve$AccessError, accessError, nullptr);
			if ($nc(bestSoFar)->kind == $Kinds$Kind::ABSENT_MTH) {
				$assign(bestSoFar, curAccessError);
			} else if (bestSoFar->kind == $Kinds$Kind::WRONG_MTH) {
				$nc(this->currentResolutionContext)->addInapplicableCandidate(sym, curDiagnostic);
				$assign(bestSoFar, $new($Resolve$InapplicableSymbolsError, this, this->currentResolutionContext));
			} else if (bestSoFar->kind == $Kinds$Kind::WRONG_MTHS) {
				$nc(this->currentResolutionContext)->addInapplicableCandidate(sym, curDiagnostic);
			} else {
				bool var$2 = bestSoFar->kind == $Kinds$Kind::HIDDEN;
				if (var$2) {
					bool var$3 = $instanceOf($Resolve$AccessError, bestSoFar);
					if (var$3) {
						$assign(accessError, $cast($Resolve$AccessError, bestSoFar));
						var$3 = true;
					}
					var$2 = var$3;
				}
				if (var$2) {
					$nc(this->currentResolutionContext)->addInapplicableCandidate($nc(accessError)->sym, $($nc(accessError)->getDiagnostic($JCDiagnostic$DiagnosticType::FRAGMENT, nullptr, nullptr, site, nullptr, argtypes, typeargtypes)));
					$nc(this->currentResolutionContext)->addInapplicableCandidate(sym, curDiagnostic);
					$assign(bestSoFar, $new($Resolve$InapplicableSymbolsError, this, this->currentResolutionContext));
				}
			}
		}
		return bestSoFar;
	}
	return ($nc($nc(bestSoFar)->kind)->isResolutionError() && bestSoFar->kind != $Kinds$Kind::AMBIGUOUS) ? sym : mostSpecific(argtypes, sym, bestSoFar, env, site, useVarargs);
}

$Symbol* Resolve::mostSpecific($List* argtypes, $Symbol* m1, $Symbol* m2, $Env* env, $Type* site, bool useVarargs) {
	$useLocalObjectStack();
	$init($Resolve$18);
	bool m1SignatureMoreSpecific = false;
	bool m2SignatureMoreSpecific = false;
	$var($Resolve$AmbiguityError, e, nullptr);
	bool m1MoreSpecificThanAnyAmbiguous = false;
	bool allAmbiguousMoreSpecificThanM1 = false;
	switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(m2)->kind))->ordinal())) {
	case 4:
		if (m1 == m2) {
			return m1;
		}
		m1SignatureMoreSpecific = signatureMoreSpecific(argtypes, env, site, m1, m2, useVarargs);
		m2SignatureMoreSpecific = signatureMoreSpecific(argtypes, env, site, m2, m1, useVarargs);
		if (m1SignatureMoreSpecific && m2SignatureMoreSpecific) {
			$var($Type, mt1, $nc(this->types)->memberType(site, m1));
			$var($Type, mt2, $nc(this->types)->memberType(site, m2));
			if (!$nc(this->types)->overrideEquivalent(mt1, mt2)) {
				return ambiguityError(m1, m2);
			}
			int64_t var$0 = $nc(m1)->flags() & (int64_t)0x80000000;
			if (var$0 != (m2->flags() & (int64_t)0x80000000)) {
				return ((m1->flags() & (int64_t)0x80000000) != 0) ? m2 : m1;
			}
			if (m1->baseSymbol() == m2->baseSymbol()) {
				return m1;
			}
			$var($Symbol$TypeSymbol, m1Owner, $cast($Symbol$TypeSymbol, m1->owner));
			$var($Symbol$TypeSymbol, m2Owner, $cast($Symbol$TypeSymbol, m2->owner));
			if (m1Owner != m2Owner) {
				bool var$1 = $nc(this->types)->asSuper($nc(m1Owner)->type, m2Owner) != nullptr && (($nc(m1->owner)->flags_field & 0x0200) == 0 || ($nc(m2->owner)->flags_field & 0x0200) != 0);
				if (var$1 && m1->overrides(m2, m1Owner, this->types, false)) {
					return m1;
				}
				bool var$2 = $nc(this->types)->asSuper($nc(m2Owner)->type, m1Owner) != nullptr && (($nc(m2->owner)->flags_field & 0x0200) == 0 || ($nc(m1->owner)->flags_field & 0x0200) != 0);
				if (var$2 && m2->overrides(m1, m2Owner, this->types, false)) {
					return m2;
				}
			}
			bool m1Abstract = (m1->flags() & 0x0400) != 0;
			bool m2Abstract = (m2->flags() & 0x0400) != 0;
			if (m1Abstract && !m2Abstract) {
				return m2;
			}
			if (m2Abstract && !m1Abstract) {
				return m1;
			}
			return ambiguityError(m1, m2);
		}
		if (m1SignatureMoreSpecific) {
			return m1;
		}
		if (m2SignatureMoreSpecific) {
			return m2;
		}
		return ambiguityError(m1, m2);
	case 5:
		{
			$assign(e, $cast($Resolve$AmbiguityError, m2->baseSymbol()));
			m1MoreSpecificThanAnyAmbiguous = true;
			allAmbiguousMoreSpecificThanM1 = true;
			{
				$var($Iterator, i$, $nc($nc(e)->ambiguousSyms)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s, $cast($Symbol, i$->next()));
					{
						$var($Symbol, moreSpecific, mostSpecific(argtypes, m1, s, env, site, useVarargs));
						m1MoreSpecificThanAnyAmbiguous &= moreSpecific == m1;
						allAmbiguousMoreSpecificThanM1 &= moreSpecific == s;
					}
				}
			}
			if (m1MoreSpecificThanAnyAmbiguous) {
				return m1;
			}
			if (!allAmbiguousMoreSpecificThanM1) {
				e->addAmbiguousSymbol(m1);
			}
			return e;
		}
	default:
		$throwNew($AssertionError);
	}
}

bool Resolve::signatureMoreSpecific($List* actuals, $Env* env, $Type* site, $Symbol* m1, $Symbol* m2, bool useVarargs) {
	$useLocalObjectStack();
	$nc(this->noteWarner)->clear();
	int32_t var$1 = $$nc($nc($nc(m1)->type)->getParameterTypes())->length();
	int32_t var$0 = $Math::max(var$1, $nc(actuals)->length());
	int32_t maxLength = $Math::max(var$0, $$nc($nc($nc(m2)->type)->getParameterTypes())->length());
	$var($Resolve$MethodResolutionContext, prevResolutionContext, this->currentResolutionContext);
	$var($Throwable, var$2, nullptr);
	bool var$4 = false;
	bool return$3 = false;
	try {
		$set(this, currentResolutionContext, $new($Resolve$MethodResolutionContext, this));
		$set(this->currentResolutionContext, step, $nc(prevResolutionContext)->step);
		$set(this->currentResolutionContext, methodCheck, $nc(prevResolutionContext->methodCheck)->mostSpecificCheck(actuals));
		$var($Type, mst, instantiate(env, site, m2, nullptr, $(adjustArgs($($nc(this->types)->cvarLowerBounds($($$nc($nc(this->types)->memberType(site, m1))->getParameterTypes()))), m1, maxLength, useVarargs)), nullptr, false, useVarargs, this->noteWarner));
		$init($Lint$LintCategory);
		var$4 = mst != nullptr && !$nc(this->noteWarner)->hasLint($Lint$LintCategory::UNCHECKED);
		return$3 = true;
		goto $finally;
	} catch ($Throwable& var$5) {
		$assign(var$2, var$5);
	} $finally: {
		$set(this, currentResolutionContext, prevResolutionContext);
	}
	if (var$2 != nullptr) {
		$throw(var$2);
	}
	if (return$3) {
		return var$4;
	}
	$shouldNotReachHere();
}

$List* Resolve::adjustArgs($List* args, $Symbol* msym, int32_t length, bool allowVarargs) {
	$useLocalObjectStack();
	if (($nc(msym)->flags() & (int64_t)0x0000000400000000) != 0 && allowVarargs) {
		$var($Type, varargsElem, $nc(this->types)->elemtype($$cast($Type, $nc(args)->last())));
		if (varargsElem == nullptr) {
			$Assert::error($$str({"Bad varargs = "_s, $(args->last()), " "_s, msym}));
		}
		$var($List, newArgs, $$nc($nc($nc($(args->reverse()))->tail)->prepend(varargsElem))->reverse());
		while ($nc(newArgs)->length() < length) {
			$assign(newArgs, newArgs->append($$cast($Type, newArgs->last())));
		}
		return newArgs;
	} else {
		return args;
	}
}

$Symbol* Resolve::ambiguityError($Symbol* m1, $Symbol* m2) {
	int64_t var$0 = $nc(m1)->flags();
	if (((var$0 | $nc(m2)->flags()) & (int64_t)0x0000040000000000) != 0) {
		return (m1->flags() & (int64_t)0x0000040000000000) == 0 ? m1 : m2;
	} else {
		return $new($Resolve$AmbiguityError, this, m1, m2);
	}
}

$Symbol* Resolve::findMethodInScope($Env* env, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes, $Scope* sc, $Symbol* bestSoFar$renamed, bool allowBoxing, bool useVarargs, bool abstractok) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, bestSoFar$renamed);
	{
		$var($Iterator, i$, $$nc($nc(sc)->getSymbolsByName(name, $$new($Resolve$LookupFilter, this, abstractok)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$assign(bestSoFar, selectBest(env, site, argtypes, typeargtypes, s, bestSoFar, allowBoxing, useVarargs));
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::findMethod($Env* env, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs) {
	$var($Symbol, bestSoFar, this->methodNotFound);
	$assign(bestSoFar, findMethod(env, site, name, argtypes, typeargtypes, $nc($nc(site)->tsym)->type, bestSoFar, allowBoxing, useVarargs));
	return bestSoFar;
}

$Symbol* Resolve::findMethod($Env* env, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes, $Type* intype, $Symbol* bestSoFar$renamed, bool allowBoxing, bool useVarargs) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, bestSoFar$renamed);
	$var($ListArray, itypes, $new($ListArray, {
		$($List::nil()),
		$($List::nil())
	}));
	$init($Resolve$InterfaceLookupPhase);
	$Resolve$InterfaceLookupPhase* iphase = $Resolve$InterfaceLookupPhase::ABSTRACT_OK;
	{
		$var($Iterator, i$, $$nc(superclasses(intype))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$TypeSymbol, s, $cast($Symbol$TypeSymbol, i$->next()));
			{
				$assign(bestSoFar, findMethodInScope(env, site, name, argtypes, typeargtypes, $($nc(s)->members()), bestSoFar, allowBoxing, useVarargs, true));
				if (name == $nc(this->names)->init) {
					return bestSoFar;
				}
				iphase = (iphase == nullptr) ? ($Resolve$InterfaceLookupPhase*)nullptr : iphase->update(s, this);
				if (iphase != nullptr) {
					$var($Iterator, i$, $$nc($nc(this->types)->interfaces(s->type))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, itype, $cast($Type, i$->next()));
						{
							int32_t var$0 = iphase->ordinal();
							$var($List, var$1, $nc(this->types)->closure(itype));
							itypes->set(var$0, $($nc(this->types)->union$(var$1, itypes->get(iphase->ordinal()))));
						}
					}
				}
			}
		}
	}
	bool var$2 = $nc($nc(bestSoFar)->kind)->isValid();
	$var($Symbol, concrete, var$2 && (bestSoFar->flags() & 0x0400) == 0 ? bestSoFar : $cast($Symbol, this->methodNotFound));
	{
		$var($Resolve$InterfaceLookupPhaseArray, arr$, $Resolve$InterfaceLookupPhase::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Resolve$InterfaceLookupPhase* iphase2 = arr$->get(i$);
			{
				$var($Iterator, i$, $nc(itypes->get($nc(iphase2)->ordinal()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, itype, $cast($Type, i$->next()));
					{
						if (!$nc(itype)->isInterface()) {
							continue;
						}
						if (iphase2 == $Resolve$InterfaceLookupPhase::DEFAULT_OK && ($nc(itype->tsym)->flags() & (int64_t)0x0000080000000000) == 0) {
							continue;
						}
						$assign(bestSoFar, findMethodInScope(env, site, name, argtypes, typeargtypes, $($nc(itype->tsym)->members()), bestSoFar, allowBoxing, useVarargs, true));
						bool var$4 = concrete != bestSoFar && $nc($nc(concrete)->kind)->isValid();
						bool var$3 = var$4 && $nc($nc(bestSoFar)->kind)->isValid();
						if (var$3 && $nc(this->types)->isSubSignature(concrete->type, bestSoFar->type)) {
							$assign(bestSoFar, concrete);
						}
					}
				}
			}
		}
	}
	return bestSoFar;
}

$Iterable* Resolve::superclasses($Type* intype) {
	return $new(Resolve$$Lambda$lambda$superclasses$1$4, this, intype);
}

$Symbol* Resolve::findFun($Env* env, $Name* name, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->methodNotFound);
	$var($Env, env1, env);
	bool staticOnly = false;
	while ($nc(env1)->outer != nullptr) {
		if (isStatic(env1)) {
			staticOnly = true;
		}
		$Assert::check($nc(($cast($AttrContext, env1->info)))->preferredTreeForDiagnostics == nullptr);
		$set($nc($cast($AttrContext, env1->info)), preferredTreeForDiagnostics, $nc(env)->tree);
		$var($Throwable, var$0, nullptr);
		$var($Symbol, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Symbol, sym, findMethod(env1, $nc($nc(env1->enclClass)->sym)->type, name, argtypes, typeargtypes, allowBoxing, useVarargs));
			if ($nc(sym)->exists()) {
				$init($Kinds$Kind);
				if (staticOnly && sym->kind == $Kinds$Kind::MTH && $nc(sym->owner)->kind == $Kinds$Kind::TYP && (sym->flags() & 8) == 0) {
					$assign(var$2, $new($Resolve$StaticError, this, sym));
					return$1 = true;
					goto $finally;
				} else {
					$assign(var$2, sym);
					return$1 = true;
					goto $finally;
				}
			} else {
				$assign(bestSoFar, bestOf(bestSoFar, sym));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set($nc($cast($AttrContext, env1->info)), preferredTreeForDiagnostics, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
		if (($nc($nc(env1->enclClass)->sym)->flags() & 8) != 0) {
			staticOnly = true;
		}
		$assign(env1, env1->outer);
	}
	$var($Symbol, sym, findMethod(env, $nc($nc(this->syms)->predefClass)->type, name, argtypes, typeargtypes, allowBoxing, useVarargs));
	if ($nc(sym)->exists()) {
		return sym;
	}
	{
		$var($Iterator, i$, $$nc($nc($nc($nc(env)->toplevel)->namedImportScope)->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, currentSym, $cast($Symbol, i$->next()));
			{
				$var($Symbol, origin, $nc($($nc($nc(env->toplevel)->namedImportScope)->getOrigin(currentSym)))->owner);
				$init($Kinds$Kind);
				if ($nc(currentSym)->kind == $Kinds$Kind::MTH) {
					if ($nc(currentSym->owner)->type != $nc(origin)->type) {
						$assign(currentSym, currentSym->clone(origin));
					}
					if (!isAccessible(env, origin->type, currentSym)) {
						$assign(currentSym, $new($Resolve$AccessError, this, env, origin->type, currentSym));
					}
					$assign(bestSoFar, selectBest(env, origin->type, argtypes, typeargtypes, currentSym, bestSoFar, allowBoxing, useVarargs));
				}
			}
		}
	}
	if ($nc(bestSoFar)->exists()) {
		return bestSoFar;
	}
	{
		$var($Iterator, i$, $$nc($nc($nc(env->toplevel)->starImportScope)->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, currentSym, $cast($Symbol, i$->next()));
			{
				$var($Symbol, origin, $nc($($nc($nc(env->toplevel)->starImportScope)->getOrigin(currentSym)))->owner);
				$init($Kinds$Kind);
				if ($nc(currentSym)->kind == $Kinds$Kind::MTH) {
					if ($nc(currentSym->owner)->type != $nc(origin)->type) {
						$assign(currentSym, currentSym->clone(origin));
					}
					if (!isAccessible(env, origin->type, currentSym)) {
						$assign(currentSym, $new($Resolve$AccessError, this, env, origin->type, currentSym));
					}
					$assign(bestSoFar, selectBest(env, origin->type, argtypes, typeargtypes, currentSym, bestSoFar, allowBoxing, useVarargs));
				}
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::loadClass($Env* env, $Name* name, $Resolve$RecoveryLoadClass* recoveryLoadClass) {
	$useLocalObjectStack();
	try {
		$var($Symbol$ClassSymbol, c, $nc(this->finder)->loadClass($nc($nc(env)->toplevel)->modle, name));
		return isAccessible(env, c) ? $cast($Symbol, c) : $cast($Symbol, $new($Resolve$AccessError, this, env, nullptr, c));
	} catch ($ClassFinder$BadClassFile& err) {
		return $new($Resolve$BadClassFileError, this, err);
	} catch ($Symbol$CompletionFailure& ex) {
		$var($Symbol, candidate, $nc(recoveryLoadClass)->loadClass(env, name));
		if (candidate != nullptr) {
			return candidate;
		}
		return this->typeNotFound;
	}
	$shouldNotReachHere();
}

$Symbol* Resolve::lookupPackage($Env* env, $Name* name) {
	$useLocalObjectStack();
	$var($Symbol$PackageSymbol, pack, $nc(this->syms)->lookupPackage($nc($nc(env)->toplevel)->modle, name));
	if (this->allowModules && isImportOnDemand(env, name)) {
		if ($$nc($nc(pack)->members())->isEmpty()) {
			$var($Function, var$0, $new(Resolve$$Lambda$getPackagesForName$5, $nc(this->syms)));
			$var($BiFunction, var$1, $new(Resolve$$Lambda$enterPackage$6, this->syms));
			return lookupInvisibleSymbol(env, name, var$0, var$1, $$new(Resolve$$Lambda$lambda$lookupPackage$7$7), pack);
		}
	}
	return pack;
}

bool Resolve::isImportOnDemand($Env* env, $Name* name) {
	$init($JCTree$Tag);
	if (!$nc($nc(env)->tree)->hasTag($JCTree$Tag::IMPORT)) {
		return false;
	}
	$var($JCTree, qualid, $nc($cast($JCTree$JCImport, env->tree))->qualid);
	if (!$nc(qualid)->hasTag($JCTree$Tag::SELECT)) {
		return false;
	}
	if ($TreeInfo::name(qualid) != $nc(this->names)->asterisk) {
		return false;
	}
	return $TreeInfo::fullName($cast($JCTree$JCFieldAccess, qualid)->selected) == name;
}

$Symbol* Resolve::lookupInvisibleSymbol($Env* env, $Name* name, $Function* get, $BiFunction* load, $Predicate* validate, $Symbol* defaultResult) {
	$useLocalObjectStack();
	$var($Iterable, candidates, $cast($Iterable, $nc(get)->apply(name)));
	{
		$var($Iterator, i$, $nc(candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			if ($nc(validate)->test(sym)) {
				return createInvisibleSymbolError(env, sym);
			}
		}
	}
	$var($Set, recoverableModules, $new($HashSet, $($nc(this->syms)->getAllModules())));
	recoverableModules->add($nc(this->syms)->unnamedModule);
	recoverableModules->remove($nc($nc(env)->toplevel)->modle);
	{
		$var($Iterator, i$, recoverableModules->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, ms, $cast($Symbol$ModuleSymbol, i$->next()));
			if ($nc(ms)->sourceLocation == nullptr) {
				if (ms->classLocation == nullptr) {
					$assign(ms, $nc(this->moduleFinder)->findModule(ms));
				}
				$init($Kinds$Kind);
				if ($nc(ms)->kind != $Kinds$Kind::ERR) {
					$var($Symbol, sym, $cast($Symbol, $nc(load)->apply(ms, name)));
					if (sym != nullptr && $nc(validate)->test(sym)) {
						return createInvisibleSymbolError(env, sym);
					}
				}
			}
		}
	}
	return defaultResult;
}

$Symbol* Resolve::createInvisibleSymbolError($Env* env, $Symbol* sym) {
	if (symbolPackageVisible(env, sym)) {
		return $new($Resolve$AccessError, this, env, nullptr, sym);
	} else {
		return $new($Resolve$InvisibleSymbolError, this, env, false, sym);
	}
}

bool Resolve::symbolPackageVisible($Env* env, $Symbol* sym) {
	$useLocalObjectStack();
	$var($Symbol$ModuleSymbol, envMod, $nc($nc(env)->toplevel)->modle);
	$var($Symbol$PackageSymbol, symPack, $nc(sym)->packge());
	return envMod == $nc(symPack)->modle || $nc($nc(envMod)->visiblePackages)->containsKey(symPack->fullname);
}

$Symbol* Resolve::findImmediateMemberType($Env* env, $Type* site, $Name* name, $Symbol$TypeSymbol* c) {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $$nc($$nc($nc(c)->members())->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::TYP) {
				return isAccessible(env, site, sym) ? sym : $cast($Symbol, $new($Resolve$AccessError, this, env, site, sym));
			}
		}
	}
	return this->typeNotFound;
}

$Symbol* Resolve::findInheritedMemberType($Env* env, $Type* site, $Name* name, $Symbol$TypeSymbol* c) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->typeNotFound);
	$var($Symbol, sym, nullptr);
	$var($Type, st, $nc(this->types)->supertype($nc(c)->type));
	$init($TypeTag);
	if (st != nullptr && st->hasTag($TypeTag::CLASS)) {
		$assign(sym, findMemberType(env, site, name, st->tsym));
		$assign(bestSoFar, bestOf(bestSoFar, sym));
	}
	{
		$init($Kinds$Kind);
		$var($List, l, $nc(this->types)->interfaces(c->type));
		for (; $nc(bestSoFar)->kind != $Kinds$Kind::AMBIGUOUS && $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$assign(sym, findMemberType(env, site, name, $nc(($cast($Type, l->head)))->tsym));
			bool var$0 = !$nc(bestSoFar->kind)->isResolutionError();
			if (var$0 && !$nc($nc(sym)->kind)->isResolutionError() && sym->owner != bestSoFar->owner) {
				$assign(bestSoFar, $new($Resolve$AmbiguityError, this, bestSoFar, sym));
			} else {
				$assign(bestSoFar, bestOf(bestSoFar, sym));
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::findMemberType($Env* env, $Type* site, $Name* name, $Symbol$TypeSymbol* c) {
	$var($Symbol, sym, findImmediateMemberType(env, site, name, c));
	if (!$equals(sym, this->typeNotFound)) {
		return sym;
	}
	return findInheritedMemberType(env, site, name, c);
}

$Symbol* Resolve::findGlobalType($Env* env, $Scope* scope, $Name* name, $Resolve$RecoveryLoadClass* recoveryLoadClass) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->typeNotFound);
	{
		$var($Iterator, i$, $$nc($nc(scope)->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$var($Symbol, sym, loadClass(env, $($nc(s)->flatName()), recoveryLoadClass));
				$init($Kinds$Kind);
				if ($nc(bestSoFar)->kind == $Kinds$Kind::TYP && $nc(sym)->kind == $Kinds$Kind::TYP && bestSoFar != sym) {
					return $new($Resolve$AmbiguityError, this, bestSoFar, sym);
				} else {
					$assign(bestSoFar, bestOf(bestSoFar, sym));
				}
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::findTypeVar($Env* env, $Name* name, bool staticOnly) {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $$nc($nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::TYP) {
				$init($TypeTag);
				bool var$0 = $nc(sym->type)->hasTag($TypeTag::TYPEVAR);
				if (var$0 && (staticOnly || (isStatic(env) && $nc(sym->owner)->kind == $Kinds$Kind::TYP))) {
					return $new($Resolve$StaticError, this, sym);
				}
				return sym;
			}
		}
	}
	return this->typeNotFound;
}

$Symbol* Resolve::findType($Env* env, $Name* name) {
	$useLocalObjectStack();
	if (name == $nc(this->names)->empty) {
		return this->typeNotFound;
	}
	$var($Symbol, bestSoFar, this->typeNotFound);
	$var($Symbol, sym, nullptr);
	bool staticOnly = false;
	{
		$var($Env, env1, env);
		for (; $nc(env1)->outer != nullptr; $assign(env1, env1->outer)) {
			$var($Symbol, tyvar, findTypeVar(env1, name, staticOnly));
			if (isStatic(env1)) {
				staticOnly = true;
			}
			$assign(sym, findImmediateMemberType(env1, $nc($nc(env1->enclClass)->sym)->type, name, $nc(env1->enclClass)->sym));
			if (!$equals(tyvar, this->typeNotFound)) {
				$init($Kinds$Kind);
				if ($nc(env)->baseClause || $equals(sym, this->typeNotFound) || ($nc(tyvar)->kind == $Kinds$Kind::TYP && tyvar->exists() && $nc(tyvar->owner)->kind == $Kinds$Kind::MTH)) {
					return tyvar;
				}
			}
			if ($equals(sym, this->typeNotFound)) {
				$assign(sym, findInheritedMemberType(env1, $nc($nc(env1->enclClass)->sym)->type, name, $nc(env1->enclClass)->sym));
			}
			$init($Kinds$Kind);
			$init($TypeTag);
			bool var$2 = staticOnly && $nc(sym)->kind == $Kinds$Kind::TYP && $nc(sym->type)->hasTag($TypeTag::CLASS);
			bool var$1 = var$2 && $$nc(sym->type->getEnclosingType())->hasTag($TypeTag::CLASS);
			bool var$0 = var$1 && $nc($nc($nc(env1->enclClass)->sym)->type)->isParameterized();
			if (var$0 && $$nc(sym->type->getEnclosingType())->isParameterized()) {
				return $new($Resolve$StaticError, this, sym);
			} else if ($nc(sym)->exists()) {
				return sym;
			} else {
				$assign(bestSoFar, bestOf(bestSoFar, sym));
			}
			$var($JCTree$JCClassDecl, encl, env1->baseClause ? $cast($JCTree$JCClassDecl, env1->tree) : env1->enclClass);
			if (($nc($nc(encl)->sym)->flags() & 8) != 0) {
				staticOnly = true;
			}
		}
	}
	$init($JCTree$Tag);
	if (!$nc($nc(env)->tree)->hasTag($JCTree$Tag::IMPORT)) {
		$assign(sym, findGlobalType(env, $nc(env->toplevel)->namedImportScope, name, this->namedImportScopeRecovery));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
		$assign(sym, findGlobalType(env, $nc(env->toplevel)->toplevelScope, name, this->noRecovery));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
		$assign(sym, findGlobalType(env, $($nc($nc(env->toplevel)->packge)->members()), name, this->noRecovery));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
		$assign(sym, findGlobalType(env, $nc(env->toplevel)->starImportScope, name, this->starImportScopeRecovery));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::findIdent($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Name* name, $Kinds$KindSelector* kind) {
	return checkRestrictedType(pos, $(findIdentInternal(env, name, kind)), name);
}

$Symbol* Resolve::findIdentInternal($Env* env, $Name* name, $Kinds$KindSelector* kind) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->typeNotFound);
	$var($Symbol, sym, nullptr);
	$init($Kinds$KindSelector);
	if ($nc(kind)->contains($Kinds$KindSelector::VAL)) {
		$assign(sym, findVar(env, name));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	if (kind->contains($Kinds$KindSelector::TYP)) {
		$assign(sym, findType(env, name));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	if (kind->contains($Kinds$KindSelector::PCK)) {
		return lookupPackage(env, name);
	} else {
		return bestSoFar;
	}
}

$Symbol* Resolve::findIdentInPackage($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol$TypeSymbol* pck, $Name* name, $Kinds$KindSelector* kind) {
	return checkRestrictedType(pos, $(findIdentInPackageInternal(env, pck, name, kind)), name);
}

$Symbol* Resolve::findIdentInPackageInternal($Env* env, $Symbol$TypeSymbol* pck, $Name* name, $Kinds$KindSelector* kind) {
	$useLocalObjectStack();
	$var($Name, fullname, $Symbol$TypeSymbol::formFullName(name, pck));
	$var($Symbol, bestSoFar, this->typeNotFound);
	$init($Kinds$KindSelector);
	if ($nc(kind)->contains($Kinds$KindSelector::TYP)) {
		bool var$0 = this->allowModules && !kind->contains($Kinds$KindSelector::PCK);
		$var($Resolve$RecoveryLoadClass, recoveryLoadClass, var$0 && !$nc(pck)->exists() && !$nc($nc(($cast($AttrContext, $nc(env)->info)))->attributionMode)->isSpeculative$ ? this->doRecoveryLoadClass : this->noRecovery);
		$var($Symbol, sym, loadClass(env, fullname, recoveryLoadClass));
		if ($nc(sym)->exists()) {
			if (name == sym->name) {
				return sym;
			}
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	if (kind->contains($Kinds$KindSelector::PCK)) {
		return lookupPackage(env, fullname);
	}
	return bestSoFar;
}

$Symbol* Resolve::findIdentInType($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $Name* name, $Kinds$KindSelector* kind) {
	return checkRestrictedType(pos, $(findIdentInTypeInternal(env, site, name, kind)), name);
}

$Symbol* Resolve::findIdentInTypeInternal($Env* env, $Type* site, $Name* name, $Kinds$KindSelector* kind) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->typeNotFound);
	$var($Symbol, sym, nullptr);
	$init($Kinds$KindSelector);
	if ($nc(kind)->contains($Kinds$KindSelector::VAL)) {
		$assign(sym, findField(env, site, name, $nc(site)->tsym));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	if (kind->contains($Kinds$KindSelector::TYP)) {
		$assign(sym, findMemberType(env, site, name, $nc(site)->tsym));
		if ($nc(sym)->exists()) {
			return sym;
		} else {
			$assign(bestSoFar, bestOf(bestSoFar, sym));
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::checkRestrictedType($JCDiagnostic$DiagnosticPosition* pos, $Symbol* bestSoFar$renamed, $Name* name) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, bestSoFar$renamed);
	$init($Kinds$Kind);
	if ($nc(bestSoFar)->kind == $Kinds$Kind::TYP || bestSoFar->kind == $Kinds$Kind::ABSENT_TYP) {
		if (this->allowLocalVariableTypeInference && $nc($of(name))->equals($nc(this->names)->var)) {
			$assign(bestSoFar, $new($Resolve$BadRestrictedTypeError, this, this->names->var));
		} else if ($nc($of(name))->equals($nc(this->names)->yield)) {
			if (this->allowYieldStatement) {
				$assign(bestSoFar, $new($Resolve$BadRestrictedTypeError, this, this->names->yield));
			} else if (pos != nullptr) {
				$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::IllegalRefToRestrictedType(this->names->yield)));
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::accessInternal($Symbol* sym$renamed, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, bool qualified, $List* argtypes$renamed, $List* typeargtypes, $Resolve$LogResolveHelper* logResolveHelper) {
	$useLocalObjectStack();
	$var($List, argtypes, argtypes$renamed);
	$var($Symbol, sym, sym$renamed);
	if ($nc($nc(sym)->kind)->isResolutionError()) {
		$var($Resolve$ResolveError, errSym, $cast($Resolve$ResolveError, sym->baseSymbol()));
		$assign(sym, $nc(errSym)->access(name, qualified ? $nc(site)->tsym : $nc(this->syms)->noSymbol));
		$assign(argtypes, $nc(logResolveHelper)->getArgumentTypes(errSym, sym, name, argtypes));
		if (logResolveHelper->resolveDiagnosticNeeded(site, argtypes, typeargtypes)) {
			logResolveError(errSym, pos, location, site, name, argtypes, typeargtypes);
		}
	}
	return sym;
}

$Symbol* Resolve::accessMethod($Symbol* sym, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, bool qualified, $List* argtypes, $List* typeargtypes) {
	return accessInternal(sym, pos, location, site, name, qualified, argtypes, typeargtypes, this->methodLogResolveHelper);
}

$Symbol* Resolve::accessMethod($Symbol* sym, $JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Name* name, bool qualified, $List* argtypes, $List* typeargtypes) {
	return accessMethod(sym, pos, $nc(site)->tsym, site, name, qualified, argtypes, typeargtypes);
}

$Symbol* Resolve::accessBase($Symbol* sym, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, bool qualified) {
	return accessInternal(sym, pos, location, site, name, qualified, $($List::nil()), nullptr, this->basicLogResolveHelper);
}

$Symbol* Resolve::accessBase($Symbol* sym, $JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Name* name, bool qualified) {
	return accessBase(sym, pos, $nc(site)->tsym, site, name, qualified);
}

void Resolve::checkNonAbstract($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalObjectStack();
	bool var$0 = ($nc(sym)->flags() & 0x0400) != 0;
	if (var$0 && (sym->flags() & (int64_t)0x0000080000000000) == 0) {
		$var($Kinds$KindName, var$1, $Kinds::kindName(sym));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::AbstractCantBeAccessedDirectly(var$1, sym, $(sym->location()))));
	}
}

$Symbol* Resolve::resolveIdent($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Name* name, $Kinds$KindSelector* kind) {
	return accessBase($(findIdent(pos, env, name, kind)), pos, $nc($nc($nc(env)->enclClass)->sym)->type, name, false);
}

$Symbol* Resolve::resolveMethod($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Name* name, $List* argtypes, $List* typeargtypes) {
	return lookupMethod(env, pos, $nc($nc(env)->enclClass)->sym, this->resolveMethodCheck, $$new($Resolve$10, this, name, $nc($nc($nc(env)->enclClass)->sym)->type, argtypes, typeargtypes));
}

$Symbol* Resolve::resolveQualifiedMethod($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	return resolveQualifiedMethod(pos, env, $nc(site)->tsym, site, name, argtypes, typeargtypes);
}

$Symbol* Resolve::resolveQualifiedMethod($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	return resolveQualifiedMethod($$new($Resolve$MethodResolutionContext, this), pos, env, location, site, name, argtypes, typeargtypes);
}

$Symbol* Resolve::resolveQualifiedMethod($Resolve$MethodResolutionContext* resolveContext, $JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	return lookupMethod(env, pos, location, resolveContext, $$new($Resolve$11, this, name, site, argtypes, typeargtypes));
}

$Symbol* Resolve::findPolymorphicSignatureInstance($Env* env, $Symbol* spMethod, $List* argtypes) {
	$var($Type, mtype, $nc(this->infer)->instantiatePolymorphicSignatureInstance(env, $cast($Symbol$MethodSymbol, spMethod), this->currentResolutionContext, argtypes));
	return findPolymorphicSignatureInstance(spMethod, mtype);
}

$Symbol* Resolve::findPolymorphicSignatureInstance($Symbol* spMethod, $Type* mtype$renamed) {
	$useLocalObjectStack();
	$var($Type, mtype, mtype$renamed);
	{
		$var($Iterator, i$, $$nc($nc(this->polymorphicSignatureScope)->getSymbolsByName($nc(spMethod)->name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			if ($nc(this->types)->isSameType(mtype, $nc(sym)->type) && spMethod->owner == sym->owner) {
				return sym;
			}
		}
	}
	$var($Type, spReturnType, $$sure($Type, spMethod->asType())->getReturnType());
	if ($nc(this->types)->isSameType(spReturnType, $nc(this->syms)->objectType)) {
	} else if (!$nc(this->types)->isSameType(spReturnType, $($nc(mtype)->getReturnType()))) {
		$var($List, var$0, mtype->getParameterTypes());
		$assign(mtype, $new($Type$MethodType, var$0, spReturnType, $(mtype->getThrownTypes()), $nc(this->syms)->methodClass));
	}
	int64_t flags = (0x0400 | (int64_t)0x0000002000000000) | (spMethod->flags() & ($Flags::AccessFlags | $Flags::STATIC));
	$var($Symbol, msym, $new($Resolve$12, this, flags, spMethod->name, mtype, spMethod->owner, spMethod));
	if (!$nc(mtype)->isErroneous()) {
		$nc(this->polymorphicSignatureScope)->enter(msym);
	}
	return msym;
}

$Symbol$MethodSymbol* Resolve::resolveInternalMethod($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($Resolve$MethodResolutionContext, resolveContext, $new($Resolve$MethodResolutionContext, this));
	resolveContext->internalResolution = true;
	$var($Symbol, sym, resolveQualifiedMethod(resolveContext, pos, env, $nc(site)->tsym, site, name, argtypes, typeargtypes));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::MTH) {
		return $cast($Symbol$MethodSymbol, sym);
	} else {
		$throwNew($FatalError, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::FatalErrCantLocateMeth(name)))));
	}
}

$Symbol* Resolve::resolveConstructor($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes) {
	return resolveConstructor($$new($Resolve$MethodResolutionContext, this), pos, env, site, argtypes, typeargtypes);
}

$Symbol* Resolve::resolveConstructor($Resolve$MethodResolutionContext* resolveContext, $JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes) {
	return lookupMethod(env, pos, $nc(site)->tsym, resolveContext, $$new($Resolve$13, this, $nc(this->names)->init, site, argtypes, typeargtypes, pos));
}

$Symbol$MethodSymbol* Resolve::resolveInternalConstructor($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($Resolve$MethodResolutionContext, resolveContext, $new($Resolve$MethodResolutionContext, this));
	resolveContext->internalResolution = true;
	$var($Symbol, sym, resolveConstructor(resolveContext, pos, env, site, argtypes, typeargtypes));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::MTH) {
		return $cast($Symbol$MethodSymbol, sym);
	} else {
		$throwNew($FatalError, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::FatalErrCantLocateCtor(site)))));
	}
}

$Symbol* Resolve::findConstructor($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs) {
	$var($Symbol, sym, findMethod(env, site, $nc(this->names)->init, argtypes, typeargtypes, allowBoxing, useVarargs));
	$nc(this->chk)->checkDeprecated(pos, $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner, sym);
	$nc(this->chk)->checkPreview(pos, $nc($nc(($cast($AttrContext, env->info)))->scope)->owner, sym);
	return sym;
}

$Symbol* Resolve::resolveDiamond($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes) {
	return lookupMethod(env, pos, $nc(site)->tsym, this->resolveMethodCheck, $$new($Resolve$14, this, $nc(this->names)->init, site, argtypes, typeargtypes, pos));
}

$Symbol* Resolve::findDiamond($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* site, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs) {
	$var($Symbol, sym, findDiamond(env, site, argtypes, typeargtypes, allowBoxing, useVarargs));
	$nc(this->chk)->checkDeprecated(pos, $nc($nc(($cast($AttrContext, $nc(env)->info)))->scope)->owner, sym);
	$nc(this->chk)->checkPreview(pos, $nc($nc(($cast($AttrContext, env->info)))->scope)->owner, sym);
	return sym;
}

$Symbol* Resolve::findDiamond($Env* env, $Type* site, $List* argtypes, $List* typeargtypes, bool allowBoxing, bool useVarargs) {
	$useLocalObjectStack();
	$var($Symbol, bestSoFar, this->methodNotFound);
	$var($Symbol$TypeSymbol, tsym, $nc($nc(site)->tsym)->isInterface() ? $nc($nc(this->syms)->objectType)->tsym : site->tsym);
	{
		$var($Iterator, i$, $$nc($$nc($nc(tsym)->members())->getSymbolsByName($nc(this->names)->init))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::MTH && (sym->flags_field & 0x1000) == 0) {
				$init($TypeTag);
				$var($List, oldParams, $nc(sym->type)->hasTag($TypeTag::FORALL) ? $cast($Type$ForAll, sym->type)->tvars : $List::nil());
				$var($List, var$0, $$nc($nc($nc(site->tsym)->type)->getTypeArguments())->appendList(oldParams));
				$var($Type, constrType, $new($Type$ForAll, var$0, $($nc(this->types)->createMethodTypeWithReturn($($nc(sym->type)->asMethodType()), site))));
				$var($Symbol$MethodSymbol, newConstr, $new($Resolve$15, this, sym->flags(), $nc(this->names)->init, constrType, site->tsym, sym));
				$assign(bestSoFar, selectBest(env, site, argtypes, typeargtypes, newConstr, bestSoFar, allowBoxing, useVarargs));
			}
		}
	}
	return bestSoFar;
}

$Symbol* Resolve::getMemberReference($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $JCTree$JCMemberReference* referenceTree, $Type* site$renamed, $Name* name) {
	$useLocalObjectStack();
	$var($Type, site, site$renamed);
	$assign(site, $nc(this->types)->capture(site));
	$init($Resolve$MethodResolutionPhase);
	$var($Resolve$ReferenceLookupHelper, lookupHelper, makeReferenceLookupHelper(referenceTree, site, name, $($List::nil()), nullptr, $Resolve$MethodResolutionPhase::VARARITY));
	$var($Env, newEnv, $nc(env)->dup($nc(env)->tree, $($nc($cast($AttrContext, $nc(env)->info))->dup())));
	$var($Symbol, sym, lookupMethod(newEnv, $($nc(env->tree)->pos()), $nc(site)->tsym, this->nilMethodCheck, lookupHelper));
	$set($nc($cast($AttrContext, env->info)), pendingResolutionPhase, $nc(($cast($AttrContext, $nc(newEnv)->info)))->pendingResolutionPhase);
	return sym;
}

$Resolve$ReferenceLookupHelper* Resolve::makeReferenceLookupHelper($JCTree$JCMemberReference* referenceTree, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes, $Resolve$MethodResolutionPhase* maxPhase) {
	if (!$nc($of(name))->equals($nc(this->names)->init)) {
		return $new($Resolve$MethodReferenceLookupHelper, this, referenceTree, name, site, argtypes, typeargtypes, maxPhase);
	} else {
		$init($TypeTag);
		if ($nc(site)->hasTag($TypeTag::ARRAY)) {
			return $new($Resolve$ArrayConstructorReferenceLookupHelper, this, referenceTree, site, argtypes, typeargtypes, maxPhase);
		} else {
			return $new($Resolve$ConstructorReferenceLookupHelper, this, referenceTree, site, argtypes, typeargtypes, maxPhase);
		}
	}
}

$Pair* Resolve::resolveMemberReference($Env* env, $JCTree$JCMemberReference* referenceTree, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes, $Type* descriptor, $Resolve$MethodCheck* methodCheck, $InferenceContext* inferenceContext, $Resolve$ReferenceChooser* referenceChooser) {
	$useLocalObjectStack();
	$init($Resolve$MethodResolutionPhase);
	$var($Resolve$ReferenceLookupHelper, boundLookupHelper, makeReferenceLookupHelper(referenceTree, site, name, argtypes, typeargtypes, $Resolve$MethodResolutionPhase::VARARITY));
	$var($Env, boundEnv, $nc(env)->dup($nc(env)->tree, $($nc($cast($AttrContext, $nc(env)->info))->dup())));
	$var($Resolve$MethodResolutionContext, boundSearchResolveContext, $new($Resolve$MethodResolutionContext, this));
	$set(boundSearchResolveContext, methodCheck, methodCheck);
	$var($Symbol, boundSym, lookupMethod(boundEnv, $($nc(env->tree)->pos()), $nc(site)->tsym, boundSearchResolveContext, boundLookupHelper));
	$var($Resolve$ReferenceLookupResult, boundRes, $new($Resolve$ReferenceLookupResult, boundSym, boundSearchResolveContext));
	if (this->dumpMethodReferenceSearchResults$) {
		dumpMethodReferenceSearchResults(referenceTree, boundSearchResolveContext, boundSym, true);
	}
	$var($Symbol, unboundSym, this->methodNotFound);
	$var($Env, unboundEnv, env->dup(env->tree, $($nc($cast($AttrContext, env->info))->dup())));
	$var($Resolve$ReferenceLookupHelper, unboundLookupHelper, $nc(boundLookupHelper)->unboundLookup(inferenceContext));
	$var($Resolve$ReferenceLookupResult, unboundRes, this->referenceNotFound);
	if (unboundLookupHelper != nullptr) {
		$var($Resolve$MethodResolutionContext, unboundSearchResolveContext, $new($Resolve$MethodResolutionContext, this));
		$set(unboundSearchResolveContext, methodCheck, methodCheck);
		$assign(unboundSym, lookupMethod(unboundEnv, $($nc(env->tree)->pos()), site->tsym, unboundSearchResolveContext, unboundLookupHelper));
		$assign(unboundRes, $new($Resolve$ReferenceLookupResult, unboundSym, unboundSearchResolveContext));
		if (this->dumpMethodReferenceSearchResults$) {
			dumpMethodReferenceSearchResults(referenceTree, unboundSearchResolveContext, unboundSym, false);
		}
	}
	$var($Pair, res, nullptr);
	$var($Resolve$ReferenceLookupResult, bestRes, $nc(referenceChooser)->result(boundRes, unboundRes));
	$assign(res, $new($Pair, $nc(bestRes)->sym, bestRes == unboundRes ? unboundLookupHelper : boundLookupHelper));
	$set($nc($cast($AttrContext, env->info)), pendingResolutionPhase, bestRes == unboundRes ? $nc(($cast($AttrContext, $nc(unboundEnv)->info)))->pendingResolutionPhase : $nc(($cast($AttrContext, $nc(boundEnv)->info)))->pendingResolutionPhase);
	if (!$nc($nc(($cast($Symbol, res->fst)))->kind)->isResolutionError()) {
		$var($Symbol$MethodSymbol, msym, $cast($Symbol$MethodSymbol, res->fst));
		if (($nc(msym)->flags() & (int64_t)0x0000400000000000) != 0) {
			$set($nc($cast($AttrContext, env->info)), pendingResolutionPhase, $Resolve$MethodResolutionPhase::BASIC);
			$assign(res, $new($Pair, $(findPolymorphicSignatureInstance(msym, descriptor)), $cast($Resolve$ReferenceLookupHelper, res->snd)));
		}
	}
	return res;
}

void Resolve::dumpMethodReferenceSearchResults($JCTree$JCMemberReference* referenceTree, $Resolve$MethodResolutionContext* resolutionContext, $Symbol* bestSoFar, bool bound) {
	$useLocalObjectStack();
	$var($ListBuffer, subDiags, $new($ListBuffer));
	int32_t pos = 0;
	int32_t mostSpecificPos = -1;
	{
		$var($Iterator, i$, $nc($nc(resolutionContext)->candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Resolve$MethodResolutionContext$Candidate, c, $cast($Resolve$MethodResolutionContext$Candidate, i$->next()));
			if (resolutionContext->step != $nc(c)->step || !c->isApplicable()) {
				continue;
			} else {
				$var($JCDiagnostic, subDiag, nullptr);
				$init($TypeTag);
				if ($nc($nc(c->sym)->type)->hasTag($TypeTag::FORALL)) {
					$assign(subDiag, $nc(this->diags)->fragment($($CompilerProperties$Fragments::PartialInstSig(c->mtype))));
				}
				$var($String, key, subDiag == nullptr ? "applicable.method.found.2"_s : "applicable.method.found.3"_s);
				$init($CompilerProperties$Fragments);
				subDiags->append($($nc(this->diags)->fragment(key, $$new($ObjectArray, {
					$($Integer::valueOf(pos)),
					c->sym->isStatic() ? $CompilerProperties$Fragments::Static : $CompilerProperties$Fragments::NonStatic,
					c->sym,
					subDiag
				}))));
				if (c->sym == bestSoFar) {
					mostSpecificPos = pos;
				}
				++pos;
			}
		}
	}
	$var($DiagnosticSource, var$0, $nc(this->log)->currentSource());
	$var($String, var$1, "method.ref.search.results.multi"_s);
	$init($CompilerProperties$Fragments);
	$var($JCDiagnostic, main, $nc(this->diags)->note(var$0, referenceTree, var$1, $$new($ObjectArray, {
		bound ? $CompilerProperties$Fragments::Bound : $CompilerProperties$Fragments::Unbound,
		$($nc(referenceTree)->toString()),
		$($Integer::valueOf(mostSpecificPos))
	})));
	$var($JCDiagnostic, d, $new($JCDiagnostic$MultilineDiagnostic, main, $(subDiags->toList())));
	$nc(this->log)->report(d);
}

$Symbol* Resolve::lookupMethod($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Resolve$MethodCheck* methodCheck, $Resolve$LookupHelper* lookupHelper) {
	$var($Resolve$MethodResolutionContext, resolveContext, $new($Resolve$MethodResolutionContext, this));
	$set(resolveContext, methodCheck, methodCheck);
	return lookupMethod(env, pos, location, resolveContext, lookupHelper);
}

$Symbol* Resolve::lookupMethod($Env* env, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Resolve$MethodResolutionContext* resolveContext, $Resolve$LookupHelper* lookupHelper) {
	$useLocalObjectStack();
	$var($Resolve$MethodResolutionContext, prevResolutionContext, this->currentResolutionContext);
	$var($Throwable, var$0, nullptr);
	$var($Symbol, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($Symbol, bestSoFar, this->methodNotFound);
		$set(this, currentResolutionContext, resolveContext);
		{
			$var($Iterator, i$, $nc(this->methodResolutionSteps)->iterator());
			for (; $nc(i$)->hasNext();) {
				$Resolve$MethodResolutionPhase* phase = $cast($Resolve$MethodResolutionPhase, i$->next());
				{
					if ($nc(lookupHelper)->shouldStop(bestSoFar, phase)) {
						break;
					}
					$Resolve$MethodResolutionPhase* prevPhase = $nc(this->currentResolutionContext)->step;
					$var($Symbol, prevBest, bestSoFar);
					$set(this->currentResolutionContext, step, phase);
					$var($Symbol, sym, lookupHelper->lookup(env, phase));
					lookupHelper->debug(pos, sym);
					$assign(bestSoFar, $nc(phase)->mergeResults(bestSoFar, sym));
					$set($nc($cast($AttrContext, $nc(env)->info)), pendingResolutionPhase, (prevBest == bestSoFar) ? prevPhase : phase);
				}
			}
		}
		$assign(var$2, $nc(lookupHelper)->access(env, pos, location, bestSoFar));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$set(this, currentResolutionContext, prevResolutionContext);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$Symbol* Resolve::resolveSelf($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol$TypeSymbol* c, $Name* name) {
	$useLocalObjectStack();
	$var($Env, env1, env);
	bool staticOnly = false;
	while ($nc(env1)->outer != nullptr) {
		if (isStatic(env1)) {
			staticOnly = true;
		}
		if ($equals($nc(env1->enclClass)->sym, c)) {
			$var($Symbol, sym, $nc($nc(($cast($AttrContext, env1->info)))->scope)->findFirst(name));
			if (sym != nullptr) {
				if (staticOnly) {
					$assign(sym, $new($Resolve$StaticError, this, sym));
				}
				return accessBase(sym, pos, $nc($nc($nc(env)->enclClass)->sym)->type, name, true);
			}
		}
		if (($nc($nc(env1->enclClass)->sym)->flags() & 8) != 0) {
			staticOnly = true;
		}
		$assign(env1, env1->outer);
	}
	bool var$1 = $nc(c)->isInterface() && name == $nc(this->names)->_super;
	bool var$0 = var$1 && !isStatic(env);
	if (var$0 && $nc(this->types)->isDirectSuperInterface(c, $nc($nc(env)->enclClass)->sym)) {
		{
			$var($Iterator, i$, $$nc(pruneInterfaces($nc(env->enclClass)->type))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				if ($nc(t)->tsym == c) {
					$set($nc($cast($AttrContext, env->info)), defaultSuperCallSite, t);
					return $new($Symbol$VarSymbol, 0, $nc(this->names)->_super, $($nc(this->types)->asSuper($nc(env->enclClass)->type, c)), $nc(env->enclClass)->sym);
				}
			}
		}
		{
			$var($Iterator, i$, $$nc($nc(this->types)->directSupertypes($nc(env->enclClass)->type))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, i, $cast($Type, i$->next()));
				if ($nc($nc(i)->tsym)->isSubClass(c, this->types) && i->tsym != c) {
					$nc(this->log)->error(pos, $($CompilerProperties$Errors::IllegalDefaultSuperCall(c, $($CompilerProperties$Fragments::RedundantSupertype(c, i)))));
					return $nc(this->syms)->errSymbol;
				}
			}
		}
		$Assert::error();
	}
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::NotEnclClass(c)));
	return $nc(this->syms)->errSymbol;
}

$List* Resolve::pruneInterfaces($Type* t) {
	$useLocalObjectStack();
	$var($ListBuffer, result, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc($nc(this->types)->interfaces(t))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t1, $cast($Type, i$->next()));
			{
				bool shouldAdd = true;
				{
					$var($Iterator, i$, $$nc($nc(this->types)->directSupertypes(t))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, t2, $cast($Type, i$->next()));
						{
							$init($TypeTag);
							bool var$0 = t1 != t2 && !$nc(t2)->hasTag($TypeTag::ERROR);
							if (var$0 && $nc(this->types)->isSubtypeNoCapture(t2, t1)) {
								shouldAdd = false;
							}
						}
					}
				}
				if (shouldAdd) {
					result->append(t1);
				}
			}
		}
	}
	return result->toList();
}

$Symbol* Resolve::resolveSelfContaining($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol* member, bool isSuperCall) {
	$useLocalObjectStack();
	$var($Symbol, sym, resolveSelfContainingInternal(env, member, isSuperCall));
	if (sym == nullptr) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::EnclClassRequired(member)));
		return $nc(this->syms)->errSymbol;
	} else {
		return accessBase(sym, pos, $nc($nc($nc(env)->enclClass)->sym)->type, sym->name, true);
	}
}

bool Resolve::enclosingInstanceMissing($Env* env, $Type* type) {
	$useLocalObjectStack();
	$init($TypeTag);
	bool var$0 = $nc(type)->hasTag($TypeTag::CLASS);
	if (var$0 && $$nc(type->getEnclosingType())->hasTag($TypeTag::CLASS)) {
		$var($Symbol, encl, resolveSelfContainingInternal(env, type->tsym, false));
		return encl == nullptr || $nc(encl->kind)->isResolutionError();
	}
	return false;
}

$Symbol* Resolve::resolveSelfContainingInternal($Env* env, $Symbol* member, bool isSuperCall) {
	$useLocalObjectStack();
	$var($Name, name, $nc(this->names)->_this);
	$var($Env, env1, isSuperCall ? $nc(env)->outer : env);
	bool staticOnly = false;
	if (env1 != nullptr) {
		while (env1 != nullptr && env1->outer != nullptr) {
			if (isStatic(env1)) {
				staticOnly = true;
			}
			if ($nc($nc(env1->enclClass)->sym)->isSubClass($($nc($nc(member)->owner)->enclClass()), this->types)) {
				$var($Symbol, sym, $nc($nc(($cast($AttrContext, env1->info)))->scope)->findFirst(name));
				if (sym != nullptr) {
					if (staticOnly) {
						$assign(sym, $new($Resolve$StaticError, this, sym));
					}
					return sym;
				}
			}
			if (($nc($nc(env1->enclClass)->sym)->flags() & 8) != 0) {
				staticOnly = true;
			}
			$assign(env1, env1->outer);
		}
	}
	return nullptr;
}

$Type* Resolve::resolveImplicitThis($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* t) {
	return resolveImplicitThis(pos, env, t, false);
}

$Type* Resolve::resolveImplicitThis($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Type* t, bool isSuperCall) {
	$useLocalObjectStack();
	$init($Kinds$KindSelector);
	$var($Type, thisType, $nc(($nc($nc($nc($nc(t)->tsym)->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH) ? $(resolveSelf(pos, env, $nc($(t->getEnclosingType()))->tsym, $nc(this->names)->_this)) : $(resolveSelfContaining(pos, env, t->tsym, isSuperCall))))->type);
	if ($nc(($cast($AttrContext, $nc(env)->info)))->isSelfCall && $equals($nc(thisType)->tsym, $nc(env->enclClass)->sym)) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantRefBeforeCtorCalled("this"_s)));
	}
	return thisType;
}

void Resolve::logAccessErrorInternal($Env* env, $JCTree* tree, $Type* type) {
	$useLocalObjectStack();
	$var($Resolve$AccessError, error, $new($Resolve$AccessError, this, env, $nc($nc(env)->enclClass)->type, $nc(type)->tsym));
	logResolveError(error, $($nc(tree)->pos()), env->enclClass->sym, env->enclClass->type, nullptr, nullptr, nullptr);
}

void Resolve::logResolveError($Resolve$ResolveError* error, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$init($JCDiagnostic$DiagnosticType);
	$var($JCDiagnostic, d, $nc(error)->getDiagnostic($JCDiagnostic$DiagnosticType::ERROR, pos, location, site, name, argtypes, typeargtypes));
	if (d != nullptr) {
		$init($JCDiagnostic$DiagnosticFlag);
		d->setFlag($JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR);
		$nc(this->log)->report(d);
	}
}

$Object* Resolve::methodArguments($List* argtypes) {
	$useLocalObjectStack();
	if (argtypes == nullptr || argtypes->isEmpty()) {
		return this->noArgs;
	} else {
		$var($ListBuffer, diagArgs, $new($ListBuffer));
		{
			$var($Iterator, i$, argtypes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				$init($TypeTag);
				if ($nc(t)->hasTag($TypeTag::DEFERRED)) {
					diagArgs->append($cast($DeferredAttr$DeferredType, t)->tree);
				} else {
					diagArgs->append(t);
				}
			}
		}
		return $of(diagArgs);
	}
}

$JCDiagnostic* Resolve::inaccessiblePackageReason($Env* env, $Symbol$PackageSymbol* sym) {
	$useLocalObjectStack();
	if (!$nc($nc($nc($nc(env)->toplevel)->modle)->readModules)->contains($nc(sym)->modle)) {
		if (sym->modle != $nc(this->syms)->unnamedModule) {
			if (env->toplevel->modle != this->syms->unnamedModule) {
				return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessDoesNotRead(env->toplevel->modle, sym, sym->modle)));
			} else {
				return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessDoesNotReadFromUnnamed(sym, sym->modle)));
			}
		} else {
			return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessDoesNotReadUnnamed(sym, env->toplevel->modle)));
		}
	} else if ($$nc($nc($nc($nc($(sym->packge()))->modle)->exports)->stream())->anyMatch($$new(Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8, sym))) {
		if ($nc(env->toplevel)->modle != $nc(this->syms)->unnamedModule) {
			return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessNotExportedToModule(sym, sym->modle, env->toplevel->modle)));
		} else {
			return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessNotExportedToModuleFromUnnamed(sym, sym->modle)));
		}
	} else if ($nc(env->toplevel)->modle != $nc(this->syms)->unnamedModule) {
		return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessNotExported(sym, sym->modle)));
	} else {
		return $nc(this->diags)->fragment($($CompilerProperties$Fragments::NotDefAccessNotExportedFromUnnamed(sym, sym->modle)));
	}
}

bool Resolve::lambda$inaccessiblePackageReason$8($Symbol$PackageSymbol* sym, $Directive$ExportsDirective* e) {
	$init(Resolve);
	return $nc(e)->packge == sym;
}

bool Resolve::lambda$lookupPackage$7($Symbol$PackageSymbol* sym) {
	$init(Resolve);
	$nc(sym)->complete();
	return !$$nc(sym->members())->isEmpty();
}

$Symbol* Resolve::lambda$new$6($Env* env, $Name* name) {
	$useLocalObjectStack();
	$var($Scope, importScope, $nc($nc(env)->toplevel)->starImportScope);
	$var($Name, var$0, $Convert::shortName(name));
	$var($Symbol, existing, $nc(importScope)->findFirst(var$0, $$new(Resolve$$Lambda$lambda$new$3$9, name)));
	if (existing != nullptr) {
		try {
			$assign(existing, $nc(this->finder)->loadClass($nc($(existing->packge()))->modle, name));
			return $new($Resolve$InvisibleSymbolError, this, env, true, existing);
		} catch ($Symbol$CompletionFailure& cf) {
		}
	}
	return nullptr;
}

$Symbol* Resolve::lambda$new$4($Env* env, $Name* name) {
	$useLocalObjectStack();
	$var($Scope, importScope, $nc($nc(env)->toplevel)->namedImportScope);
	$var($Name, var$0, $Convert::shortName(name));
	$var($Symbol, existing, $nc(importScope)->findFirst(var$0, $$new(Resolve$$Lambda$lambda$new$3$9, name)));
	if (existing != nullptr) {
		return $new($Resolve$InvisibleSymbolError, this, env, true, existing);
	}
	return nullptr;
}

bool Resolve::lambda$new$3($Name* name, $Symbol* sym) {
	$init(Resolve);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP && sym->flatName() == name;
}

$Symbol* Resolve::lambda$new$2($Env* env, $Name* name) {
	$init(Resolve);
	return nullptr;
}

$Iterator* Resolve::lambda$superclasses$1($Type* intype) {
	return $new($Resolve$5, this, intype);
}

bool Resolve::lambda$isAccessible$0($Env* env, bool checkInner, $Type* alternative) {
	return isAccessible(env, $nc(alternative)->tsym, checkInner);
}

void Resolve::clinit$($Class* clazz) {
	$assignStatic(Resolve::resolveKey, $new($Context$Key));
}

Resolve::Resolve() {
}

$Class* Resolve::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$2")) {
			return Resolve$$Lambda$lambda$new$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$4$1")) {
			return Resolve$$Lambda$lambda$new$4$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$6$2")) {
			return Resolve$$Lambda$lambda$new$6$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$isAccessible$0$3")) {
			return Resolve$$Lambda$lambda$isAccessible$0$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$superclasses$1$4")) {
			return Resolve$$Lambda$lambda$superclasses$1$4::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$getPackagesForName$5")) {
			return Resolve$$Lambda$getPackagesForName$5::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$enterPackage$6")) {
			return Resolve$$Lambda$enterPackage$6::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$lookupPackage$7$7")) {
			return Resolve$$Lambda$lambda$lookupPackage$7$7::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8")) {
			return Resolve$$Lambda$lambda$inaccessiblePackageReason$8$8::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$$Lambda$lambda$new$3$9")) {
			return Resolve$$Lambda$lambda$new$3$9::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"resolveKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Resolve;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Resolve, resolveKey)},
		{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, 0, $field(Resolve, names)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(Resolve, log)},
		{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(Resolve, syms)},
		{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, 0, $field(Resolve, attr)},
		{"attrRecover", "Lcom/sun/tools/javac/comp/AttrRecover;", nullptr, 0, $field(Resolve, attrRecover)},
		{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, 0, $field(Resolve, deferredAttr)},
		{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, 0, $field(Resolve, chk)},
		{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, 0, $field(Resolve, infer)},
		{"finder", "Lcom/sun/tools/javac/code/ClassFinder;", nullptr, 0, $field(Resolve, finder)},
		{"moduleFinder", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, 0, $field(Resolve, moduleFinder)},
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(Resolve, types)},
		{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(Resolve, diags)},
		{"allowFunctionalInterfaceMostSpecific", "Z", nullptr, $PUBLIC | $FINAL, $field(Resolve, allowFunctionalInterfaceMostSpecific)},
		{"allowModules", "Z", nullptr, $PUBLIC | $FINAL, $field(Resolve, allowModules)},
		{"allowRecords", "Z", nullptr, $PUBLIC | $FINAL, $field(Resolve, allowRecords)},
		{"checkVarargsAccessAfterResolution", "Z", nullptr, $PUBLIC | $FINAL, $field(Resolve, checkVarargsAccessAfterResolution)},
		{"compactMethodDiags", "Z", nullptr, $PRIVATE | $FINAL, $field(Resolve, compactMethodDiags)},
		{"allowLocalVariableTypeInference", "Z", nullptr, $PRIVATE | $FINAL, $field(Resolve, allowLocalVariableTypeInference)},
		{"allowYieldStatement", "Z", nullptr, $PRIVATE | $FINAL, $field(Resolve, allowYieldStatement)},
		{"verboseResolutionMode", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;>;", $FINAL, $field(Resolve, verboseResolutionMode)},
		{"dumpMethodReferenceSearchResults", "Z", nullptr, $FINAL, $field(Resolve, dumpMethodReferenceSearchResults$)},
		{"polymorphicSignatureScope", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0, $field(Resolve, polymorphicSignatureScope)},
		{"varNotFound", "Lcom/sun/tools/javac/comp/Resolve$SymbolNotFoundError;", nullptr, $PRIVATE | $FINAL, $field(Resolve, varNotFound)},
		{"methodNotFound", "Lcom/sun/tools/javac/comp/Resolve$SymbolNotFoundError;", nullptr, $PRIVATE | $FINAL, $field(Resolve, methodNotFound)},
		{"typeNotFound", "Lcom/sun/tools/javac/comp/Resolve$SymbolNotFoundError;", nullptr, $PRIVATE | $FINAL, $field(Resolve, typeNotFound)},
		{"referenceNotFound", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, $PRIVATE | $FINAL, $field(Resolve, referenceNotFound)},
		{"accessibilityChecker", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Void;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $field(Resolve, accessibilityChecker)},
		{"nilMethodCheck", "Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", nullptr, 0, $field(Resolve, nilMethodCheck)},
		{"arityMethodCheck", "Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", nullptr, 0, $field(Resolve, arityMethodCheck)},
		{"resolveMethodCheck", "Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", nullptr, 0, $field(Resolve, resolveMethodCheck)},
		{"noteWarner", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Resolve, noteWarner)},
		{"noRecovery", "Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;", nullptr, $PRIVATE | $FINAL, $field(Resolve, noRecovery)},
		{"doRecoveryLoadClass", "Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;", nullptr, $PRIVATE | $FINAL, $field(Resolve, doRecoveryLoadClass)},
		{"namedImportScopeRecovery", "Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;", nullptr, $PRIVATE | $FINAL, $field(Resolve, namedImportScopeRecovery)},
		{"starImportScopeRecovery", "Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;", nullptr, $PRIVATE | $FINAL, $field(Resolve, starImportScopeRecovery)},
		{"basicLogResolveHelper", "Lcom/sun/tools/javac/comp/Resolve$LogResolveHelper;", nullptr, 0, $field(Resolve, basicLogResolveHelper)},
		{"silentLogResolveHelper", "Lcom/sun/tools/javac/comp/Resolve$LogResolveHelper;", nullptr, 0, $field(Resolve, silentLogResolveHelper)},
		{"methodLogResolveHelper", "Lcom/sun/tools/javac/comp/Resolve$LogResolveHelper;", nullptr, 0, $field(Resolve, methodLogResolveHelper)},
		{"basicReferenceChooser", "Lcom/sun/tools/javac/comp/Resolve$ReferenceChooser;", nullptr, 0, $field(Resolve, basicReferenceChooser)},
		{"structuralReferenceChooser", "Lcom/sun/tools/javac/comp/Resolve$ReferenceChooser;", nullptr, 0, $field(Resolve, structuralReferenceChooser)},
		{"noArgs", "Lcom/sun/tools/javac/api/Formattable$LocalizedString;", nullptr, $PRIVATE | $FINAL, $field(Resolve, noArgs)},
		{"methodResolutionSteps", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;>;", $FINAL, $field(Resolve, methodResolutionSteps)},
		{"currentResolutionContext", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, 0, $field(Resolve, currentResolutionContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Resolve, init$, void, $Context*)},
		{"accessBase", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve, accessBase, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, bool)},
		{"accessBase", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve, accessBase, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Name*, bool)},
		{"accessInternal", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$LogResolveHelper;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$LogResolveHelper;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, accessInternal, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, bool, $List*, $List*, $Resolve$LogResolveHelper*)},
		{"accessMethod", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, accessMethod, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, bool, $List*, $List*)},
		{"accessMethod", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, accessMethod, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Name*, bool, $List*, $List*)},
		{"adjustArgs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;IZ)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;IZ)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Resolve, adjustArgs, $List*, $List*, $Symbol*, int32_t, bool)},
		{"ambiguityError", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve, ambiguityError, $Symbol*, $Symbol*, $Symbol*)},
		{"bestOf", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $STATIC, $staticMethod(Resolve, bestOf, $Symbol*, $Symbol*, $Symbol*)},
		{"checkAccessibleType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)V", 0, $virtualMethod(Resolve, checkAccessibleType, void, $Env*, $Type*)},
		{"checkMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Resolve, checkMethod, $Type*, $Env*, $Type*, $Symbol*, $Attr$ResultInfo*, $List*, $List*, $Warner*)},
		{"checkNonAbstract", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Resolve, checkNonAbstract, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"checkRestrictedType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(Resolve, checkRestrictedType, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Name*)},
		{"createInvisibleSymbolError", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, createInvisibleSymbolError, $Symbol*, $Env*, $Symbol*)},
		{"dumpMethodReferenceSearchResults", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, $PRIVATE, $method(Resolve, dumpMethodReferenceSearchResults, void, $JCTree$JCMemberReference*, $Resolve$MethodResolutionContext*, $Symbol*, bool)},
		{"enclosingInstanceMissing", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Z", 0, $virtualMethod(Resolve, enclosingInstanceMissing, bool, $Env*, $Type*)},
		{"findConstructor", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZ)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findConstructor, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*, bool, bool)},
		{"findDiamond", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZ)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, findDiamond, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*, bool, bool)},
		{"findDiamond", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZ)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, findDiamond, $Symbol*, $Env*, $Type*, $List*, $List*, bool, bool)},
		{"findField", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findField, $Symbol*, $Env*, $Type*, $Name*, $Symbol$TypeSymbol*)},
		{"findFun", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZ)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findFun, $Symbol*, $Env*, $Name*, $List*, $List*, bool, bool)},
		{"findGlobalType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findGlobalType, $Symbol*, $Env*, $Scope*, $Name*, $Resolve$RecoveryLoadClass*)},
		{"findIdent", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdent, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Name*, $Kinds$KindSelector*)},
		{"findIdentInPackage", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdentInPackage, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol$TypeSymbol*, $Name*, $Kinds$KindSelector*)},
		{"findIdentInPackageInternal", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdentInPackageInternal, $Symbol*, $Env*, $Symbol$TypeSymbol*, $Name*, $Kinds$KindSelector*)},
		{"findIdentInType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdentInType, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $Name*, $Kinds$KindSelector*)},
		{"findIdentInTypeInternal", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdentInTypeInternal, $Symbol*, $Env*, $Type*, $Name*, $Kinds$KindSelector*)},
		{"findIdentInternal", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findIdentInternal, $Symbol*, $Env*, $Name*, $Kinds$KindSelector*)},
		{"findImmediateMemberType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findImmediateMemberType, $Symbol*, $Env*, $Type*, $Name*, $Symbol$TypeSymbol*)},
		{"findInheritedMemberType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findInheritedMemberType, $Symbol*, $Env*, $Type*, $Name*, $Symbol$TypeSymbol*)},
		{"findMemberType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findMemberType, $Symbol*, $Env*, $Type*, $Name*, $Symbol$TypeSymbol*)},
		{"findMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZ)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findMethod, $Symbol*, $Env*, $Type*, $Name*, $List*, $List*, bool, bool)},
		{"findMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;ZZ)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, findMethod, $Symbol*, $Env*, $Type*, $Name*, $List*, $List*, $Type*, $Symbol*, bool, bool)},
		{"findMethodInScope", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;ZZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;ZZZ)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findMethodInScope, $Symbol*, $Env*, $Type*, $Name*, $List*, $List*, $Scope*, $Symbol*, bool, bool, bool)},
		{"findPolymorphicSignatureInstance", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findPolymorphicSignatureInstance, $Symbol*, $Env*, $Symbol*, $List*)},
		{"findPolymorphicSignatureInstance", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(Resolve, findPolymorphicSignatureInstance, $Symbol*, $Symbol*, $Type*)},
		{"findType", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findType, $Symbol*, $Env*, $Name*)},
		{"findTypeVar", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Z)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findTypeVar, $Symbol*, $Env*, $Name*, bool)},
		{"findVar", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, findVar, $Symbol*, $Env*, $Name*)},
		{"getMemberReference", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, getMemberReference, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $JCTree$JCMemberReference*, $Type*, $Name*)},
		{"getVerboseApplicableCandidateDiag", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, 0, $virtualMethod(Resolve, getVerboseApplicableCandidateDiag, $JCDiagnostic*, int32_t, $Symbol*, $Type*)},
		{"getVerboseInapplicableCandidateDiag", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, 0, $virtualMethod(Resolve, getVerboseInapplicableCandidateDiag, $JCDiagnostic*, int32_t, $Symbol*, $JCDiagnostic*)},
		{"inaccessiblePackageReason", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve, inaccessiblePackageReason, $JCDiagnostic*, $Env*, $Symbol$PackageSymbol*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PUBLIC | $STATIC, $staticMethod(Resolve, instance, Resolve*, $Context*)},
		{"instantiate", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Resolve, instantiate, $Type*, $Env*, $Type*, $Symbol*, $Attr$ResultInfo*, $List*, $List*, bool, bool, $Warner*)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", $PUBLIC, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Symbol$TypeSymbol*)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Z)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Z)Z", $PUBLIC, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Symbol$TypeSymbol*, bool)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Z", 0, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Type*)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Z)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Z)Z", 0, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Type*, bool)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Z", $PUBLIC, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Type*, $Symbol*)},
		{"isAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Z)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Z)Z", $PUBLIC, $virtualMethod(Resolve, isAccessible, bool, $Env*, $Type*, $Symbol*, bool)},
		{"isImportOnDemand", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Z", $PRIVATE, $method(Resolve, isImportOnDemand, bool, $Env*, $Name*)},
		{"isInitializer", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $STATIC, $staticMethod(Resolve, isInitializer, bool, $Env*)},
		{"isInnerSubClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Resolve, isInnerSubClass, bool, $Symbol$ClassSymbol*, $Symbol*)},
		{"isProtectedAccessible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Resolve, isProtectedAccessible, bool, $Symbol*, $Symbol$ClassSymbol*, $Type*)},
		{"isStatic", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PROTECTED | $STATIC, $staticMethod(Resolve, isStatic, bool, $Env*)},
		{"lambda$inaccessiblePackageReason$8", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Directive$ExportsDirective;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve, lambda$inaccessiblePackageReason$8, bool, $Symbol$PackageSymbol*, $Directive$ExportsDirective*)},
		{"lambda$isAccessible$0", "(Lcom/sun/tools/javac/comp/Env;ZLcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve, lambda$isAccessible$0, bool, $Env*, bool, $Type*)},
		{"lambda$lookupPackage$7", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve, lambda$lookupPackage$7, bool, $Symbol$PackageSymbol*)},
		{"lambda$new$2", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve, lambda$new$2, $Symbol*, $Env*, $Name*)},
		{"lambda$new$3", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve, lambda$new$3, bool, $Name*, $Symbol*)},
		{"lambda$new$4", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve, lambda$new$4, $Symbol*, $Env*, $Name*)},
		{"lambda$new$6", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve, lambda$new$6, $Symbol*, $Env*, $Name*)},
		{"lambda$superclasses$1", "(Lcom/sun/tools/javac/code/Type;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve, lambda$superclasses$1, $Iterator*, $Type*)},
		{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Resolve$RecoveryLoadClass;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, loadClass, $Symbol*, $Env*, $Name*, $Resolve$RecoveryLoadClass*)},
		{"logAccessErrorInternal", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", $PUBLIC, $virtualMethod(Resolve, logAccessErrorInternal, void, $Env*, $JCTree*, $Type*)},
		{"logResolveError", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(Resolve, logResolveError, void, $Resolve$ResolveError*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"lookupInvisibleSymbol", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Function;Ljava/util/function/BiFunction;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", "<S:Lcom/sun/tools/javac/code/Symbol;>(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Function<Lcom/sun/tools/javac/util/Name;Ljava/lang/Iterable<TS;>;>;Ljava/util/function/BiFunction<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;TS;>;Ljava/util/function/Predicate<TS;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, lookupInvisibleSymbol, $Symbol*, $Env*, $Name*, $Function*, $BiFunction*, $Predicate*, $Symbol*)},
		{"lookupMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodCheck;Lcom/sun/tools/javac/comp/Resolve$LookupHelper;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodCheck;Lcom/sun/tools/javac/comp/Resolve$LookupHelper;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, lookupMethod, $Symbol*, $Env*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Resolve$MethodCheck*, $Resolve$LookupHelper*)},
		{"lookupMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$LookupHelper;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$LookupHelper;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, lookupMethod, $Symbol*, $Env*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Resolve$MethodResolutionContext*, $Resolve$LookupHelper*)},
		{"lookupPackage", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, lookupPackage, $Symbol*, $Env*, $Name*)},
		{"makeReferenceLookupHelper", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;", 0, $virtualMethod(Resolve, makeReferenceLookupHelper, $Resolve$ReferenceLookupHelper*, $JCTree$JCMemberReference*, $Type*, $Name*, $List*, $List*, $Resolve$MethodResolutionPhase*)},
		{"methodArguments", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(Resolve, methodArguments, $Object*, $List*)},
		{"mostSpecific", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, mostSpecific, $Symbol*, $List*, $Symbol*, $Symbol*, $Env*, $Type*, bool)},
		{"notOverriddenIn", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Resolve, notOverriddenIn, bool, $Type*, $Symbol*)},
		{"pruneInterfaces", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(Resolve, pruneInterfaces, $List*, $Type*)},
		{"rawInstantiate", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Resolve, rawInstantiate, $Type*, $Env*, $Type*, $Symbol*, $Attr$ResultInfo*, $List*, $List*, bool, bool, $Warner*), "com.sun.tools.javac.comp.Infer$InferenceException"},
		{"reportVerboseResolutionDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;)V", 0, $virtualMethod(Resolve, reportVerboseResolutionDiagnostic, void, $JCDiagnostic$DiagnosticPosition*, $Name*, $Type*, $List*, $List*, $Symbol*)},
		{"resolveConstructor", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveConstructor, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*)},
		{"resolveConstructor", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, resolveConstructor, $Symbol*, $Resolve$MethodResolutionContext*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*)},
		{"resolveDiamond", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveDiamond, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*)},
		{"resolveIdent", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveIdent, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Name*, $Kinds$KindSelector*)},
		{"resolveImplicitThis", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Resolve, resolveImplicitThis, $Type*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*)},
		{"resolveImplicitThis", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Resolve, resolveImplicitThis, $Type*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, bool)},
		{"resolveInternalConstructor", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PUBLIC, $virtualMethod(Resolve, resolveInternalConstructor, $Symbol$MethodSymbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $List*, $List*)},
		{"resolveInternalField", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", $PUBLIC, $virtualMethod(Resolve, resolveInternalField, $Symbol$VarSymbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $Name*)},
		{"resolveInternalMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PUBLIC, $virtualMethod(Resolve, resolveInternalMethod, $Symbol$MethodSymbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $Name*, $List*, $List*)},
		{"resolveMemberReference", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Resolve$MethodCheck;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Resolve$ReferenceChooser;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Resolve$MethodCheck;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Resolve$ReferenceChooser;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupHelper;>;", 0, $virtualMethod(Resolve, resolveMemberReference, $Pair*, $Env*, $JCTree$JCMemberReference*, $Type*, $Name*, $List*, $List*, $Type*, $Resolve$MethodCheck*, $InferenceContext*, $Resolve$ReferenceChooser*)},
		{"resolveMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveMethod, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Name*, $List*, $List*)},
		{"resolveQualifiedMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveQualifiedMethod, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Type*, $Name*, $List*, $List*)},
		{"resolveQualifiedMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveQualifiedMethod, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"resolveQualifiedMethod", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, resolveQualifiedMethod, $Symbol*, $Resolve$MethodResolutionContext*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"resolveSelf", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveSelf, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol$TypeSymbol*, $Name*)},
		{"resolveSelfContaining", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, resolveSelfContaining, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol*, bool)},
		{"resolveSelfContainingInternal", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Symbol;", $PRIVATE, $method(Resolve, resolveSelfContainingInternal, $Symbol*, $Env*, $Symbol*, bool)},
		{"selectBest", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;ZZ)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;ZZ)Lcom/sun/tools/javac/code/Symbol;", 0, $virtualMethod(Resolve, selectBest, $Symbol*, $Env*, $Type*, $List*, $List*, $Symbol*, $Symbol*, bool, bool)},
		{"signatureMoreSpecific", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Z)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Z)Z", $PRIVATE, $method(Resolve, signatureMoreSpecific, bool, $List*, $Env*, $Type*, $Symbol*, $Symbol*, bool)},
		{"superclasses", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;>;", 0, $virtualMethod(Resolve, superclasses, $Iterable*, $Type*)},
		{"symbolPackageVisible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;)Z", $PRIVATE, $method(Resolve, symbolPackageVisible, bool, $Env*, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$18", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase", "com.sun.tools.javac.comp.Resolve", "MethodResolutionPhase", $STATIC | $ENUM},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$BadClassFileError", "com.sun.tools.javac.comp.Resolve", "BadClassFileError", 0},
		{"com.sun.tools.javac.comp.Resolve$BadConstructorReferenceError", "com.sun.tools.javac.comp.Resolve", "BadConstructorReferenceError", 0},
		{"com.sun.tools.javac.comp.Resolve$BadMethodReferenceError", "com.sun.tools.javac.comp.Resolve", "BadMethodReferenceError", 0},
		{"com.sun.tools.javac.comp.Resolve$BadVarargsMethod", "com.sun.tools.javac.comp.Resolve", "BadVarargsMethod", 0},
		{"com.sun.tools.javac.comp.Resolve$AmbiguityError", "com.sun.tools.javac.comp.Resolve", "AmbiguityError", 0},
		{"com.sun.tools.javac.comp.Resolve$StaticError", "com.sun.tools.javac.comp.Resolve", "StaticError", 0},
		{"com.sun.tools.javac.comp.Resolve$InvisibleSymbolError", "com.sun.tools.javac.comp.Resolve", "InvisibleSymbolError", 0},
		{"com.sun.tools.javac.comp.Resolve$AccessError", "com.sun.tools.javac.comp.Resolve", "AccessError", 0},
		{"com.sun.tools.javac.comp.Resolve$DiamondError", "com.sun.tools.javac.comp.Resolve", "DiamondError", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolsError", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
		{"com.sun.tools.javac.comp.Resolve$SymbolNotFoundError", "com.sun.tools.javac.comp.Resolve", "SymbolNotFoundError", 0},
		{"com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError", "com.sun.tools.javac.comp.Resolve", "BadRestrictedTypeError", 0},
		{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$ConstructorReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ConstructorReferenceLookupHelper", 0},
		{"com.sun.tools.javac.comp.Resolve$ArrayConstructorReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ArrayConstructorReferenceLookupHelper", 0},
		{"com.sun.tools.javac.comp.Resolve$UnboundMethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "UnboundMethodReferenceLookupHelper", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "MethodReferenceLookupHelper", 0},
		{"com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupHelper", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$BasicLookupHelper", "com.sun.tools.javac.comp.Resolve", "BasicLookupHelper", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$LookupHelper", "com.sun.tools.javac.comp.Resolve", "LookupHelper", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$ReferenceChooser", "com.sun.tools.javac.comp.Resolve", "ReferenceChooser", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupResult", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap", "com.sun.tools.javac.comp.Resolve", "ResolveDeferredRecoveryMap", 0},
		{"com.sun.tools.javac.comp.Resolve$LogResolveHelper", "com.sun.tools.javac.comp.Resolve", "LogResolveHelper", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass", "com.sun.tools.javac.comp.Resolve", "RecoveryLoadClass", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase", "com.sun.tools.javac.comp.Resolve", "InterfaceLookupPhase", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Resolve$LookupFilter", "com.sun.tools.javac.comp.Resolve", "LookupFilter", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MostSpecificCheck", "com.sun.tools.javac.comp.Resolve", "MostSpecificCheck", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResultInfo", "com.sun.tools.javac.comp.Resolve", "MethodResultInfo", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodCheckContext", "com.sun.tools.javac.comp.Resolve", "MethodCheckContext", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck", "com.sun.tools.javac.comp.Resolve", "MethodReferenceCheck", 0},
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$MethodCheckDiag", "com.sun.tools.javac.comp.Resolve", "MethodCheckDiag", $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$VerboseResolutionMode", "com.sun.tools.javac.comp.Resolve", "VerboseResolutionMode", $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Resolve$5", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$17", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$16", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$15", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$14", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$13", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$12", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$11", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$10", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$9", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$8", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$7", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$6", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve$18,com.sun.tools.javac.comp.Resolve$MethodResolutionContext,com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate,com.sun.tools.javac.comp.Resolve$MethodResolutionPhase,com.sun.tools.javac.comp.Resolve$MethodResolutionPhase$1,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2,com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1,com.sun.tools.javac.comp.Resolve$BadClassFileError,com.sun.tools.javac.comp.Resolve$BadConstructorReferenceError,com.sun.tools.javac.comp.Resolve$BadMethodReferenceError,com.sun.tools.javac.comp.Resolve$BadVarargsMethod,com.sun.tools.javac.comp.Resolve$AmbiguityError,com.sun.tools.javac.comp.Resolve$StaticError,com.sun.tools.javac.comp.Resolve$InvisibleSymbolError,com.sun.tools.javac.comp.Resolve$AccessError,com.sun.tools.javac.comp.Resolve$DiamondError,com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError,com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$MostSpecificMap,com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$1,com.sun.tools.javac.comp.Resolve$InapplicableSymbolError,com.sun.tools.javac.comp.Resolve$SymbolNotFoundError,com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError,com.sun.tools.javac.comp.Resolve$InvalidSymbolError,com.sun.tools.javac.comp.Resolve$ResolveError,com.sun.tools.javac.comp.Resolve$ConstructorReferenceLookupHelper,com.sun.tools.javac.comp.Resolve$ArrayConstructorReferenceLookupHelper,com.sun.tools.javac.comp.Resolve$UnboundMethodReferenceLookupHelper,com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper,com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper$1,com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper,com.sun.tools.javac.comp.Resolve$BasicLookupHelper,com.sun.tools.javac.comp.Resolve$LookupHelper,com.sun.tools.javac.comp.Resolve$ReferenceChooser,com.sun.tools.javac.comp.Resolve$ReferenceLookupResult,com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind,com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap,com.sun.tools.javac.comp.Resolve$LogResolveHelper,com.sun.tools.javac.comp.Resolve$RecoveryLoadClass,com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase,com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$2,com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$1,com.sun.tools.javac.comp.Resolve$LookupFilter,com.sun.tools.javac.comp.Resolve$InapplicableMethodException,com.sun.tools.javac.comp.Resolve$MostSpecificCheck,com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext,com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker,com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker$1,com.sun.tools.javac.comp.Resolve$MethodResultInfo,com.sun.tools.javac.comp.Resolve$MethodCheckContext,com.sun.tools.javac.comp.Resolve$MethodReferenceCheck,com.sun.tools.javac.comp.Resolve$MethodReferenceCheck$1,com.sun.tools.javac.comp.Resolve$AbstractMethodCheck,com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException,com.sun.tools.javac.comp.Resolve$MethodCheckDiag,com.sun.tools.javac.comp.Resolve$MethodCheck,com.sun.tools.javac.comp.Resolve$VerboseResolutionMode,com.sun.tools.javac.comp.Resolve$5,com.sun.tools.javac.comp.Resolve$17,com.sun.tools.javac.comp.Resolve$16,com.sun.tools.javac.comp.Resolve$15,com.sun.tools.javac.comp.Resolve$14,com.sun.tools.javac.comp.Resolve$13,com.sun.tools.javac.comp.Resolve$12,com.sun.tools.javac.comp.Resolve$11,com.sun.tools.javac.comp.Resolve$10,com.sun.tools.javac.comp.Resolve$9,com.sun.tools.javac.comp.Resolve$8,com.sun.tools.javac.comp.Resolve$7,com.sun.tools.javac.comp.Resolve$6,com.sun.tools.javac.comp.Resolve$4,com.sun.tools.javac.comp.Resolve$4$1,com.sun.tools.javac.comp.Resolve$3,com.sun.tools.javac.comp.Resolve$2,com.sun.tools.javac.comp.Resolve$1"
	};
	$loadClass(Resolve, name, initialize, &classInfo$$, Resolve::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve);
	});
	return class$;
}

$Class* Resolve::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com