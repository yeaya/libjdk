#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/SymbolMetadata.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check$1.h>
#include <com/sun/tools/javac/comp/Check$1AnnotationValidator.h>
#include <com/sun/tools/javac/comp/Check$1SpecialTreeVisitor.h>
#include <com/sun/tools/javac/comp/Check$2.h>
#include <com/sun/tools/javac/comp/Check$3.h>
#include <com/sun/tools/javac/comp/Check$4.h>
#include <com/sun/tools/javac/comp/Check$5.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$ClashFilter.h>
#include <com/sun/tools/javac/comp/Check$ConversionWarner.h>
#include <com/sun/tools/javac/comp/Check$CycleChecker.h>
#include <com/sun/tools/javac/comp/Check$DefaultMethodClashFilter.h>
#include <com/sun/tools/javac/comp/Check$Validator.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/MandatoryWarningHandler.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef APPLY
#undef ARRAY
#undef ASSIGN
#undef AUTOMATIC_MODULE
#undef AUXILIARYCLASS
#undef BINDINGPATTERN
#undef BOT
#undef CAST
#undef CLASS
#undef CLASSDEF
#undef CONSTRUCTOR
#undef DEFAULT
#undef DEFAULTCASELABEL
#undef DEFAULT_METHODS
#undef DEPRECATION
#undef DEP_ANN
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#undef DIVZERO
#undef EMPTY
#undef ENUM
#undef ERR
#undef ERROR
#undef EXPORTS
#undef FIELD
#undef FORALL
#undef GENERATED_MEMBER
#undef HAS_RESOURCE
#undef IMPORT
#undef IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES
#undef LOCAL_VARIABLE
#undef LONG
#undef MDL
#undef METHOD
#undef METHODDEF
#undef MISSING_EXPLICIT_CTOR
#undef MODULE
#undef MODULES
#undef MTH
#undef NEWARRAY
#undef NIL
#undef NONE
#undef NON_DEFERRABLE
#undef NON_RECURSIVE
#undef OPENS
#undef OVERLOADS
#undef OVERRIDES
#undef PACKAGE
#undef PARAMETER
#undef PCK
#undef PREVIEW
#undef PRIVATE_SAFE_VARARGS
#undef PROTECTED
#undef PUBLIC
#undef RAW
#undef RECORDS
#undef RECORD_COMPONENT
#undef REMOVAL
#undef REQUIRES_AUTOMATIC
#undef REQUIRES_TRANSITIVE_AUTOMATIC
#undef RESOLVE_ERROR
#undef RUNTIME
#undef SEALED_CLASSES
#undef SELECT
#undef SERIAL
#undef SKIP
#undef SOURCE
#undef SOURCE_LEVEL
#undef STATEMENT
#undef STATIC
#undef STRICTFP
#undef STRICT_METHOD_CLASH_CHECK
#undef TYP
#undef TYPE
#undef TYPEVAR
#undef TYPE_ANNOTATION
#undef TYPE_PARAMETER
#undef TYPE_USE
#undef UNCHECKED
#undef VAL_MTH
#undef VAR
#undef VARARGS
#undef VARDEF
#undef VOID
#undef WILDCARD

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $SymbolArray = $Array<::com::sun::tools::javac::code::Symbol>;
using $NameArray = $Array<::com::sun::tools::javac::util::Name>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $DeferredLintHandler$LintLogger = ::com::sun::tools::javac::code::DeferredLintHandler$LintLogger;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $SymbolMetadata = ::com::sun::tools::javac::code::SymbolMetadata;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check$1 = ::com::sun::tools::javac::comp::Check$1;
using $Check$1AnnotationValidator = ::com::sun::tools::javac::comp::Check$1AnnotationValidator;
using $Check$1SpecialTreeVisitor = ::com::sun::tools::javac::comp::Check$1SpecialTreeVisitor;
using $Check$2 = ::com::sun::tools::javac::comp::Check$2;
using $Check$3 = ::com::sun::tools::javac::comp::Check$3;
using $Check$4 = ::com::sun::tools::javac::comp::Check$4;
using $Check$5 = ::com::sun::tools::javac::comp::Check$5;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$ClashFilter = ::com::sun::tools::javac::comp::Check$ClashFilter;
using $Check$ConversionWarner = ::com::sun::tools::javac::comp::Check$ConversionWarner;
using $Check$CycleChecker = ::com::sun::tools::javac::comp::Check$CycleChecker;
using $Check$DefaultMethodClashFilter = ::com::sun::tools::javac::comp::Check$DefaultMethodClashFilter;
using $Check$Validator = ::com::sun::tools::javac::comp::Check$Validator;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Log$DiscardDiagnosticHandler = ::com::sun::tools::javac::util::Log$DiscardDiagnosticHandler;
using $MandatoryWarningHandler = ::com::sun::tools::javac::util::MandatoryWarningHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Check$$Lambda$lambda$new$6 : public $Predicate {
	$class(Check$$Lambda$lambda$new$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		return Check::lambda$new$6($cast($Symbol, s));
	}
};
$Class* Check$$Lambda$lambda$new$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$new$6, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$new$6, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$new$6",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$new$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$new$6);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$new$6::class$ = nullptr;

class Check$$Lambda$lambda$checkType$0$1 : public $Infer$FreeTypeListener {
	$class(Check$$Lambda$lambda$checkType$0$1, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, found, found);
		$set(this, req, req);
		$set(this, checkContext, checkContext);
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$checkType$0(pos, found, req, checkContext, solvedContext);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Type* found = nullptr;
	$Type* req = nullptr;
	$Check$CheckContext* checkContext = nullptr;
};
$Class* Check$$Lambda$lambda$checkType$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, pos)},
		{"found", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, found)},
		{"req", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, req)},
		{"checkContext", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkType$0$1, checkContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkType$0$1, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Check$CheckContext*)},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkType$0$1, typesInferred, void, $InferenceContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkType$0$1",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkType$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkType$0$1);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkType$0$1::class$ = nullptr;

class Check$$Lambda$lambda$checkRedundantCast$1$2 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkRedundantCast$1$2, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCTree$JCTypeCast* tree) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkRedundantCast$1(tree);
	}
	Check* inst$ = nullptr;
	$JCTree$JCTypeCast* tree = nullptr;
};
$Class* Check$$Lambda$lambda$checkRedundantCast$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkRedundantCast$1$2, inst$)},
		{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkRedundantCast$1$2, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkRedundantCast$1$2, init$, void, Check*, $JCTree$JCTypeCast*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkRedundantCast$1$2, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkRedundantCast$1$2",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkRedundantCast$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkRedundantCast$1$2);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkRedundantCast$1$2::class$ = nullptr;

class Check$$Lambda$lambda$checkMethod$2$3 : public $Infer$FreeTypeListener {
	$class(Check$$Lambda$lambda$checkMethod$2$3, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(Check* inst, $Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs) {
		$set(this, inst$, inst);
		$set(this, mtype, mtype);
		$set(this, sym, sym);
		$set(this, env, env);
		$set(this, argtrees, argtrees);
		$set(this, argtypes, argtypes);
		this->useVarargs = useVarargs;
	}
	virtual void typesInferred($InferenceContext* solvedContext) override {
		$nc(inst$)->lambda$checkMethod$2(mtype, sym, env, argtrees, argtypes, useVarargs, solvedContext);
	}
	Check* inst$ = nullptr;
	$Type* mtype = nullptr;
	$Symbol* sym = nullptr;
	$Env* env = nullptr;
	$List* argtrees = nullptr;
	$List* argtypes = nullptr;
	bool useVarargs = false;
};
$Class* Check$$Lambda$lambda$checkMethod$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, inst$)},
		{"mtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, mtype)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, sym)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, env)},
		{"argtrees", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, argtrees)},
		{"argtypes", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, argtypes)},
		{"useVarargs", "Z", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkMethod$2$3, useVarargs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Z)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkMethod$2$3, init$, void, Check*, $Type*, $Symbol*, $Env*, $List*, $List*, bool)},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkMethod$2$3, typesInferred, void, $InferenceContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkMethod$2$3",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkMethod$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkMethod$2$3);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkMethod$2$3::class$ = nullptr;

class Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$warnOnExplicitStrictfp$3(pos);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
};
$Class* Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::class$ = nullptr;

class Check$$Lambda$lambda$checkOverride$4$5 : public $Supplier {
	$class(Check$$Lambda$lambda$checkOverride$4$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$MethodSymbol* m, $JCTree* tree) {
		$set(this, m, m);
		$set(this, tree, tree);
	}
	virtual $Object* get() override {
		return Check::lambda$checkOverride$4(m, tree);
	}
	$Symbol$MethodSymbol* m = nullptr;
	$JCTree* tree = nullptr;
};
$Class* Check$$Lambda$lambda$checkOverride$4$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$4$5, m)},
		{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$4$5, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkOverride$4$5, init$, void, $Symbol$MethodSymbol*, $JCTree*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkOverride$4$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$4$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkOverride$4$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkOverride$4$5);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkOverride$4$5::class$ = nullptr;

class Check$$Lambda$lambda$checkOverride$5$6 : public $Predicate {
	$class(Check$$Lambda$lambda$checkOverride$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$JCMethodDecl* tree) {
		$set(this, tree, tree);
	}
	virtual bool test(Object$* rc) override {
		return Check::lambda$checkOverride$5(tree, $cast($Symbol$RecordComponent, rc));
	}
	$JCTree$JCMethodDecl* tree = nullptr;
};
$Class* Check$$Lambda$lambda$checkOverride$5$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkOverride$5$6, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkOverride$5$6, init$, void, $JCTree$JCMethodDecl*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkOverride$5$6, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$5$6",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkOverride$5$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkOverride$5$6);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkOverride$5$6::class$ = nullptr;

class Check$$Lambda$add$7 : public $Consumer {
	$class(Check$$Lambda$add$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ArrayList* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->add(arg0);
	}
	$ArrayList* inst$ = nullptr;
};
$Class* Check$$Lambda$add$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$add$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ArrayList;)V", nullptr, $PUBLIC, $method(Check$$Lambda$add$7, init$, void, $ArrayList*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$add$7, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$add$7",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$add$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$add$7);
	});
	return class$;
}
$Class* Check$$Lambda$add$7::class$ = nullptr;

class Check$$Lambda$lambda$validateAnnotation$8$8 : public $Predicate {
	$class(Check$$Lambda$lambda$validateAnnotation$8$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* anno) override {
		return $nc(inst$)->lambda$validateAnnotation$8($cast($Attribute$Compound, anno));
	}
	Check* inst$ = nullptr;
};
$Class* Check$$Lambda$lambda$validateAnnotation$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$validateAnnotation$8$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$validateAnnotation$8$8, init$, void, Check*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$validateAnnotation$8$8, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$8$8",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$validateAnnotation$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$validateAnnotation$8$8);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$validateAnnotation$8$8::class$ = nullptr;

class Check$$Lambda$lambda$isTypeAnnotation$9$9 : public $Predicate {
	$class(Check$$Lambda$lambda$isTypeAnnotation$9$9, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst, bool isTypeParameter) {
		$set(this, inst$, inst);
		this->isTypeParameter = isTypeParameter;
	}
	virtual bool test(Object$* attr) override {
		return $nc(inst$)->lambda$isTypeAnnotation$9(isTypeParameter, $cast($Attribute, attr));
	}
	Check* inst$ = nullptr;
	bool isTypeParameter = false;
};
$Class* Check$$Lambda$lambda$isTypeAnnotation$9$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$isTypeAnnotation$9$9, inst$)},
		{"isTypeParameter", "Z", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$isTypeAnnotation$9$9, isTypeParameter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Z)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$isTypeAnnotation$9$9, init$, void, Check*, bool)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$isTypeAnnotation$9$9, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$isTypeAnnotation$9$9",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$isTypeAnnotation$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$isTypeAnnotation$9$9);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$isTypeAnnotation$9$9::class$ = nullptr;

class Check$$Lambda$lambda$checkDeprecated$10$10 : public $Supplier {
	$class(Check$$Lambda$lambda$checkDeprecated$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, pos, pos);
	}
	virtual $Object* get() override {
		return Check::lambda$checkDeprecated$10(pos);
	}
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
};
$Class* Check$$Lambda$lambda$checkDeprecated$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$10$10, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkDeprecated$10$10, init$, void, $JCDiagnostic$DiagnosticPosition*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkDeprecated$10$10, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$10$10",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkDeprecated$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkDeprecated$10$10);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkDeprecated$10$10::class$ = nullptr;

class Check$$Lambda$lambda$checkDeprecated$11$11 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDeprecated$11$11, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $Supplier* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDeprecated$11(pos, s);
	}
	Check* inst$ = nullptr;
	$Supplier* pos = nullptr;
	$Symbol* s = nullptr;
};
$Class* Check$$Lambda$lambda$checkDeprecated$11$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, inst$)},
		{"pos", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, pos)},
		{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDeprecated$11$11, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkDeprecated$11$11, init$, void, Check*, $Supplier*, $Symbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkDeprecated$11$11, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$11$11",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkDeprecated$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkDeprecated$11$11);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkDeprecated$11$11::class$ = nullptr;

class Check$$Lambda$lambda$checkSunAPI$12$12 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkSunAPI$12$12, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkSunAPI$12(pos, s);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
};
$Class* Check$$Lambda$lambda$checkSunAPI$12$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, pos)},
		{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkSunAPI$12$12, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkSunAPI$12$12, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkSunAPI$12$12, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkSunAPI$12$12",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkSunAPI$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkSunAPI$12$12);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkSunAPI$12$12::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$13$13 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$13$13, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$13(pos, s);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
};
$Class* Check$$Lambda$lambda$checkPreview$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, pos)},
		{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$13$13, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkPreview$13$13, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkPreview$13$13, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$13$13",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkPreview$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkPreview$13$13);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$13$13::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$14$14 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$14$14, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$14(pos, s);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
};
$Class* Check$$Lambda$lambda$checkPreview$14$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, pos)},
		{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$14$14, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkPreview$14$14, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkPreview$14$14, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$14$14",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkPreview$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkPreview$14$14);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$14$14::class$ = nullptr;

class Check$$Lambda$lambda$checkPreview$15$15 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPreview$15$15, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, s, s);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPreview$15(pos, s);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol* s = nullptr;
};
$Class* Check$$Lambda$lambda$checkPreview$15$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, pos)},
		{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPreview$15$15, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkPreview$15$15, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkPreview$15$15, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$15$15",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkPreview$15$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkPreview$15$15);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkPreview$15$15::class$ = nullptr;

class Check$$Lambda$lambda$checkDivZero$16$16 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDivZero$16$16, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDivZero$16(pos);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
};
$Class* Check$$Lambda$lambda$checkDivZero$16$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDivZero$16$16, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDivZero$16$16, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkDivZero$16$16, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkDivZero$16$16, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDivZero$16$16",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkDivZero$16$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkDivZero$16$16);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkDivZero$16$16::class$ = nullptr;

class Check$$Lambda$lambda$checkImportsUnique$17$17 : public $Predicate {
	$class(Check$$Lambda$lambda$checkImportsUnique$17$17, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		return Check::lambda$checkImportsUnique$17($cast($Symbol, sym));
	}
};
$Class* Check$$Lambda$lambda$checkImportsUnique$17$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkImportsUnique$17$17, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkImportsUnique$17$17, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkImportsUnique$17$17",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkImportsUnique$17$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkImportsUnique$17$17);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkImportsUnique$17$17::class$ = nullptr;

class Check$$Lambda$lambda$checkUniqueImport$18$18 : public $Predicate {
	$class(Check$$Lambda$lambda$checkUniqueImport$18$18, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual bool test(Object$* candidate) override {
		return Check::lambda$checkUniqueImport$18(sym, $cast($Symbol, candidate));
	}
	$Symbol* sym = nullptr;
};
$Class* Check$$Lambda$lambda$checkUniqueImport$18$18::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkUniqueImport$18$18, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkUniqueImport$18$18, init$, void, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkUniqueImport$18$18, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkUniqueImport$18$18",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkUniqueImport$18$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkUniqueImport$18$18);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkUniqueImport$18$18::class$ = nullptr;

class Check$$Lambda$lambda$checkDefaultConstructor$19$19 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkDefaultConstructor$19$19, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Symbol$PackageSymbol* pkg, $Symbol$ModuleSymbol* modle) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, c, c);
		$set(this, pkg, pkg);
		$set(this, modle, modle);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkDefaultConstructor$19(pos, c, pkg, modle);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$ClassSymbol* c = nullptr;
	$Symbol$PackageSymbol* pkg = nullptr;
	$Symbol$ModuleSymbol* modle = nullptr;
};
$Class* Check$$Lambda$lambda$checkDefaultConstructor$19$19::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, pos)},
		{"c", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, c)},
		{"pkg", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, pkg)},
		{"modle", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkDefaultConstructor$19$19, modle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkDefaultConstructor$19$19, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*, $Symbol$PackageSymbol*, $Symbol$ModuleSymbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkDefaultConstructor$19$19, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDefaultConstructor$19$19",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkDefaultConstructor$19$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkDefaultConstructor$19$19);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkDefaultConstructor$19$19::class$ = nullptr;

class Check$$Lambda$lambda$checkModuleExists$20$20 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkModuleExists$20$20, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, msym, msym);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkModuleExists$20(pos, msym);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$ModuleSymbol* msym = nullptr;
};
$Class* Check$$Lambda$lambda$checkModuleExists$20$20::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, pos)},
		{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleExists$20$20, msym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkModuleExists$20$20, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol$ModuleSymbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkModuleExists$20$20, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleExists$20$20",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkModuleExists$20$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkModuleExists$20$20);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkModuleExists$20$20::class$ = nullptr;

class Check$$Lambda$lambda$checkPackageExistsForOpens$21$21 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
		$set(this, inst$, inst);
		$set(this, pos, pos);
		$set(this, packge, packge);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkPackageExistsForOpens$21(pos, packge);
	}
	Check* inst$ = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
	$Symbol$PackageSymbol* packge = nullptr;
};
$Class* Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, inst$)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, pos)},
		{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, packge)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, init$, void, Check*, $JCDiagnostic$DiagnosticPosition*, $Symbol$PackageSymbol*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPackageExistsForOpens$21$21",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::class$ = nullptr;

class Check$$Lambda$lambda$checkModuleRequires$22$22 : public $DeferredLintHandler$LintLogger {
	$class(Check$$Lambda$lambda$checkModuleRequires$22$22, $NO_CLASS_INIT, $DeferredLintHandler$LintLogger)
public:
	void init$(Check* inst, $Directive$RequiresDirective* rd, $JCDiagnostic$DiagnosticPosition* pos) {
		$set(this, inst$, inst);
		$set(this, rd, rd);
		$set(this, pos, pos);
	}
	virtual void report() override {
		$nc(inst$)->lambda$checkModuleRequires$22(rd, pos);
	}
	Check* inst$ = nullptr;
	$Directive$RequiresDirective* rd = nullptr;
	$JCDiagnostic$DiagnosticPosition* pos = nullptr;
};
$Class* Check$$Lambda$lambda$checkModuleRequires$22$22::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, inst$)},
		{"rd", "Lcom/sun/tools/javac/code/Directive$RequiresDirective;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, rd)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$checkModuleRequires$22$22, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Directive$RequiresDirective;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$checkModuleRequires$22$22, init$, void, Check*, $Directive$RequiresDirective*, $JCDiagnostic$DiagnosticPosition*)},
		{"report", "()V", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$checkModuleRequires$22$22, report, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleRequires$22$22",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$checkModuleRequires$22$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$checkModuleRequires$22$22);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$checkModuleRequires$22$22::class$ = nullptr;

class Check$$Lambda$lambda$validateAnnotation$7$23 : public $Predicate {
	$class(Check$$Lambda$lambda$validateAnnotation$7$23, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Check* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* name) override {
		return $nc(inst$)->lambda$validateAnnotation$7($cast($Name, name));
	}
	Check* inst$ = nullptr;
};
$Class* Check$$Lambda$lambda$validateAnnotation$7$23::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Check$$Lambda$lambda$validateAnnotation$7$23, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, $PUBLIC, $method(Check$$Lambda$lambda$validateAnnotation$7$23, init$, void, Check*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Check$$Lambda$lambda$validateAnnotation$7$23, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$7$23",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Check$$Lambda$lambda$validateAnnotation$7$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$$Lambda$lambda$validateAnnotation$7$23);
	});
	return class$;
}
$Class* Check$$Lambda$lambda$validateAnnotation$7$23::class$ = nullptr;

$Context$Key* Check::checkKey = nullptr;
$Types$SimpleVisitor* Check::denotableChecker = nullptr;

Check* Check::instance($Context* context) {
	$init(Check);
	$var(Check, instance, $cast(Check, $nc(context)->get(Check::checkKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Check, context));
	}
	return instance;
}

void Check::init$($Context* context) {
	$set(this, compiled, $new($HashMap));
	$set(this, localClassNameIndexes, $new($HashMap));
	$set(this, basicHandler, $new($Check$1, this));
	$set(this, isTypeArgErroneous$, $new($Check$3, this));
	$set(this, overrideWarner, $new($Warner));
	$set(this, equalsHasCodeFilter, $new(Check$$Lambda$lambda$new$6));
	$nc(context)->put(Check::checkKey, this);
	$set(this, names, $Names::instance(context));
	$set(this, dfltTargetMeta, $new($NameArray, {
		$nc(this->names)->PACKAGE,
		$nc(this->names)->TYPE,
		$nc(this->names)->FIELD,
		$nc(this->names)->RECORD_COMPONENT,
		$nc(this->names)->METHOD,
		$nc(this->names)->CONSTRUCTOR,
		$nc(this->names)->ANNOTATION_TYPE,
		$nc(this->names)->LOCAL_VARIABLE,
		$nc(this->names)->PARAMETER,
		$nc(this->names)->MODULE
	}));
	$set(this, log, $Log::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, infer, $Infer::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, typeAnnotations, $TypeAnnotations::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$var($Options, options, $Options::instance(context));
	$set(this, lint, $Lint::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, source, $Source::instance(context));
	$set(this, target, $Target::instance(context));
	this->warnOnAnyAccessToMembers = $nc(options)->isSet("warnOnAccessToMembers"_s);
	$Target* target = $Target::instance(context);
	this->syntheticNameChar = $nc(target)->syntheticNameChar();
	$set(this, profile, $Profile::instance(context));
	$set(this, preview, $Preview::instance(context));
	$init($Lint$LintCategory);
	bool verboseDeprecated = $nc(this->lint)->isEnabled($Lint$LintCategory::DEPRECATION);
	bool verboseRemoval = $nc(this->lint)->isEnabled($Lint$LintCategory::REMOVAL);
	bool verboseUnchecked = $nc(this->lint)->isEnabled($Lint$LintCategory::UNCHECKED);
	bool enforceMandatoryWarnings = true;
	$set(this, deprecationHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseDeprecated, enforceMandatoryWarnings, "deprecated"_s, $Lint$LintCategory::DEPRECATION));
	$set(this, removalHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseRemoval, enforceMandatoryWarnings, "removal"_s, $Lint$LintCategory::REMOVAL));
	$set(this, uncheckedHandler, $new($MandatoryWarningHandler, this->log, nullptr, verboseUnchecked, enforceMandatoryWarnings, "unchecked"_s, $Lint$LintCategory::UNCHECKED));
	$set(this, sunApiHandler, $new($MandatoryWarningHandler, this->log, nullptr, false, enforceMandatoryWarnings, "sunapi"_s, nullptr));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$init($Source$Feature);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(this->source);
	this->allowSealed = $Source$Feature::SEALED_CLASSES->allowedInSource(this->source);
}

$Lint* Check::setLint($Lint* newLint) {
	$var($Lint, prev, this->lint);
	$set(this, lint, newLint);
	return prev;
}

$Symbol$MethodSymbol* Check::setMethod($Symbol$MethodSymbol* newMethod) {
	$var($Symbol$MethodSymbol, prev, this->method);
	$set(this, method, newMethod);
	return prev;
}

void Check::warnDeprecated($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalObjectStack();
	if ($nc(sym)->isDeprecatedForRemoval()) {
		$init($Lint$LintCategory);
		if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::REMOVAL)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::MDL) {
				$nc(this->removalHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedForRemovalModule(sym)));
			} else {
				$nc(this->removalHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedForRemoval(sym, $(sym->location()))));
			}
		}
	} else {
		$init($Lint$LintCategory);
		if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::DEPRECATION)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::MDL) {
				$nc(this->deprecationHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecatedModule(sym)));
			} else {
				$nc(this->deprecationHandler)->report(pos, $($CompilerProperties$Warnings::HasBeenDeprecated(sym, $(sym->location()))));
			}
		}
	}
}

void Check::warnPreviewAPI($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::PREVIEW)) {
		$nc(this->preview)->reportPreviewWarning(pos, warnKey);
	}
}

void Check::warnDeclaredUsingPreview($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::PREVIEW)) {
		$nc(this->preview)->reportPreviewWarning(pos, $($CompilerProperties$Warnings::DeclaredUsingPreview($($Kinds::kindName(sym)), sym)));
	}
}

void Check::warnUnchecked($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::UNCHECKED)) {
		$nc(this->uncheckedHandler)->report(pos, warnKey);
	}
}

void Check::warnUnsafeVararg($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::VARARGS)) {
		$nc(this->log)->warning($Lint$LintCategory::VARARGS, pos, warnKey);
	}
}

void Check::warnStatic($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::STATIC)) {
		$nc(this->log)->warning($Lint$LintCategory::STATIC, pos, warnKey);
	}
}

void Check::warnDivZero($JCDiagnostic$DiagnosticPosition* pos) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::DIVZERO)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::DIVZERO, pos, $CompilerProperties$Warnings::DivZero);
	}
}

void Check::reportDeferredDiagnostics() {
	$nc(this->deprecationHandler)->reportDeferredDiagnostic();
	$nc(this->removalHandler)->reportDeferredDiagnostic();
	$nc(this->uncheckedHandler)->reportDeferredDiagnostic();
	$nc(this->sunApiHandler)->reportDeferredDiagnostic();
}

$Type* Check::completionError($JCDiagnostic$DiagnosticPosition* pos, $Symbol$CompletionFailure* ex) {
	$useLocalObjectStack();
	$init($JCDiagnostic$DiagnosticFlag);
	$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE, pos, $($CompilerProperties$Errors::CantAccess($nc(ex)->sym, $($nc(ex)->getDetailValue()))));
	return $nc(this->syms)->errType;
}

$Type* Check::typeTagError($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* required, Object$* found) {
	$useLocalObjectStack();
	{
		$var($Type, type, nullptr);
		bool var$1 = $instanceOf($Type, found);
		if (var$1) {
			$assign(type, $cast($Type, found));
			var$1 = true;
		}
		bool var$0 = var$1;
		$init($TypeTag);
		if (var$0 && $nc(type)->hasTag($TypeTag::VOID)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::IllegalStartOfType);
			return $nc(this->syms)->errType;
		}
	}
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypeFoundReq(found, required)));
	$var($Type, type, nullptr);
	bool var$2 = $instanceOf($Type, found);
	if (var$2) {
		$assign(type, $cast($Type, found));
		var$2 = true;
	}
	return $nc(this->types)->createErrorType(var$2 ? type : $nc(this->syms)->errType);
}

void Check::earlyRefError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantRefBeforeCtorCalled(sym)));
}

void Check::duplicateError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalObjectStack();
	if (!$nc($nc(sym)->type)->isErroneous()) {
		$var($Symbol, location, sym->location());
		$init($Kinds$Kind);
		if ($nc(location)->kind == $Kinds$Kind::MTH && $cast($Symbol$MethodSymbol, location)->isStaticOrInstanceInit()) {
			$var($Kinds$KindName, var$0, $Kinds::kindName(sym));
			$var($Kinds$KindName, var$1, $Kinds::kindName($(sym->location())));
			$var($Kinds$KindName, var$2, $Kinds::kindName($($$nc(sym->location())->enclClass())));
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedInClinit(var$0, sym, var$1, var$2, $($$nc(sym->location())->enclClass()))));
		} else if (location->kind != $Kinds$Kind::MTH || (($nc(sym->owner)->flags_field & (int64_t)0x0000001000000000) == 0) || (($nc(sym->owner)->flags_field & (int64_t)0x2000000000000000) == 0)) {
			$var($Kinds$KindName, var$3, $Kinds::kindName(sym));
			$var($Kinds$KindName, var$4, $Kinds::kindName($(sym->location())));
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefined(var$3, sym, var$4, $(sym->location()))));
		}
	}
}

void Check::varargsDuplicateError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym1, $Symbol* sym2) {
	$useLocalObjectStack();
	bool var$0 = !$nc($nc(sym1)->type)->isErroneous();
	if (var$0 && !$nc($nc(sym2)->type)->isErroneous()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::ArrayAndVarargs(sym1, sym2, $(sym2->location()))));
	}
}

void Check::checkTransparentVar($JCDiagnostic$DiagnosticPosition* pos, $Symbol$VarSymbol* v, $Scope* s) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($nc(s)->getSymbolsByName($nc(v)->name))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Symbol, sym, $cast($Symbol, i$->next()));
		{
			if ($nc(sym)->owner != v->owner) {
				break;
			}
			$init($Kinds$Kind);
			$init($Kinds$KindSelector);
			if (sym->kind == $Kinds$Kind::VAR && $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH) && v->name != $nc(this->names)->error) {
				duplicateError(pos, sym);
				return;
			}
		}
	}
}

void Check::checkTransparentClass($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Scope* s) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($nc(s)->getSymbolsByName($nc(c)->name))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Symbol, sym, $cast($Symbol, i$->next()));
		{
			if ($nc(sym)->owner != c->owner) {
				break;
			}
			$init($Kinds$Kind);
			$init($TypeTag);
			bool var$0 = sym->kind == $Kinds$Kind::TYP && !$nc(sym->type)->hasTag($TypeTag::TYPEVAR);
			$init($Kinds$KindSelector);
			if (var$0 && $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH) && c->name != $nc(this->names)->error) {
				duplicateError(pos, sym);
				return;
			}
		}
	}
}

bool Check::checkUniqueClassName($JCDiagnostic$DiagnosticPosition* pos, $Name* name, $Scope* s) {
	$useLocalObjectStack();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $$nc($nc(s)->getSymbolsByName(name, $Scope$LookupKind::NON_RECURSIVE))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::TYP && sym->name != $nc(this->names)->error) {
				duplicateError(pos, sym);
				return false;
			}
		}
	}
	{
		$var($Symbol, sym, s->owner);
		for (; sym != nullptr; $assign(sym, sym->owner)) {
			$init($Kinds$Kind);
			if (sym->kind == $Kinds$Kind::TYP && sym->name == name && sym->name != $nc(this->names)->error) {
				duplicateError(pos, sym);
				return true;
			}
		}
	}
	return true;
}

$Name* Check::localClassName($Symbol$ClassSymbol* c) {
	$useLocalObjectStack();
	$var($Name, enclFlatname, $nc($($nc($nc(c)->owner)->enclClass()))->flatname);
	$var($String, enclFlatnameStr, $nc(enclFlatname)->toString());
	$var($Pair, key, $new($Pair, enclFlatname, c->name));
	$var($Integer, index, $cast($Integer, $nc(this->localClassNameIndexes)->get(key)));
	for (int32_t i = (index == nullptr) ? 1 : index->intValue();; ++i) {
		$var($Name, flatname, $nc(this->names)->fromString($$str({enclFlatnameStr, $$str(this->syntheticNameChar), $$str(i), c->name})));
		if (getCompiled($nc($(c->packge()))->modle, flatname) == nullptr) {
			$nc(this->localClassNameIndexes)->put(key, $($Integer::valueOf(i + 1)));
			return flatname;
		}
	}
}

void Check::clearLocalClassNameIndexes($Symbol$ClassSymbol* c) {
	$useLocalObjectStack();
	$init($Kinds$Kind);
	if ($nc(c)->owner != nullptr && c->owner->kind != $Kinds$Kind::NIL) {
		$nc(this->localClassNameIndexes)->remove($$new($Pair, $nc($(c->owner->enclClass()))->flatname, c->name));
	}
}

void Check::newRound() {
	$nc(this->compiled)->clear();
	$nc(this->localClassNameIndexes)->clear();
}

void Check::clear() {
	$nc(this->deprecationHandler)->clear();
	$nc(this->removalHandler)->clear();
	$nc(this->uncheckedHandler)->clear();
	$nc(this->sunApiHandler)->clear();
}

void Check::putCompiled($Symbol$ClassSymbol* csym) {
	$useLocalObjectStack();
	$nc(this->compiled)->put($($Pair::of($nc($($nc(csym)->packge()))->modle, $nc(csym)->flatname)), csym);
}

$Symbol$ClassSymbol* Check::getCompiled($Symbol$ClassSymbol* csym) {
	$useLocalObjectStack();
	return $cast($Symbol$ClassSymbol, $nc(this->compiled)->get($($Pair::of($nc($($nc(csym)->packge()))->modle, $nc(csym)->flatname))));
}

$Symbol$ClassSymbol* Check::getCompiled($Symbol$ModuleSymbol* msym, $Name* flatname) {
	return $cast($Symbol$ClassSymbol, $nc(this->compiled)->get($($Pair::of(msym, flatname))));
}

void Check::removeCompiled($Symbol$ClassSymbol* csym) {
	$useLocalObjectStack();
	$nc(this->compiled)->remove($($Pair::of($nc($($nc(csym)->packge()))->modle, $nc(csym)->flatname)));
}

$Type* Check::checkType($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return checkType(pos, found, req, this->basicHandler);
}

$Type* Check::checkType($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
	$useLocalObjectStack();
	$var($InferenceContext, inferenceContext, $nc(checkContext)->inferenceContext());
	bool var$0 = $nc(inferenceContext)->free(req);
	if (var$0 || inferenceContext->free(found)) {
		$var($List, var$1, $List::of(req, found));
		inferenceContext->addFreeTypeListener(var$1, $$new(Check$$Lambda$lambda$checkType$0$1, this, pos, found, req, checkContext));
	}
	$init($TypeTag);
	if ($nc(req)->hasTag($TypeTag::ERROR)) {
		return req;
	}
	if (req->hasTag($TypeTag::NONE)) {
		return found;
	}
	if (checkContext->compatible(found, req, $(checkContext->checkWarner(pos, found, req)))) {
		return found;
	} else {
		bool var$2 = $nc(found)->isNumeric();
		if (var$2 && req->isNumeric()) {
			checkContext->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::PossibleLossOfPrecision(found, req)))));
			return $nc(this->types)->createErrorType(found);
		}
		checkContext->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::InconvertibleTypes(found, req)))));
		return $nc(this->types)->createErrorType(found);
	}
}

$Type* Check::checkCastable($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return checkCastable(pos, found, req, this->basicHandler);
}

$Type* Check::checkCastable($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext) {
	$useLocalObjectStack();
	if ($nc(this->types)->isCastable(found, req, $(castWarner(pos, found, req)))) {
		return req;
	} else {
		$nc(checkContext)->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::InconvertibleTypes(found, req)))));
		return this->types->createErrorType(found);
	}
}

void Check::checkRedundantCast($Env* env, $JCTree$JCTypeCast* tree) {
	bool var$2 = !$nc($nc(tree)->type)->isErroneous();
	bool var$1 = var$2 && $nc(this->types)->isSameType($nc(tree->expr)->type, $nc(tree->clazz)->type);
	bool var$0 = var$1 && !$TreeInfo::containsTypeAnnotation(tree->clazz);
	if (var$0 && !is292targetTypeCast(tree)) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkRedundantCast$1$2, this, tree));
	}
}

bool Check::is292targetTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalObjectStack();
	bool is292targetTypeCast = false;
	$var($JCTree$JCExpression, expr, $TreeInfo::skipParens($nc(tree)->expr));
	$init($JCTree$Tag);
	if ($nc(expr)->hasTag($JCTree$Tag::APPLY)) {
		$var($JCTree$JCMethodInvocation, apply, $cast($JCTree$JCMethodInvocation, expr));
		$var($Symbol, sym, $TreeInfo::symbol(apply->meth));
		$init($Kinds$Kind);
		is292targetTypeCast = sym != nullptr && sym->kind == $Kinds$Kind::MTH && (sym->flags() & (int64_t)0x0000002000000000) != 0;
	}
	return is292targetTypeCast;
}

bool Check::checkExtends($Type* a$renamed, $Type* bound) {
	$useLocalObjectStack();
	$var($Type, a, a$renamed);
	if ($nc(a)->isUnbound()) {
		return true;
	} else {
		$init($TypeTag);
		if (!a->hasTag($TypeTag::WILDCARD)) {
			$assign(a, $nc(this->types)->cvarUpperBound(a));
			return this->types->isSubtype(a, bound);
		} else if (a->isExtendsBound()) {
			return $nc(this->types)->isCastable(bound, $($nc(this->types)->wildUpperBound(a)), $nc(this->types)->noWarnings);
		} else if (a->isSuperBound()) {
			return !$nc(this->types)->notSoftSubtype($($nc(this->types)->wildLowerBound(a)), bound);
		}
	}
	return true;
}

$Type* Check::checkNonVoid($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::VoidNotAllowedHere);
		return $nc(this->types)->createErrorType(t);
	} else {
		return t;
	}
}

$Type* Check::checkClassOrArrayType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalObjectStack();
	$init($TypeTag);
	bool var$1 = !$nc(t)->hasTag($TypeTag::CLASS);
	bool var$0 = var$1 && !t->hasTag($TypeTag::ARRAY);
	if (var$0 && !t->hasTag($TypeTag::ERROR)) {
		$init($CompilerProperties$Fragments);
		$var($JCDiagnostic, var$2, $nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqClassArray));
		return typeTagError(pos, var$2, $(asTypeParam(t)));
	} else {
		return t;
	}
}

$Type* Check::checkClassType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalObjectStack();
	$init($TypeTag);
	bool var$0 = !$nc(t)->hasTag($TypeTag::CLASS);
	if (var$0 && !t->hasTag($TypeTag::ERROR)) {
		$init($CompilerProperties$Fragments);
		$var($JCDiagnostic, var$1, $nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqClass));
		return typeTagError(pos, var$1, $(asTypeParam(t)));
	} else {
		return t;
	}
}

$Object* Check::asTypeParam($Type* t) {
	$init($TypeTag);
	return ($nc(t)->hasTag($TypeTag::TYPEVAR)) ? $of($nc(this->diags)->fragment($($CompilerProperties$Fragments::TypeParameter(t)))) : $of(t);
}

$Type* Check::checkConstructorRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t$renamed) {
	$useLocalObjectStack();
	$var($Type, t, t$renamed);
	$assign(t, checkClassOrArrayType(pos, t));
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::CLASS)) {
		if (($nc(t->tsym)->flags() & (0x0400 | 0x0200)) != 0) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AbstractCantBeInstantiated(t->tsym)));
			$assign(t, $nc(this->types)->createErrorType(t));
		} else if (($nc(t->tsym)->flags() & 0x4000) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::EnumCantBeInstantiated);
			$assign(t, $nc(this->types)->createErrorType(t));
		} else {
			$assign(t, checkClassType(pos, t, true));
		}
	} else if (t->hasTag($TypeTag::ARRAY)) {
		if (!$nc(this->types)->isReifiable($cast($Type$ArrayType, t)->elemtype)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, $CompilerProperties$Errors::GenericArrayCreation);
			$assign(t, this->types->createErrorType(t));
		}
	}
	return t;
}

$Type* Check::checkClassType($JCDiagnostic$DiagnosticPosition* pos, $Type* t$renamed, bool noBounds) {
	$useLocalObjectStack();
	$var($Type, t, t$renamed);
	$assign(t, checkClassType(pos, t));
	if (noBounds && $nc(t)->isParameterized()) {
		$var($List, args, t->getTypeArguments());
		while ($nc(args)->nonEmpty()) {
			$init($TypeTag);
			if ($nc($cast($Type, args->head))->hasTag($TypeTag::WILDCARD)) {
				$init($CompilerProperties$Fragments);
				return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqExact)), args->head);
			}
			$assign(args, args->tail);
		}
	}
	return t;
}

$Type* Check::checkRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	if ($nc(t)->isReference()) {
		return t;
	} else {
		$init($CompilerProperties$Fragments);
		return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqRef)), t);
	}
}

$List* Check::checkRefTypes($List* trees, $List* types) {
	$useLocalObjectStack();
	$var($List, tl, trees);
	{
		$var($List, l, types);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$set(l, head, checkRefType($($nc($cast($JCTree$JCExpression, $nc(tl)->head))->pos()), $cast($Type, l->head)));
			$assign(tl, tl->tail);
		}
	}
	return types;
}

$Type* Check::checkNullOrRefType($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	bool var$0 = $nc(t)->isReference();
	$init($TypeTag);
	if (var$0 || t->hasTag($TypeTag::BOT)) {
		return t;
	} else {
		$init($CompilerProperties$Fragments);
		return typeTagError(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::TypeReqRef)), t);
	}
}

bool Check::checkDisjoint($JCDiagnostic$DiagnosticPosition* pos, int64_t flags, int64_t set1, int64_t set2) {
	$useLocalObjectStack();
	if ((flags & set1) != 0 && (flags & set2) != 0) {
		$var($Set, var$0, $Flags::asFlagSet($TreeInfo::firstFlag(flags & set1)));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::IllegalCombinationOfModifiers(var$0, $($Flags::asFlagSet($TreeInfo::firstFlag(flags & set2))))));
		return false;
	} else {
		return true;
	}
}

$Type* Check::checkDiamond($JCTree$JCNewClass* tree, $Type* t) {
	$useLocalObjectStack();
	bool var$0 = !$TreeInfo::isDiamond(tree);
	if (var$0 || $nc(t)->isErroneous()) {
		return checkClassType($($nc($nc(tree)->clazz)->pos()), t, true);
	} else {
		$init($Source$Feature);
		if ($nc(tree)->def != nullptr && !$Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->allowedInSource(this->source)) {
			$init($JCDiagnostic$DiagnosticFlag);
			$var($JCDiagnostic$DiagnosticFlag, var$1, $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL);
			$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree->clazz)->pos());
			$nc(this->log)->error(var$1, var$2, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION->fragment(this->source->name$)))));
		}
		if ($$nc($nc($nc($nc(t)->tsym)->type)->getTypeArguments())->isEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(tree->clazz)->pos());
			$nc(this->log)->error(var$3, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($CompilerProperties$Fragments::DiamondNonGeneric(t)))));
			return $nc(this->types)->createErrorType(t);
		} else if (tree->typeargs != nullptr && tree->typeargs->nonEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, var$4, $nc(tree->clazz)->pos());
			$nc(this->log)->error(var$4, $($CompilerProperties$Errors::CantApplyDiamond1(t, $($CompilerProperties$Fragments::DiamondAndExplicitParams(t)))));
			return $nc(this->types)->createErrorType(t);
		} else {
			return t;
		}
	}
}

$List* Check::checkDiamondDenotable($Type$ClassType* t) {
	$useLocalObjectStack();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc($nc(t)->allparams())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			if (!checkDenotable(arg)) {
				buf->append(arg);
			}
		}
	}
	return buf->toList();
}

bool Check::checkDenotable($Type* t) {
	return $$sure($Boolean, Check::denotableChecker->visit(t, nullptr))->booleanValue();
}

void Check::checkVarargsMethodDecl($Env* env, $JCTree$JCMethodDecl* tree) {
	$useLocalObjectStack();
	$var($Symbol$MethodSymbol, m, $nc(tree)->sym);
	bool hasTrustMeAnno = $nc(m)->attribute($nc($nc(this->syms)->trustMeType)->tsym) != nullptr;
	$var($Type, varargElemType, nullptr);
	if (m->isVarArgs()) {
		$assign(varargElemType, $nc(this->types)->elemtype($nc(($$cast($JCTree$JCVariableDecl, $nc(tree->params)->last())))->type));
	}
	if (hasTrustMeAnno && !isTrustMeAllowedOnMethod(m)) {
		if (varargElemType != nullptr) {
			$init($Source$Feature);
			$var($JCDiagnostic, msg, $Source$Feature::PRIVATE_SAFE_VARARGS->allowedInSource(this->source) ? $nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargs(m))) : $nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargsFinalOnly(m))));
			$nc(this->log)->error(tree, $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(this->syms->trustMeType->tsym, msg)));
		} else {
			$nc(this->log)->error(tree, $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(this->syms->trustMeType->tsym, $($CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsMeth(m)))));
		}
	} else if (hasTrustMeAnno && varargElemType != nullptr && $nc(this->types)->isReifiable(varargElemType)) {
		warnUnsafeVararg(tree, $($CompilerProperties$Warnings::VarargsRedundantTrustmeAnno(this->syms->trustMeType->tsym, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::VarargsTrustmeOnReifiableVarargs(varargElemType)))))));
	} else if (!hasTrustMeAnno && varargElemType != nullptr && !$nc(this->types)->isReifiable(varargElemType)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($cast($JCTree$JCVariableDecl, $nc(tree->params)->head))->pos());
		warnUnchecked(var$0, $($CompilerProperties$Warnings::UncheckedVarargsNonReifiableType(varargElemType)));
	}
}

bool Check::isTrustMeAllowedOnMethod($Symbol* s) {
	bool var$0 = ($nc(s)->flags() & (int64_t)0x0000000400000000) != 0;
	if (var$0) {
		bool var$1 = s->isConstructor();
		if (!var$1) {
			int64_t var$2 = s->flags();
			$init($Source$Feature);
			var$1 = (var$2 & ((8 | 0x10) | ($Source$Feature::PRIVATE_SAFE_VARARGS->allowedInSource(this->source) ? 2 : 0))) != 0;
		}
		var$0 = var$1;
	}
	return var$0;
}

$Type* Check::checkLocalVarType($JCDiagnostic$DiagnosticPosition* pos, $Type* t, $Name* name) {
	$useLocalObjectStack();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::BOT)) {
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInferLocalVarType(name, $CompilerProperties$Fragments::LocalCantInferNull)));
		return $nc(this->types)->createErrorType(t);
	} else if (t->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInferLocalVarType(name, $CompilerProperties$Fragments::LocalCantInferVoid)));
		return $nc(this->types)->createErrorType(t);
	}
	return $nc(this->types)->upward(t, $($nc(this->types)->captures(t)));
}

$Type* Check::checkMethod($Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	if ($nc(inferenceContext)->free(mtype)) {
		$var($List, var$0, $List::of(mtype));
		inferenceContext->addFreeTypeListener(var$0, $$new(Check$$Lambda$lambda$checkMethod$2$3, this, mtype, sym, env, argtrees, argtypes, useVarargs));
		return mtype;
	}
	$var($Type, owntype, mtype);
	$var($List, formals, $nc(owntype)->getParameterTypes());
	$var($List, nonInferred, $nc($nc(sym)->type)->getParameterTypes());
	int32_t var$1 = $nc(nonInferred)->length();
	if (var$1 != $nc(formals)->length()) {
		$assign(nonInferred, formals);
	}
	$var($Type, last, useVarargs ? $cast($Type, formals->last()) : ($Type*)nullptr);
	if (sym->name == $nc(this->names)->init && $equals(sym->owner, $nc(this->syms)->enumSym)) {
		$assign(formals, $nc(formals->tail)->tail);
		$assign(nonInferred, $nc(nonInferred->tail)->tail);
	}
	if ((sym->flags() & (int64_t)0x0200000000000000) != 0) {
		$assign(formals, $nc(formals)->tail);
		$assign(nonInferred, $nc(nonInferred)->tail);
	}
	$var($List, args, argtrees);
	if (args != nullptr) {
		while (!$equals($nc(formals)->head, last)) {
			$var($JCTree, arg, $cast($JCTree, $nc(args)->head));
			$var($Warner, warn, convertWarner($($nc(arg)->pos()), $nc(arg)->type, $cast($Type, $nc(nonInferred)->head)));
			assertConvertible(arg, arg->type, $cast($Type, formals->head), warn);
			$assign(args, args->tail);
			$assign(formals, formals->tail);
			$assign(nonInferred, nonInferred->tail);
		}
		if (useVarargs) {
			$var($Type, varArg, $nc(this->types)->elemtype(last));
			while ($nc(args)->tail != nullptr) {
				$var($JCTree, arg, $cast($JCTree, args->head));
				$var($Warner, warn, convertWarner($($nc(arg)->pos()), $nc(arg)->type, varArg));
				assertConvertible(arg, arg->type, varArg, warn);
				$assign(args, args->tail);
			}
		} else if ((sym->flags() & ((int64_t)0x0000000400000000 | (int64_t)0x0000400000000000)) == (int64_t)0x0000000400000000) {
			$var($Type, varParam, $cast($Type, $$nc(owntype->getParameterTypes())->last()));
			$var($Type, lastArg, $cast($Type, $nc(argtypes)->last()));
			bool var$2 = $nc(this->types)->isSubtypeUnchecked(lastArg, $($nc(this->types)->elemtype(varParam)));
			if (var$2) {
				$var($Type, var$3, this->types->erasure(varParam));
				var$2 = !this->types->isSameType(var$3, $(this->types->erasure(lastArg)));
			}
			if (var$2) {
				$var($JCDiagnostic$DiagnosticPosition, var$4, $$sure($JCTree$JCExpression, $nc(argtrees)->last())->pos());
				$nc(this->log)->warning(var$4, $($CompilerProperties$Warnings::InexactNonVarargsCall($(this->types->elemtype(varParam)), varParam)));
			}
		}
	}
	if (useVarargs) {
		$var($Type, argtype, $cast($Type, $$nc(owntype->getParameterTypes())->last()));
		bool var$5 = !$nc(this->types)->isReifiable(argtype);
		if (var$5) {
			bool var$6 = $$nc(sym->baseSymbol())->attribute($nc($nc(this->syms)->trustMeType)->tsym) == nullptr;
			var$5 = var$6 || !isTrustMeAllowedOnMethod(sym);
		}
		if (var$5) {
			$var($JCDiagnostic$DiagnosticPosition, var$7, $nc($nc(env)->tree)->pos());
			warnUnchecked(var$7, $($CompilerProperties$Warnings::UncheckedGenericArrayCreation(argtype)));
		}
		$TreeInfo::setVarargsElement($nc(env)->tree, $(this->types->elemtype(argtype)));
	}
	return owntype;
}

void Check::assertConvertible($JCTree* tree, $Type* actual, $Type* formal, $Warner* warn) {
	$useLocalObjectStack();
	if ($nc(this->types)->isConvertible(actual, formal, warn)) {
		return;
	}
	bool var$1 = $nc(formal)->isCompound();
	bool var$0 = var$1 && this->types->isSubtype(actual, $(this->types->supertype(formal)));
	if (var$0 && this->types->isSubtypeUnchecked(actual, $(this->types->interfaces(formal)), warn)) {
		return;
	}
}

bool Check::checkValidGenericType($Type* t) {
	return firstIncompatibleTypeArg(t) == nullptr;
}

$Type* Check::firstIncompatibleTypeArg($Type* type) {
	$useLocalObjectStack();
	$var($List, formals, $nc($nc($nc(type)->tsym)->type)->allparams());
	$var($List, actuals, type->allparams());
	$var($List, args, type->getTypeArguments());
	$var($List, forms, $nc($nc(type->tsym)->type)->getTypeArguments());
	$var($ListBuffer, bounds_buf, $new($ListBuffer));
	while (true) {
		bool var$0 = $nc(args)->nonEmpty();
		if (!(var$0 && $nc(forms)->nonEmpty())) {
			break;
		}
		{
			bounds_buf->append($($nc(this->types)->subst($($nc($cast($Type, $nc(forms)->head))->getUpperBound()), formals, actuals)));
			$assign(args, args->tail);
			$assign(forms, forms->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$var($List, tvars_cap, $nc(this->types)->substBounds(formals, formals, $($$nc($nc(this->types)->capture(type))->allparams())));
	while (true) {
		bool var$1 = $nc(args)->nonEmpty();
		if (!(var$1 && $nc(tvars_cap)->nonEmpty())) {
			break;
		}
		{
			$nc($cast($Type, args->head))->withTypeVar($cast($Type$TypeVar, $nc(tvars_cap)->head));
			$assign(args, args->tail);
			$assign(tvars_cap, tvars_cap->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$var($List, bounds, bounds_buf->toList());
	while (true) {
		bool var$2 = $nc(args)->nonEmpty();
		if (!(var$2 && $nc(bounds)->nonEmpty())) {
			break;
		}
		{
			$var($Type, actual, $cast($Type, args->head));
			bool var$4 = !isTypeArgErroneous(actual);
			bool var$3 = var$4 && !$nc($cast($Type, $nc(bounds)->head))->isErroneous();
			if (var$3 && !checkExtends(actual, $cast($Type, bounds->head))) {
				return $cast($Type, args->head);
			}
			$assign(args, args->tail);
			$assign(bounds, $nc(bounds)->tail);
		}
	}
	$assign(args, type->getTypeArguments());
	$assign(bounds, bounds_buf->toList());
	{
		$var($Iterator, i$, $$nc($$nc(this->types->capture(type))->getTypeArguments())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			{
				$init($TypeTag);
				bool var$7 = $nc(arg)->hasTag($TypeTag::TYPEVAR);
				bool var$6 = var$7 && $$nc(arg->getUpperBound())->isErroneous();
				bool var$5 = var$6 && !$nc($cast($Type, $nc(bounds)->head))->isErroneous();
				if (var$5 && !isTypeArgErroneous($cast($Type, $nc(args)->head))) {
					return $cast($Type, args->head);
				}
				$assign(bounds, $nc(bounds)->tail);
				$assign(args, $nc(args)->tail);
			}
		}
	}
	return nullptr;
}

bool Check::isTypeArgErroneous($Type* t) {
	return $$sure($Boolean, $nc(this->isTypeArgErroneous$)->visit(t))->booleanValue();
}

int64_t Check::checkFlags($JCDiagnostic$DiagnosticPosition* pos, int64_t flags, $Symbol* sym, $JCTree* tree) {
	$useLocalObjectStack();
	int64_t mask = 0;
	int64_t implicit = 0;
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 1:
		if ($TreeInfo::isReceiverParam(tree)) {
			mask = (int64_t)0x0000000200000000;
		} else if ($nc(sym->owner)->kind != $Kinds$Kind::TYP) {
			mask = (int64_t)0x0000000200000010;
		} else if ((sym->owner->flags_field & 0x0200) != 0) {
			mask = (implicit = 25);
		} else {
			mask = 16607;
		}
		break;
	case 2:
		if (sym->name == $nc(this->names)->init) {
			if (($nc(sym->owner)->flags_field & 0x4000) != 0) {
				implicit = 2;
				mask = 2;
			} else {
				mask = 7;
			}
		} else if (($nc(sym->owner)->flags_field & 0x0200) != 0) {
			if ((sym->owner->flags_field & 0x2000) != 0) {
				mask = 1025;
				implicit = 1 | 0x0400;
			} else if ((flags & (((int64_t)0x0000080000000000 | 8) | 2)) != 0) {
				mask = (int64_t)0x0000080000000c0b;
				implicit = (flags & 2) != 0 ? 0 : 1;
				if ((flags & (int64_t)0x0000080000000000) != 0) {
					implicit |= 1024;
				}
			} else {
				mask = (implicit = 1025);
			}
		} else if ((sym->owner->flags_field & (int64_t)0x2000000000000000) != 0) {
			mask = 3135;
		} else {
			mask = 3391;
		}
		if ((flags & 0x0800) != 0) {
			warnOnExplicitStrictfp(pos);
		}
		if (((flags | implicit) & $Flags::ABSTRACT) == 0 || ((flags) & $Flags::DEFAULT) != 0) {
			implicit |= $nc(sym->owner)->flags_field & 0x0800;
		}
		break;
	case 3:
		{
			$init($Kinds$KindSelector);
			bool var$0 = $nc($nc(sym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH);
			if (var$0 || (sym->isDirectlyOrIndirectlyLocal() && (flags & 0x2000) != 0)) {
				bool implicitlyStatic = !sym->isAnonymous() && ((flags & (int64_t)0x2000000000000000) != 0 || (flags & 0x4000) != 0 || (flags & 0x0200) != 0);
				bool staticOrImplicitlyStatic = (flags & 8) != 0 || implicitlyStatic;
				mask = staticOrImplicitlyStatic && this->allowRecords && (flags & 0x2000) == 0 ? 24088 : 23568;
				implicit = implicitlyStatic ? 8 : implicit;
			} else if ($nc(sym->owner)->kind == $Kinds$Kind::TYP) {
				mask = ((flags & 8) != 0) && this->allowRecords && (flags & 0x2000) == 0 ? (int64_t)0xc000000000005e1f : (int64_t)0xc000000000005e17;
				if ($nc(sym->owner->owner)->kind == $Kinds$Kind::PCK || (sym->owner->flags_field & 8) != 0) {
					mask |= 8;
				} else if (!this->allowRecords && ((flags & 0x4000) != 0 || (flags & (int64_t)0x2000000000000000) != 0)) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error(pos, $CompilerProperties$Errors::StaticDeclarationNotAllowedInInnerClasses);
				}
				if ((flags & ((0x0200 | 0x4000) | (int64_t)0x2000000000000000)) != 0) {
					implicit = 8;
				}
			} else {
				mask = (int64_t)0xc000000000007e11;
			}
			if ((flags & 0x0200) != 0) {
				implicit |= 1024;
			}
			if ((flags & 0x4000) != 0) {
				mask &= (uint64_t)~(((0x0400 | 0x10) | (int64_t)0x4000000000000000) | (int64_t)0x8000000000000000);
				implicit |= implicitEnumFinalFlag(tree);
			}
			if ((flags & (int64_t)0x2000000000000000) != 0) {
				mask &= (uint64_t)~1024;
				implicit |= 16;
			}
			if ((flags & 0x0800) != 0) {
				warnOnExplicitStrictfp(pos);
			}
			implicit |= $nc(sym->owner)->flags_field & 0x0800;
			break;
		}
	default:
		$throwNew($AssertionError);
	}
	int64_t illegal = (flags & (int64_t)0xc000080000000fff) & ~mask;
	if (illegal != 0) {
		if ((illegal & 0x0200) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error(pos, ((flags & 0x2000) != 0) ? $CompilerProperties$Errors::AnnotationDeclNotAllowedHere : $CompilerProperties$Errors::IntfNotAllowedHere);
			mask |= 512;
		} else {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::ModNotAllowedHere($($Flags::asFlagSet(illegal)))));
		}
	} else {
		bool var$9 = sym->kind == $Kinds$Kind::TYP || checkDisjoint(pos, flags, 1024, (2 | 8) | (int64_t)0x0000080000000000);
		bool var$8 = var$9 && checkDisjoint(pos, flags, 8 | 2, (int64_t)0x0000080000000000);
		bool var$7 = var$8 && checkDisjoint(pos, flags, 0x0400 | 0x0200, (0x10 | 0x0100) | 0x20);
		bool var$6 = var$7 && checkDisjoint(pos, flags, 1, 2 | 4);
		bool var$5 = var$6 && checkDisjoint(pos, flags, 2, 1 | 4);
		bool var$4 = var$5 && checkDisjoint(pos, flags, 16, 64);
		bool var$3 = var$4 && (sym->kind == $Kinds$Kind::TYP || checkDisjoint(pos, flags, 0x0400 | 0x0100, 2048));
		bool var$2 = var$3 && checkDisjoint(pos, flags, 16, (int64_t)0x4000000000000000 | (int64_t)0x8000000000000000);
		bool var$1 = var$2 && checkDisjoint(pos, flags, (int64_t)0x4000000000000000, 0x10 | (int64_t)0x8000000000000000);
		if (var$1 && checkDisjoint(pos, flags, (int64_t)0x4000000000000000, 8192)) {
		}
	}
	return (flags & (mask | ~(int64_t)0xc000080000000fff)) | implicit;
}

void Check::warnOnExplicitStrictfp($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos(pos));
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4, this, pos));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(this->deferredLintHandler)->setPos(prevLintPos);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t Check::implicitEnumFinalFlag($JCTree* tree) {
	$useLocalObjectStack();
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::CLASSDEF)) {
		return 0;
	}
	{
	}
	$var($Check$1SpecialTreeVisitor, sts, $new($Check$1SpecialTreeVisitor, this));
	$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, tree));
	{
		$var($Iterator, i$, $nc(cdef->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, defs, $cast($JCTree, i$->next()));
			{
				$nc(defs)->accept(sts);
				if (sts->specialized) {
					return this->allowSealed ? (int64_t)0x4000000000000000 : 0;
				}
			}
		}
	}
	return 16;
}

void Check::validate($JCTree* tree, $Env* env) {
	validate(tree, env, true);
}

void Check::validate($JCTree* tree, $Env* env, bool checkRaw) {
	$$new($Check$Validator, this, env)->validateTree(tree, checkRaw, true);
}

void Check::validate($List* trees, $Env* env) {
	$var($List, l, trees);
	for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
		validate($cast($JCTree, l->head), env);
	}
}

void Check::checkRaw($JCTree* tree, $Env* env) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::RAW);
	$init($TypeTag);
	bool var$2 = var$3 && $nc($nc(tree)->type)->hasTag($TypeTag::CLASS);
	bool var$1 = var$2 && !$TreeInfo::isDiamond(tree);
	bool var$0 = var$1 && !withinAnonConstr(env);
	if (var$0 && tree->type->isRaw()) {
		$var($Lint$LintCategory, var$4, $Lint$LintCategory::RAW);
		$var($JCDiagnostic$DiagnosticPosition, var$5, tree->pos());
		$nc(this->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::RawClassUse(tree->type, $nc($nc(tree->type)->tsym)->type)));
	}
}

bool Check::withinAnonConstr($Env* env) {
	return $nc($nc($nc(env)->enclClass)->name)->isEmpty() && env->enclMethod != nullptr && env->enclMethod->name == $nc(this->names)->init;
}

bool Check::subset($Type* t, $List* ts) {
	$var($List, l, ts);
	for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
		if ($nc(this->types)->isSubtype(t, $cast($Type, l->head))) {
			return true;
		}
	}
	return false;
}

bool Check::intersects($Type* t, $List* ts) {
	$var($List, l, ts);
	for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
		bool var$0 = $nc(this->types)->isSubtype(t, $cast($Type, l->head));
		if (var$0 || this->types->isSubtype($cast($Type, l->head), t)) {
			return true;
		}
	}
	return false;
}

$List* Check::incl($Type* t, $List* ts) {
	return subset(t, ts) ? ts : $$nc(excl(t, ts))->prepend(t);
}

$List* Check::excl($Type* t, $List* ts) {
	if ($nc(ts)->isEmpty()) {
		return ts;
	} else {
		$var($List, ts1, excl(t, ts->tail));
		if ($nc(this->types)->isSubtype($cast($Type, ts->head), t)) {
			return ts1;
		} else if (ts1 == ts->tail) {
			return ts;
		} else {
			return $nc(ts1)->prepend($cast($Type, ts->head));
		}
	}
}

$List* Check::union$($List* ts1, $List* ts2) {
	$useLocalObjectStack();
	$var($List, ts, ts1);
	{
		$var($List, l, ts2);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$assign(ts, incl($cast($Type, l->head), ts));
		}
	}
	return ts;
}

$List* Check::diff($List* ts1, $List* ts2) {
	$useLocalObjectStack();
	$var($List, ts, ts1);
	{
		$var($List, l, ts2);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$assign(ts, excl($cast($Type, l->head), ts));
		}
	}
	return ts;
}

$List* Check::intersect($List* ts1, $List* ts2) {
	$useLocalObjectStack();
	$var($List, ts, $List::nil());
	{
		$var($List, l, ts1);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			if (subset($cast($Type, l->head), ts2)) {
				$assign(ts, incl($cast($Type, l->head), ts));
			}
		}
	}
	{
		$var($List, l, ts2);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			if (subset($cast($Type, l->head), ts1)) {
				$assign(ts, incl($cast($Type, l->head), ts));
			}
		}
	}
	return ts;
}

bool Check::isUnchecked($Symbol$ClassSymbol* exc) {
	$init($Kinds$Kind);
	bool var$0 = $nc(exc)->kind == $Kinds$Kind::ERR || exc->isSubClass($nc($nc(this->syms)->errorType)->tsym, this->types);
	return var$0 || exc->isSubClass($nc($nc(this->syms)->runtimeExceptionType)->tsym, this->types);
}

bool Check::isUnchecked($Type* exc) {
	$init($TypeTag);
	return ($nc(exc)->hasTag($TypeTag::TYPEVAR)) ? isUnchecked($($nc(this->types)->supertype(exc))) : (exc->hasTag($TypeTag::CLASS)) ? isUnchecked($cast($Symbol$ClassSymbol, exc->tsym)) : exc->hasTag($TypeTag::BOT);
}

bool Check::isChecked($Type* exc) {
	return !isUnchecked(exc);
}

bool Check::isUnchecked($JCDiagnostic$DiagnosticPosition* pos, $Type* exc) {
	try {
		return isUnchecked(exc);
	} catch ($Symbol$CompletionFailure& ex) {
		completionError(pos, ex);
		return true;
	}
	$shouldNotReachHere();
}

bool Check::isHandled($Type* exc, $List* handled) {
	bool var$0 = isUnchecked(exc);
	return var$0 || subset(exc, handled);
}

$List* Check::unhandled($List* thrown, $List* handled) {
	$useLocalObjectStack();
	$var($List, unhandled, $List::nil());
	{
		$var($List, l, thrown);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			if (!isHandled($cast($Type, l->head), handled)) {
				$assign(unhandled, $nc(unhandled)->prepend($cast($Type, l->head)));
			}
		}
	}
	return unhandled;
}

int32_t Check::protection(int64_t flags) {
	$init(Check);
	switch ((int16_t)(flags & 7)) {
	case 2:
		return 3;
	case 4:
		return 1;
	default:
	case 1:
		return 0;
	case 0:
		return 2;
	}
}

$JCDiagnostic$Fragment* Check::cannotOverride($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalObjectStack();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (($nc(other->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::CantOverride(m, mloc, other, oloc);
	} else if (($nc(m->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::CantImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::ClashesWith(m, mloc, other, oloc);
	}
}

$JCDiagnostic$Fragment* Check::uncheckedOverrides($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalObjectStack();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (($nc(other->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::UncheckedOverride(m, mloc, other, oloc);
	} else if (($nc(m->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::UncheckedImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::UncheckedClashWith(m, mloc, other, oloc);
	}
}

$JCDiagnostic$Fragment* Check::varargsOverrides($Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other) {
	$useLocalObjectStack();
	$var($Symbol, mloc, $nc(m)->location());
	$var($Symbol, oloc, $nc(other)->location());
	if (($nc(other->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::VarargsOverride(m, mloc, other, oloc);
	} else if (($nc(m->owner)->flags() & 0x0200) == 0) {
		return $CompilerProperties$Fragments::VarargsImplement(m, mloc, other, oloc);
	} else {
		return $CompilerProperties$Fragments::VarargsClashWith(m, mloc, other, oloc);
	}
}

void Check::checkOverride($JCTree* tree, $Symbol$MethodSymbol* m, $Symbol$MethodSymbol* other, $Symbol$ClassSymbol* origin) {
	$useLocalObjectStack();
	bool var$0 = ($nc(m)->flags() & (0x1000 | (int64_t)0x80000000)) != 0;
	if (var$0 || ($nc(other)->flags() & 0x1000) != 0) {
		return;
	}
	bool var$1 = (m->flags() & 8) != 0;
	if (var$1 && ($nc(other)->flags() & 8) == 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, $TreeInfo::diagnosticPositionFor(m, tree));
		$nc(this->log)->error(var$2, $($CompilerProperties$Errors::OverrideStatic($(cannotOverride(m, other)))));
		m->flags_field |= (int64_t)0x0000200000000000;
		return;
	}
	bool var$3 = ($nc(other)->flags() & 0x10) != 0;
	if (!var$3) {
		bool var$4 = (m->flags() & 8) == 0;
		var$3 = var$4 && (other->flags() & 8) != 0;
	}
	if (var$3) {
		$var($JCDiagnostic$DiagnosticPosition, var$5, $TreeInfo::diagnosticPositionFor(m, tree));
		$var($JCDiagnostic$Fragment, var$6, cannotOverride(m, other));
		$nc(this->log)->error(var$5, $($CompilerProperties$Errors::OverrideMeth(var$6, $($Flags::asFlagSet(other->flags() & (0x10 | 8))))));
		m->flags_field |= (int64_t)0x0000200000000000;
		return;
	}
	if (($nc(m->owner)->flags() & 0x2000) != 0) {
		return;
	}
	int32_t var$7 = protection(m->flags());
	if (var$7 > protection(other->flags())) {
		$var($JCDiagnostic$DiagnosticPosition, var$8, $TreeInfo::diagnosticPositionFor(m, tree));
		$var($JCDiagnostic$Error, var$9, nullptr);
		if ((other->flags() & 7) == 0) {
			$assign(var$9, $CompilerProperties$Errors::OverrideWeakerAccess($(cannotOverride(m, other)), "package"_s));
		} else {
			$var($JCDiagnostic$Fragment, var$10, cannotOverride(m, other));
			$assign(var$9, $CompilerProperties$Errors::OverrideWeakerAccess(var$10, $($Flags::asFlagSet(other->flags() & 7))));
		}
		$nc(this->log)->error(var$8, var$9);
		m->flags_field |= (int64_t)0x0000200000000000;
		return;
	}
	$var($Type, mt, $nc(this->types)->memberType($nc(origin)->type, m));
	$var($Type, ot, this->types->memberType(origin->type, other));
	$var($List, mtvars, $nc(mt)->getTypeArguments());
	$var($List, otvars, $nc(ot)->getTypeArguments());
	$var($Type, mtres, mt->getReturnType());
	$var($Type, otres, this->types->subst($(ot->getReturnType()), otvars, mtvars));
	$nc(this->overrideWarner)->clear();
	bool resultTypesOK = this->types->returnTypeSubstitutable(mt, ot, otres, this->overrideWarner);
	if (!resultTypesOK) {
		bool var$11 = (m->flags() & 8) != 0;
		if (var$11 && (other->flags() & 8) != 0) {
			$var($JCDiagnostic$DiagnosticPosition, var$12, $TreeInfo::diagnosticPositionFor(m, tree));
			$var($Symbol, var$13, m->location());
			$nc(this->log)->error(var$12, $($CompilerProperties$Errors::OverrideIncompatibleRet($($CompilerProperties$Fragments::CantHide(m, var$13, other, $(other->location()))), mtres, otres)));
			m->flags_field |= (int64_t)0x0000200000000000;
		} else {
			$var($JCDiagnostic$DiagnosticPosition, var$14, $TreeInfo::diagnosticPositionFor(m, tree));
			$nc(this->log)->error(var$14, $($CompilerProperties$Errors::OverrideIncompatibleRet($(cannotOverride(m, other)), mtres, otres)));
			m->flags_field |= (int64_t)0x0000200000000000;
		}
		return;
	} else {
		$init($Lint$LintCategory);
		if ($nc(this->overrideWarner)->hasNonSilentLint($Lint$LintCategory::UNCHECKED)) {
			$var($JCDiagnostic$DiagnosticPosition, var$15, $TreeInfo::diagnosticPositionFor(m, tree));
			warnUnchecked(var$15, $($CompilerProperties$Warnings::OverrideUncheckedRet($(uncheckedOverrides(m, other)), mtres, otres)));
		}
	}
	$var($List, otthrown, this->types->subst($(ot->getThrownTypes()), otvars, mtvars));
	$var($List, var$16, mt->getThrownTypes());
	$var($List, unhandledErased, unhandled(var$16, $(this->types->erasure(otthrown))));
	$var($List, unhandledUnerased, unhandled($(mt->getThrownTypes()), otthrown));
	if ($nc(unhandledErased)->nonEmpty()) {
		$var($JCDiagnostic$DiagnosticPosition, var$17, $TreeInfo::diagnosticPositionFor(m, tree));
		$nc(this->log)->error(var$17, $($CompilerProperties$Errors::OverrideMethDoesntThrow($(cannotOverride(m, other)), $cast($Type, $nc(unhandledUnerased)->head))));
		m->flags_field |= (int64_t)0x0000200000000000;
		return;
	} else if ($nc(unhandledUnerased)->nonEmpty()) {
		$var($JCDiagnostic$DiagnosticPosition, var$18, $TreeInfo::diagnosticPositionFor(m, tree));
		warnUnchecked(var$18, $($CompilerProperties$Warnings::OverrideUncheckedThrown($(cannotOverride(m, other)), $cast($Type, unhandledUnerased->head))));
		return;
	}
	int64_t var$20 = m->flags();
	bool var$19 = ((var$20 ^ other->flags()) & $Flags::VARARGS) != 0;
	$init($Lint$LintCategory);
	if (var$19 && $nc(this->lint)->isEnabled($Lint$LintCategory::OVERRIDES)) {
		$var($JCDiagnostic$DiagnosticPosition, var$21, $TreeInfo::diagnosticPositionFor(m, tree));
		$nc(this->log)->warning(var$21, ((m->flags() & $Flags::VARARGS) != 0) ? $($CompilerProperties$Warnings::OverrideVarargsMissing($(varargsOverrides(m, other)))) : $($CompilerProperties$Warnings::OverrideVarargsExtra($(varargsOverrides(m, other)))));
	}
	if ((other->flags() & (int64_t)0x80000000) != 0) {
		$var($JCDiagnostic$DiagnosticPosition, var$22, $TreeInfo::diagnosticPositionFor(m, tree));
		$nc(this->log)->warning(var$22, $($CompilerProperties$Warnings::OverrideBridge($(uncheckedOverrides(m, other)))));
	}
	if (!isDeprecatedOverrideIgnorable(other, origin)) {
		$var($Lint, prevLint, setLint($($nc(this->lint)->augment(m))));
		$var($Throwable, var$23, nullptr);
		try {
			checkDeprecated($$new(Check$$Lambda$lambda$checkOverride$4$5, m, tree), m, other);
		} catch ($Throwable& var$24) {
			$assign(var$23, var$24);
		} /*finally*/ {
			setLint(prevLint);
		}
		if (var$23 != nullptr) {
			$throw(var$23);
		}
	}
}

bool Check::isDeprecatedOverrideIgnorable($Symbol$MethodSymbol* m, $Symbol$ClassSymbol* origin) {
	$useLocalObjectStack();
	$var($Symbol$ClassSymbol, mc, $nc(m)->enclClass());
	$var($Type, st, $nc(this->types)->supertype($nc(origin)->type));
	$init($TypeTag);
	if (!$nc(st)->hasTag($TypeTag::CLASS)) {
		return true;
	}
	$var($Symbol$MethodSymbol, stimpl, m->implementation($cast($Symbol$ClassSymbol, st->tsym), this->types, false));
	if (mc != nullptr && ((mc->flags() & 0x0200) != 0)) {
		$var($List, intfs, this->types->interfaces(origin->type));
		return ($nc(intfs)->contains(mc->type) ? false : (stimpl != nullptr));
	} else {
		return (stimpl != m);
	}
}

void Check::checkCompatibleConcretes($JCDiagnostic$DiagnosticPosition* pos, $Type* site) {
	$useLocalObjectStack();
	$var($Type, sup, $nc(this->types)->supertype(site));
	$init($TypeTag);
	if (!$nc(sup)->hasTag($TypeTag::CLASS)) {
		return;
	}
	{
		$var($Type, t1, sup);
		for (;; $assign(t1, this->types->supertype(t1))) {
			bool var$0 = $nc(t1)->hasTag($TypeTag::CLASS);
			if (!(var$0 && $nc($nc(t1->tsym)->type)->isParameterized())) {
				break;
			}
			{
				$init($Scope$LookupKind);
				$var($Iterator, i$, $$nc($$nc(t1->tsym->members())->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s1, $cast($Symbol, i$->next()));
					{
						$init($Kinds$Kind);
						bool var$2 = $nc(s1)->kind != $Kinds$Kind::MTH || (s1->flags() & ((8 | 0x1000) | (int64_t)0x80000000)) != 0;
						bool var$1 = var$2 || !s1->isInheritedIn($nc(site)->tsym, this->types);
						if (var$1 || !$equals($cast($Symbol$MethodSymbol, s1)->implementation($nc(site)->tsym, this->types, true), s1)) {
							continue;
						}
						$var($Type, st1, this->types->memberType(t1, s1));
						int32_t s1ArgsLength = $$nc($nc(st1)->getParameterTypes())->length();
						if (st1 == s1->type) {
							continue;
						}
						{
							$var($Type, t2, sup);
							for (; $nc(t2)->hasTag($TypeTag::CLASS); $assign(t2, this->types->supertype(t2))) {
								$var($Iterator, i$, $$nc($$nc($nc(t2->tsym)->members())->getSymbolsByName(s1->name))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Symbol, s2, $cast($Symbol, i$->next()));
									{
										bool var$5 = s2 == s1 || $nc(s2)->kind != $Kinds$Kind::MTH || ($nc(s2)->flags() & ((8 | 0x1000) | (int64_t)0x80000000)) != 0;
										bool var$4 = var$5 || $$nc($nc($nc(s2)->type)->getParameterTypes())->length() != s1ArgsLength;
										bool var$3 = var$4 || !$nc(s2)->isInheritedIn($nc(site)->tsym, this->types);
										if (var$3 || !$equals($nc($cast($Symbol$MethodSymbol, s2))->implementation($nc(site)->tsym, this->types, true), s2)) {
											continue;
										}
										$var($Type, st2, this->types->memberType(t2, s2));
										if (this->types->overrideEquivalent(st1, st2)) {
											$nc(this->log)->error(pos, $($CompilerProperties$Errors::ConcreteInheritanceConflict(s1, t1, s2, t2, sup)));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool Check::checkCompatibleAbstracts($JCDiagnostic$DiagnosticPosition* pos, $Type* t1$renamed, $Type* t2$renamed, $Type* site) {
	$useLocalObjectStack();
	$var($Type, t1, t1$renamed);
	$var($Type, t2, t2$renamed);
	if (($nc($nc(site)->tsym)->flags() & 0x01000000) != 0) {
		$assign(t1, $nc(this->types)->capture(t1));
		$assign(t2, this->types->capture(t2));
	}
	return firstIncompatibility(pos, t1, t2, site) == nullptr;
}

$Symbol* Check::firstIncompatibility($JCDiagnostic$DiagnosticPosition* pos, $Type* t1, $Type* t2, $Type* site) {
	$useLocalObjectStack();
	$var($Map, interfaces1, $new($HashMap));
	closure(t1, interfaces1);
	$var($Map, interfaces2, nullptr);
	if (t1 == t2) {
		$assign(interfaces2, interfaces1);
	} else {
		closure(t2, interfaces1, $assign(interfaces2, $new($HashMap)));
	}
	{
		$var($Iterator, i$, $$nc(interfaces1->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t3, $cast($Type, i$->next()));
			{
				$var($Iterator, i$, $$nc($nc(interfaces2)->values())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t4, $cast($Type, i$->next()));
					{
						$var($Symbol, s, firstDirectIncompatibility(pos, t3, t4, site));
						if (s != nullptr) {
							return s;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

void Check::closure($Type* t, $Map* typeMap) {
	$useLocalObjectStack();
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if ($nc(typeMap)->put(t->tsym, t) == nullptr) {
		closure($($nc(this->types)->supertype(t)), typeMap);
		{
			$var($Iterator, i$, $$nc(this->types->interfaces(t))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, i, $cast($Type, i$->next()));
				closure(i, typeMap);
			}
		}
	}
}

void Check::closure($Type* t, $Map* typesSkip, $Map* typeMap) {
	$useLocalObjectStack();
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if ($nc(typesSkip)->get(t->tsym) != nullptr) {
		return;
	}
	if ($nc(typeMap)->put(t->tsym, t) == nullptr) {
		closure($($nc(this->types)->supertype(t)), typesSkip, typeMap);
		{
			$var($Iterator, i$, $$nc(this->types->interfaces(t))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, i, $cast($Type, i$->next()));
				closure(i, typesSkip, typeMap);
			}
		}
	}
}

$Symbol* Check::firstDirectIncompatibility($JCDiagnostic$DiagnosticPosition* pos, $Type* t1, $Type* t2, $Type* site) {
	$useLocalObjectStack();
	$init($Scope$LookupKind);
	$var($Iterator, i$, $$nc($$nc($nc($nc(t1)->tsym)->members())->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Symbol, s1, $cast($Symbol, i$->next()));
		{
			$var($Type, st1, nullptr);
			$init($Kinds$Kind);
			bool var$0 = $nc(s1)->kind != $Kinds$Kind::MTH || !s1->isInheritedIn($nc(site)->tsym, this->types);
			if (var$0 || (s1->flags() & 0x1000) != 0) {
				continue;
			}
			$var($Symbol, impl, $cast($Symbol$MethodSymbol, s1)->implementation($nc(site)->tsym, this->types, false));
			if (impl != nullptr && (impl->flags() & 0x0400) == 0) {
				continue;
			}
			{
				$var($Iterator, i$, $$nc($$nc($nc($nc(t2)->tsym)->members())->getSymbolsByName(s1->name))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s2, $cast($Symbol, i$->next()));
					{
						if (s1 == s2) {
							continue;
						}
						bool var$1 = $nc(s2)->kind != $Kinds$Kind::MTH || !s2->isInheritedIn(site->tsym, this->types);
						if (var$1 || (s2->flags() & 0x1000) != 0) {
							continue;
						}
						if (st1 == nullptr) {
							$assign(st1, $nc(this->types)->memberType(t1, s1));
						}
						$var($Type, st2, $nc(this->types)->memberType(t2, s2));
						if (this->types->overrideEquivalent(st1, st2)) {
							$var($List, tvars1, $nc(st1)->getTypeArguments());
							$var($List, tvars2, $nc(st2)->getTypeArguments());
							$var($Type, rt1, st1->getReturnType());
							$var($Type, rt2, this->types->subst($(st2->getReturnType()), tvars2, tvars1));
							bool var$3 = this->types->isSameType(rt1, rt2);
							if (!var$3) {
								bool var$5 = !$nc(rt1)->isPrimitiveOrVoid();
								bool var$4 = var$5 && !$nc(rt2)->isPrimitiveOrVoid();
								if (var$4) {
									bool var$6 = this->types->covariantReturnType(rt1, rt2, this->types->noWarnings);
									var$4 = var$6 || this->types->covariantReturnType(rt2, rt1, this->types->noWarnings);
								}
								var$3 = var$4;
							}
							bool var$2 = var$3;
							bool compat = var$2 || checkCommonOverriderIn(s1, s2, site);
							if (!compat) {
								$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypesIncompatible(t1, t2, $($CompilerProperties$Fragments::IncompatibleDiffRet(s2->name, $($$nc(this->types->memberType(t2, s2))->getParameterTypes()))))));
								return s2;
							}
						} else {
							bool var$7 = checkNameClash($cast($Symbol$ClassSymbol, site->tsym), s1, s2);
							if (var$7 && !checkCommonOverriderIn(s1, s2, site)) {
								$var($Name, var$8, s1->name);
								$var($1List, var$9, $$nc($$nc(this->types->memberType(site, s1))->asMethodType())->getParameterTypes());
								$var($Symbol, var$10, s1->location());
								$var($Name, var$11, s2->name);
								$var($1List, var$12, $$nc($$nc(this->types->memberType(site, s2))->asMethodType())->getParameterTypes());
								$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride(var$8, var$9, var$10, var$11, var$12, $(s2->location()))));
								return s2;
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

bool Check::checkCommonOverriderIn($Symbol* s1, $Symbol* s2, $Type* site) {
	$useLocalObjectStack();
	$var($Map, supertypes, $new($HashMap));
	$var($Type, st1, $nc(this->types)->memberType(site, s1));
	$var($Type, st2, this->types->memberType(site, s2));
	closure(site, supertypes);
	{
		$var($Iterator, i$, $$nc(supertypes->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Iterator, i$, $$nc($$nc($nc($nc(t)->tsym)->members())->getSymbolsByName($nc(s1)->name))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s3, $cast($Symbol, i$->next()));
					{
						$init($Kinds$Kind);
						if (s3 == s1 || s3 == s2 || $nc(s3)->kind != $Kinds$Kind::MTH || ($nc(s3)->flags() & ((int64_t)0x80000000 | 0x1000)) != 0) {
							continue;
						}
						$var($Type, st3, this->types->memberType(site, s3));
						bool var$2 = this->types->overrideEquivalent(st3, st1);
						bool var$1 = var$2 && this->types->overrideEquivalent(st3, st2);
						bool var$0 = var$1 && this->types->returnTypeSubstitutable(st3, st1);
						if (var$0 && this->types->returnTypeSubstitutable(st3, st2)) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void Check::checkOverride($Env* env, $JCTree$JCMethodDecl* tree, $Symbol$MethodSymbol* m) {
	$useLocalObjectStack();
	$var($Symbol$ClassSymbol, origin, $cast($Symbol$ClassSymbol, $nc(m)->owner));
	bool var$0 = ($nc(origin)->flags() & 0x4000) != 0;
	if (var$0 && $nc($nc(this->names)->finalize$)->equals(m->name)) {
		if (m->overrides($nc(this->syms)->enumFinalFinalize, origin, this->types, false)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::EnumNoFinalize);
			return;
		}
	}
	if (this->allowRecords && origin->isRecord()) {
		$var($Optional, recordComponent, $$nc($$nc($$nc(origin->getRecordComponents())->stream())->filter($$new(Check$$Lambda$lambda$checkOverride$5$6, tree)))->findFirst());
		if ($nc(recordComponent)->isPresent()) {
			return;
		}
	}
	{
		$init($TypeTag);
		$var($Type, t, origin->type);
		for (; $nc(t)->hasTag($TypeTag::CLASS); $assign(t, $nc(this->types)->supertype(t))) {
			if (t != origin->type) {
				checkOverride(tree, t, origin, m);
			}
			{
				$var($Iterator, i$, $$nc($nc(this->types)->interfaces(t))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t2, $cast($Type, i$->next()));
					{
						checkOverride(tree, t2, origin, m);
					}
				}
			}
		}
	}
	bool explicitOverride = m->attribute($nc($nc(this->syms)->overrideType)->tsym) != nullptr;
	bool var$1 = explicitOverride;
	if (!var$1) {
		bool var$2 = $nc(($cast($AttrContext, $nc(env)->info)))->isAnonymousDiamond && !m->isConstructor();
		var$1 = var$2 && !m->isPrivate();
	}
	bool mustOverride = var$1;
	if (mustOverride && !isOverrider(m)) {
		$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
		{
			$var($Iterator, i$, $nc($nc($$cast($JCTree$JCModifiers, tree->getModifiers()))->annotations)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
				if ($nc($nc($nc(a)->annotationType)->type)->tsym == this->syms->overrideType->tsym) {
					$assign(pos, a->pos());
					break;
				}
			}
		}
		$init($CompilerProperties$Errors);
		$init($CompilerProperties$Fragments);
		$nc(this->log)->error(pos, explicitOverride ? (m->isStatic() ? $CompilerProperties$Errors::StaticMethodsCannotBeAnnotatedWithOverride : $CompilerProperties$Errors::MethodDoesNotOverrideSuperclass) : $($CompilerProperties$Errors::AnonymousDiamondMethodDoesNotOverrideSuperclass($CompilerProperties$Fragments::DiamondAnonymousMethodsImplicitlyOverride)));
	}
}

void Check::checkOverride($JCTree* tree, $Type* site, $Symbol$ClassSymbol* origin, $Symbol$MethodSymbol* m) {
	$useLocalObjectStack();
	$var($Symbol$TypeSymbol, c, $nc(site)->tsym);
	{
		$var($Iterator, i$, $$nc($$nc($nc(c)->members())->getSymbolsByName($nc(m)->name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			if (m->overrides(sym, origin, this->types, false)) {
				if (($nc(sym)->flags() & 0x0400) == 0) {
					checkOverride(tree, m, $cast($Symbol$MethodSymbol, sym), origin);
				}
			}
		}
	}
}

void Check::checkClassOverrideEqualsAndHashIfNeeded($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* someClass) {
	bool var$2 = someClass == $cast($Symbol$ClassSymbol, $nc($nc(this->syms)->objectType)->tsym) || $nc(someClass)->isInterface();
	bool var$1 = var$2 || $nc(someClass)->isEnum();
	bool var$0 = var$1 || ($nc(someClass)->flags() & 0x2000) != 0;
	if (var$0 || ($nc(someClass)->flags() & 0x0400) != 0) {
		return;
	}
	if ($nc(someClass)->isAnonymous()) {
		$var($List, interfaces, $nc(this->types)->interfaces(someClass->type));
		if (interfaces != nullptr && !interfaces->isEmpty() && $nc(($cast($Type, interfaces->head)))->tsym == $nc(this->syms->comparatorType)->tsym) {
			return;
		}
	}
	checkClassOverrideEqualsAndHash(pos, someClass);
}

void Check::checkClassOverrideEqualsAndHash($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* someClass) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::OVERRIDES)) {
		$var($Symbol$MethodSymbol, equalsAtObject, $cast($Symbol$MethodSymbol, $$nc($nc($nc($nc(this->syms)->objectType)->tsym)->members())->findFirst($nc(this->names)->equals$)));
		$var($Symbol$MethodSymbol, hashCodeAtObject, $cast($Symbol$MethodSymbol, $$nc($nc(this->syms->objectType->tsym)->members())->findFirst(this->names->hashCode$)));
		$var($Symbol$MethodSymbol, equalsImpl, $nc(this->types)->implementation(equalsAtObject, someClass, false, this->equalsHasCodeFilter));
		bool overridesEquals = equalsImpl != nullptr && $equals(equalsImpl->owner, someClass);
		bool overridesHashCode = this->types->implementation(hashCodeAtObject, someClass, false, this->equalsHasCodeFilter) != hashCodeAtObject;
		if (overridesEquals && !overridesHashCode) {
			$nc(this->log)->warning($Lint$LintCategory::OVERRIDES, pos, $($CompilerProperties$Warnings::OverrideEqualsButNotHashcode(someClass)));
		}
	}
}

void Check::checkModuleName($JCTree$JCModuleDecl* tree) {
	$useLocalObjectStack();
	$var($Name, moduleName, $nc($nc(tree)->sym)->name);
	$Assert::checkNonNull(moduleName);
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MODULE)) {
		$var($JCTree$JCExpression, qualId, tree->qualId);
		while (qualId != nullptr) {
			$var($Name, componentName, nullptr);
			$var($JCDiagnostic$DiagnosticPosition, pos, nullptr);
			{
				$init($Check$5);
				$var($JCTree$JCFieldAccess, selectNode, nullptr);
				switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get(($$nc(qualId->getTag()))->ordinal())) {
				case 1:
					$assign(selectNode, $cast($JCTree$JCFieldAccess, qualId));
					$assign(componentName, selectNode->name);
					$assign(pos, selectNode->pos());
					$assign(qualId, selectNode->selected);
					break;
				case 2:
					$assign(componentName, $nc($cast($JCTree$JCIdent, qualId))->name);
					$assign(pos, qualId->pos());
					$assign(qualId, nullptr);
					break;
				default:
					$throwNew($AssertionError, $$of($str({"Unexpected qualified identifier: "_s, $($nc(qualId)->toString())})));
				}
			}
			if (componentName != nullptr) {
				$var($String, moduleNameComponentString, componentName->toString());
				int32_t nameLength = $nc(moduleNameComponentString)->length();
				if (nameLength > 0 && $Character::isDigit(moduleNameComponentString->charAt(nameLength - 1))) {
					$nc(this->log)->warning($Lint$LintCategory::MODULE, pos, $($CompilerProperties$Warnings::PoorChoiceForModuleName(componentName)));
				}
			}
		}
	}
}

bool Check::checkNameClash($Symbol$ClassSymbol* origin, $Symbol* s1, $Symbol* s2) {
	$useLocalObjectStack();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, $nc(origin)->type));
	bool var$1 = cf->test(s1);
	bool var$0 = var$1 && cf->test(s2);
	if (var$0) {
		$var($Type, var$2, $nc(s1)->erasure(this->types));
		var$0 = $nc(this->types)->hasSameArgs(var$2, $($nc(s2)->erasure(this->types)));
	}
	return (var$0);
}

void Check::checkAllDefined($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	$useLocalObjectStack();
	$var($Symbol$MethodSymbol, undef, $nc(this->types)->firstUnimplementedAbstract(c));
	if (undef != nullptr) {
		int64_t var$0 = undef->flags();
		$var($Name, var$1, undef->name);
		$var($Symbol$MethodSymbol, undef1, $new($Symbol$MethodSymbol, var$0, var$1, $(this->types->memberType($nc(c)->type, undef)), undef->owner));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::DoesNotOverrideAbstract(c, undef1, $(undef1->location()))));
	}
}

void Check::checkNonCyclicDecl($JCTree$JCClassDecl* tree) {
	$var($Check$CycleChecker, cc, $new($Check$CycleChecker, this));
	cc->scan(tree);
	if (!cc->errorFound && !cc->partialCheck) {
		$nc($nc(tree)->sym)->flags_field |= 0x40000000;
	}
}

void Check::checkNonCyclic($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	checkNonCyclicInternal(pos, t);
}

void Check::checkNonCyclic($JCDiagnostic$DiagnosticPosition* pos, $Type$TypeVar* t) {
	checkNonCyclic1(pos, t, $($List::nil()));
}

void Check::checkNonCyclic1($JCDiagnostic$DiagnosticPosition* pos, $Type* t, $List* seen$renamed) {
	$useLocalObjectStack();
	$var($List, seen, seen$renamed);
	$var($Type$TypeVar, tv, nullptr);
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::TYPEVAR);
	if (var$0 && ($nc(t->tsym)->flags() & 0x10000000) != 0) {
		return;
	}
	if ($nc(seen)->contains(t)) {
		$assign(tv, $cast($Type$TypeVar, t));
		tv->setUpperBound($($nc(this->types)->createErrorType(t)));
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicInheritance(t)));
	} else if (t->hasTag($TypeTag::TYPEVAR)) {
		$assign(tv, $cast($Type$TypeVar, t));
		$assign(seen, seen->prepend(tv));
		{
			$var($Iterator, i$, $$nc($nc(this->types)->getBounds(tv))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, b, $cast($Type, i$->next()));
				checkNonCyclic1(pos, b, seen);
			}
		}
	}
}

bool Check::checkNonCyclicInternal($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalObjectStack();
	bool complete = true;
	$var($Symbol, c, $nc(t)->tsym);
	if (($nc(c)->flags_field & 0x40000000) != 0) {
		return true;
	}
	if ((c->flags_field & 0x08000000) != 0) {
		noteCyclic(pos, $cast($Symbol$ClassSymbol, c));
	} else if (!$nc(c->type)->isErroneous()) {
		$var($Throwable, var$0, nullptr);
		try {
			c->flags_field |= 0x08000000;
			$init($TypeTag);
			if ($nc(c->type)->hasTag($TypeTag::CLASS)) {
				$var($Type$ClassType, clazz, $cast($Type$ClassType, c->type));
				if ($nc(clazz)->interfaces_field != nullptr) {
					$var($List, l, clazz->interfaces_field);
					for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
						complete &= checkNonCyclicInternal(pos, $cast($Type, l->head));
					}
				}
				if (clazz->supertype_field != nullptr) {
					$var($Type, st, clazz->supertype_field);
					if (st != nullptr && st->hasTag($TypeTag::CLASS)) {
						complete &= checkNonCyclicInternal(pos, st);
					}
				}
				$init($Kinds$Kind);
				if ($nc(c->owner)->kind == $Kinds$Kind::TYP) {
					complete &= checkNonCyclicInternal(pos, c->owner->type);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			c->flags_field &= (uint64_t)~0x08000000;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (complete) {
		complete = ((c->flags_field & 0x10000000) == 0) && c->isCompleted();
	}
	if (complete) {
		c->flags_field |= 0x40000000;
	}
	return complete;
}

void Check::noteCyclic($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	$useLocalObjectStack();
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicInheritance(c)));
	{
		$var($List, l, $nc(this->types)->interfaces($nc(c)->type));
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$init($Type);
			$set(l, head, this->types->createErrorType($cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym), $Type::noType));
		}
	}
	$var($Type, st, this->types->supertype(c->type));
	$init($TypeTag);
	if ($nc(st)->hasTag($TypeTag::CLASS)) {
		$set($nc($cast($Type$ClassType, c->type)), supertype_field, this->types->createErrorType($cast($Symbol$ClassSymbol, st->tsym), $Type::noType));
	}
	$set(c, type, this->types->createErrorType(c, c->type));
	c->flags_field |= 0x40000000;
}

void Check::checkImplementations($JCTree$JCClassDecl* tree) {
	checkImplementations(tree, $nc(tree)->sym, $nc(tree)->sym);
}

void Check::checkImplementations($JCTree* tree, $Symbol$ClassSymbol* origin, $Symbol$ClassSymbol* ic) {
	$useLocalObjectStack();
	$var($List, l, $nc(this->types)->closure($nc(ic)->type));
	for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
		$var($Symbol$ClassSymbol, lc, $cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym));
		if (($nc(lc)->flags() & 0x0400) != 0) {
			$init($Scope$LookupKind);
			$var($Iterator, i$, $$nc($$nc(lc->members())->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::MTH && (sym->flags() & (8 | 0x0400)) == 0x0400) {
					$var($Symbol$MethodSymbol, absmeth, $cast($Symbol$MethodSymbol, sym));
					$var($Symbol$MethodSymbol, implmeth, absmeth->implementation(origin, this->types, false));
					bool var$0 = implmeth != nullptr && implmeth != absmeth;
					if (var$0) {
						int64_t var$1 = $nc(implmeth->owner)->flags() & 0x0200;
						var$0 = var$1 == ($nc(origin)->flags() & 0x0200);
					}
					if (var$0) {
						checkOverride(tree, implmeth, absmeth, origin);
					}
				}
			}
		}
	}
}

void Check::checkCompatibleSupertypes($JCDiagnostic$DiagnosticPosition* pos, $Type* c) {
	$useLocalObjectStack();
	$var($List, supertypes, $nc(this->types)->interfaces(c));
	$var($Type, supertype, this->types->supertype(c));
	$init($TypeTag);
	bool var$0 = $nc(supertype)->hasTag($TypeTag::CLASS);
	if (var$0 && ($nc(supertype->tsym)->flags() & 0x0400) != 0) {
		$assign(supertypes, $nc(supertypes)->prepend(supertype));
	}
	{
		$var($List, l, supertypes);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			bool var$1 = !$$nc($nc($cast($Type, l->head))->getTypeArguments())->isEmpty();
			if (var$1 && !checkCompatibleAbstracts(pos, $cast($Type, l->head), $cast($Type, l->head), c)) {
				return;
			}
			{
				$var($List, m, supertypes);
				for (; m != l; $assign(m, $nc(m)->tail)) {
					if (!checkCompatibleAbstracts(pos, $cast($Type, l->head), $cast($Type, $nc(m)->head), c)) {
						return;
					}
				}
			}
		}
	}
	checkCompatibleConcretes(pos, c);
}

void Check::checkOverrideClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* sym) {
	$useLocalObjectStack();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, site));
	$var($List, potentiallyAmbiguousList, $List::nil());
	bool overridesAny = false;
	$var($ArrayList, symbolsByName, $new($ArrayList));
	$$nc($$nc($nc(this->types)->membersClosure(site, false))->getSymbolsByName($nc(sym)->name, cf))->forEach($$new(Check$$Lambda$add$7, symbolsByName));
	{
		$var($Iterator, i$, symbolsByName->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, m1, $cast($Symbol, i$->next()));
			{
				if (!sym->overrides(m1, $nc(site)->tsym, this->types, false)) {
					if ($equals(m1, sym)) {
						continue;
					}
					if (!overridesAny) {
						$assign(potentiallyAmbiguousList, $nc(potentiallyAmbiguousList)->prepend($cast($Symbol$MethodSymbol, m1)));
					}
					continue;
				}
				if (!$equals(m1, sym)) {
					overridesAny = true;
					$assign(potentiallyAmbiguousList, $List::nil());
				}
				{
					$var($Iterator, i$, symbolsByName->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, m2, $cast($Symbol, i$->next()));
						{
							if (m2 == m1) {
								continue;
							}
							$var($Type, var$1, sym->type);
							$var($Type, var$2, this->types->memberType(site, m2));
							$init($Source$Feature);
							bool var$0 = !this->types->isSubSignature(var$1, var$2, $Source$Feature::STRICT_METHOD_CLASH_CHECK->allowedInSource(this->source));
							if (var$0) {
								$var($Type, var$3, $nc(m2)->erasure(this->types));
								var$0 = this->types->hasSameArgs(var$3, $($nc(m1)->erasure(this->types)));
							}
							if (var$0) {
								sym->flags_field |= (int64_t)0x0000040000000000;
								if ($equals(m1, sym)) {
									$var($Name, var$4, $nc(m1)->name);
									$var($1List, var$5, $$nc($$nc(this->types->memberType(site, m1))->asMethodType())->getParameterTypes());
									$var($Symbol, var$6, m1->location());
									$var($Name, var$7, $nc(m2)->name);
									$var($1List, var$8, $$nc($$nc(this->types->memberType(site, m2))->asMethodType())->getParameterTypes());
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride(var$4, var$5, var$6, var$7, var$8, $(m2->location()))));
								} else {
									$var($Type$ClassType, ct, $cast($Type$ClassType, site));
									$var($String, kind, ct->isInterface() ? "interface"_s : "class"_s);
									$var($Name, var$9, $nc(ct->tsym)->name);
									$var($Name, var$10, $nc(m1)->name);
									$var($1List, var$11, $$nc($$nc(this->types->memberType(site, m1))->asMethodType())->getParameterTypes());
									$var($Symbol, var$12, m1->location());
									$var($Name, var$13, $nc(m2)->name);
									$var($1List, var$14, $$nc($$nc(this->types->memberType(site, m2))->asMethodType())->getParameterTypes());
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoOverride1(kind, var$9, var$10, var$11, var$12, var$13, var$14, $(m2->location()))));
								}
								return;
							}
						}
					}
				}
			}
		}
	}
	if (!overridesAny) {
		$var($Iterator, i$, $nc(potentiallyAmbiguousList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, i$->next()));
			{
				checkPotentiallyAmbiguousOverloads(pos, site, sym, m);
			}
		}
	}
}

void Check::checkHideClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* sym) {
	$useLocalObjectStack();
	$var($Check$ClashFilter, cf, $new($Check$ClashFilter, this, site));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->types)->membersClosure(site, true))->getSymbolsByName($nc(sym)->name, cf))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$var($Type, var$0, sym->type);
				$var($Type, var$1, this->types->memberType(site, s));
				$init($Source$Feature);
				if (!this->types->isSubSignature(var$0, var$1, $Source$Feature::STRICT_METHOD_CLASH_CHECK->allowedInSource(this->source))) {
					$var($Type, var$2, $nc(s)->erasure(this->types));
					if (this->types->hasSameArgs(var$2, $(sym->erasure(this->types)))) {
						$var($Symbol, var$3, sym->location());
						$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasureNoHide(sym, var$3, s, $(s->location()))));
						return;
					} else {
						checkPotentiallyAmbiguousOverloads(pos, site, sym, $cast($Symbol$MethodSymbol, s));
					}
				}
			}
		}
	}
}

void Check::checkDefaultMethodClashes($JCDiagnostic$DiagnosticPosition* pos, $Type* site) {
	$useLocalObjectStack();
	$var($Check$DefaultMethodClashFilter, dcf, $new($Check$DefaultMethodClashFilter, this, site));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->types)->membersClosure(site, false))->getSymbols(dcf))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, m, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				$Assert::check($nc(m)->kind == $Kinds$Kind::MTH);
				$var($List, prov, this->types->interfaceCandidates(site, $cast($Symbol$MethodSymbol, m)));
				if ($nc(prov)->size() > 1) {
					$var($ListBuffer, abstracts, $new($ListBuffer));
					$var($ListBuffer, defaults, $new($ListBuffer));
					{
						$var($Iterator, i$, prov->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol$MethodSymbol, provSym, $cast($Symbol$MethodSymbol, i$->next()));
							{
								if (($nc(provSym)->flags() & (int64_t)0x0000080000000000) != 0) {
									$assign(defaults, $nc(defaults)->append(provSym));
								} else if ((provSym->flags() & 0x0400) != 0) {
									$assign(abstracts, $nc(abstracts)->append(provSym));
								}
								bool var$0 = $nc(defaults)->nonEmpty();
								if (var$0) {
									int32_t var$1 = defaults->size();
									var$0 = var$1 + $nc(abstracts)->size() >= 2;
								}
								if (var$0) {
									$var($JCDiagnostic$Fragment, diagKey, nullptr);
									$var($Symbol, s1, $cast($Symbol, defaults->first()));
									$var($Symbol, s2, nullptr);
									if (defaults->size() > 1) {
										$assign(s2, $cast($Symbol, $nc($nc($(defaults->toList()))->tail)->head));
										$var($Kinds$KindName, var$2, $Kinds::kindName($nc(site)->tsym));
										$var($Name, var$3, m->name);
										$var($1List, var$4, $$nc(this->types->memberType(site, m))->getParameterTypes());
										$var($Symbol, var$5, $nc(s1)->location());
										$assign(diagKey, $CompilerProperties$Fragments::IncompatibleUnrelatedDefaults(var$2, site, var$3, var$4, var$5, $($nc(s2)->location())));
									} else {
										$assign(s2, $cast($Symbol, $nc(abstracts)->first()));
										$var($Kinds$KindName, var$6, $Kinds::kindName($nc(site)->tsym));
										$var($Name, var$7, m->name);
										$var($1List, var$8, $$nc(this->types->memberType(site, m))->getParameterTypes());
										$var($Symbol, var$9, $nc(s1)->location());
										$assign(diagKey, $CompilerProperties$Fragments::IncompatibleAbstractDefault(var$6, site, var$7, var$8, var$9, $($nc(s2)->location())));
									}
									$var($Type, var$10, $nc($($nc(s1)->location()))->type);
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::TypesIncompatible(var$10, $nc($($nc(s2)->location()))->type, diagKey)));
									break;
								}
							}
						}
					}
				}
			}
		}
	}
}

void Check::checkPotentiallyAmbiguousOverloads($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Symbol$MethodSymbol* msym1, $Symbol$MethodSymbol* msym2) {
	$useLocalObjectStack();
	$init($Source$Feature);
	bool var$2 = msym1 != msym2 && $Source$Feature::DEFAULT_METHODS->allowedInSource(this->source);
	$init($Lint$LintCategory);
	bool var$1 = var$2 && $nc(this->lint)->isEnabled($Lint$LintCategory::OVERLOADS);
	bool var$0 = var$1 && ($nc(msym1)->flags() & (int64_t)0x0001000000000000) == 0;
	if (var$0 && ($nc(msym2)->flags() & (int64_t)0x0001000000000000) == 0) {
		$var($Type, mt1, $nc(this->types)->memberType(site, msym1));
		$var($Type, mt2, this->types->memberType(site, msym2));
		$init($TypeTag);
		bool var$4 = $nc(mt1)->hasTag($TypeTag::FORALL);
		bool var$3 = var$4 && $nc(mt2)->hasTag($TypeTag::FORALL);
		if (var$3 && this->types->hasSameBounds($cast($Type$ForAll, mt1), $cast($Type$ForAll, mt2))) {
			$assign(mt2, this->types->subst(mt2, $cast($Type$ForAll, mt2)->tvars, $cast($Type$ForAll, mt1)->tvars));
		}
		int32_t var$5 = $$nc(mt1->getParameterTypes())->length();
		int32_t maxLength = $Math::max(var$5, $$nc($nc(mt2)->getParameterTypes())->length());
		$var($List, args1, $nc(this->rs)->adjustArgs($(mt1->getParameterTypes()), msym1, maxLength, true));
		$var($List, args2, this->rs->adjustArgs($(mt2->getParameterTypes()), msym2, maxLength, true));
		int32_t var$6 = $nc(args1)->length();
		if (var$6 != $nc(args2)->length()) {
			return;
		}
		bool potentiallyAmbiguous = false;
		while (true) {
			bool var$7 = $nc(args1)->nonEmpty();
			if (!(var$7 && $nc(args2)->nonEmpty())) {
				break;
			}
			{
				$var($Type, s, $cast($Type, args1->head));
				$var($Type, t, $cast($Type, $nc(args2)->head));
				bool var$8 = !this->types->isSubtype(t, s);
				if (var$8 && !this->types->isSubtype(s, t)) {
					bool var$11 = this->types->isFunctionalInterface(s);
					bool var$10 = var$11 && this->types->isFunctionalInterface(t);
					bool var$9 = var$10 && $$nc($$nc(this->types->findDescriptorType(s))->getParameterTypes())->length() > 0;
					if (var$9) {
						int32_t var$12 = $$nc($$nc(this->types->findDescriptorType(s))->getParameterTypes())->length();
						var$9 = var$12 == $$nc($$nc(this->types->findDescriptorType(t))->getParameterTypes())->length();
					}
					if (var$9) {
						potentiallyAmbiguous = true;
					} else {
						return;
					}
				}
				$assign(args1, args1->tail);
				$assign(args2, args2->tail);
			}
		}
		if (potentiallyAmbiguous) {
			msym1->flags_field |= (int64_t)0x0001000000000000;
			msym2->flags_field |= (int64_t)0x0001000000000000;
			$var($Symbol, var$13, msym1->location());
			$nc(this->log)->warning($Lint$LintCategory::OVERLOADS, pos, $($CompilerProperties$Warnings::PotentiallyAmbiguousOverload(msym1, var$13, msym2, $(msym2->location()))));
			return;
		}
	}
}

void Check::checkAccessFromSerializableElement($JCTree* tree, bool isLambda) {
	$useLocalObjectStack();
	bool var$0 = this->warnOnAnyAccessToMembers;
	if (!var$0) {
		$init($Lint$LintCategory);
		bool var$1 = $nc(this->lint)->isEnabled($Lint$LintCategory::SERIAL);
		var$0 = var$1 && !this->lint->isSuppressed($Lint$LintCategory::SERIAL) && isLambda;
	}
	if (var$0) {
		$var($Symbol, sym, $TreeInfo::symbol(tree));
		$init($Kinds$KindSelector);
		if (!$nc($nc(sym)->kind)->matches($Kinds$KindSelector::VAL_MTH)) {
			return;
		}
		if (sym->kind == $Kinds$Kind::VAR) {
			bool var$2 = (sym->flags() & (int64_t)0x0000000200000000) != 0;
			if (var$2 || sym->isDirectlyOrIndirectlyLocal() || sym->name == $nc(this->names)->_this || sym->name == $nc(this->names)->_super) {
				return;
			}
		}
		bool var$3 = !$nc(this->types)->isSubtype($nc(sym->owner)->type, $nc(this->syms)->serializableType);
		if (var$3 && isEffectivelyNonPublic(sym)) {
			if (isLambda) {
				if (belongsToRestrictedPackage(sym)) {
					$init($Lint$LintCategory);
					$var($Lint$LintCategory, var$4, $Lint$LintCategory::SERIAL);
					$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(tree)->pos());
					$nc(this->log)->warning(var$4, var$5, $($CompilerProperties$Warnings::AccessToMemberFromSerializableLambda(sym)));
				}
			} else {
				$var($JCDiagnostic$DiagnosticPosition, var$6, $nc(tree)->pos());
				$nc(this->log)->warning(var$6, $($CompilerProperties$Warnings::AccessToMemberFromSerializableElement(sym)));
			}
		}
	}
}

bool Check::isEffectivelyNonPublic($Symbol* sym$renamed) {
	$var($Symbol, sym, sym$renamed);
	if ($nc(sym)->packge() == $nc(this->syms)->rootPackage) {
		return false;
	}
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		if ((sym->flags() & 1) == 0) {
			return true;
		}
		$assign(sym, sym->owner);
	}
	return false;
}

bool Check::belongsToRestrictedPackage($Symbol* sym) {
	$useLocalObjectStack();
	$var($String, fullName, $nc($nc($($nc(sym)->packge()))->fullname)->toString());
	bool var$2 = $nc(fullName)->startsWith("java."_s);
	bool var$1 = var$2 || fullName->startsWith("javax."_s);
	bool var$0 = var$1 || fullName->startsWith("sun."_s);
	return var$0 || fullName->contains(".internal."_s);
}

void Check::checkClassBounds($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	checkClassBounds(pos, $$new($HashMap), type);
}

void Check::checkClassBounds($JCDiagnostic$DiagnosticPosition* pos, $Map* seensofar, $Type* type) {
	$useLocalObjectStack();
	if ($nc(type)->isErroneous()) {
		return;
	}
	{
		$var($List, l, $nc(this->types)->interfaces(type));
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($Type, it, $cast($Type, l->head));
			$init($TypeTag);
			bool var$0 = type->hasTag($TypeTag::CLASS);
			if (var$0 && !$nc(it)->hasTag($TypeTag::CLASS)) {
				continue;
			}
			$var($Type, oldit, $cast($Type, $nc(seensofar)->put($nc(it)->tsym, it)));
			if (oldit != nullptr) {
				$var($List, oldparams, oldit->allparams());
				$var($List, newparams, it->allparams());
				if (!this->types->containsTypeEquivalent(oldparams, newparams)) {
					$var($Symbol, var$1, it->tsym);
					$var($String, var$2, $Type::toString(oldparams));
					$nc(this->log)->error(pos, $($CompilerProperties$Errors::CantInheritDiffArg(var$1, var$2, $($Type::toString(newparams)))));
				}
			}
			checkClassBounds(pos, seensofar, it);
		}
	}
	$var($Type, st, this->types->supertype(type));
	$init($TypeTag);
	bool var$3 = type->hasTag($TypeTag::CLASS);
	if (var$3 && !$nc(st)->hasTag($TypeTag::CLASS)) {
		return;
	}
	if (!$equals(st, $Type::noType)) {
		checkClassBounds(pos, seensofar, st);
	}
}

void Check::checkNotRepeated($JCDiagnostic$DiagnosticPosition* pos, $Type* it, $Set* its) {
	if ($nc(its)->contains(it)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::RepeatedInterface);
	} else {
		its->add(it);
	}
}

void Check::validateAnnotationTree($JCTree* tree) {
	{
	}
	$nc(tree)->accept($$new($Check$1AnnotationValidator, this));
}

void Check::validateAnnotationType($JCTree* restype) {
	if (restype != nullptr) {
		validateAnnotationType($(restype->pos()), restype->type);
	}
}

void Check::validateAnnotationType($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	$useLocalObjectStack();
	if ($nc(type)->isPrimitive()) {
		return;
	}
	if ($nc(this->types)->isSameType(type, $nc(this->syms)->stringType)) {
		return;
	}
	if (($nc(type->tsym)->flags() & $Flags::ENUM) != 0) {
		return;
	}
	if (($nc(type->tsym)->flags() & $Flags::ANNOTATION) != 0) {
		return;
	}
	if ($nc($(this->types->cvarLowerBound(type)))->tsym == $nc(this->syms->classType)->tsym) {
		return;
	}
	bool var$0 = this->types->isArray(type);
	if (var$0 && !this->types->isArray($(this->types->elemtype(type)))) {
		validateAnnotationType(pos, $(this->types->elemtype(type)));
		return;
	}
	$init($CompilerProperties$Errors);
	$nc(this->log)->error(pos, $CompilerProperties$Errors::InvalidAnnotationMemberType);
}

void Check::validateAnnotationMethod($JCDiagnostic$DiagnosticPosition* pos, $Symbol$MethodSymbol* m) {
	$useLocalObjectStack();
	$init($TypeTag);
	$var($Type, sup, $nc(this->syms)->annotationType);
	for (; $nc(sup)->hasTag($TypeTag::CLASS); $assign(sup, $nc(this->types)->supertype(sup))) {
		$var($Scope, s, $nc(sup->tsym)->members());
		{
			$var($Iterator, i$, $$nc($nc(s)->getSymbolsByName($nc(m)->name))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					bool var$0 = $nc(sym)->kind == $Kinds$Kind::MTH && (sym->flags() & (1 | 4)) != 0;
					if (var$0 && $nc(this->types)->overrideEquivalent(m->type, sym->type)) {
						$nc(this->log)->error(pos, $($CompilerProperties$Errors::IntfAnnotationMemberClash(sym, sup)));
					}
				}
			}
		}
	}
}

void Check::validateAnnotations($List* annotations, $JCTree* declarationTree, $Symbol* s) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(annotations)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
		validateAnnotation(a, declarationTree, s);
	}
}

void Check::validateTypeAnnotations($List* annotations, bool isTypeParameter) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(annotations)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
		validateTypeAnnotation(a, isTypeParameter);
	}
}

void Check::validateAnnotation($JCTree$JCAnnotation* a, $JCTree* declarationTree, $Symbol* s) {
	$useLocalObjectStack();
	validateAnnotationTree(a);
	bool var$0 = ($nc(s)->flags_field & (int64_t)0x2000000000000000) != 0;
	if (!var$0) {
		bool var$1 = s->enclClass() != nullptr;
		var$0 = var$1 && $$nc(s->enclClass())->isRecord();
	}
	bool isRecordMember = (var$0);
	$init($JCTree$Tag);
	$init($Kinds$Kind);
	bool isRecordField = (s->flags_field & (int64_t)0x2000000000000000) != 0 && $nc(declarationTree)->hasTag($JCTree$Tag::VARDEF) && $nc(s->owner)->kind == $Kinds$Kind::TYP;
	if (isRecordField) {
		$var($NameArray, targets, getTargetNames(a));
		bool appliesToRecords = false;
		{
			$var($NameArray, arr$, targets);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Name, target, arr$->get(i$));
				{
					appliesToRecords = target == $nc(this->names)->FIELD || target == this->names->PARAMETER || target == this->names->METHOD || target == this->names->TYPE_USE || target == this->names->RECORD_COMPONENT;
					if (appliesToRecords) {
						break;
					}
				}
			}
		}
		if (!appliesToRecords) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(a)->pos()), $CompilerProperties$Errors::AnnotationTypeNotApplicable);
		} else {
			$var($Symbol$ClassSymbol, recordClass, $cast($Symbol$ClassSymbol, s->owner));
			$var($Symbol$RecordComponent, rc, $nc(recordClass)->getRecordComponent($cast($Symbol$VarSymbol, s)));
			$var($SymbolMetadata, metadata, $nc(rc)->getMetadata());
			if (metadata == nullptr || metadata->isEmpty()) {
				rc->appendAttributes($$cast($List, $$nc($$nc($$nc(s->getRawAttributes())->stream())->filter($$new(Check$$Lambda$lambda$validateAnnotation$8$8, this)))->collect($($List::collector()))));
				rc->setTypeAttributes($(s->getRawTypeAttributes()));
				$set(rc, type, s->type);
			}
		}
	}
	if ($nc($nc($nc(a)->type)->tsym)->isAnnotationType()) {
		$var($Optional, applicableTargetsOp, getApplicableTargets(a, s));
		if (!$nc(applicableTargetsOp)->isEmpty()) {
			$var($Set, applicableTargets, $cast($Set, applicableTargetsOp->get()));
			bool var$2 = $nc(applicableTargets)->isEmpty();
			if (!var$2) {
				bool var$3 = applicableTargets->size() == 1;
				var$2 = var$3 && applicableTargets->contains($nc(this->names)->TYPE_USE);
			}
			bool notApplicableOrIsTypeUseOnly = var$2;
			bool isCompGeneratedRecordElement = isRecordMember && (s->flags_field & $Flags::GENERATED_MEMBER) != 0;
			bool isCompRecordElementWithNonApplicableDeclAnno = isCompGeneratedRecordElement && notApplicableOrIsTypeUseOnly;
			if (applicableTargets->isEmpty() || isCompRecordElementWithNonApplicableDeclAnno) {
				if (isCompRecordElementWithNonApplicableDeclAnno) {
					$var($JCTree$JCModifiers, modifiers, $TreeInfo::getModifiers(declarationTree));
					if (modifiers != nullptr && applicableTargets->isEmpty()) {
						$var($ListBuffer, newAnnotations, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc(modifiers->annotations)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree$JCAnnotation, anno, $cast($JCTree$JCAnnotation, i$->next()));
								if (anno != a) {
									newAnnotations->add(anno);
								}
							}
						}
						$set(modifiers, annotations, newAnnotations->toList());
					}
					$$nc(s->getMetadata())->removeDeclarationMetadata(a->attribute);
				} else {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($(a->pos()), $CompilerProperties$Errors::AnnotationTypeNotApplicable);
				}
			}
			if (isCompGeneratedRecordElement && !isRecordField && $nc(a->type)->tsym == $nc($nc(this->syms)->trustMeType)->tsym && $nc(declarationTree)->hasTag($JCTree$Tag::METHODDEF)) {
				$var($JCDiagnostic$DiagnosticPosition, var$4, a->pos());
				$nc(this->log)->error(var$4, $($CompilerProperties$Errors::VarargsInvalidTrustmeAnno(this->syms->trustMeType->tsym, $($CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsAccessor(s)))));
			}
		}
	}
	if ($nc($nc(a->annotationType)->type)->tsym == $nc($nc(this->syms)->functionalInterfaceType)->tsym) {
		if (s->kind != $Kinds$Kind::TYP) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(a->pos()), $CompilerProperties$Errors::BadFunctionalIntfAnno);
		} else {
			bool var$5 = !s->isInterface();
			if (var$5 || (s->flags() & 0x2000) != 0) {
				$var($JCDiagnostic$DiagnosticPosition, var$6, a->pos());
				$nc(this->log)->error(var$6, $($CompilerProperties$Errors::BadFunctionalIntfAnno1($($CompilerProperties$Fragments::NotAFunctionalIntf(s)))));
			}
		}
	}
}

void Check::validateTypeAnnotation($JCTree$JCAnnotation* a, bool isTypeParameter) {
	$useLocalObjectStack();
	$Assert::checkNonNull($nc(a)->type);
	validateAnnotationTree(a);
	$init($JCTree$Tag);
	bool var$1 = a->hasTag($JCTree$Tag::TYPE_ANNOTATION);
	bool var$0 = var$1 && !$nc($nc(a->annotationType)->type)->isErroneous();
	if (var$0 && !isTypeAnnotation(a, isTypeParameter)) {
		$var($JCDiagnostic$DiagnosticPosition, var$2, a->pos());
		$nc(this->log)->error(var$2, $($CompilerProperties$Errors::AnnotationTypeNotApplicableToType(a->type)));
	}
}

void Check::validateRepeatable($Symbol$TypeSymbol* s, $Attribute$Compound* repeatable, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$Assert::check($nc(this->types)->isSameType($nc(repeatable)->type, $nc(this->syms)->repeatableType));
	$var($Type, t, nullptr);
	$var($List, l, repeatable->values);
	if (!$nc(l)->isEmpty()) {
		$Assert::check($nc(($cast($Symbol$MethodSymbol, $nc(($cast($Pair, l->head)))->fst)))->name == $nc(this->names)->value);
		$assign(t, $cast($Type, $nc($cast($Attribute$Class, $nc(($cast($Pair, l->head)))->snd))->getValue()));
	}
	if (t == nullptr) {
		return;
	}
	validateValue($nc(t)->tsym, s, pos);
	validateRetention(t->tsym, s, pos);
	validateDocumented(t->tsym, s, pos);
	validateInherited(t->tsym, s, pos);
	validateTarget(t->tsym, s, pos);
	validateDefault(t->tsym, pos);
}

void Check::validateValue($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$var($Symbol, sym, $$nc($nc(container)->members())->findFirst($nc(this->names)->value));
	$init($Kinds$Kind);
	if (sym != nullptr && sym->kind == $Kinds$Kind::MTH) {
		$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, sym));
		$var($Type, ret, m->getReturnType());
		$init($TypeTag);
		bool var$0 = $nc(ret)->hasTag($TypeTag::ARRAY);
		if (!(var$0 && $nc(this->types)->isSameType($cast($Type$ArrayType, ret)->elemtype, $nc(contained)->type))) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationValueReturn(container, ret, $(this->types->makeArrayType(contained->type)))));
		}
	} else {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNoValue(container)));
	}
}

void Check::validateRetention($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$Attribute$RetentionPolicy* containerRetention = $nc(this->types)->getRetention(container);
	$Attribute$RetentionPolicy* containedRetention = this->types->getRetention(contained);
	bool error = false;
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->get($nc((containedRetention))->ordinal())) {
	case 1:
		if (containerRetention != $Attribute$RetentionPolicy::RUNTIME) {
			error = true;
		}
		break;
	case 2:
		if (containerRetention == $Attribute$RetentionPolicy::SOURCE) {
			error = true;
		}
	}
	if (error) {
		$var($String, var$0, $nc(containerRetention)->name());
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationRetention(container, var$0, contained, $(containedRetention->name()))));
	}
}

void Check::validateDocumented($Symbol* container, $Symbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	if ($nc(contained)->attribute($nc($nc(this->syms)->documentedType)->tsym) != nullptr) {
		if ($nc(container)->attribute(this->syms->documentedType->tsym) == nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotDocumented(container, contained)));
		}
	}
}

void Check::validateInherited($Symbol* container, $Symbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	if ($nc(contained)->attribute($nc($nc(this->syms)->inheritedType)->tsym) != nullptr) {
		if ($nc(container)->attribute(this->syms->inheritedType->tsym) == nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotInherited(container, contained)));
		}
	}
}

void Check::validateTarget($Symbol$TypeSymbol* container, $Symbol$TypeSymbol* contained, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$var($Set, containerTargets, nullptr);
	$var($Attribute$Array, containerTarget, getAttributeTargetAttribute(container));
	if (containerTarget == nullptr) {
		$assign(containerTargets, getDefaultTargetSet());
	} else {
		$assign(containerTargets, $new($HashSet));
		{
			$var($AttributeArray, arr$, containerTarget->values);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Attribute, app, arr$->get(i$));
				{
					$var($Attribute$Enum, attributeEnum, nullptr);
					bool var$0 = $instanceOf($Attribute$Enum, app);
					if (var$0) {
						$assign(attributeEnum, $cast($Attribute$Enum, app));
						var$0 = true;
					}
					if (!(var$0)) {
						continue;
					}
					containerTargets->add($nc($nc(attributeEnum)->value)->name);
				}
			}
		}
	}
	$var($Set, containedTargets, nullptr);
	$var($Attribute$Array, containedTarget, getAttributeTargetAttribute(contained));
	if (containedTarget == nullptr) {
		$assign(containedTargets, getDefaultTargetSet());
	} else {
		$assign(containedTargets, $new($HashSet));
		{
			$var($AttributeArray, arr$, containedTarget->values);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Attribute, app, arr$->get(i$));
				{
					$var($Attribute$Enum, attributeEnum, nullptr);
					bool var$1 = $instanceOf($Attribute$Enum, app);
					if (var$1) {
						$assign(attributeEnum, $cast($Attribute$Enum, app));
						var$1 = true;
					}
					if (!(var$1)) {
						continue;
					}
					containedTargets->add($nc($nc(attributeEnum)->value)->name);
				}
			}
		}
	}
	if (!isTargetSubsetOf(containerTargets, containedTargets)) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationIncompatibleTarget(container, contained)));
	}
}

$Set* Check::getDefaultTargetSet() {
	if (this->defaultTargets == nullptr) {
		$var($Set, targets, $new($HashSet));
		targets->add($nc(this->names)->ANNOTATION_TYPE);
		targets->add(this->names->CONSTRUCTOR);
		targets->add(this->names->FIELD);
		if (this->allowRecords) {
			targets->add(this->names->RECORD_COMPONENT);
		}
		targets->add(this->names->LOCAL_VARIABLE);
		targets->add(this->names->METHOD);
		targets->add(this->names->PACKAGE);
		targets->add(this->names->PARAMETER);
		targets->add(this->names->TYPE);
		$set(this, defaultTargets, $Collections::unmodifiableSet(targets));
	}
	return this->defaultTargets;
}

bool Check::isTargetSubsetOf($Set* s, $Set* t) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(s)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Name, n2, $cast($Name, i$->next()));
		{
			bool currentElementOk = false;
			{
				$var($Iterator, i$, $nc(t)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Name, n1, $cast($Name, i$->next()));
					if (n1 == n2) {
						currentElementOk = true;
						break;
					} else if (n1 == $nc(this->names)->TYPE && n2 == this->names->ANNOTATION_TYPE) {
						currentElementOk = true;
						break;
					} else if (n1 == this->names->TYPE_USE && (n2 == this->names->TYPE || n2 == this->names->ANNOTATION_TYPE || n2 == this->names->TYPE_PARAMETER)) {
						currentElementOk = true;
						break;
					}
				}
			}
			if (!currentElementOk) {
				return false;
			}
		}
	}
	return true;
}

void Check::validateDefault($Symbol* container, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$var($Scope, scope, $nc(container)->members());
	{
		$var($Iterator, i$, $$nc($nc(scope)->getSymbols())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, elm, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(elm)->name != $nc(this->names)->value && elm->kind == $Kinds$Kind::MTH && $cast($Symbol$MethodSymbol, elm)->defaultValue == nullptr) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationElemNondefault(container, elm)));
			}
		}
	}
}

bool Check::isOverrider($Symbol* s) {
	$useLocalObjectStack();
	$init($Kinds$Kind);
	if ($nc(s)->kind != $Kinds$Kind::MTH || s->isStatic()) {
		return false;
	}
	$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, s));
	$var($Symbol$TypeSymbol, owner, $cast($Symbol$TypeSymbol, m->owner));
	{
		$var($Iterator, i$, $$nc($nc(this->types)->closure($nc(owner)->type))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, sup, $cast($Type, i$->next()));
			{
				if (sup == owner->type) {
					continue;
				}
				$var($Scope, scope, $nc($nc(sup)->tsym)->members());
				{
					$var($Iterator, i$, $$nc($nc(scope)->getSymbolsByName(m->name))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						{
							bool var$0 = !$nc(sym)->isStatic();
							if (var$0 && m->overrides(sym, owner, this->types, true)) {
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool Check::isTypeAnnotation($JCTree$JCAnnotation* a, bool isTypeParameter) {
	$useLocalObjectStack();
	$var($List, targets, $nc(this->typeAnnotations)->annotationTargets($nc($nc($nc(a)->annotationType)->type)->tsym));
	return (targets == nullptr) ? false : $$nc(targets->stream())->anyMatch($$new(Check$$Lambda$lambda$isTypeAnnotation$9$9, this, isTypeParameter));
}

bool Check::isTypeAnnotation($Attribute* a, bool isTypeParameter) {
	$var($Attribute$Enum, e, $cast($Attribute$Enum, a));
	return ($nc($nc(e)->value)->name == $nc(this->names)->TYPE_USE || (isTypeParameter && e->value->name == this->names->TYPE_PARAMETER));
}

$NameArray* Check::getTargetNames($JCTree$JCAnnotation* a) {
	return getTargetNames($nc($nc($nc(a)->annotationType)->type)->tsym);
}

$NameArray* Check::getTargetNames($Symbol$TypeSymbol* annoSym) {
	$useLocalObjectStack();
	$var($Attribute$Array, arr, getAttributeTargetAttribute(annoSym));
	$var($NameArray, targets, nullptr);
	if (arr == nullptr) {
		$assign(targets, defaultTargetMetaInfo());
	} else {
		$assign(targets, $new($NameArray, $nc(arr->values)->length));
		for (int32_t i = 0; i < arr->values->length; ++i) {
			$var($Attribute, app, arr->values->get(i));
			$var($Attribute$Enum, attributeEnum, nullptr);
			bool var$0 = $instanceOf($Attribute$Enum, app);
			if (var$0) {
				$assign(attributeEnum, $cast($Attribute$Enum, app));
				var$0 = true;
			}
			if (!(var$0)) {
				return $new($NameArray, 0);
			}
			targets->set(i, $nc($nc(attributeEnum)->value)->name);
		}
	}
	return targets;
}

bool Check::annotationApplicable($JCTree$JCAnnotation* a, $Symbol* s) {
	$useLocalObjectStack();
	$var($Optional, targets, getApplicableTargets(a, s));
	bool var$0 = $nc(targets)->isEmpty();
	if (!var$0) {
		bool var$1 = targets->isPresent();
		var$0 = var$1 && !$$sure($Set, targets->get())->isEmpty();
	}
	return var$0;
}

$Optional* Check::getApplicableTargets($JCTree$JCAnnotation* a, $Symbol* s) {
	$useLocalObjectStack();
	$var($Attribute$Array, arr, getAttributeTargetAttribute($nc($nc($nc(a)->annotationType)->type)->tsym));
	$var($NameArray, targets, nullptr);
	$var($Set, applicableTargets, $new($HashSet));
	if (arr == nullptr) {
		$assign(targets, defaultTargetMetaInfo());
	} else {
		$assign(targets, $new($NameArray, $nc(arr->values)->length));
		for (int32_t i = 0; i < arr->values->length; ++i) {
			$var($Attribute, app, arr->values->get(i));
			$var($Attribute$Enum, attributeEnum, nullptr);
			bool var$0 = $instanceOf($Attribute$Enum, app);
			if (var$0) {
				$assign(attributeEnum, $cast($Attribute$Enum, app));
				var$0 = true;
			}
			if (!(var$0)) {
				return $Optional::empty();
			}
			targets->set(i, $nc($nc(attributeEnum)->value)->name);
		}
	}
	{
		$var($NameArray, arr$, targets);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Name, target, arr$->get(i$));
			if (target == $nc(this->names)->TYPE) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::TYP) {
					applicableTargets->add(this->names->TYPE);
				}
			} else if (target == this->names->FIELD) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind != $Kinds$Kind::MTH) {
					applicableTargets->add(this->names->FIELD);
				}
			} else if (target == this->names->RECORD_COMPONENT) {
				$init($ElementKind);
				if ($nc(s)->getKind() == $ElementKind::RECORD_COMPONENT) {
					applicableTargets->add(this->names->RECORD_COMPONENT);
				}
			} else if (target == this->names->METHOD) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::MTH && !s->isConstructor()) {
					applicableTargets->add(this->names->METHOD);
				}
			} else if (target == this->names->PARAMETER) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::VAR && ($nc(s->owner)->kind == $Kinds$Kind::MTH && (s->flags() & (int64_t)0x0000000200000000) != 0)) {
					applicableTargets->add(this->names->PARAMETER);
				}
			} else if (target == this->names->CONSTRUCTOR) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::MTH && s->isConstructor()) {
					applicableTargets->add(this->names->CONSTRUCTOR);
				}
			} else if (target == this->names->LOCAL_VARIABLE) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && (s->flags() & (int64_t)0x0000000200000000) == 0) {
					applicableTargets->add(this->names->LOCAL_VARIABLE);
				}
			} else if (target == this->names->ANNOTATION_TYPE) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::TYP && (s->flags() & 0x2000) != 0) {
					applicableTargets->add(this->names->ANNOTATION_TYPE);
				}
			} else if (target == this->names->PACKAGE) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::PCK) {
					applicableTargets->add(this->names->PACKAGE);
				}
			} else if (target == this->names->TYPE_USE) {
				$init($Kinds$Kind);
				$init($TypeTag);
				if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && $nc(s->type)->hasTag($TypeTag::NONE)) {
					continue;
				} else {
					bool var$2 = s->kind == $Kinds$Kind::TYP || s->kind == $Kinds$Kind::VAR;
					if (!var$2) {
						bool var$3 = s->kind == $Kinds$Kind::MTH && !s->isConstructor();
						var$2 = var$3 && !$$nc($nc(s->type)->getReturnType())->hasTag($TypeTag::VOID);
					}
					bool var$1 = var$2;
					if (var$1 || (s->kind == $Kinds$Kind::MTH && s->isConstructor())) {
						applicableTargets->add(this->names->TYPE_USE);
					}
				}
			} else if (target == this->names->TYPE_PARAMETER) {
				$init($Kinds$Kind);
				$init($TypeTag);
				if ($nc(s)->kind == $Kinds$Kind::TYP && $nc(s->type)->hasTag($TypeTag::TYPEVAR)) {
					applicableTargets->add(this->names->TYPE_PARAMETER);
				}
			} else if (target == this->names->MODULE) {
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::MDL) {
					applicableTargets->add(this->names->MODULE);
				}
			} else {
				return $Optional::empty();
			}
		}
	}
	return $Optional::of(applicableTargets);
}

$Attribute$Array* Check::getAttributeTargetAttribute($Symbol$TypeSymbol* s) {
	$useLocalObjectStack();
	$var($Attribute$Compound, atTarget, $$nc($nc(s)->getAnnotationTypeMetadata())->getTarget());
	if (atTarget == nullptr) {
		return nullptr;
	}
	$var($Attribute, atValue, $nc(atTarget)->member($nc(this->names)->value));
	$var($Attribute$Array, attributeArray, nullptr);
	bool var$0 = $instanceOf($Attribute$Array, atValue);
	if (var$0) {
		$assign(attributeArray, $cast($Attribute$Array, atValue));
		var$0 = true;
	}
	return (var$0) ? attributeArray : ($Attribute$Array*)nullptr;
}

$NameArray* Check::defaultTargetMetaInfo() {
	return this->dfltTargetMeta;
}

bool Check::validateAnnotationDeferErrors($JCTree$JCAnnotation* a) {
	$useLocalObjectStack();
	bool res = false;
	$var($Log$DiagnosticHandler, diagHandler, $new($Log$DiscardDiagnosticHandler, this->log));
	$var($Throwable, var$0, nullptr);
	try {
		res = validateAnnotation(a);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(this->log)->popDiagnosticHandler(diagHandler);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return res;
}

bool Check::validateAnnotation($JCTree$JCAnnotation* a) {
	$useLocalObjectStack();
	bool isValid = true;
	$var($Annotate$AnnotationTypeMetadata, metadata, $nc($nc($nc($nc(a)->annotationType)->type)->tsym)->getAnnotationTypeMetadata());
	$var($Set, elements, $nc(metadata)->getAnnotationElements());
	{
		$var($Iterator, i$, $nc(a->args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, arg, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(arg)->hasTag($JCTree$Tag::ASSIGN)) {
					continue;
				}
				$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, arg));
				$var($Symbol, m, $TreeInfo::symbol(assign->lhs));
				if (m == nullptr || $nc(m->type)->isErroneous()) {
					continue;
				}
				if (!$nc(elements)->remove(m)) {
					isValid = false;
					$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(assign->lhs)->pos());
					$nc(this->log)->error(var$0, $($CompilerProperties$Errors::DuplicateAnnotationMemberValue($nc(m)->name, a->type)));
				}
			}
		}
	}
	$var($List, missingDefaults, $List::nil());
	$var($Set, membersWithDefault, metadata->getAnnotationElementsWithDefault());
	{
		$var($Iterator, i$, $nc(elements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, i$->next()));
			{
				if ($nc($nc(m)->type)->isErroneous()) {
					continue;
				}
				if (!$nc(membersWithDefault)->contains(m)) {
					$assign(missingDefaults, $nc(missingDefaults)->append(m->name));
				}
			}
		}
	}
	$assign(missingDefaults, $nc(missingDefaults)->reverse());
	if ($nc(missingDefaults)->nonEmpty()) {
		isValid = false;
		$var($JCDiagnostic$Error, errorKey, (missingDefaults->size() > 1) ? $CompilerProperties$Errors::AnnotationMissingDefaultValue1(a->type, missingDefaults) : $CompilerProperties$Errors::AnnotationMissingDefaultValue(a->type, missingDefaults));
		$nc(this->log)->error($(a->pos()), errorKey);
	}
	return isValid && validateTargetAnnotationValue(a);
}

bool Check::validateTargetAnnotationValue($JCTree$JCAnnotation* a) {
	$useLocalObjectStack();
	if ($nc($nc($nc(a)->annotationType)->type)->tsym != $nc($nc(this->syms)->annotationTargetType)->tsym || $nc(a->args)->tail == nullptr) {
		return true;
	}
	bool isValid = true;
	$init($JCTree$Tag);
	if (!$nc($cast($JCTree$JCExpression, $nc(a->args)->head))->hasTag($JCTree$Tag::ASSIGN)) {
		return false;
	}
	$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, $nc(a->args)->head));
	$var($Symbol, m, $TreeInfo::symbol($nc(assign)->lhs));
	if ($nc(m)->name != $nc(this->names)->value) {
		return false;
	}
	$var($JCTree, rhs, assign->rhs);
	if (!$nc(rhs)->hasTag($JCTree$Tag::NEWARRAY)) {
		return false;
	}
	$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, rhs));
	$var($Set, targets, $new($HashSet));
	{
		$var($Iterator, i$, $nc(na->elems)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, elem, $cast($JCTree, i$->next()));
			if (!targets->add($($TreeInfo::symbol(elem)))) {
				isValid = false;
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($($nc(elem)->pos()), $CompilerProperties$Errors::RepeatedAnnotationTarget);
			}
		}
	}
	return isValid;
}

void Check::checkDeprecatedAnnotation($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::DEP_ANN);
	bool var$2 = var$3 && $nc(s)->isDeprecatableViaAnnotation();
	bool var$1 = var$2 && (s->flags() & 0x00020000) != 0;
	bool var$0 = var$1 && !$nc($nc(this->syms)->deprecatedType)->isErroneous();
	if (var$0 && s->attribute(this->syms->deprecatedType->tsym) == nullptr) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::DEP_ANN, pos, $CompilerProperties$Warnings::MissingDeprecatedAnnotation);
	}
	bool var$4 = $nc(this->lint)->isEnabled($Lint$LintCategory::DEPRECATION);
	if (var$4 && !$nc(s)->isDeprecatableViaAnnotation()) {
		bool var$5 = !$nc($nc(this->syms)->deprecatedType)->isErroneous();
		if (var$5 && s->attribute(this->syms->deprecatedType->tsym) != nullptr) {
			$nc(this->log)->warning($Lint$LintCategory::DEPRECATION, pos, $($CompilerProperties$Warnings::DeprecatedAnnotationHasNoEffect($($Kinds::kindName(s)))));
		}
	}
}

void Check::checkDeprecated($JCDiagnostic$DiagnosticPosition* pos, $Symbol* other, $Symbol* s) {
	checkDeprecated($$new(Check$$Lambda$lambda$checkDeprecated$10$10, pos), other, s);
}

void Check::checkDeprecated($Supplier* pos, $Symbol* other, $Symbol* s) {
	bool var$1 = $nc(s)->isDeprecatedForRemoval();
	if (!var$1) {
		bool var$2 = s->isDeprecated();
		var$1 = var$2 && !$nc(other)->isDeprecated();
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$3 = s->outermostClass() != $nc(other)->outermostClass();
		var$0 = var$3 || s->outermostClass() == nullptr;
	}
	$init($Kinds$Kind);
	if (var$0 && s->kind != $Kinds$Kind::PCK) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkDeprecated$11$11, this, pos, s));
	}
}

void Check::checkSunAPI($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	if (($nc(s)->flags() & (int64_t)0x0000004000000000) != 0) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkSunAPI$12$12, this, pos, s));
	}
}

void Check::checkProfile($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$init($Profile);
	if (this->profile != $Profile::DEFAULT && ($nc(s)->flags() & (int64_t)0x0000200000000000) != 0) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NotInProfile(s, this->profile)));
	}
}

void Check::checkPreview($JCDiagnostic$DiagnosticPosition* pos, $Symbol* other, $Symbol* s) {
	$useLocalObjectStack();
	bool var$0 = ($nc(s)->flags() & (int64_t)0x0100000000000000) != 0;
	if (var$0) {
		var$0 = $nc($(s->packge()))->modle != $nc($($nc(other)->packge()))->modle;
	}
	if (var$0) {
		if ((s->flags() & (int64_t)0x0400000000000000) == 0) {
			if (!$nc(this->preview)->isEnabled()) {
				$nc(this->log)->error(pos, $($CompilerProperties$Errors::IsPreview(s)));
			} else {
				this->preview->markUsesPreview(pos);
				$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkPreview$13$13, this, pos, s));
			}
		} else {
			$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkPreview$14$14, this, pos, s));
		}
	}
	if ($nc(this->preview)->declaredUsingPreviewFeature(s)) {
		if (this->preview->isEnabled()) {
			this->preview->markUsesPreview(pos);
			$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkPreview$15$15, this, pos, s));
		}
	}
}

void Check::checkNonCyclicElements($JCTree$JCClassDecl* tree) {
	$useLocalObjectStack();
	if (($nc($nc(tree)->sym)->flags_field & 0x2000) == 0) {
		return;
	}
	$Assert::check((tree->sym->flags_field & 0x08000000) == 0);
	$var($Throwable, var$0, nullptr);
	try {
		$nc(tree->sym)->flags_field |= 0x08000000;
		{
			$var($Iterator, i$, $nc(tree->defs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, def, $cast($JCTree, i$->next()));
				{
					$init($JCTree$Tag);
					if (!$nc(def)->hasTag($JCTree$Tag::METHODDEF)) {
						continue;
					}
					$var($JCTree$JCMethodDecl, meth, $cast($JCTree$JCMethodDecl, def));
					checkAnnotationResType($(meth->pos()), $nc(meth->restype)->type);
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(tree->sym)->flags_field &= (uint64_t)~0x08000000;
		tree->sym->flags_field |= (int64_t)0x0000000800000000;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Check::checkNonCyclicElementsInternal($JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* tsym) {
	$useLocalObjectStack();
	if (($nc(tsym)->flags_field & (int64_t)0x0000000800000000) != 0) {
		return;
	}
	if ((tsym->flags_field & 0x08000000) != 0) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::CyclicAnnotationElement(tsym)));
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		tsym->flags_field |= 0x08000000;
		{
			$init($Scope$LookupKind);
			$var($Iterator, i$, $$nc($$nc(tsym->members())->getSymbols($Scope$LookupKind::NON_RECURSIVE))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(s)->kind != $Kinds$Kind::MTH) {
						continue;
					}
					checkAnnotationResType(pos, $($nc($cast($Symbol$MethodSymbol, s)->type)->getReturnType()));
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		tsym->flags_field &= (uint64_t)~0x08000000;
		tsym->flags_field |= (int64_t)0x0000000800000000;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Check::checkAnnotationResType($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	$useLocalObjectStack();
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get(($$nc($nc(type)->getTag()))->ordinal())) {
	case 1:
		if (($nc(type->tsym)->flags() & 0x2000) != 0) {
			checkNonCyclicElementsInternal(pos, type->tsym);
		}
		break;
	case 2:
		checkAnnotationResType(pos, $($nc(this->types)->elemtype(type)));
		break;
	default:
		break;
	}
}

void Check::checkCyclicConstructors($JCTree$JCClassDecl* tree) {
	$useLocalObjectStack();
	$var($Map, callMap, $new($HashMap));
	{
		$var($List, l, $nc(tree)->defs);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($JCTree$JCMethodInvocation, app, $TreeInfo::firstConstructorCall($cast($JCTree, l->head)));
			if (app == nullptr) {
				continue;
			}
			$var($JCTree$JCMethodDecl, meth, $cast($JCTree$JCMethodDecl, l->head));
			if ($TreeInfo::name($nc(app)->meth) == $nc(this->names)->_this) {
				callMap->put($nc(meth)->sym, $($TreeInfo::symbol(app->meth)));
			} else {
				$nc($nc(meth)->sym)->flags_field |= 0x40000000;
			}
		}
	}
	$var($SymbolArray, ctors, $new($SymbolArray, 0));
	$assign(ctors, $cast($SymbolArray, $$nc(callMap->keySet())->toArray(ctors)));
	{
		$var($SymbolArray, arr$, ctors);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Symbol, caller, arr$->get(i$));
			{
				checkCyclicConstructor(tree, caller, callMap);
			}
		}
	}
}

void Check::checkCyclicConstructor($JCTree$JCClassDecl* tree, $Symbol* ctor, $Map* callMap) {
	$useLocalObjectStack();
	if (ctor != nullptr && (ctor->flags_field & 0x40000000) == 0) {
		if ((ctor->flags_field & 0x08000000) != 0) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($TreeInfo::diagnosticPositionFor(ctor, tree)), $CompilerProperties$Errors::RecursiveCtorInvocation);
		} else {
			ctor->flags_field |= 0x08000000;
			checkCyclicConstructor(tree, $$cast($Symbol, $nc(callMap)->remove(ctor)), callMap);
			ctor->flags_field &= (uint64_t)~0x08000000;
		}
		ctor->flags_field |= 0x40000000;
	}
}

void Check::checkDivZero($JCDiagnostic$DiagnosticPosition* pos, $Symbol* operator$, $Type* operand) {
	$useLocalObjectStack();
	bool var$1 = $nc(operand)->constValue() != nullptr;
	$init($TypeTag);
	bool var$0 = var$1 && $$nc(operand->getTag())->isSubRangeOf($TypeTag::LONG);
	if (var$0 && $$cast($Number, operand->constValue())->longValue() == 0) {
		int32_t opc = $nc($cast($Symbol$OperatorSymbol, operator$))->opcode;
		if (opc == $ByteCodes::idiv || opc == $ByteCodes::imod || opc == $ByteCodes::ldiv || opc == $ByteCodes::lmod) {
			$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkDivZero$16$16, this, pos));
		}
	}
}

void Check::checkEmptyIf($JCTree$JCIf* tree) {
	$init($JCTree$Tag);
	bool var$0 = $nc($nc(tree)->thenpart)->hasTag($JCTree$Tag::SKIP) && tree->elsepart == nullptr;
	$init($Lint$LintCategory);
	if (var$0 && $nc(this->lint)->isEnabled($Lint$LintCategory::EMPTY)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::EMPTY, $($nc(tree->thenpart)->pos()), $CompilerProperties$Warnings::EmptyIf);
	}
}

bool Check::checkUnique($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Scope* s) {
	$useLocalObjectStack();
	if ($nc($nc(sym)->type)->isErroneous()) {
		return true;
	}
	if ($nc(sym->owner)->name == $nc(this->names)->any) {
		return false;
	}
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $$nc($nc(s)->getSymbolsByName(sym->name, $Scope$LookupKind::NON_RECURSIVE))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, byName, $cast($Symbol, i$->next()));
			{
				bool var$0 = sym != byName && ($nc(byName)->flags() & (int64_t)0x0000040000000000) == 0 && sym->kind == byName->kind && sym->name != this->names->error;
				if (var$0) {
					$init($Kinds$Kind);
					bool var$1 = sym->kind != $Kinds$Kind::MTH || $nc(this->types)->hasSameArgs(sym->type, byName->type);
					if (!var$1) {
						$var($Type, var$2, $nc(this->types)->erasure(sym->type));
						var$1 = $nc(this->types)->hasSameArgs(var$2, $(this->types->erasure(byName->type)));
					}
					var$0 = var$1;
				}
				if (var$0) {
					int64_t var$3 = sym->flags() & (int64_t)0x0000000400000000;
					if (var$3 != ($nc(byName)->flags() & (int64_t)0x0000000400000000)) {
						sym->flags_field |= (int64_t)0x0000040000000000;
						varargsDuplicateError(pos, sym, byName);
						return true;
					} else {
						$init($Kinds$Kind);
						if (sym->kind == $Kinds$Kind::MTH && !$nc(this->types)->hasSameArgs(sym->type, byName->type, false)) {
							duplicateErasureError(pos, sym, byName);
							sym->flags_field |= (int64_t)0x0000040000000000;
							return true;
						} else {
							bool var$5 = (sym->flags() & (int64_t)0x0800000000000000) != 0;
							bool var$4 = var$5 && (byName->flags() & (int64_t)0x0800000000000000) != 0;
							if (var$4 && (byName->flags() & (int64_t)0x1000000000000000) == 0) {
								if (!$nc(sym->type)->isErroneous()) {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
									sym->flags_field |= (int64_t)0x0000040000000000;
								}
								return false;
							} else {
								duplicateError(pos, byName);
								return false;
							}
						}
					}
				}
			}
		}
	}
	return true;
}

void Check::duplicateErasureError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym1, $Symbol* sym2) {
	bool var$0 = !$nc($nc(sym1)->type)->isErroneous();
	if (var$0 && !$nc($nc(sym2)->type)->isErroneous()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::NameClashSameErasure(sym1, sym2)));
	}
}

void Check::checkImportsUnique($JCTree$JCCompilationUnit* toplevel) {
	$useLocalObjectStack();
	$var($Scope$WriteableScope, ordinallyImportedSoFar, $Scope$WriteableScope::create($nc(toplevel)->packge));
	$var($Scope$WriteableScope, staticallyImportedSoFar, $Scope$WriteableScope::create(toplevel->packge));
	$var($Scope$WriteableScope, topLevelScope, toplevel->toplevelScope);
	{
		$var($Iterator, i$, $nc(toplevel->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, def, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if (!$nc(def)->hasTag($JCTree$Tag::IMPORT)) {
					continue;
				}
				$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, def));
				if (imp->importScope == nullptr) {
					continue;
				}
				{
					$var($Iterator, i$, $$nc($nc(imp->importScope)->getSymbols($$new(Check$$Lambda$lambda$checkImportsUnique$17$17)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, sym, $cast($Symbol, i$->next()));
						if (imp->isStatic()) {
							checkUniqueImport($(imp->pos()), ordinallyImportedSoFar, staticallyImportedSoFar, topLevelScope, sym, true);
							$nc(staticallyImportedSoFar)->enter(sym);
						} else {
							checkUniqueImport($(imp->pos()), ordinallyImportedSoFar, staticallyImportedSoFar, topLevelScope, sym, false);
							$nc(ordinallyImportedSoFar)->enter(sym);
						}
					}
				}
				$set(imp, importScope, nullptr);
			}
		}
	}
}

bool Check::checkUniqueImport($JCDiagnostic$DiagnosticPosition* pos, $Scope* ordinallyImportedSoFar, $Scope* staticallyImportedSoFar, $Scope* topLevelScope, $Symbol* sym, bool staticImport) {
	$useLocalObjectStack();
	$var($Predicate, duplicates, $new(Check$$Lambda$lambda$checkUniqueImport$18$18, sym));
	$var($Symbol, ordinaryClashing, $nc(ordinallyImportedSoFar)->findFirst($nc(sym)->name, duplicates));
	$var($Symbol, staticClashing, nullptr);
	if (ordinaryClashing == nullptr && !staticImport) {
		$assign(staticClashing, $nc(staticallyImportedSoFar)->findFirst(sym->name, duplicates));
	}
	if (ordinaryClashing != nullptr || staticClashing != nullptr) {
		if (ordinaryClashing != nullptr) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedSingleImport(ordinaryClashing)));
		} else {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedStaticSingleImport(staticClashing)));
		}
		return false;
	}
	$var($Symbol, clashing, $nc(topLevelScope)->findFirst(sym->name, duplicates));
	if (clashing != nullptr) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::AlreadyDefinedThisUnit(clashing)));
		return false;
	}
	return true;
}

void Check::checkCanonical($JCTree* tree) {
	$useLocalObjectStack();
	if (!isCanonical(tree)) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::ImportRequiresCanonical($($TreeInfo::symbol(tree)))));
	}
}

bool Check::isCanonical($JCTree* tree$renamed) {
	$useLocalObjectStack();
	$var($JCTree, tree, tree$renamed);
	$init($JCTree$Tag);
	while ($nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		$var($JCTree$JCFieldAccess, s, $cast($JCTree$JCFieldAccess, tree));
		if ($nc($nc(s->sym)->owner)->getQualifiedName() != $$nc($TreeInfo::symbol(s->selected))->getQualifiedName()) {
			return false;
		}
		$assign(tree, s->selected);
	}
	return true;
}

void Check::checkForBadAuxiliaryClassAccess($JCDiagnostic$DiagnosticPosition* pos, $Env* env, $Symbol$ClassSymbol* c) {
	$init($Lint$LintCategory);
	bool var$2 = $nc(this->lint)->isEnabled($Lint$LintCategory::AUXILIARYCLASS);
	bool var$1 = var$2 && ($nc(c)->flags() & (int64_t)0x0000100000000000) != 0;
	bool var$0 = var$1 && $nc(this->rs)->isAccessible(env, c);
	if (var$0 && !$nc(this->fileManager)->isSameFile(c->sourcefile, $nc($nc(env)->toplevel)->sourcefile)) {
		$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile(c, c->sourcefile)));
	}
}

void Check::checkDefaultConstructor($Symbol$ClassSymbol* c, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	bool var$3 = $nc(this->lint)->isEnabled($Lint$LintCategory::MISSING_EXPLICIT_CTOR);
	bool var$2 = var$3 && (($nc(c)->flags() & (0x4000 | (int64_t)0x2000000000000000)) == 0);
	bool var$1 = var$2 && !c->isAnonymous();
	bool var$0 = var$1 && ((c->flags() & (1 | 4)) != 0);
	$init($Source$Feature);
	if (var$0 && $Source$Feature::MODULES->allowedInSource(this->source)) {
		$NestingKind* nestingKind = c->getNestingKind();
		$init($Check$5);
		switch ($nc($Check$5::$SwitchMap$javax$lang$model$element$NestingKind)->get($nc((nestingKind))->ordinal())) {
		case 1:
		case 2:
			{
				return;
			}
		case 3:
			{
				;
			}
			break;
		case 4:
			{
				$var($Symbol, owner, c->owner);
				$init($Kinds$Kind);
				while (owner != nullptr && owner->kind == $Kinds$Kind::TYP) {
					if ((owner->flags() & (1 | 4)) == 0) {
						return;
					}
					$assign(owner, owner->owner);
				}
			}
			break;
		}
		$var($Symbol$PackageSymbol, pkg, c->packge());
		if (!$nc(pkg)->isUnnamed()) {
			$var($Symbol$ModuleSymbol, modle, pkg->modle);
			{
				$var($Iterator, i$, $nc($nc(modle)->exports)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Directive$ExportsDirective, exportDir, $cast($Directive$ExportsDirective, i$->next()));
					if ($nc($nc(exportDir)->packge)->equals(pkg)) {
						if (exportDir->modules == nullptr || exportDir->modules->isEmpty()) {
							$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkDefaultConstructor$19$19, this, pos, c, pkg, modle));
						} else {
							return;
						}
					}
				}
			}
		}
	}
	return;
}

$Warner* Check::castWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* expected) {
	return $new($Check$ConversionWarner, this, pos, "unchecked.cast.to.type"_s, found, expected);
}

$Warner* Check::convertWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* expected) {
	return $new($Check$ConversionWarner, this, pos, "unchecked.assign"_s, found, expected);
}

void Check::checkFunctionalInterface($JCTree$JCClassDecl* tree, $Symbol$ClassSymbol* cs) {
	$useLocalObjectStack();
	$var($Attribute$Compound, functionalType, $nc(cs)->attribute($nc($nc(this->syms)->functionalInterfaceType)->tsym));
	if (functionalType != nullptr) {
		try {
			$nc(this->types)->findDescriptorSymbol($cast($Symbol$TypeSymbol, cs));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
			{
				$var($Iterator, i$, $nc($nc($$cast($JCTree$JCModifiers, tree->getModifiers()))->annotations)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, i$->next()));
					if ($nc($nc($nc(a)->annotationType)->type)->tsym == this->syms->functionalInterfaceType->tsym) {
						$assign(pos, a->pos());
						break;
					}
				}
			}
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::BadFunctionalIntfAnno1($(ex->getDiagnostic()))));
		}
	}
}

void Check::checkImportsResolvable($JCTree$JCCompilationUnit* toplevel) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$sure($List, $nc(toplevel)->getImports())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, i$->next()));
		{
			$init($JCTree$Tag);
			if (!$nc(imp)->staticImport || !$nc(imp->qualid)->hasTag($JCTree$Tag::SELECT)) {
				continue;
			}
			$var($JCTree$JCFieldAccess, select, $cast($JCTree$JCFieldAccess, imp->qualid));
			$var($Symbol, origin, nullptr);
			bool var$0 = $nc(select)->name == $nc(this->names)->asterisk || ($assign(origin, $TreeInfo::symbol(select->selected))) == nullptr;
			$init($Kinds$Kind);
			if (var$0 || $nc(origin)->kind != $Kinds$Kind::TYP) {
				continue;
			}
			$var($Symbol$TypeSymbol, site, $cast($Symbol$TypeSymbol, $TreeInfo::symbol(select->selected)));
			if (!checkTypeContainsImportableElement(site, site, toplevel->packge, select->name, $$new($HashSet))) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, imp->pos());
				$init($Kinds$KindName);
				$nc(this->log)->error(var$1, $($CompilerProperties$Errors::CantResolveLocation($Kinds$KindName::STATIC, select->name, nullptr, nullptr, $($CompilerProperties$Fragments::Location($($Kinds::kindName(site)), site, nullptr)))));
			}
		}
	}
}

void Check::checkImportedPackagesObservable($JCTree$JCCompilationUnit* toplevel) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$sure($List, $nc(toplevel)->getImports())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, i$->next()));
		if (!$nc(imp)->staticImport && $TreeInfo::name(imp->qualid) == $nc(this->names)->asterisk) {
			$var($Symbol$TypeSymbol, tsym, $nc($nc($nc($cast($JCTree$JCFieldAccess, imp->qualid))->selected)->type)->tsym);
			$init($Kinds$Kind);
			bool var$0 = $nc(tsym)->kind == $Kinds$Kind::PCK && $$nc(tsym->members())->isEmpty();
			if (var$0) {
				$init($Source$Feature);
				bool var$1 = $Source$Feature::IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES->allowedInSource(this->source);
				var$0 = !(var$1 && tsym->exists());
			}
			if (var$0) {
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR, imp->pos$, $($CompilerProperties$Errors::DoesntExist(tsym)));
			}
		}
	}
}

bool Check::checkTypeContainsImportableElement($Symbol$TypeSymbol* tsym, $Symbol$TypeSymbol* origin, $Symbol$PackageSymbol* packge, $Name* name, $Set* processed) {
	$useLocalObjectStack();
	if (tsym == nullptr || !$nc(processed)->add(tsym)) {
		return false;
	}
	if (checkTypeContainsImportableElement($nc($($nc(this->types)->supertype($nc(tsym)->type)))->tsym, origin, packge, name, processed)) {
		return true;
	}
	{
		$var($Iterator, i$, $$nc(this->types->interfaces(tsym->type))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			if (checkTypeContainsImportableElement($nc(t)->tsym, origin, packge, name, processed)) {
				return true;
			}
		}
	}
	{
		$var($Iterator, i$, $$nc($$nc(tsym->members())->getSymbolsByName(name))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				bool var$1 = $nc(sym)->isStatic();
				bool var$0 = var$1 && importAccessible(sym, packge);
				if (var$0 && sym->isMemberOf(origin, this->types)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool Check::importAccessible($Symbol* sym, $Symbol$PackageSymbol* packge) {
	try {
		int32_t flags = (int32_t)($nc(sym)->flags() & 7);
		switch (flags) {
		default:
		case 1:
			return true;
		case 2:
			return false;
		case 0:
		case 4:
			return sym->packge() == packge;
		}
	} catch ($ClassFinder$BadClassFile& err) {
		$throw(err);
	} catch ($Symbol$CompletionFailure& ex) {
		return false;
	}
	$shouldNotReachHere();
}

void Check::checkLeaksNotAccessible($Env* env, $JCTree$JCClassDecl* check) {
	$useLocalObjectStack();
	$var($JCTree$JCCompilationUnit, toplevel, $nc(env)->toplevel);
	if ($nc(toplevel)->modle == $nc(this->syms)->unnamedModule || toplevel->modle == this->syms->noModule || ($nc($nc(check)->sym)->flags() & 0x01000000) != 0) {
		return;
	}
	$var($Directive$ExportsDirective, currentExport, findExport(toplevel->packge));
	if (currentExport == nullptr || currentExport->modules != nullptr) {
		return;
	}
	$$new($Check$4, this, env, check, toplevel)->scan(check);
}

$Directive$ExportsDirective* Check::findExport($Symbol$PackageSymbol* pack) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc($nc($nc(pack)->modle)->exports)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
		if ($nc(d)->packge == pack) {
			return d;
		}
	}
	return nullptr;
}

bool Check::isAPISymbol($Symbol* sym$renamed) {
	$var($Symbol, sym, sym$renamed);
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		bool var$0 = (sym->flags() & $Flags::PUBLIC) == 0;
		if (var$0 && (sym->flags() & $Flags::PROTECTED) == 0) {
			return false;
		}
		$assign(sym, sym->owner);
	}
	return true;
}

void Check::checkVisible($JCDiagnostic$DiagnosticPosition* pos, $Symbol* what, $Symbol$PackageSymbol* inPackage, bool inSuperType) {
	$useLocalObjectStack();
	if (!isAPISymbol(what) && !inSuperType) {
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$0, $Kinds::kindName(what));
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessible(var$0, what, $nc($($nc(what)->packge()))->modle)));
		return;
	}
	$var($Symbol$PackageSymbol, whatPackage, $nc(what)->packge());
	$var($Directive$ExportsDirective, whatExport, findExport(whatPackage));
	$var($Directive$ExportsDirective, inExport, findExport(inPackage));
	if (whatExport == nullptr) {
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$1, $Kinds::kindName(what));
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleUnexported(var$1, what, $nc($(what->packge()))->modle)));
		return;
	}
	if ($nc(whatExport)->modules != nullptr) {
		if ($nc(inExport)->modules == nullptr || !whatExport->modules->containsAll($cast($AbstractCollection, inExport->modules))) {
			$init($Lint$LintCategory);
			$var($Kinds$KindName, var$2, $Kinds::kindName(what));
			$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleUnexportedQualified(var$2, what, $nc($(what->packge()))->modle)));
		}
	}
	if ($nc(whatPackage)->modle != $nc(inPackage)->modle && whatPackage->modle != $nc(this->syms)->java_base) {
		$var($List, todo, $List::of(inPackage->modle));
		while ($nc(todo)->nonEmpty()) {
			$var($Symbol$ModuleSymbol, current, $cast($Symbol$ModuleSymbol, todo->head));
			$assign(todo, todo->tail);
			if (current == whatPackage->modle) {
				return;
			}
			if (($nc(current)->flags() & $Flags::AUTOMATIC_MODULE) != 0) {
				continue;
			}
			{
				$var($Iterator, i$, $nc(current->requires)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Directive$RequiresDirective, req, $cast($Directive$RequiresDirective, i$->next()));
					if ($nc(req)->isTransitive()) {
						$assign(todo, $nc(todo)->prepend(req->module));
					}
				}
			}
		}
		$init($Lint$LintCategory);
		$var($Kinds$KindName, var$3, $Kinds::kindName(what));
		$nc(this->log)->warning($Lint$LintCategory::EXPORTS, pos, $($CompilerProperties$Warnings::LeaksNotAccessibleNotRequiredTransitive(var$3, what, $nc($(what->packge()))->modle)));
	}
}

void Check::checkModuleExists($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
	$init($Kinds$Kind);
	if ($nc(msym)->kind != $Kinds$Kind::MDL) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkModuleExists$20$20, this, pos, msym));
	}
}

void Check::checkPackageExistsForOpens($JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
	$useLocalObjectStack();
	bool var$0 = $$nc($nc(packge)->members())->isEmpty();
	if (var$0 && ((packge->flags() & $Flags::HAS_RESOURCE) == 0)) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkPackageExistsForOpens$21$21, this, pos, packge));
	}
}

void Check::checkModuleRequires($JCDiagnostic$DiagnosticPosition* pos, $Directive$RequiresDirective* rd) {
	if (($nc($nc(rd)->module)->flags() & $Flags::AUTOMATIC_MODULE) != 0) {
		$nc(this->deferredLintHandler)->report($$new(Check$$Lambda$lambda$checkModuleRequires$22$22, this, rd, pos));
	}
}

void Check::checkSwitchCaseStructure($List* cases) {
	$useLocalObjectStack();
	bool wasConstant = false;
	bool wasDefault = false;
	bool wasNullPattern = false;
	bool wasPattern = false;
	bool wasTypePattern = false;
	bool wasNonEmptyFallThrough = false;
	{
		$var($List, l, cases);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, l->head));
			{
				$var($Iterator, i$, $nc($nc(c)->labels)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCCaseLabel, pat, $cast($JCTree$JCCaseLabel, i$->next()));
					if ($nc(pat)->isExpression()) {
						$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, pat));
						if ($TreeInfo::isNull(expr)) {
							if (wasPattern && !wasTypePattern && !wasNonEmptyFallThrough) {
								$init($CompilerProperties$Errors);
								$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
							}
							wasNullPattern = true;
						} else {
							if (wasPattern && !wasNonEmptyFallThrough) {
								$init($CompilerProperties$Errors);
								$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
							}
							wasConstant = true;
						}
					} else {
						$init($JCTree$Tag);
						if (pat->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
							if (wasPattern && !wasNonEmptyFallThrough) {
								$init($CompilerProperties$Errors);
								$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughFromPattern);
							}
							wasDefault = true;
						} else {
							bool isTypePattern = pat->hasTag($JCTree$Tag::BINDINGPATTERN);
							if (wasPattern || wasConstant || wasDefault || (wasNullPattern && (!isTypePattern || wasNonEmptyFallThrough))) {
								$init($CompilerProperties$Errors);
								$nc(this->log)->error($(pat->pos()), $CompilerProperties$Errors::FlowsThroughToPattern);
							}
							wasPattern = true;
							wasTypePattern = isTypePattern;
						}
					}
				}
			}
			$init($CaseTree$CaseKind);
			bool completesNormally = c->caseKind == $CaseTree$CaseKind::STATEMENT ? c->completesNormally : false;
			if ($nc(c->stats)->nonEmpty()) {
				wasConstant = false;
				wasDefault = false;
				wasNullPattern &= completesNormally;
				wasPattern &= completesNormally;
				wasTypePattern &= completesNormally;
			}
			wasNonEmptyFallThrough = $nc(c->stats)->nonEmpty() && completesNormally;
		}
	}
}

void Check::lambda$checkModuleRequires$22($Directive$RequiresDirective* rd, $JCDiagnostic$DiagnosticPosition* pos) {
	bool var$0 = $nc(rd)->isTransitive();
	$init($Lint$LintCategory);
	if (var$0 && $nc(this->lint)->isEnabled($Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning(pos, $CompilerProperties$Warnings::RequiresTransitiveAutomatic);
	} else if ($nc(this->lint)->isEnabled($Lint$LintCategory::REQUIRES_AUTOMATIC)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning(pos, $CompilerProperties$Warnings::RequiresAutomatic);
	}
}

void Check::lambda$checkPackageExistsForOpens$21($JCDiagnostic$DiagnosticPosition* pos, $Symbol$PackageSymbol* packge) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::OPENS)) {
		$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::PackageEmptyOrNotFound(packge)));
	}
}

void Check::lambda$checkModuleExists$20($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ModuleSymbol* msym) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MODULE)) {
		$nc(this->log)->warning($Lint$LintCategory::MODULE, pos, $($CompilerProperties$Warnings::ModuleNotFound(msym)));
	}
}

void Check::lambda$checkDefaultConstructor$19($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c, $Symbol$PackageSymbol* pkg, $Symbol$ModuleSymbol* modle) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::MISSING_EXPLICIT_CTOR)) {
		$nc(this->log)->warning($Lint$LintCategory::MISSING_EXPLICIT_CTOR, pos, $($CompilerProperties$Warnings::MissingExplicitCtor(c, pkg, modle)));
	}
}

bool Check::lambda$checkUniqueImport$18($Symbol* sym, $Symbol* candidate) {
	$init(Check);
	return candidate != sym && !$nc($nc(candidate)->type)->isErroneous();
}

bool Check::lambda$checkImportsUnique$17($Symbol* sym) {
	$init(Check);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP;
}

void Check::lambda$checkDivZero$16($JCDiagnostic$DiagnosticPosition* pos) {
	warnDivZero(pos);
}

void Check::lambda$checkPreview$15($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnDeclaredUsingPreview(pos, s);
}

void Check::lambda$checkPreview$14($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnPreviewAPI(pos, $($CompilerProperties$Warnings::IsPreviewReflective(s)));
}

void Check::lambda$checkPreview$13($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	warnPreviewAPI(pos, $($CompilerProperties$Warnings::IsPreview(s)));
}

void Check::lambda$checkSunAPI$12($JCDiagnostic$DiagnosticPosition* pos, $Symbol* s) {
	$nc(this->log)->mandatoryWarning(pos, $($CompilerProperties$Warnings::SunProprietary(s)));
}

void Check::lambda$checkDeprecated$11($Supplier* pos, $Symbol* s) {
	warnDeprecated($$cast($JCDiagnostic$DiagnosticPosition, $nc(pos)->get()), s);
}

$JCDiagnostic$DiagnosticPosition* Check::lambda$checkDeprecated$10($JCDiagnostic$DiagnosticPosition* pos) {
	$init(Check);
	return pos;
}

bool Check::lambda$isTypeAnnotation$9(bool isTypeParameter, $Attribute* attr) {
	return isTypeAnnotation(attr, isTypeParameter);
}

bool Check::lambda$validateAnnotation$8($Attribute$Compound* anno) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getTargetNames($nc($nc(anno)->type)->tsym))))->anyMatch($$new(Check$$Lambda$lambda$validateAnnotation$7$23, this));
}

bool Check::lambda$validateAnnotation$7($Name* name) {
	return name == $nc(this->names)->RECORD_COMPONENT;
}

bool Check::lambda$new$6($Symbol* s) {
	$init(Check);
	$init($Symbol$MethodSymbol);
	bool var$0 = $nc($Symbol$MethodSymbol::implementation_filter)->test(s);
	return var$0 && ($nc(s)->flags() & (int64_t)0x0000200000000000) == 0;
}

bool Check::lambda$checkOverride$5($JCTree$JCMethodDecl* tree, $Symbol$RecordComponent* rc) {
	$init(Check);
	return $nc(rc)->accessor == $nc(tree)->sym && ($nc(rc->accessor)->flags_field & 0x01000000) == 0;
}

$JCDiagnostic$DiagnosticPosition* Check::lambda$checkOverride$4($Symbol$MethodSymbol* m, $JCTree* tree) {
	$init(Check);
	return $TreeInfo::diagnosticPositionFor(m, tree);
}

void Check::lambda$warnOnExplicitStrictfp$3($JCDiagnostic$DiagnosticPosition* pos) {
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::STRICTFP)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::STRICTFP, pos, $CompilerProperties$Warnings::Strictfp);
	}
}

void Check::lambda$checkMethod$2($Type* mtype, $Symbol* sym, $Env* env, $List* argtrees, $List* argtypes, bool useVarargs, $InferenceContext* solvedContext) {
	checkMethod($($nc(solvedContext)->asInstType(mtype)), sym, env, argtrees, argtypes, useVarargs, solvedContext);
}

void Check::lambda$checkRedundantCast$1($JCTree$JCTypeCast* tree) {
	$useLocalObjectStack();
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::CAST)) {
		$var($Lint$LintCategory, var$0, $Lint$LintCategory::CAST);
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree)->pos());
		$nc(this->log)->warning(var$0, var$1, $($CompilerProperties$Warnings::RedundantCast($nc(tree->clazz)->type)));
	}
}

void Check::lambda$checkType$0($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req, $Check$CheckContext* checkContext, $InferenceContext* solvedContext) {
	$useLocalObjectStack();
	$var($Type, var$0, $nc(solvedContext)->asInstType(found));
	checkType(pos, var$0, $(solvedContext->asInstType(req)), checkContext);
}

void Check::clinit$($Class* clazz) {
	$assignStatic(Check::checkKey, $new($Context$Key));
	$assignStatic(Check::denotableChecker, $new($Check$2));
}

Check::Check() {
}

$Class* Check::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$new$6")) {
			return Check$$Lambda$lambda$new$6::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkType$0$1")) {
			return Check$$Lambda$lambda$checkType$0$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkRedundantCast$1$2")) {
			return Check$$Lambda$lambda$checkRedundantCast$1$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkMethod$2$3")) {
			return Check$$Lambda$lambda$checkMethod$2$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4")) {
			return Check$$Lambda$lambda$warnOnExplicitStrictfp$3$4::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$4$5")) {
			return Check$$Lambda$lambda$checkOverride$4$5::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkOverride$5$6")) {
			return Check$$Lambda$lambda$checkOverride$5$6::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$add$7")) {
			return Check$$Lambda$add$7::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$8$8")) {
			return Check$$Lambda$lambda$validateAnnotation$8$8::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$isTypeAnnotation$9$9")) {
			return Check$$Lambda$lambda$isTypeAnnotation$9$9::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$10$10")) {
			return Check$$Lambda$lambda$checkDeprecated$10$10::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDeprecated$11$11")) {
			return Check$$Lambda$lambda$checkDeprecated$11$11::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkSunAPI$12$12")) {
			return Check$$Lambda$lambda$checkSunAPI$12$12::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$13$13")) {
			return Check$$Lambda$lambda$checkPreview$13$13::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$14$14")) {
			return Check$$Lambda$lambda$checkPreview$14$14::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPreview$15$15")) {
			return Check$$Lambda$lambda$checkPreview$15$15::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDivZero$16$16")) {
			return Check$$Lambda$lambda$checkDivZero$16$16::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkImportsUnique$17$17")) {
			return Check$$Lambda$lambda$checkImportsUnique$17$17::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkUniqueImport$18$18")) {
			return Check$$Lambda$lambda$checkUniqueImport$18$18::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkDefaultConstructor$19$19")) {
			return Check$$Lambda$lambda$checkDefaultConstructor$19$19::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleExists$20$20")) {
			return Check$$Lambda$lambda$checkModuleExists$20$20::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkPackageExistsForOpens$21$21")) {
			return Check$$Lambda$lambda$checkPackageExistsForOpens$21$21::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$checkModuleRequires$22$22")) {
			return Check$$Lambda$lambda$checkModuleRequires$22$22::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Check$$Lambda$lambda$validateAnnotation$7$23")) {
			return Check$$Lambda$lambda$validateAnnotation$7$23::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"checkKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Check;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Check, checkKey)},
		{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Check, names)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Check, log)},
		{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Check, rs)},
		{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Check, syms)},
		{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(Check, enter)},
		{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $PRIVATE | $FINAL, $field(Check, deferredAttr)},
		{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $PRIVATE | $FINAL, $field(Check, infer)},
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Check, types)},
		{"typeAnnotations", "Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $PRIVATE | $FINAL, $field(Check, typeAnnotations)},
		{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(Check, diags)},
		{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(Check, fileManager)},
		{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Check, source)},
		{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(Check, target)},
		{"profile", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PRIVATE | $FINAL, $field(Check, profile)},
		{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE | $FINAL, $field(Check, preview)},
		{"warnOnAnyAccessToMembers", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, warnOnAnyAccessToMembers)},
		{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE, $field(Check, lint)},
		{"method", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $field(Check, method)},
		{"syntheticNameChar", "C", nullptr, 0, $field(Check, syntheticNameChar)},
		{"compiled", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $field(Check, compiled)},
		{"deprecationHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, deprecationHandler)},
		{"removalHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, removalHandler)},
		{"uncheckedHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, uncheckedHandler)},
		{"sunApiHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE, $field(Check, sunApiHandler)},
		{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE, $field(Check, deferredLintHandler)},
		{"allowRecords", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, allowRecords)},
		{"allowSealed", "Z", nullptr, $PRIVATE | $FINAL, $field(Check, allowSealed)},
		{"localClassNameIndexes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;>;Ljava/lang/Integer;>;", $PRIVATE, $field(Check, localClassNameIndexes)},
		{"basicHandler", "Lcom/sun/tools/javac/comp/Check$CheckContext;", nullptr, 0, $field(Check, basicHandler)},
		{"ignoreAnnotatedCasts", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Check, ignoreAnnotatedCasts)},
		{"denotableChecker", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Check, denotableChecker)},
		{"isTypeArgErroneous", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;", 0, $field(Check, isTypeArgErroneous$)},
		{"overrideWarner", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Check, overrideWarner)},
		{"equalsHasCodeFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Check, equalsHasCodeFilter)},
		{"defaultTargets", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;", $PRIVATE, $field(Check, defaultTargets)},
		{"dfltTargetMeta", "[Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Check, dfltTargetMeta)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Check, init$, void, $Context*)},
		{"annotationApplicable", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0, $virtualMethod(Check, annotationApplicable, bool, $JCTree$JCAnnotation*, $Symbol*)},
		{"asTypeParam", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(Check, asTypeParam, $Object*, $Type*)},
		{"assertConvertible", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PRIVATE, $method(Check, assertConvertible, void, $JCTree*, $Type*, $Type*, $Warner*)},
		{"belongsToRestrictedPackage", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Check, belongsToRestrictedPackage, bool, $Symbol*)},
		{"cannotOverride", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0, $virtualMethod(Check, cannotOverride, $JCDiagnostic$Fragment*, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*)},
		{"castWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $virtualMethod(Check, castWarner, $Warner*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*)},
		{"checkAccessFromSerializableElement", "(Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, 0, $virtualMethod(Check, checkAccessFromSerializableElement, void, $JCTree*, bool)},
		{"checkAllDefined", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $virtualMethod(Check, checkAllDefined, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*)},
		{"checkAnnotationResType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkAnnotationResType, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkCanonical", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkCanonical, void, $JCTree*)},
		{"checkCastable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkCastable, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*)},
		{"checkCastable", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkCastable, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Check$CheckContext*)},
		{"checkClassBounds", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkClassBounds, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkClassBounds", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/util/Map;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)V", 0, $virtualMethod(Check, checkClassBounds, void, $JCDiagnostic$DiagnosticPosition*, $Map*, $Type*)},
		{"checkClassOrArrayType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkClassOrArrayType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkClassOverrideEqualsAndHash", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(Check, checkClassOverrideEqualsAndHash, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*)},
		{"checkClassOverrideEqualsAndHashIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkClassOverrideEqualsAndHashIfNeeded, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*)},
		{"checkClassType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkClassType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkClassType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkClassType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, bool)},
		{"checkCommonOverriderIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Check, checkCommonOverriderIn, bool, $Symbol*, $Symbol*, $Type*)},
		{"checkCompatibleAbstracts", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Check, checkCompatibleAbstracts, bool, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Type*)},
		{"checkCompatibleConcretes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkCompatibleConcretes, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkCompatibleSupertypes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkCompatibleSupertypes, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkConstructorRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkConstructorRefType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkCyclicConstructor", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;)V", $PRIVATE, $method(Check, checkCyclicConstructor, void, $JCTree$JCClassDecl*, $Symbol*, $Map*)},
		{"checkCyclicConstructors", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0, $virtualMethod(Check, checkCyclicConstructors, void, $JCTree$JCClassDecl*)},
		{"checkDefaultConstructor", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0, $virtualMethod(Check, checkDefaultConstructor, void, $Symbol$ClassSymbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"checkDefaultMethodClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkDefaultMethodClashes, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkDenotable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Check, checkDenotable, bool, $Type*)},
		{"checkDeprecated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, checkDeprecated, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol*)},
		{"checkDeprecated", "(Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", "(Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", 0, $virtualMethod(Check, checkDeprecated, void, $Supplier*, $Symbol*, $Symbol*)},
		{"checkDeprecatedAnnotation", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, checkDeprecatedAnnotation, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"checkDiamond", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkDiamond, $Type*, $JCTree$JCNewClass*, $Type*)},
		{"checkDiamondDenotable", "(Lcom/sun/tools/javac/code/Type$ClassType;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$ClassType;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, checkDiamondDenotable, $List*, $Type$ClassType*)},
		{"checkDisjoint", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;JJJ)Z", nullptr, 0, $virtualMethod(Check, checkDisjoint, bool, $JCDiagnostic$DiagnosticPosition*, int64_t, int64_t, int64_t)},
		{"checkDivZero", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkDivZero, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*)},
		{"checkEmptyIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, 0, $virtualMethod(Check, checkEmptyIf, void, $JCTree$JCIf*)},
		{"checkExtends", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Check, checkExtends, bool, $Type*, $Type*)},
		{"checkFlags", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;JLcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)J", nullptr, 0, $virtualMethod(Check, checkFlags, int64_t, $JCDiagnostic$DiagnosticPosition*, int64_t, $Symbol*, $JCTree*)},
		{"checkForBadAuxiliaryClassAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", 0, $virtualMethod(Check, checkForBadAuxiliaryClassAccess, void, $JCDiagnostic$DiagnosticPosition*, $Env*, $Symbol$ClassSymbol*)},
		{"checkFunctionalInterface", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkFunctionalInterface, void, $JCTree$JCClassDecl*, $Symbol$ClassSymbol*)},
		{"checkHideClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $virtualMethod(Check, checkHideClashes, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $Symbol$MethodSymbol*)},
		{"checkImplementations", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0, $virtualMethod(Check, checkImplementations, void, $JCTree$JCClassDecl*)},
		{"checkImplementations", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $virtualMethod(Check, checkImplementations, void, $JCTree*, $Symbol$ClassSymbol*, $Symbol$ClassSymbol*)},
		{"checkImportedPackagesObservable", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkImportedPackagesObservable, void, $JCTree$JCCompilationUnit*)},
		{"checkImportsResolvable", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkImportsResolvable, void, $JCTree$JCCompilationUnit*)},
		{"checkImportsUnique", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, 0, $virtualMethod(Check, checkImportsUnique, void, $JCTree$JCCompilationUnit*)},
		{"checkLeaksNotAccessible", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", $PUBLIC, $virtualMethod(Check, checkLeaksNotAccessible, void, $Env*, $JCTree$JCClassDecl*)},
		{"checkLocalVarType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkLocalVarType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Name*)},
		{"checkMethod", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZLcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", 0, $virtualMethod(Check, checkMethod, $Type*, $Type*, $Symbol*, $Env*, $List*, $List*, bool, $InferenceContext*)},
		{"checkModuleExists", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, 0, $virtualMethod(Check, checkModuleExists, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ModuleSymbol*)},
		{"checkModuleName", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC, $virtualMethod(Check, checkModuleName, void, $JCTree$JCModuleDecl*)},
		{"checkModuleRequires", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Directive$RequiresDirective;)V", nullptr, 0, $virtualMethod(Check, checkModuleRequires, void, $JCDiagnostic$DiagnosticPosition*, $Directive$RequiresDirective*)},
		{"checkNameClash", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Check, checkNameClash, bool, $Symbol$ClassSymbol*, $Symbol*, $Symbol*)},
		{"checkNonCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, checkNonCyclic, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkNonCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type$TypeVar;)V", nullptr, 0, $virtualMethod(Check, checkNonCyclic, void, $JCDiagnostic$DiagnosticPosition*, $Type$TypeVar*)},
		{"checkNonCyclic1", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type$TypeVar;>;)V", $PRIVATE, $method(Check, checkNonCyclic1, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $List*)},
		{"checkNonCyclicDecl", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0, $virtualMethod(Check, checkNonCyclicDecl, void, $JCTree$JCClassDecl*)},
		{"checkNonCyclicElements", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0, $virtualMethod(Check, checkNonCyclicElements, void, $JCTree$JCClassDecl*)},
		{"checkNonCyclicElementsInternal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $virtualMethod(Check, checkNonCyclicElementsInternal, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$TypeSymbol*)},
		{"checkNonCyclicInternal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Check, checkNonCyclicInternal, bool, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkNonVoid", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkNonVoid, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkNotRepeated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;)V", 0, $virtualMethod(Check, checkNotRepeated, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $Set*)},
		{"checkNullOrRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkNullOrRefType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkOverride", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $virtualMethod(Check, checkOverride, void, $JCTree*, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*)},
		{"checkOverride", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", 0, $virtualMethod(Check, checkOverride, void, $Env*, $JCTree$JCMethodDecl*, $Symbol$MethodSymbol*)},
		{"checkOverride", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $virtualMethod(Check, checkOverride, void, $JCTree*, $Type*, $Symbol$ClassSymbol*, $Symbol$MethodSymbol*)},
		{"checkOverrideClashes", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $virtualMethod(Check, checkOverrideClashes, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $Symbol$MethodSymbol*)},
		{"checkPackageExistsForOpens", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, 0, $virtualMethod(Check, checkPackageExistsForOpens, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$PackageSymbol*)},
		{"checkPotentiallyAmbiguousOverloads", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $virtualMethod(Check, checkPotentiallyAmbiguousOverloads, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*)},
		{"checkPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, checkPreview, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol*)},
		{"checkProfile", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, checkProfile, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"checkRaw", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(Check, checkRaw, void, $JCTree*, $Env*)},
		{"checkRedundantCast", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", $PUBLIC, $virtualMethod(Check, checkRedundantCast, void, $Env*, $JCTree$JCTypeCast*)},
		{"checkRefType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkRefType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"checkRefTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, checkRefTypes, $List*, $List*, $List*)},
		{"checkSunAPI", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, checkSunAPI, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"checkSwitchCaseStructure", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", 0, $virtualMethod(Check, checkSwitchCaseStructure, void, $List*)},
		{"checkTransparentClass", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0, $virtualMethod(Check, checkTransparentClass, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*, $Scope*)},
		{"checkTransparentVar", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0, $virtualMethod(Check, checkTransparentVar, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$VarSymbol*, $Scope*)},
		{"checkType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Check, checkType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*)},
		{"checkType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, checkType, $Type*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Check$CheckContext*)},
		{"checkTypeContainsImportableElement", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set;)Z", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;)Z", $PRIVATE, $method(Check, checkTypeContainsImportableElement, bool, $Symbol$TypeSymbol*, $Symbol$TypeSymbol*, $Symbol$PackageSymbol*, $Name*, $Set*)},
		{"checkUnique", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)Z", nullptr, 0, $virtualMethod(Check, checkUnique, bool, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Scope*)},
		{"checkUniqueClassName", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Scope;)Z", nullptr, 0, $virtualMethod(Check, checkUniqueClassName, bool, $JCDiagnostic$DiagnosticPosition*, $Name*, $Scope*)},
		{"checkUniqueImport", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;Z)Z", nullptr, $PRIVATE, $method(Check, checkUniqueImport, bool, $JCDiagnostic$DiagnosticPosition*, $Scope*, $Scope*, $Scope*, $Symbol*, bool)},
		{"checkValidGenericType", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Check, checkValidGenericType, bool, $Type*)},
		{"checkVarargsMethodDecl", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", 0, $virtualMethod(Check, checkVarargsMethodDecl, void, $Env*, $JCTree$JCMethodDecl*)},
		{"checkVisible", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Z)V", nullptr, $PRIVATE, $method(Check, checkVisible, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol$PackageSymbol*, bool)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Check, clear, void)},
		{"clearLocalClassNameIndexes", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, clearLocalClassNameIndexes, void, $Symbol$ClassSymbol*)},
		{"closure", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(Check, closure, void, $Type*, $Map*)},
		{"closure", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(Check, closure, void, $Type*, $Map*, $Map*)},
		{"completionError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Check, completionError, $Type*, $JCDiagnostic$DiagnosticPosition*, $Symbol$CompletionFailure*)},
		{"convertWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $virtualMethod(Check, convertWarner, $Warner*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*)},
		{"defaultTargetMetaInfo", "()[Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(Check, defaultTargetMetaInfo, $NameArray*)},
		{"diff", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, diff, $List*, $List*, $List*)},
		{"duplicateErasureError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, duplicateErasureError, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol*)},
		{"duplicateError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, duplicateError, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"earlyRefError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, earlyRefError, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"excl", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, excl, $List*, $Type*, $List*)},
		{"findExport", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Lcom/sun/tools/javac/code/Directive$ExportsDirective;", nullptr, $PRIVATE, $method(Check, findExport, $Directive$ExportsDirective*, $Symbol$PackageSymbol*)},
		{"firstDirectIncompatibility", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(Check, firstDirectIncompatibility, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Type*)},
		{"firstIncompatibility", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(Check, firstIncompatibility, $Symbol*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Type*)},
		{"firstIncompatibleTypeArg", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Check, firstIncompatibleTypeArg, $Type*, $Type*)},
		{"getApplicableTargets", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Ljava/util/Optional;", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;)Ljava/util/Optional<Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;>;", 0, $virtualMethod(Check, getApplicableTargets, $Optional*, $JCTree$JCAnnotation*, $Symbol*)},
		{"getAttributeTargetAttribute", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Attribute$Array;", nullptr, 0, $virtualMethod(Check, getAttributeTargetAttribute, $Attribute$Array*, $Symbol$TypeSymbol*)},
		{"getCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $virtualMethod(Check, getCompiled, $Symbol$ClassSymbol*, $Symbol$ClassSymbol*)},
		{"getCompiled", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $virtualMethod(Check, getCompiled, $Symbol$ClassSymbol*, $Symbol$ModuleSymbol*, $Name*)},
		{"getDefaultTargetSet", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;", $PRIVATE, $method(Check, getDefaultTargetSet, $Set*)},
		{"getTargetNames", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)[Lcom/sun/tools/javac/util/Name;", nullptr, 0, $virtualMethod(Check, getTargetNames, $NameArray*, $JCTree$JCAnnotation*)},
		{"getTargetNames", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)[Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(Check, getTargetNames, $NameArray*, $Symbol$TypeSymbol*)},
		{"implicitEnumFinalFlag", "(Lcom/sun/tools/javac/tree/JCTree;)J", nullptr, $PRIVATE, $method(Check, implicitEnumFinalFlag, int64_t, $JCTree*)},
		{"importAccessible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Z", nullptr, $PUBLIC, $virtualMethod(Check, importAccessible, bool, $Symbol*, $Symbol$PackageSymbol*)},
		{"incl", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, incl, $List*, $Type*, $List*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Check;", nullptr, $PUBLIC | $STATIC, $staticMethod(Check, instance, Check*, $Context*)},
		{"intersect", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Check, intersect, $List*, $List*, $List*)},
		{"intersects", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0, $virtualMethod(Check, intersects, bool, $Type*, $List*)},
		{"is292targetTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)Z", nullptr, $PRIVATE, $method(Check, is292targetTypeCast, bool, $JCTree$JCTypeCast*)},
		{"isAPISymbol", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Check, isAPISymbol, bool, $Symbol*)},
		{"isCanonical", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(Check, isCanonical, bool, $JCTree*)},
		{"isChecked", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Check, isChecked, bool, $Type*)},
		{"isDeprecatedOverrideIgnorable", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE, $method(Check, isDeprecatedOverrideIgnorable, bool, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*)},
		{"isEffectivelyNonPublic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Check, isEffectivelyNonPublic, bool, $Symbol*)},
		{"isHandled", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0, $virtualMethod(Check, isHandled, bool, $Type*, $List*)},
		{"isOverrider", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0, $virtualMethod(Check, isOverrider, bool, $Symbol*)},
		{"isTargetSubsetOf", "(Ljava/util/Set;Ljava/util/Set;)Z", "(Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;)Z", $PRIVATE, $method(Check, isTargetSubsetOf, bool, $Set*, $Set*)},
		{"isTrustMeAllowedOnMethod", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(Check, isTrustMeAllowedOnMethod, bool, $Symbol*)},
		{"isTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Z)Z", nullptr, $PROTECTED, $virtualMethod(Check, isTypeAnnotation, bool, $JCTree$JCAnnotation*, bool)},
		{"isTypeAnnotation", "(Lcom/sun/tools/javac/code/Attribute;Z)Z", nullptr, 0, $virtualMethod(Check, isTypeAnnotation, bool, $Attribute*, bool)},
		{"isTypeArgErroneous", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Check, isTypeArgErroneous, bool, $Type*)},
		{"isUnchecked", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, 0, $virtualMethod(Check, isUnchecked, bool, $Symbol$ClassSymbol*)},
		{"isUnchecked", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Check, isUnchecked, bool, $Type*)},
		{"isUnchecked", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Z", nullptr, 0, $virtualMethod(Check, isUnchecked, bool, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"lambda$checkDefaultConstructor$19", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkDefaultConstructor$19, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*, $Symbol$PackageSymbol*, $Symbol$ModuleSymbol*)},
		{"lambda$checkDeprecated$10", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$checkDeprecated$10, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$DiagnosticPosition*)},
		{"lambda$checkDeprecated$11", "(Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkDeprecated$11, void, $Supplier*, $Symbol*)},
		{"lambda$checkDivZero$16", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkDivZero$16, void, $JCDiagnostic$DiagnosticPosition*)},
		{"lambda$checkImportsUnique$17", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$checkImportsUnique$17, bool, $Symbol*)},
		{"lambda$checkMethod$2", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkMethod$2, void, $Type*, $Symbol*, $Env*, $List*, $List*, bool, $InferenceContext*)},
		{"lambda$checkModuleExists$20", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkModuleExists$20, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ModuleSymbol*)},
		{"lambda$checkModuleRequires$22", "(Lcom/sun/tools/javac/code/Directive$RequiresDirective;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkModuleRequires$22, void, $Directive$RequiresDirective*, $JCDiagnostic$DiagnosticPosition*)},
		{"lambda$checkOverride$4", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$checkOverride$4, $JCDiagnostic$DiagnosticPosition*, $Symbol$MethodSymbol*, $JCTree*)},
		{"lambda$checkOverride$5", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$checkOverride$5, bool, $JCTree$JCMethodDecl*, $Symbol$RecordComponent*)},
		{"lambda$checkPackageExistsForOpens$21", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkPackageExistsForOpens$21, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$PackageSymbol*)},
		{"lambda$checkPreview$13", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkPreview$13, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"lambda$checkPreview$14", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkPreview$14, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"lambda$checkPreview$15", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkPreview$15, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"lambda$checkRedundantCast$1", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkRedundantCast$1, void, $JCTree$JCTypeCast*)},
		{"lambda$checkSunAPI$12", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkSunAPI$12, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"lambda$checkType$0", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$checkType$0, void, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*, $Check$CheckContext*, $InferenceContext*)},
		{"lambda$checkUniqueImport$18", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$checkUniqueImport$18, bool, $Symbol*, $Symbol*)},
		{"lambda$isTypeAnnotation$9", "(ZLcom/sun/tools/javac/code/Attribute;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$isTypeAnnotation$9, bool, bool, $Attribute*)},
		{"lambda$new$6", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Check, lambda$new$6, bool, $Symbol*)},
		{"lambda$validateAnnotation$7", "(Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$validateAnnotation$7, bool, $Name*)},
		{"lambda$validateAnnotation$8", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$validateAnnotation$8, bool, $Attribute$Compound*)},
		{"lambda$warnOnExplicitStrictfp$3", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Check, lambda$warnOnExplicitStrictfp$3, void, $JCDiagnostic$DiagnosticPosition*)},
		{"localClassName", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $virtualMethod(Check, localClassName, $Name*, $Symbol$ClassSymbol*)},
		{"newRound", "()V", nullptr, $PUBLIC, $virtualMethod(Check, newRound, void)},
		{"noteCyclic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(Check, noteCyclic, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$ClassSymbol*)},
		{"protection", "(J)I", nullptr, $STATIC, $staticMethod(Check, protection, int32_t, int64_t)},
		{"putCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, putCompiled, void, $Symbol$ClassSymbol*)},
		{"removeCompiled", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, removeCompiled, void, $Symbol$ClassSymbol*)},
		{"reportDeferredDiagnostics", "()V", nullptr, $PUBLIC, $virtualMethod(Check, reportDeferredDiagnostics, void)},
		{"setLint", "(Lcom/sun/tools/javac/code/Lint;)Lcom/sun/tools/javac/code/Lint;", nullptr, 0, $virtualMethod(Check, setLint, $Lint*, $Lint*)},
		{"setMethod", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $virtualMethod(Check, setMethod, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*)},
		{"subset", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0, $virtualMethod(Check, subset, bool, $Type*, $List*)},
		{"typeTagError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Check, typeTagError, $Type*, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*, Object$*)},
		{"uncheckedOverrides", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0, $virtualMethod(Check, uncheckedOverrides, $JCDiagnostic$Fragment*, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*)},
		{"unhandled", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, unhandled, $List*, $List*, $List*)},
		{"union", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Check, union$, $List*, $List*, $List*)},
		{"validate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(Check, validate, void, $JCTree*, $Env*)},
		{"validate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Z)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Z)V", 0, $virtualMethod(Check, validate, void, $JCTree*, $Env*, bool)},
		{"validate", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $virtualMethod(Check, validate, void, $List*, $Env*)},
		{"validateAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(Check, validateAnnotation, void, $JCTree$JCAnnotation*, $JCTree*, $Symbol*)},
		{"validateAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, $PRIVATE, $method(Check, validateAnnotation, bool, $JCTree$JCAnnotation*)},
		{"validateAnnotationDeferErrors", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, $PUBLIC, $virtualMethod(Check, validateAnnotationDeferErrors, bool, $JCTree$JCAnnotation*)},
		{"validateAnnotationMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $virtualMethod(Check, validateAnnotationMethod, void, $JCDiagnostic$DiagnosticPosition*, $Symbol$MethodSymbol*)},
		{"validateAnnotationTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $virtualMethod(Check, validateAnnotationTree, void, $JCTree*)},
		{"validateAnnotationType", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $virtualMethod(Check, validateAnnotationType, void, $JCTree*)},
		{"validateAnnotationType", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Check, validateAnnotationType, void, $JCDiagnostic$DiagnosticPosition*, $Type*)},
		{"validateAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", $PUBLIC, $virtualMethod(Check, validateAnnotations, void, $List*, $JCTree*, $Symbol*)},
		{"validateDefault", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateDefault, void, $Symbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateDocumented", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateDocumented, void, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateInherited", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateInherited, void, $Symbol*, $Symbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateRepeatable", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $virtualMethod(Check, validateRepeatable, void, $Symbol$TypeSymbol*, $Attribute$Compound*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateRetention", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateRetention, void, $Symbol$TypeSymbol*, $Symbol$TypeSymbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateTarget", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateTarget, void, $Symbol$TypeSymbol*, $Symbol$TypeSymbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"validateTargetAnnotationValue", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Z", nullptr, 0, $virtualMethod(Check, validateTargetAnnotationValue, bool, $JCTree$JCAnnotation*)},
		{"validateTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Z)V", nullptr, $PUBLIC, $virtualMethod(Check, validateTypeAnnotation, void, $JCTree$JCAnnotation*, bool)},
		{"validateTypeAnnotations", "(Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Z)V", $PUBLIC, $virtualMethod(Check, validateTypeAnnotations, void, $List*, bool)},
		{"validateValue", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, validateValue, void, $Symbol$TypeSymbol*, $Symbol$TypeSymbol*, $JCDiagnostic$DiagnosticPosition*)},
		{"varargsDuplicateError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, varargsDuplicateError, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol*)},
		{"varargsOverrides", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0, $virtualMethod(Check, varargsOverrides, $JCDiagnostic$Fragment*, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*)},
		{"warnDeclaredUsingPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Check, warnDeclaredUsingPreview, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"warnDeprecated", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Check, warnDeprecated, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"warnDivZero", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0, $virtualMethod(Check, warnDivZero, void, $JCDiagnostic$DiagnosticPosition*)},
		{"warnOnExplicitStrictfp", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(Check, warnOnExplicitStrictfp, void, $JCDiagnostic$DiagnosticPosition*)},
		{"warnPreviewAPI", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(Check, warnPreviewAPI, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
		{"warnStatic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(Check, warnStatic, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
		{"warnUnchecked", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(Check, warnUnchecked, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
		{"warnUnsafeVararg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, 0, $virtualMethod(Check, warnUnsafeVararg, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
		{"withinAnonConstr", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PRIVATE, $method(Check, withinAnonConstr, bool, $Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.tools.javac.comp.Check$ConversionWarner", "com.sun.tools.javac.comp.Check", "ConversionWarner", $PRIVATE},
		{"com.sun.tools.javac.comp.Check$DefaultMethodClashFilter", "com.sun.tools.javac.comp.Check", "DefaultMethodClashFilter", $PRIVATE},
		{"com.sun.tools.javac.comp.Check$ClashFilter", "com.sun.tools.javac.comp.Check", "ClashFilter", $PRIVATE},
		{"com.sun.tools.javac.comp.Check$CycleChecker", "com.sun.tools.javac.comp.Check", "CycleChecker", 0},
		{"com.sun.tools.javac.comp.Check$Validator", "com.sun.tools.javac.comp.Check", "Validator", 0},
		{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
		{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Check$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Check$1AnnotationValidator", nullptr, "AnnotationValidator", 0},
		{"com.sun.tools.javac.comp.Check$1SpecialTreeVisitor", nullptr, "SpecialTreeVisitor", 0},
		{"com.sun.tools.javac.comp.Check$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Check$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Check$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Check",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Check$5,com.sun.tools.javac.comp.Check$ConversionWarner,com.sun.tools.javac.comp.Check$DefaultMethodClashFilter,com.sun.tools.javac.comp.Check$ClashFilter,com.sun.tools.javac.comp.Check$CycleChecker,com.sun.tools.javac.comp.Check$Validator,com.sun.tools.javac.comp.Check$NestedCheckContext,com.sun.tools.javac.comp.Check$CheckContext,com.sun.tools.javac.comp.Check$4,com.sun.tools.javac.comp.Check$1AnnotationValidator,com.sun.tools.javac.comp.Check$1SpecialTreeVisitor,com.sun.tools.javac.comp.Check$3,com.sun.tools.javac.comp.Check$2,com.sun.tools.javac.comp.Check$1"
	};
	$loadClass(Check, name, initialize, &classInfo$$, Check::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Check);
	});
	return class$;
}

$Class* Check::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com