#include <com/sun/tools/javac/code/Types.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$DynamicVarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$1.h>
#include <com/sun/tools/javac/code/Types$10.h>
#include <com/sun/tools/javac/code/Types$11.h>
#include <com/sun/tools/javac/code/Types$12.h>
#include <com/sun/tools/javac/code/Types$13.h>
#include <com/sun/tools/javac/code/Types$14.h>
#include <com/sun/tools/javac/code/Types$15.h>
#include <com/sun/tools/javac/code/Types$16.h>
#include <com/sun/tools/javac/code/Types$17.h>
#include <com/sun/tools/javac/code/Types$18.h>
#include <com/sun/tools/javac/code/Types$19.h>
#include <com/sun/tools/javac/code/Types$2.h>
#include <com/sun/tools/javac/code/Types$20.h>
#include <com/sun/tools/javac/code/Types$21.h>
#include <com/sun/tools/javac/code/Types$22.h>
#include <com/sun/tools/javac/code/Types$23.h>
#include <com/sun/tools/javac/code/Types$24.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$3.h>
#include <com/sun/tools/javac/code/Types$4.h>
#include <com/sun/tools/javac/code/Types$5.h>
#include <com/sun/tools/javac/code/Types$6.h>
#include <com/sun/tools/javac/code/Types$7.h>
#include <com/sun/tools/javac/code/Types$8.h>
#include <com/sun/tools/javac/code/Types$9.h>
#include <com/sun/tools/javac/code/Types$AdaptFailure.h>
#include <com/sun/tools/javac/code/Types$Adapter.h>
#include <com/sun/tools/javac/code/Types$CandidatesCache$Entry.h>
#include <com/sun/tools/javac/code/Types$CandidatesCache.h>
#include <com/sun/tools/javac/code/Types$CaptureScanner.h>
#include <com/sun/tools/javac/code/Types$ClosureHolder.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types$HasSameArgs.h>
#include <com/sun/tools/javac/code/Types$HashCodeVisitor.h>
#include <com/sun/tools/javac/code/Types$ImplementationCache.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types$MembersClosureCache$MembersScope.h>
#include <com/sun/tools/javac/code/Types$MembersClosureCache.h>
#include <com/sun/tools/javac/code/Types$MethodFilter.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <com/sun/tools/javac/code/Types$Rewriter.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types$Subst.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types$TypePair.h>
#include <com/sun/tools/javac/code/Types$TypeProjection.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector$Characteristics.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef A
#undef ARRAY
#undef ARRAY_BOUND
#undef BOT
#undef CLASS
#undef CLASS_BOUND
#undef DEFAULT_METHODS
#undef ERROR
#undef EXTENDS
#undef FORALL
#undef G
#undef INT
#undef LOWER
#undef MAP_CAPTURES_TO_BOUNDS
#undef MTH
#undef NONE
#undef NON_RECURSIVE
#undef NULL_COMPLETER
#undef PACKAGE
#undef RUNTIME
#undef S
#undef SOURCE
#undef SUPER
#undef T
#undef TYP
#undef TYPEVAR
#undef UNBOUND
#undef UNCHECKED
#undef UNDETVAR
#undef UNKNOWN_BOUND
#undef UPPER
#undef UPWARDS
#undef VARARGS
#undef VOID
#undef WILDCARD

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Types$MostSpecificReturnCheckArray = $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>;
using $Collector$CharacteristicsArray = $Array<::java::util::stream::Collector$Characteristics>;
using $Messages = ::com::sun::tools::javac::api::Messages;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Printer = ::com::sun::tools::javac::code::Printer;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$DynamicVarSymbol = ::com::sun::tools::javac::code::Symbol$DynamicVarSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$1 = ::com::sun::tools::javac::code::Types$1;
using $Types$10 = ::com::sun::tools::javac::code::Types$10;
using $Types$11 = ::com::sun::tools::javac::code::Types$11;
using $Types$12 = ::com::sun::tools::javac::code::Types$12;
using $Types$13 = ::com::sun::tools::javac::code::Types$13;
using $Types$14 = ::com::sun::tools::javac::code::Types$14;
using $Types$15 = ::com::sun::tools::javac::code::Types$15;
using $Types$16 = ::com::sun::tools::javac::code::Types$16;
using $Types$17 = ::com::sun::tools::javac::code::Types$17;
using $Types$18 = ::com::sun::tools::javac::code::Types$18;
using $Types$19 = ::com::sun::tools::javac::code::Types$19;
using $Types$2 = ::com::sun::tools::javac::code::Types$2;
using $Types$20 = ::com::sun::tools::javac::code::Types$20;
using $Types$21 = ::com::sun::tools::javac::code::Types$21;
using $Types$22 = ::com::sun::tools::javac::code::Types$22;
using $Types$23 = ::com::sun::tools::javac::code::Types$23;
using $Types$24 = ::com::sun::tools::javac::code::Types$24;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$3 = ::com::sun::tools::javac::code::Types$3;
using $Types$4 = ::com::sun::tools::javac::code::Types$4;
using $Types$5 = ::com::sun::tools::javac::code::Types$5;
using $Types$6 = ::com::sun::tools::javac::code::Types$6;
using $Types$7 = ::com::sun::tools::javac::code::Types$7;
using $Types$8 = ::com::sun::tools::javac::code::Types$8;
using $Types$9 = ::com::sun::tools::javac::code::Types$9;
using $Types$AdaptFailure = ::com::sun::tools::javac::code::Types$AdaptFailure;
using $Types$Adapter = ::com::sun::tools::javac::code::Types$Adapter;
using $Types$CandidatesCache = ::com::sun::tools::javac::code::Types$CandidatesCache;
using $Types$CandidatesCache$Entry = ::com::sun::tools::javac::code::Types$CandidatesCache$Entry;
using $Types$CaptureScanner = ::com::sun::tools::javac::code::Types$CaptureScanner;
using $Types$ClosureHolder = ::com::sun::tools::javac::code::Types$ClosureHolder;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $Types$HasSameArgs = ::com::sun::tools::javac::code::Types$HasSameArgs;
using $Types$HashCodeVisitor = ::com::sun::tools::javac::code::Types$HashCodeVisitor;
using $Types$ImplementationCache = ::com::sun::tools::javac::code::Types$ImplementationCache;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Types$MembersClosureCache = ::com::sun::tools::javac::code::Types$MembersClosureCache;
using $Types$MembersClosureCache$MembersScope = ::com::sun::tools::javac::code::Types$MembersClosureCache$MembersScope;
using $Types$MethodFilter = ::com::sun::tools::javac::code::Types$MethodFilter;
using $Types$MostSpecificReturnCheck = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck;
using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
using $Types$Rewriter = ::com::sun::tools::javac::code::Types$Rewriter;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Types$Subst = ::com::sun::tools::javac::code::Types$Subst;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Types$TypePair = ::com::sun::tools::javac::code::Types$TypePair;
using $Types$TypeProjection = ::com::sun::tools::javac::code::Types$TypeProjection;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiPredicate = ::java::util::function::BiPredicate;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$$Lambda$lambda$new$4 : public $BiPredicate {
	$class(Types$$Lambda$lambda$new$4, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t1, Object$* t2) override {
		 return Types::lambda$new$4($cast($Type, t1), $cast($Type, t2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$lambda$new$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Types$$Lambda$lambda$new$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Types$$Lambda$lambda$new$4, init$, void)},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$lambda$new$4, test, bool, Object$*, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$lambda$new$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$lambda$new$4",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* Types$$Lambda$lambda$new$4::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$lambda$new$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$lambda$new$4::class$ = nullptr;

class Types$$Lambda$lambda$removeWildcards$0$1 : public $Predicate {
	$class(Types$$Lambda$lambda$removeWildcards$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return Types::lambda$removeWildcards$0($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$lambda$removeWildcards$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Types$$Lambda$lambda$removeWildcards$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Types$$Lambda$lambda$removeWildcards$0$1, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$lambda$removeWildcards$0$1, test, bool, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$lambda$removeWildcards$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$lambda$removeWildcards$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Types$$Lambda$lambda$removeWildcards$0$1::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$lambda$removeWildcards$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$lambda$removeWildcards$0$1::class$ = nullptr;

class Types$$Lambda$lambda$areDisjoint$1$2 : public $Predicate {
	$class(Types$$Lambda$lambda$areDisjoint$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Types* inst, $Symbol$ClassSymbol* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(Object$* sym) override {
		 return $nc(inst$)->lambda$areDisjoint$1(other, $cast($Symbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$lambda$areDisjoint$1$2>());
	}
	Types* inst$ = nullptr;
	$Symbol$ClassSymbol* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$$Lambda$lambda$areDisjoint$1$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$areDisjoint$1$2, inst$)},
	{"other", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$areDisjoint$1$2, other)},
	{}
};
$MethodInfo Types$$Lambda$lambda$areDisjoint$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $method(Types$$Lambda$lambda$areDisjoint$1$2, init$, void, Types*, $Symbol$ClassSymbol*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$lambda$areDisjoint$1$2, test, bool, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$lambda$areDisjoint$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$lambda$areDisjoint$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Types$$Lambda$lambda$areDisjoint$1$2::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$lambda$areDisjoint$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$lambda$areDisjoint$1$2::class$ = nullptr;

class Types$$Lambda$lambda$membersClosure$2$3 : public $Supplier {
	$class(Types$$Lambda$lambda$membersClosure$2$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Type* site) {
		$set(this, site, site);
	}
	virtual $Object* get() override {
		 return $of(Types::lambda$membersClosure$2(site));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$lambda$membersClosure$2$3>());
	}
	$Type* site = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$$Lambda$lambda$membersClosure$2$3::fieldInfos[2] = {
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$membersClosure$2$3, site)},
	{}
};
$MethodInfo Types$$Lambda$lambda$membersClosure$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Types$$Lambda$lambda$membersClosure$2$3, init$, void, $Type*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$lambda$membersClosure$2$3, get, $Object*)},
	{}
};
$ClassInfo Types$$Lambda$lambda$membersClosure$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$lambda$membersClosure$2$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Types$$Lambda$lambda$membersClosure$2$3::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$lambda$membersClosure$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$lambda$membersClosure$2$3::class$ = nullptr;

class Types$$Lambda$lambda$closureCollector$3$4 : public $Supplier {
	$class(Types$$Lambda$lambda$closureCollector$3$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Types* inst, bool minClosure, $BiPredicate* shouldSkip) {
		$set(this, inst$, inst);
		this->minClosure = minClosure;
		$set(this, shouldSkip, shouldSkip);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$closureCollector$3(minClosure, shouldSkip));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$lambda$closureCollector$3$4>());
	}
	Types* inst$ = nullptr;
	bool minClosure = false;
	$BiPredicate* shouldSkip = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$$Lambda$lambda$closureCollector$3$4::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$closureCollector$3$4, inst$)},
	{"minClosure", "Z", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$closureCollector$3$4, minClosure)},
	{"shouldSkip", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(Types$$Lambda$lambda$closureCollector$3$4, shouldSkip)},
	{}
};
$MethodInfo Types$$Lambda$lambda$closureCollector$3$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;ZLjava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(Types$$Lambda$lambda$closureCollector$3$4, init$, void, Types*, bool, $BiPredicate*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$lambda$closureCollector$3$4, get, $Object*)},
	{}
};
$ClassInfo Types$$Lambda$lambda$closureCollector$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$lambda$closureCollector$3$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Types$$Lambda$lambda$closureCollector$3$4::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$lambda$closureCollector$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$lambda$closureCollector$3$4::class$ = nullptr;

class Types$$Lambda$add$5 : public $BiConsumer {
	$class(Types$$Lambda$add$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* type) override {
		$sure($Types$ClosureHolder, inst$)->add($cast($Type, type));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$add$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Types$$Lambda$add$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Types$$Lambda$add$5, init$, void)},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$add$5, accept, void, Object$*, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$add$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$add$5",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* Types$$Lambda$add$5::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$add$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$add$5::class$ = nullptr;

class Types$$Lambda$merge$6 : public $BinaryOperator {
	$class(Types$$Lambda$merge$6, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* other) override {
		 return $of($sure($Types$ClosureHolder, inst$)->merge($cast($Types$ClosureHolder, other)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$merge$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Types$$Lambda$merge$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Types$$Lambda$merge$6, init$, void)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$merge$6, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$merge$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$merge$6",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* Types$$Lambda$merge$6::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$merge$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$merge$6::class$ = nullptr;

class Types$$Lambda$closure$7 : public $Function {
	$class(Types$$Lambda$closure$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Types$ClosureHolder, inst$)->closure());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$$Lambda$closure$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Types$$Lambda$closure$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Types$$Lambda$closure$7, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Types$$Lambda$closure$7, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Types$$Lambda$closure$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$$Lambda$closure$7",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Types$$Lambda$closure$7::load$($String* name, bool initialize) {
	$loadClass(Types$$Lambda$closure$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$$Lambda$closure$7::class$ = nullptr;

$CompoundAttribute _Types_MethodAnnotations_toString152[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Types_FieldInfo_[] = {
	{"typesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/Types;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Types, typesKey)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(Types, syms)},
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $FINAL, $field(Types, messages)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(Types, names)},
	{"allowDefaultMethods", "Z", nullptr, $FINAL, $field(Types, allowDefaultMethods)},
	{"mapCapturesToBounds", "Z", nullptr, $FINAL, $field(Types, mapCapturesToBounds)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL, $field(Types, chk)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL, $field(Types, enter)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(Types, diags)},
	{"warnStack", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Warner;>;", 0, $field(Types, warnStack)},
	{"capturedName", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL, $field(Types, capturedName)},
	{"noWarnings", "Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC | $FINAL, $field(Types, noWarnings)},
	{"isUnbounded", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(Types, isUnbounded$)},
	{"asSub", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $FINAL, $field(Types, asSub$)},
	{"descCache", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $PRIVATE, $field(Types, descCache)},
	{"bridgeFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Types, bridgeFilter)},
	{"isSubtype", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, $PRIVATE, $field(Types, isSubtype$)},
	{"isSameTypeVisitor", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, 0, $field(Types, isSameTypeVisitor)},
	{"containsType", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, $PRIVATE, $field(Types, containsType$)},
	{"isCastable", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, $PRIVATE, $field(Types, isCastable$)},
	{"disjointType", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, $PRIVATE, $field(Types, disjointType$)},
	{"cvarLowerBoundMapping", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", $PRIVATE | $FINAL, $field(Types, cvarLowerBoundMapping)},
	{"isReifiable", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;", $PRIVATE, $field(Types, isReifiable$)},
	{"elemTypeFun", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", $PRIVATE, $field(Types, elemTypeFun)},
	{"asSuper", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Types, asSuper$)},
	{"memberType", "Lcom/sun/tools/javac/code/Types$SimpleVisitor;", "Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Types, memberType$)},
	{"erasure", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Boolean;>;", $PRIVATE, $field(Types, erasure$)},
	{"supertype", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $field(Types, supertype$)},
	{"interfaces", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE, $field(Types, interfaces$)},
	{"directSupertypes", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE | $FINAL, $field(Types, directSupertypes$)},
	{"isDerivedRawCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Ljava/lang/Boolean;>;", 0, $field(Types, isDerivedRawCache)},
	{"classBound", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $field(Types, classBound$)},
	{"implCache", "Lcom/sun/tools/javac/code/Types$ImplementationCache;", nullptr, $PRIVATE, $field(Types, implCache)},
	{"membersCache", "Lcom/sun/tools/javac/code/Types$MembersClosureCache;", nullptr, $PRIVATE, $field(Types, membersCache)},
	{"candidatesCache", "Lcom/sun/tools/javac/code/Types$CandidatesCache;", nullptr, $PUBLIC, $field(Types, candidatesCache)},
	{"hasSameArgs_strict", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, 0, $field(Types, hasSameArgs_strict)},
	{"hasSameArgs_nonstrict", "Lcom/sun/tools/javac/code/Types$TypeRelation;", nullptr, 0, $field(Types, hasSameArgs_nonstrict)},
	{"newInstanceFun", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Types, newInstanceFun)},
	{"methodWithParameters", "Lcom/sun/tools/javac/code/Types$MapVisitor;", "Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE | $FINAL, $field(Types, methodWithParameters)},
	{"methodWithThrown", "Lcom/sun/tools/javac/code/Types$MapVisitor;", "Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE | $FINAL, $field(Types, methodWithThrown)},
	{"methodWithReturn", "Lcom/sun/tools/javac/code/Types$MapVisitor;", "Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE | $FINAL, $field(Types, methodWithReturn)},
	{"closureCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE, $field(Types, closureCache)},
	{"basicClosureSkip", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types, basicClosureSkip)},
	{"mergeCache", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Types$TypePair;>;", 0, $field(Types, mergeCache)},
	{"arraySuperType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Types, arraySuperType$)},
	{"hashCodeVisitor", "Lcom/sun/tools/javac/code/Types$HashCodeVisitor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Types, hashCodeVisitor)},
	{"hashCodeStrictVisitor", "Lcom/sun/tools/javac/code/Types$HashCodeVisitor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Types, hashCodeStrictVisitor)},
	{}
};

$MethodInfo _Types_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Types, init$, void, $Context*)},
	{"adapt", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $virtualMethod(Types, adapt, void, $Type*, $Type*, $ListBuffer*, $ListBuffer*), "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"adaptSelf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(Types, adaptSelf, void, $Type*, $ListBuffer*, $ListBuffer*)},
	{"appendTyparamString", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(Types, appendTyparamString, void, $Type$TypeVar*, $StringBuilder*)},
	{"areDisjoint", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PRIVATE, $method(Types, areDisjoint, bool, $Symbol$ClassSymbol*, $Symbol$ClassSymbol*)},
	{"arraySuperType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types, arraySuperType, $Type*)},
	{"asEnclosingSuper", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, asEnclosingSuper, $Type*, $Type*, $Symbol*)},
	{"asOuterSuper", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, asOuterSuper, $Type*, $Type*, $Symbol*)},
	{"asSub", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, asSub, $Type*, $Type*, $Symbol*)},
	{"asSuper", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, asSuper, $Type*, $Type*, $Symbol*)},
	{"boxedClass", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $virtualMethod(Types, boxedClass, $Symbol$ClassSymbol*, $Type*)},
	{"boxedTypeOrType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, boxedTypeOrType, $Type*, $Type*)},
	{"capture", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, capture, $List*, $List*)},
	{"capture", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, capture, $Type*, $Type*)},
	{"captures", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, captures, $List*, $Type*)},
	{"checkUnsafeVarargsConversion", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PRIVATE, $method(Types, checkUnsafeVarargsConversion, void, $Type*, $Type*, $Warner*)},
	{"classBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, classBound, $Type*, $Type*)},
	{"closure", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, closure, $List*, $Type*)},
	{"closureCollector", "(ZLjava/util/function/BiPredicate;)Ljava/util/stream/Collector;", "(ZLjava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;)Ljava/util/stream/Collector<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types$ClosureHolder;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PUBLIC, $virtualMethod(Types, closureCollector, $Collector*, bool, $BiPredicate*)},
	{"closureMin", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(Types, closureMin, $List*, $List*)},
	{"compoundMin", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(Types, compoundMin, $Type*, $List*)},
	{"constantType", "(Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, constantType, $Type*, $PoolConstant$LoadableConstant*)},
	{"containedBy", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, containedBy, bool, $Type*, $Type*)},
	{"containsType", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0, $virtualMethod(Types, containsType, bool, $List*, $List*)},
	{"containsType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, containsType, bool, $Type*, $Type*)},
	{"containsTypeEquivalent", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types, containsTypeEquivalent, bool, $List*, $List*)},
	{"containsTypeEquivalent", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Types, containsTypeEquivalent, bool, $Type*, $Type*)},
	{"covariantReturnType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, covariantReturnType, bool, $Type*, $Type*, $Warner*)},
	{"createErrorType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, createErrorType, $Type*, $Type*)},
	{"createErrorType", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, createErrorType, $Type*, $Symbol$ClassSymbol*, $Type*)},
	{"createErrorType", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, createErrorType, $Type*, $Name*, $Symbol$TypeSymbol*, $Type*)},
	{"createMethodTypeWithParameters", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, createMethodTypeWithParameters, $Type*, $Type*, $List*)},
	{"createMethodTypeWithReturn", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, createMethodTypeWithReturn, $Type*, $Type*, $Type*)},
	{"createMethodTypeWithThrown", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, createMethodTypeWithThrown, $Type*, $Type*, $List*)},
	{"cvarLowerBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, cvarLowerBound, $Type*, $Type*)},
	{"cvarLowerBounds", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, cvarLowerBounds, $List*, $List*)},
	{"cvarUpperBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, cvarUpperBound, $Type*, $Type*)},
	{"dimensions", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC, $virtualMethod(Types, dimensions, int32_t, $Type*)},
	{"directSupertypes", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, directSupertypes, $List*, $Type*)},
	{"disjointType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, disjointType, bool, $Type*, $Type*)},
	{"disjointTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types, disjointTypes, bool, $List*, $List*)},
	{"elemtype", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, elemtype, $Type*, $Type*)},
	{"elemtypeOrType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, elemtypeOrType, $Type*, $Type*)},
	{"eraseNotNeeded", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Types, eraseNotNeeded, bool, $Type*)},
	{"erasedSupertypes", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $virtualMethod(Types, erasedSupertypes, $List*, $Type*)},
	{"erasure", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, erasure, $Type*, $Type*)},
	{"erasure", "(Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types, erasure, $Type*, $Type*, bool)},
	{"erasure", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, erasure, $List*, $List*)},
	{"erasureRecursive", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, erasureRecursive, $Type*, $Type*)},
	{"erasureRecursive", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, erasureRecursive, $List*, $List*)},
	{"findDescriptorSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Types, findDescriptorSymbol, $Symbol*, $Symbol$TypeSymbol*), "com.sun.tools.javac.code.Types$FunctionDescriptorLookupError"},
	{"findDescriptorType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, findDescriptorType, $Type*, $Type*), "com.sun.tools.javac.code.Types$FunctionDescriptorLookupError"},
	{"firstUnimplementedAbstract", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $virtualMethod(Types, firstUnimplementedAbstract, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*)},
	{"firstUnimplementedAbstractImpl", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $method(Types, firstUnimplementedAbstractImpl, $Symbol$MethodSymbol*, $Symbol$ClassSymbol*, $Symbol$ClassSymbol*)},
	{"freshTypeVariables", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, freshTypeVariables, $List*, $List*)},
	{"functionalInterfaceBridges", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Types, functionalInterfaceBridges, $List*, $Symbol$TypeSymbol*)},
	{"getBounds", "(Lcom/sun/tools/javac/code/Type$TypeVar;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$TypeVar;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, getBounds, $List*, $Type$TypeVar*)},
	{"getRetention", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC, $virtualMethod(Types, getRetention, $Attribute$RetentionPolicy*, $Attribute$Compound*)},
	{"getRetention", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC, $virtualMethod(Types, getRetention, $Attribute$RetentionPolicy*, $Symbol$TypeSymbol*)},
	{"giveWarning", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(Types, giveWarning, bool, $Type*, $Type*)},
	{"glb", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, glb, $Type*, $List*)},
	{"glb", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, glb, $Type*, $Type*, $Type*)},
	{"glbFlattened", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(Types, glbFlattened, $Type*, $List*, $Type*)},
	{"hasSameArgs", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, hasSameArgs, bool, $Type*, $Type*)},
	{"hasSameArgs", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Z)Z", nullptr, $PUBLIC, $virtualMethod(Types, hasSameArgs, bool, $Type*, $Type*, bool)},
	{"hasSameArgs", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types$TypeRelation;)Z", nullptr, $PRIVATE, $method(Types, hasSameArgs, bool, $Type*, $Type*, $Types$TypeRelation*)},
	{"hasSameBounds", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type$ForAll;)Z", nullptr, $PUBLIC, $virtualMethod(Types, hasSameBounds, bool, $Type$ForAll*, $Type$ForAll*)},
	{"hashCode", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC, $virtualMethod(Types, hashCode, int32_t, $Type*)},
	{"hashCode", "(Lcom/sun/tools/javac/code/Type;Z)I", nullptr, $PUBLIC, $virtualMethod(Types, hashCode, int32_t, $Type*, bool)},
	{"implementation", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PUBLIC, $virtualMethod(Types, implementation, $Symbol$MethodSymbol*, $Symbol$MethodSymbol*, $Symbol$TypeSymbol*, bool, $Predicate*)},
	{"insert", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Ljava/util/function/BiPredicate;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, insert, $List*, $List*, $Type*, $BiPredicate*)},
	{"insert", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, insert, $List*, $List*, $Type*)},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/Types;", nullptr, $PUBLIC | $STATIC, $staticMethod(Types, instance, Types*, $Context*)},
	{"interfaceCandidates", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC, $virtualMethod(Types, interfaceCandidates, $List*, $Type*, $Symbol$MethodSymbol*)},
	{"interfaces", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, interfaces, $List*, $Type*)},
	{"intersect", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, intersect, $List*, $List*, $List*)},
	{"isArray", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isArray, bool, $Type*)},
	{"isAssignable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isAssignable, bool, $Type*, $Type*)},
	{"isAssignable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isAssignable, bool, $Type*, $Type*, $Warner*)},
	{"isCaptureOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$WildcardType;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isCaptureOf, bool, $Type*, $Type$WildcardType*)},
	{"isCastable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isCastable, bool, $Type*, $Type*)},
	{"isCastable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isCastable, bool, $Type*, $Type*, $Warner*)},
	{"isConvertible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isConvertible, bool, $Type*, $Type*, $Warner*)},
	{"isConvertible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isConvertible, bool, $Type*, $Type*)},
	{"isDerivedRaw", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isDerivedRaw, bool, $Type*)},
	{"isDerivedRaw", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types, isDerivedRaw, bool, $List*)},
	{"isDerivedRawInternal", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isDerivedRawInternal, bool, $Type*)},
	{"isDirectSuperInterface", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isDirectSuperInterface, bool, $Symbol$TypeSymbol*, $Symbol$TypeSymbol*)},
	{"isFunctionalInterface", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isFunctionalInterface, bool, $Symbol$TypeSymbol*)},
	{"isFunctionalInterface", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isFunctionalInterface, bool, $Type*)},
	{"isReifiable", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isReifiable, bool, $Type*)},
	{"isSameType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSameType, bool, $Type*, $Type*)},
	{"isSameTypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types, isSameTypes, bool, $List*, $List*)},
	{"isSameWildcard", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSameWildcard, bool, $Type$WildcardType*, $Type*)},
	{"isSignaturePolymorphic", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSignaturePolymorphic, bool, $Symbol$MethodSymbol*)},
	{"isSubSignature", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSubSignature, bool, $Type*, $Type*)},
	{"isSubSignature", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Z)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSubSignature, bool, $Type*, $Type*, bool)},
	{"isSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC | $FINAL, $method(Types, isSubtype, bool, $Type*, $Type*)},
	{"isSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Z)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSubtype, bool, $Type*, $Type*, bool)},
	{"isSubtypeNoCapture", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC | $FINAL, $method(Types, isSubtypeNoCapture, bool, $Type*, $Type*)},
	{"isSubtypeUnchecked", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSubtypeUnchecked, bool, $Type*, $Type*)},
	{"isSubtypeUnchecked", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSubtypeUnchecked, bool, $Type*, $Type*, $Warner*)},
	{"isSubtypeUnchecked", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)Z", $PUBLIC, $virtualMethod(Types, isSubtypeUnchecked, bool, $Type*, $List*, $Warner*)},
	{"isSubtypeUncheckedInternal", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;ZLcom/sun/tools/javac/util/Warner;)Z", nullptr, $PRIVATE, $method(Types, isSubtypeUncheckedInternal, bool, $Type*, $Type*, bool, $Warner*)},
	{"isSubtypes", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types, isSubtypes, bool, $List*, $List*)},
	{"isSubtypesUnchecked", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)Z", $PUBLIC, $virtualMethod(Types, isSubtypesUnchecked, bool, $List*, $List*, $Warner*)},
	{"isSuperType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isSuperType, bool, $Type*, $Type*)},
	{"isUnbounded", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, isUnbounded, bool, $Type*)},
	{"lambda$areDisjoint$1", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Types, lambda$areDisjoint$1, bool, $Symbol$ClassSymbol*, $Symbol*)},
	{"lambda$closureCollector$3", "(ZLjava/util/function/BiPredicate;)Lcom/sun/tools/javac/code/Types$ClosureHolder;", nullptr, $PRIVATE | $SYNTHETIC, $method(Types, lambda$closureCollector$3, $Types$ClosureHolder*, bool, $BiPredicate*)},
	{"lambda$membersClosure$2", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Types, lambda$membersClosure$2, $String*, $Type*)},
	{"lambda$new$4", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Types, lambda$new$4, bool, $Type*, $Type*)},
	{"lambda$removeWildcards$0", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Types, lambda$removeWildcards$0, bool, $Type*)},
	{"lub", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, lub, $Type*, $List*)},
	{"lub", "([Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Types, lub, $Type*, $TypeArray*)},
	{"makeArrayType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type$ArrayType;", nullptr, $PUBLIC, $virtualMethod(Types, makeArrayType, $Type$ArrayType*, $Type*)},
	{"makeExtendsWildcard", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$TypeVar;)Lcom/sun/tools/javac/code/Type$WildcardType;", nullptr, $PRIVATE, $method(Types, makeExtendsWildcard, $Type$WildcardType*, $Type*, $Type$TypeVar*)},
	{"makeFunctionalInterfaceClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;J)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;J)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", $PUBLIC, $virtualMethod(Types, makeFunctionalInterfaceClass, $Symbol$ClassSymbol*, $Env*, $Name*, $Type*, int64_t)},
	{"makeIntersectionType", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type$IntersectionClassType;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type$IntersectionClassType;", $PUBLIC, $virtualMethod(Types, makeIntersectionType, $Type$IntersectionClassType*, $List*)},
	{"makeIntersectionType", "(Lcom/sun/tools/javac/util/List;Z)Lcom/sun/tools/javac/code/Type$IntersectionClassType;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Z)Lcom/sun/tools/javac/code/Type$IntersectionClassType;", $PUBLIC, $virtualMethod(Types, makeIntersectionType, $Type$IntersectionClassType*, $List*, bool)},
	{"makeSuperWildcard", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$TypeVar;)Lcom/sun/tools/javac/code/Type$WildcardType;", nullptr, $PRIVATE, $method(Types, makeSuperWildcard, $Type$WildcardType*, $Type*, $Type$TypeVar*)},
	{"memberType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, memberType, $Type*, $Type*, $Symbol*)},
	{"membersClosure", "(Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Scope$CompoundScope;", nullptr, $PUBLIC, $virtualMethod(Types, membersClosure, $Scope$CompoundScope*, $Type*, bool)},
	{"merge", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types, merge, $Type*, $Type*, $Type*)},
	{"mergeAbstracts", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Z)Ljava/util/Optional;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;Lcom/sun/tools/javac/code/Type;Z)Ljava/util/Optional<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $virtualMethod(Types, mergeAbstracts, $Optional*, $List*, $Type*, bool)},
	{"newInstances", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, newInstances, $List*, $List*)},
	{"newRound", "()V", nullptr, $PUBLIC, $virtualMethod(Types, newRound, void)},
	{"notSoftSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, notSoftSubtype, bool, $Type*, $Type*)},
	{"overrideEquivalent", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, overrideEquivalent, bool, $Type*, $Type*)},
	{"overridesObjectMethod", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types, overridesObjectMethod, bool, $Symbol$TypeSymbol*, $Symbol*)},
	{"pendingBridges", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", nullptr, $PRIVATE, $method(Types, pendingBridges, bool, $Symbol$ClassSymbol*, $Symbol$TypeSymbol*)},
	{"prune", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC, $virtualMethod(Types, prune, $List*, $List*)},
	{"rank", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC, $virtualMethod(Types, rank, int32_t, $Type*)},
	{"relaxBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types, relaxBound, $Type*, $Type*)},
	{"removeWildcards", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, removeWildcards, $Type*, $Type*)},
	{"resultSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, resultSubtype, bool, $Type*, $Type*, $Warner*)},
	{"returnTypeSubstitutable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Types, returnTypeSubstitutable, bool, $Type*, $Type*)},
	{"returnTypeSubstitutable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Types, returnTypeSubstitutable, bool, $Type*, $Type*, $Type*, $Warner*)},
	{"rewriteQuantifiers", "(Lcom/sun/tools/javac/code/Type;ZZ)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(Types, rewriteQuantifiers, $Type*, $Type*, bool, bool)},
	{"setBounds", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $virtualMethod(Types, setBounds, void, $Type$TypeVar*, $List*)},
	{"setBounds", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Z)V", $PUBLIC, $virtualMethod(Types, setBounds, void, $Type$TypeVar*, $List*, bool)},
	{"sideCast", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PRIVATE, $method(Types, sideCast, bool, $Type*, $Type*, $Warner*)},
	{"sideCastFinal", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PRIVATE, $method(Types, sideCastFinal, bool, $Type*, $Type*, $Warner*)},
	{"skipTypeVars", "(Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, skipTypeVars, $Type*, $Type*, bool)},
	{"subst", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, subst, $List*, $List*, $List*, $List*)},
	{"subst", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, subst, $Type*, $Type*, $List*, $List*)},
	{"substBound", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type$TypeVar;", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type$TypeVar;", $PUBLIC, $virtualMethod(Types, substBound, $Type$TypeVar*, $Type$TypeVar*, $List*, $List*)},
	{"substBounds", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, substBounds, $List*, $List*, $List*, $List*)},
	{"superClosure", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(Types, superClosure, $List*, $Type*, $Type*)},
	{"supertype", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, supertype, $Type*, $Type*)},
	{"toString", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Types, toString, $String*, $Type*, $Locale*)},
	{"toString", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Types, toString, $String*, $Symbol*, $Locale*)},
	{"toString", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Types, toString, $String*, $Type*), nullptr, nullptr, _Types_MethodAnnotations_toString152},
	{"typaramsString", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/String;", $PRIVATE, $method(Types, typaramsString, $String*, $List*)},
	{"unboxedType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, unboxedType, $Type*, $Type*)},
	{"unboxedTypeOrType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, unboxedTypeOrType, $Type*, $Type*)},
	{"union", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Ljava/util/function/BiPredicate;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/function/BiPredicate<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, union$, $List*, $List*, $List*, $BiPredicate*)},
	{"union", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Types, union$, $List*, $List*, $List*)},
	{"upward", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types, upward, $Type*, $Type*, $List*)},
	{"wildLowerBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, wildLowerBound, $Type*, $Type*)},
	{"wildUpperBound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types, wildUpperBound, $Type*, $Type*)},
	{}
};

$InnerClassInfo _Types_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$25", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$DefaultSymbolVisitor", "com.sun.tools.javac.code.Types", "DefaultSymbolVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$DefaultTypeVisitor", "com.sun.tools.javac.code.Types", "DefaultTypeVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$UniqueType", "com.sun.tools.javac.code.Types", "UniqueType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$Rewriter", "com.sun.tools.javac.code.Types", "Rewriter", 0},
	{"com.sun.tools.javac.code.Types$AdaptFailure", "com.sun.tools.javac.code.Types", "AdaptFailure", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$Adapter", "com.sun.tools.javac.code.Types", "Adapter", 0},
	{"com.sun.tools.javac.code.Types$HashCodeVisitor", "com.sun.tools.javac.code.Types", "HashCodeVisitor", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Types$TypePair", "com.sun.tools.javac.code.Types", "TypePair", 0},
	{"com.sun.tools.javac.code.Types$ClosureHolder", "com.sun.tools.javac.code.Types", "ClosureHolder", 0},
	{"com.sun.tools.javac.code.Types$Subst", "com.sun.tools.javac.code.Types", "Subst", $PRIVATE},
	{"com.sun.tools.javac.code.Types$HasSameArgs", "com.sun.tools.javac.code.Types", "HasSameArgs", $PRIVATE},
	{"com.sun.tools.javac.code.Types$MethodFilter", "com.sun.tools.javac.code.Types", "MethodFilter", $PRIVATE},
	{"com.sun.tools.javac.code.Types$CandidatesCache", "com.sun.tools.javac.code.Types", "CandidatesCache", $PUBLIC},
	{"com.sun.tools.javac.code.Types$MembersClosureCache", "com.sun.tools.javac.code.Types", "MembersClosureCache", 0},
	{"com.sun.tools.javac.code.Types$ImplementationCache", "com.sun.tools.javac.code.Types", "ImplementationCache", 0},
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$DescriptorFilter", "com.sun.tools.javac.code.Types", "DescriptorFilter", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
	{"com.sun.tools.javac.code.Types$FunctionDescriptorLookupError", "com.sun.tools.javac.code.Types", "FunctionDescriptorLookupError", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$CaptureScanner", "com.sun.tools.javac.code.Types", "CaptureScanner", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$22", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$21", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$20", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$19", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$18", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$17", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$16", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$15", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$13", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$10", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Types_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types",
	"java.lang.Object",
	nullptr,
	_Types_FieldInfo_,
	_Types_MethodInfo_,
	nullptr,
	nullptr,
	_Types_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types$25,com.sun.tools.javac.code.Types$SignatureGenerator,com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException,com.sun.tools.javac.code.Types$TypeMapping,com.sun.tools.javac.code.Types$MapVisitor,com.sun.tools.javac.code.Types$UnaryVisitor,com.sun.tools.javac.code.Types$TypeRelation,com.sun.tools.javac.code.Types$SimpleVisitor,com.sun.tools.javac.code.Types$DefaultSymbolVisitor,com.sun.tools.javac.code.Types$DefaultTypeVisitor,com.sun.tools.javac.code.Types$UniqueType,com.sun.tools.javac.code.Types$Rewriter,com.sun.tools.javac.code.Types$AdaptFailure,com.sun.tools.javac.code.Types$Adapter,com.sun.tools.javac.code.Types$HashCodeVisitor,com.sun.tools.javac.code.Types$TypePair,com.sun.tools.javac.code.Types$ClosureHolder,com.sun.tools.javac.code.Types$Subst,com.sun.tools.javac.code.Types$Subst$2,com.sun.tools.javac.code.Types$Subst$1,com.sun.tools.javac.code.Types$HasSameArgs,com.sun.tools.javac.code.Types$MethodFilter,com.sun.tools.javac.code.Types$CandidatesCache,com.sun.tools.javac.code.Types$CandidatesCache$Entry,com.sun.tools.javac.code.Types$MembersClosureCache,com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope,com.sun.tools.javac.code.Types$ImplementationCache,com.sun.tools.javac.code.Types$ImplementationCache$Entry,com.sun.tools.javac.code.Types$MostSpecificReturnCheck,com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2,com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1,com.sun.tools.javac.code.Types$DescriptorFilter,com.sun.tools.javac.code.Types$DescriptorCache,com.sun.tools.javac.code.Types$DescriptorCache$Entry,com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor,com.sun.tools.javac.code.Types$DescriptorCache$1,com.sun.tools.javac.code.Types$FunctionDescriptorLookupError,com.sun.tools.javac.code.Types$CaptureScanner,com.sun.tools.javac.code.Types$TypeProjection,com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection,com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection$1,com.sun.tools.javac.code.Types$TypeProjection$2,com.sun.tools.javac.code.Types$TypeProjection$1,com.sun.tools.javac.code.Types$ProjectionKind,com.sun.tools.javac.code.Types$ProjectionKind$2,com.sun.tools.javac.code.Types$ProjectionKind$1,com.sun.tools.javac.code.Types$24,com.sun.tools.javac.code.Types$23,com.sun.tools.javac.code.Types$23$2,com.sun.tools.javac.code.Types$23$1,com.sun.tools.javac.code.Types$22,com.sun.tools.javac.code.Types$21,com.sun.tools.javac.code.Types$20,com.sun.tools.javac.code.Types$19,com.sun.tools.javac.code.Types$18,com.sun.tools.javac.code.Types$17,com.sun.tools.javac.code.Types$16,com.sun.tools.javac.code.Types$15,com.sun.tools.javac.code.Types$14,com.sun.tools.javac.code.Types$13,com.sun.tools.javac.code.Types$12,com.sun.tools.javac.code.Types$11,com.sun.tools.javac.code.Types$10,com.sun.tools.javac.code.Types$9,com.sun.tools.javac.code.Types$8,com.sun.tools.javac.code.Types$7,com.sun.tools.javac.code.Types$6,com.sun.tools.javac.code.Types$5,com.sun.tools.javac.code.Types$4,com.sun.tools.javac.code.Types$3,com.sun.tools.javac.code.Types$2,com.sun.tools.javac.code.Types$1"
};

$Object* allocate$Types($Class* clazz) {
	return $of($alloc(Types));
}

$Context$Key* Types::typesKey = nullptr;
$Types$TypeMapping* Types::newInstanceFun = nullptr;
$Types$HashCodeVisitor* Types::hashCodeVisitor = nullptr;
$Types$HashCodeVisitor* Types::hashCodeStrictVisitor = nullptr;

Types* Types::instance($Context* context) {
	$init(Types);
	$var(Types, instance, $cast(Types, $nc(context)->get(Types::typesKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Types, context));
	}
	return instance;
}

void Types::init$($Context* context) {
	$set(this, warnStack, $List::nil());
	$set(this, isUnbounded$, $new($Types$1, this));
	$set(this, asSub$, $new($Types$2, this));
	$set(this, descCache, $new($Types$DescriptorCache, this));
	$set(this, bridgeFilter, $new($Types$3, this));
	$set(this, isSubtype$, $new($Types$4, this));
	$set(this, isSameTypeVisitor, $new($Types$5, this));
	$set(this, containsType$, $new($Types$6, this));
	$set(this, isCastable$, $new($Types$7, this));
	$set(this, disjointType$, $new($Types$8, this));
	$set(this, cvarLowerBoundMapping, $new($Types$9, this));
	$set(this, isReifiable$, $new($Types$10, this));
	$set(this, elemTypeFun, $new($Types$11, this));
	$set(this, asSuper$, $new($Types$12, this));
	$set(this, memberType$, $new($Types$13, this));
	$set(this, erasure$, $new($Types$14, this));
	$set(this, supertype$, $new($Types$15, this));
	$set(this, interfaces$, $new($Types$16, this));
	$set(this, directSupertypes$, $new($Types$17, this));
	$set(this, isDerivedRawCache, $new($HashMap));
	$set(this, classBound$, $new($Types$18, this));
	$set(this, implCache, $new($Types$ImplementationCache, this));
	$set(this, membersCache, $new($Types$MembersClosureCache, this));
	$set(this, candidatesCache, $new($Types$CandidatesCache, this));
	$set(this, hasSameArgs_strict, $new($Types$HasSameArgs, this, true));
	$set(this, hasSameArgs_nonstrict, $new($Types$HasSameArgs, this, false));
	$set(this, methodWithParameters, $new($Types$21, this));
	$set(this, methodWithThrown, $new($Types$22, this));
	$set(this, methodWithReturn, $new($Types$23, this));
	$set(this, closureCache, $new($HashMap));
	$set(this, basicClosureSkip, static_cast<$BiPredicate*>($new(Types$$Lambda$lambda$new$4)));
	$set(this, mergeCache, $new($HashSet));
	$nc(context)->put(Types::typesKey, $of(this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, names, $Names::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowDefaultMethods = $Source$Feature::DEFAULT_METHODS->allowedInSource(source);
	this->mapCapturesToBounds = $Source$Feature::MAP_CAPTURES_TO_BOUNDS->allowedInSource(source);
	$set(this, chk, $Check::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, capturedName, $nc(this->names)->fromString("<captured wildcard>"_s));
	$set(this, messages, $JavacMessages::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, noWarnings, $new($Warner, nullptr));
}

$Type* Types::wildUpperBound($Type* t) {
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::WILDCARD)) {
		$var($Type$WildcardType, w, $cast($Type$WildcardType, t));
		if (w->isSuperBound()) {
			return w->bound == nullptr ? $nc(this->syms)->objectType : $nc(w->bound)->getUpperBound();
		} else {
			return wildUpperBound(w->type);
		}
	} else {
		return t;
	}
}

$Type* Types::cvarUpperBound($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::TYPEVAR)) {
		$var($Type$TypeVar, v, $cast($Type$TypeVar, t));
		return v->isCaptured() ? cvarUpperBound($(v->getUpperBound())) : static_cast<$Type*>(v);
	} else {
		return t;
	}
}

$Type* Types::wildLowerBound($Type* t) {
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::WILDCARD)) {
		$var($Type$WildcardType, w, $cast($Type$WildcardType, t));
		return w->isExtendsBound() ? $nc(this->syms)->botType : wildLowerBound(w->type);
	} else {
		return t;
	}
}

$Type* Types::cvarLowerBound($Type* t) {
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::TYPEVAR);
	if (var$0 && $nc(($cast($Type$TypeVar, t)))->isCaptured()) {
		return cvarLowerBound($(t->getLowerBound()));
	} else {
		return t;
	}
}

$Type* Types::skipTypeVars($Type* site$renamed, bool capture) {
	$var($Type, site, site$renamed);
	$init($TypeTag);
	while ($nc(site)->hasTag($TypeTag::TYPEVAR)) {
		$assign(site, site->getUpperBound());
	}
	return capture ? this->capture(site) : site;
}

$Type* Types::upward($Type* t, $List* vars) {
	$init($Types$ProjectionKind);
	return $nc(t)->map($$new($Types$TypeProjection, this, vars), $Types$ProjectionKind::UPWARDS);
}

$List* Types::captures($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($Types$CaptureScanner, cs, $new($Types$CaptureScanner, this));
	$var($Set, captures, $new($HashSet));
	cs->visit(t, captures);
	return $List::from(static_cast<$Iterable*>(captures));
}

bool Types::isUnbounded($Type* t) {
	return $nc(($cast($Boolean, $($nc(this->isUnbounded$)->visit(t)))))->booleanValue();
}

$Type* Types::asSub($Type* t, $Symbol* sym) {
	return $cast($Type, $nc(this->asSub$)->visit(t, sym));
}

bool Types::isConvertible($Type* t, $Type* s, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::ERROR)) {
		return true;
	}
	bool tPrimitive = $nc(t)->isPrimitive();
	bool sPrimitive = $nc(s)->isPrimitive();
	if (tPrimitive == sPrimitive) {
		return isSubtypeUnchecked(t, s, warn);
	}
	bool tUndet = t->hasTag($TypeTag::UNDETVAR);
	bool sUndet = s->hasTag($TypeTag::UNDETVAR);
	if (tUndet || sUndet) {
		return tUndet ? isSubtype(t, $(boxedTypeOrType(s))) : isSubtype($(boxedTypeOrType(t)), s);
	}
	return tPrimitive ? isSubtype($nc($(boxedClass(t)))->type, s) : isSubtype($(unboxedType(t)), s);
}

bool Types::isConvertible($Type* t, $Type* s) {
	return isConvertible(t, s, this->noWarnings);
}

$Symbol* Types::findDescriptorSymbol($Symbol$TypeSymbol* origin) {
	return $nc($($nc(this->descCache)->get(origin)))->getSymbol();
}

$Type* Types::findDescriptorType($Type* origin) {
	return $nc($($nc(this->descCache)->get($nc(origin)->tsym)))->getType(origin);
}

bool Types::isFunctionalInterface($Symbol$TypeSymbol* tsym) {
	try {
		findDescriptorSymbol(tsym);
		return true;
	} catch ($Types$FunctionDescriptorLookupError& ex) {
		return false;
	}
	$shouldNotReachHere();
}

bool Types::isFunctionalInterface($Type* site) {
	try {
		findDescriptorType(site);
		return true;
	} catch ($Types$FunctionDescriptorLookupError& ex) {
		return false;
	}
	$shouldNotReachHere();
}

$Type* Types::removeWildcards($Type* site) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(site)->getTypeArguments()))->stream()))->anyMatch(static_cast<$Predicate*>($$new(Types$$Lambda$lambda$removeWildcards$0$1)))) {
		$var($List, actuals, site->getTypeArguments());
		$var($List, formals, $nc($nc(site->tsym)->type)->getTypeArguments());
		$var($ListBuffer, targs, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc(formals)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, formal, $cast($Type, i$->next()));
				{
					$var($Type, actual, $cast($Type, $nc(actuals)->head));
					$var($Type, bound, $nc(formal)->getUpperBound());
					$init($TypeTag);
					if ($nc(($cast($Type, actuals->head)))->hasTag($TypeTag::WILDCARD)) {
						$var($Type$WildcardType, wt, $cast($Type$WildcardType, actual));
						if ($nc(bound)->containsAny(formals)) {
							targs->add($nc(wt)->type);
						} else {
							$init($Types$25);
							switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc(($nc(wt)->kind))->ordinal())) {
							case 3:
								{
									targs->add(bound);
									break;
								}
							case 1:
								{
									targs->add($(glb(bound, wt->type)));
									break;
								}
							case 2:
								{
									targs->add(wt->type);
									break;
								}
							default:
								{
									$Assert::error("Cannot get here!"_s);
								}
							}
						}
					} else {
						targs->add(actual);
					}
					$assign(actuals, actuals->tail);
				}
			}
		}
		return subst($nc(site->tsym)->type, formals, $(targs->toList()));
	} else {
		return site;
	}
}

$Symbol$ClassSymbol* Types::makeFunctionalInterfaceClass($Env* env, $Name* name, $Type* target, int64_t cflags) {
	$useLocalCurrentObjectStackCache();
	if (target == nullptr || target == $nc(this->syms)->unknownType) {
		return nullptr;
	}
	$var($Symbol, descSym, findDescriptorSymbol($nc(target)->tsym));
	$var($Type, descType, findDescriptorType(target));
	$var($Symbol$ClassSymbol, csym, $new($Symbol$ClassSymbol, cflags, name, $($nc($nc($nc(env)->enclClass)->sym)->outermostClass())));
	$init($Symbol$Completer);
	$set(csym, completer, $Symbol$Completer::NULL_COMPLETER);
	$set(csym, members_field, $Scope$WriteableScope::create(csym));
	$var($Symbol$MethodSymbol, instDescSym, $new($Symbol$MethodSymbol, $nc(descSym)->flags(), descSym->name, descType, csym));
	$nc(csym->members_field)->enter(instDescSym);
	$init($Type);
	$var($Type$ClassType, ctype, $new($Type$ClassType, $Type::noType, $($List::nil()), csym));
	$set(ctype, supertype_field, $nc(this->syms)->objectType);
	$set(ctype, interfaces_field, $nc(target)->isIntersection() ? directSupertypes(target) : $List::of(target));
	$set(csym, type, ctype);
	$set(csym, sourcefile, $nc(($cast($Symbol$ClassSymbol, csym->owner)))->sourcefile);
	return csym;
}

$List* Types::functionalInterfaceBridges($Symbol$TypeSymbol* origin) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(isFunctionalInterface(origin));
	$var($Symbol, descSym, findDescriptorSymbol(origin));
	$var($Scope$CompoundScope, members, membersClosure($nc(origin)->type, false));
	$var($ListBuffer, overridden, $new($ListBuffer));
	bool outer$continue = false;
	{
		$var($Iterator, i$, $nc($($nc(members)->getSymbolsByName($nc(descSym)->name, this->bridgeFilter)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, m2, $cast($Symbol, i$->next()));
			{
				if (m2 == descSym) {
					continue;
				} else if ($nc(descSym)->overrides(m2, origin, this, false)) {
					{
						$var($Iterator, i$, overridden->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol, m3, $cast($Symbol, i$->next()));
							{
								$var($Type, var$1, $nc(m3)->erasure(this));
								bool var$0 = isSameType(var$1, $($nc(m2)->erasure(this)));
								if (!var$0) {
									bool var$2 = $nc(m3)->overrides(m2, origin, this, false);
									if (var$2) {
										bool var$3 = pendingBridges($cast($Symbol$ClassSymbol, origin), $(m3->enclClass()));
										var$2 = (var$3 || ($nc(($cast($Symbol$MethodSymbol, m2)))->binaryImplementation($cast($Symbol$ClassSymbol, m3->owner), this) != nullptr));
									}
									var$0 = (var$2);
								}
								if (var$0) {
									outer$continue = true;
									break;
								}
							}
						}
						if (outer$continue) {
							outer$continue = false;
							continue;
						}
					}
					overridden->add(m2);
				}
			}
		}
	}
	return overridden->toList();
}

bool Types::pendingBridges($Symbol$ClassSymbol* origin, $Symbol$TypeSymbol* s) {
	$useLocalCurrentObjectStackCache();
	$init($JavaFileObject$Kind);
	bool var$0 = $nc(origin)->classfile != nullptr && $nc(origin->classfile)->getKind() == $JavaFileObject$Kind::CLASS;
	if (var$0 && $nc(this->enter)->getEnv(origin) == nullptr) {
		return false;
	}
	if ($equals(origin, s)) {
		return true;
	}
	{
		$var($Iterator, i$, $nc($(interfaces($nc(origin)->type)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if (pendingBridges($cast($Symbol$ClassSymbol, $nc(t)->tsym), s)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool Types::isSubtypeUnchecked($Type* t, $Type* s) {
	return isSubtypeUnchecked(t, s, this->noWarnings);
}

bool Types::isSubtypeUnchecked($Type* t, $Type* s, $Warner* warn) {
	bool result = isSubtypeUncheckedInternal(t, s, true, warn);
	if (result) {
		checkUnsafeVarargsConversion(t, s, warn);
	}
	return result;
}

bool Types::isSubtypeUncheckedInternal($Type* t, $Type* s, bool capture, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::ARRAY);
	if (var$0 && $nc(s)->hasTag($TypeTag::ARRAY)) {
		if ($nc($nc(($cast($Type$ArrayType, t)))->elemtype)->isPrimitive()) {
			$var($Type, var$1, elemtype(t));
			return isSameType(var$1, $(elemtype(s)));
		} else {
			$var($Type, var$2, elemtype(t));
			return isSubtypeUncheckedInternal(var$2, $(elemtype(s)), false, warn);
		}
	} else if (isSubtype(t, s, capture)) {
		return true;
	} else {
		if (t->hasTag($TypeTag::TYPEVAR)) {
			return isSubtypeUncheckedInternal($(t->getUpperBound()), s, false, warn);
		} else if (!s->isRaw()) {
			$var($Type, t2, asSuper(t, s->tsym));
			if (t2 != nullptr && t2->isRaw()) {
				if (isReifiable(s)) {
					$init($Lint$LintCategory);
					$nc(warn)->silentWarn($Lint$LintCategory::UNCHECKED);
				} else {
					$init($Lint$LintCategory);
					$nc(warn)->warn($Lint$LintCategory::UNCHECKED);
				}
				return true;
			}
		}
	}
	return false;
}

void Types::checkUnsafeVarargsConversion($Type* t, $Type* s, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = !$nc(t)->hasTag($TypeTag::ARRAY);
	if (var$0 || isReifiable(t)) {
		return;
	}
	$var($Type$ArrayType, from, $cast($Type$ArrayType, t));
	bool shouldWarn = false;
	$init($Types$25);
	{
		$var($Type$ArrayType, to, nullptr)
		switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(s)->getTag())))->ordinal())) {
		case 1:
			{
				$assign(to, $cast($Type$ArrayType, s));
				bool var$2 = $nc(from)->isVarargs();
				bool var$1 = var$2 && !$nc(to)->isVarargs();
				shouldWarn = var$1 && !isReifiable(from);
				break;
			}
		case 2:
			{
				shouldWarn = $nc(from)->isVarargs();
				break;
			}
		}
	}
	if (shouldWarn) {
		$init($Lint$LintCategory);
		$nc(warn)->warn($Lint$LintCategory::VARARGS);
	}
}

bool Types::isSubtype($Type* t, $Type* s) {
	return isSubtype(t, s, true);
}

bool Types::isSubtypeNoCapture($Type* t, $Type* s) {
	return isSubtype(t, s, false);
}

bool Types::isSubtype($Type* t, $Type* s, bool capture) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->equalsIgnoreMetadata(s)) {
		return true;
	}
	if ($nc(s)->isPartial()) {
		return isSuperType(s, t);
	}
	if ($nc(s)->isCompound()) {
		{
			$var($Iterator, i$, $nc($($nc($(interfaces(s)))->prepend($(supertype(s)))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, s2, $cast($Type, i$->next()));
				{
					if (!isSubtype(t, s2, capture)) {
						return false;
					}
				}
			}
		}
		return true;
	}
	$init($TypeTag);
	bool var$0 = !$nc(t)->hasTag($TypeTag::UNDETVAR);
	if (var$0 && !t->isCompound()) {
		$var($Type, lower, cvarLowerBound($(wildLowerBound(s))));
		if (s != lower && !$nc(lower)->hasTag($TypeTag::BOT)) {
			return isSubtype(capture ? $(this->capture(t)) : t, lower, false);
		}
	}
	return $nc(($cast($Boolean, $($nc(this->isSubtype$)->visit(capture ? $(this->capture(t)) : t, s)))))->booleanValue();
}

bool Types::isSubtypeUnchecked($Type* t, $List* ts, $Warner* warn) {
	{
		$var($List, l, ts);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (!isSubtypeUnchecked(t, $cast($Type, l->head), warn)) {
				return false;
			}
		}
	}
	return true;
}

bool Types::isSubtypes($List* ts$renamed, $List* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while ($nc(ts)->tail != nullptr && $nc(ss)->tail != nullptr && isSubtype($cast($Type, ts->head), $cast($Type, ss->head))) {
		$assign(ts, ts->tail);
		$assign(ss, ss->tail);
	}
	return $nc(ts)->tail == nullptr && $nc(ss)->tail == nullptr;
}

bool Types::isSubtypesUnchecked($List* ts$renamed, $List* ss$renamed, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while ($nc(ts)->tail != nullptr && $nc(ss)->tail != nullptr && isSubtypeUnchecked($cast($Type, ts->head), $cast($Type, ss->head), warn)) {
		$assign(ts, ts->tail);
		$assign(ss, ss->tail);
	}
	return $nc(ts)->tail == nullptr && $nc(ss)->tail == nullptr;
}

bool Types::isSuperType($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 16:
		{
			return true;
		}
	case 17:
		{
			{
				$var($Type$UndetVar, undet, $cast($Type$UndetVar, t));
				$init($TypeTag);
				bool var$0 = t == s || undet->qtype == s || $nc(s)->hasTag($TypeTag::ERROR);
				if (var$0 || $nc(s)->hasTag($TypeTag::BOT)) {
					return true;
				}
				$init($Type$UndetVar$InferenceBound);
				undet->addBound($Type$UndetVar$InferenceBound::LOWER, s, this);
				return true;
			}
		}
	default:
		{
			return isSubtype(s, t);
		}
	}
}

bool Types::isSameTypes($List* ts$renamed, $List* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while ($nc(ts)->tail != nullptr && $nc(ss)->tail != nullptr && isSameType($cast($Type, ts->head), $cast($Type, ss->head))) {
		$assign(ts, ts->tail);
		$assign(ss, ss->tail);
	}
	return $nc(ts)->tail == nullptr && $nc(ss)->tail == nullptr;
}

bool Types::isSignaturePolymorphic($Symbol$MethodSymbol* msym) {
	$var($List, argtypes, $nc($nc(msym)->type)->getParameterTypes());
	bool var$0 = ((int64_t)(msym->flags_field & (uint64_t)(int64_t)256)) != 0 && ($equals(msym->owner, $nc($nc(this->syms)->methodHandleType)->tsym) || $equals(msym->owner, $nc($nc(this->syms)->varHandleType)->tsym)) && $nc(argtypes)->length() == 1;
	$init($TypeTag);
	return var$0 && $nc(($cast($Type, argtypes->head)))->hasTag($TypeTag::ARRAY) && $nc($nc(($cast($Type$ArrayType, argtypes->head)))->elemtype)->tsym == $nc($nc(this->syms)->objectType)->tsym;
}

bool Types::isSameType($Type* t, $Type* s) {
	return $nc(($cast($Boolean, $($nc(this->isSameTypeVisitor)->visit(t, s)))))->booleanValue();
}

bool Types::containedBy($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 17:
		{
			$init($TypeTag);
			if ($nc(s)->hasTag($TypeTag::WILDCARD)) {
				$var($Type$UndetVar, undetvar, $cast($Type$UndetVar, t));
				$var($Type$WildcardType, wt, $cast($Type$WildcardType, s));
				switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((wt->kind))->ordinal())) {
				case 3:
					{
						break;
					}
				case 1:
					{
						{
							$var($Type, bound, wildUpperBound(s));
							$init($Type$UndetVar$InferenceBound);
							undetvar->addBound($Type$UndetVar$InferenceBound::UPPER, bound, this);
							break;
						}
					}
				case 2:
					{
						{
							$var($Type, bound, wildLowerBound(s));
							$init($Type$UndetVar$InferenceBound);
							undetvar->addBound($Type$UndetVar$InferenceBound::LOWER, bound, this);
							break;
						}
					}
				}
				return true;
			} else {
				return isSameType(t, s);
			}
		}
	case 16:
		{
			return true;
		}
	default:
		{
			return containsType(s, t);
		}
	}
}

bool Types::containsType($List* ts$renamed, $List* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while (true) {
		bool var$1 = $nc(ts)->nonEmpty();
		bool var$0 = var$1 && $nc(ss)->nonEmpty();
		if (!(var$0 && containsType($cast($Type, ts->head), $cast($Type, ss->head)))) {
			break;
		}
		{
			$assign(ts, ts->tail);
			$assign(ss, ss->tail);
		}
	}
	bool var$2 = $nc(ts)->isEmpty();
	return var$2 && $nc(ss)->isEmpty();
}

bool Types::containsType($Type* t, $Type* s) {
	return $nc(($cast($Boolean, $($nc(this->containsType$)->visit(t, s)))))->booleanValue();
}

bool Types::isCaptureOf($Type* s, $Type$WildcardType* t) {
	$init($TypeTag);
	bool var$0 = !$nc(s)->hasTag($TypeTag::TYPEVAR);
	if (var$0 || !$nc(($cast($Type$TypeVar, s)))->isCaptured()) {
		return false;
	}
	return isSameWildcard(t, $nc(($cast($Type$CapturedType, s)))->wildcard);
}

bool Types::isSameWildcard($Type$WildcardType* t, $Type* s) {
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		return false;
	}
	$var($Type$WildcardType, w, $cast($Type$WildcardType, s));
	return $nc(w)->kind == $nc(t)->kind && w->type == t->type;
}

bool Types::containsTypeEquivalent($List* ts$renamed, $List* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while (true) {
		bool var$1 = $nc(ts)->nonEmpty();
		bool var$0 = var$1 && $nc(ss)->nonEmpty();
		if (!(var$0 && containsTypeEquivalent($cast($Type, ts->head), $cast($Type, ss->head)))) {
			break;
		}
		{
			$assign(ts, ts->tail);
			$assign(ss, ss->tail);
		}
	}
	bool var$2 = $nc(ts)->isEmpty();
	return var$2 && $nc(ss)->isEmpty();
}

bool Types::isCastable($Type* t, $Type* s) {
	return isCastable(t, s, this->noWarnings);
}

bool Types::isCastable($Type* t$renamed, $Type* s, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	if (t == s) {
		return true;
	}
	bool var$0 = $nc(t)->isPrimitive();
	if (var$0 != $nc(s)->isPrimitive()) {
		$assign(t, skipTypeVars(t, false));
		bool var$1 = isConvertible(t, s, warn);
		if (!var$1) {
			bool var$2 = s->isPrimitive();
			var$1 = (var$2 && isSubtype($nc($(boxedClass(s)))->type, t));
		}
		return (var$1);
	}
	bool result = false;
	if (!$equals(warn, $nc(this->warnStack)->head)) {
		{
			$var($Throwable, var$3, nullptr);
			try {
				$set(this, warnStack, $nc(this->warnStack)->prepend(warn));
				checkUnsafeVarargsConversion(t, s, warn);
				result = $nc(($cast($Boolean, $($nc(this->isCastable$)->visit(t, s)))))->booleanValue();
			} catch ($Throwable& var$4) {
				$assign(var$3, var$4);
			} /*finally*/ {
				$set(this, warnStack, $nc(this->warnStack)->tail);
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	} else {
		result = $nc(($cast($Boolean, $($nc(this->isCastable$)->visit(t, s)))))->booleanValue();
	}
	$init($TypeTag);
	bool var$8 = result && $nc(t)->hasTag($TypeTag::CLASS);
	$init($Kinds$KindSelector);
	bool var$7 = var$8 && $nc($nc(t->tsym)->kind)->matches($Kinds$KindSelector::TYP);
	bool var$6 = var$7 && $nc(s)->hasTag($TypeTag::CLASS);
	bool var$5 = var$6 && $nc($nc(s->tsym)->kind)->matches($Kinds$KindSelector::TYP);
	if (var$5) {
		bool var$9 = $nc(t->tsym)->isSealed();
		var$5 = (var$9 || $nc(s->tsym)->isSealed());
	}
	if (var$5) {
		bool var$10 = $nc(t)->isCompound();
		return (var$10 || $nc(s)->isCompound()) ? false : !areDisjoint($cast($Symbol$ClassSymbol, $nc(t)->tsym), $cast($Symbol$ClassSymbol, $nc(s)->tsym));
	}
	return result;
}

bool Types::areDisjoint($Symbol$ClassSymbol* ts, $Symbol$ClassSymbol* ss) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, erasure($nc(ts)->type));
	if (isSubtype(var$0, $(erasure($nc(ss)->type)))) {
		return false;
	}
	bool var$2 = $nc(ts)->isInterface();
	bool var$1 = var$2 == $nc(ss)->isInterface();
	if (var$1) {
		$var($Type, var$3, erasure(ss->type));
		var$1 = isSubtype(var$3, $(erasure(ts->type)));
	}
	if (var$1) {
		return false;
	}
	bool var$4 = $nc(ts)->isInterface();
	if (var$4 && !$nc(ss)->isInterface()) {
		return areDisjoint(ss, ts);
	}
	bool var$5 = !$nc(ts)->isInterface();
	if (var$5 && ts->isFinal()) {
		return true;
	}
	bool var$6 = $nc(ts)->isSealed();
	if (var$6 || $nc(ss)->isSealed()) {
		$var($Symbol$ClassSymbol, sealedOne, $nc(ts)->isSealed() ? ts : ss);
		$var($Symbol$ClassSymbol, other, sealedOne == ts ? ss : ts);
		return $nc($($nc($nc(sealedOne)->permitted)->stream()))->allMatch(static_cast<$Predicate*>($$new(Types$$Lambda$lambda$areDisjoint$1$2, this, other)));
	}
	return false;
}

bool Types::disjointTypes($List* ts$renamed, $List* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, ss, ss$renamed);
	$var($List, ts, ts$renamed);
	while ($nc(ts)->tail != nullptr && $nc(ss)->tail != nullptr) {
		if (disjointType($cast($Type, ts->head), $cast($Type, ss->head))) {
			return true;
		}
		$assign(ts, ts->tail);
		$assign(ss, ss->tail);
	}
	return false;
}

bool Types::disjointType($Type* t, $Type* s) {
	return $nc(($cast($Boolean, $($nc(this->disjointType$)->visit(t, s)))))->booleanValue();
}

$List* Types::cvarLowerBounds($List* ts) {
	return $nc(ts)->map(this->cvarLowerBoundMapping);
}

bool Types::notSoftSubtype($Type* t, $Type* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, s, s$renamed);
	if (t == s) {
		return false;
	}
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::TYPEVAR)) {
		$var($Type$TypeVar, tv, $cast($Type$TypeVar, t));
		$var($Type, var$0, tv->getUpperBound());
		return !isCastable(var$0, $(relaxBound(s)), this->noWarnings);
	}
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		$assign(s, cvarUpperBound(s));
	}
	return !isSubtype(t, $(relaxBound(s)));
}

$Type* Types::relaxBound($Type* t) {
	$init($TypeTag);
	return ($nc(t)->hasTag($TypeTag::TYPEVAR)) ? rewriteQuantifiers($(skipTypeVars(t, false)), true, true) : t;
}

bool Types::isReifiable($Type* t) {
	return $nc(($cast($Boolean, $($nc(this->isReifiable$)->visit(t)))))->booleanValue();
}

bool Types::isArray($Type* t$renamed) {
	$var($Type, t, t$renamed);
	$init($TypeTag);
	while ($nc(t)->hasTag($TypeTag::WILDCARD)) {
		$assign(t, wildUpperBound(t));
	}
	return $nc(t)->hasTag($TypeTag::ARRAY);
}

$Type* Types::elemtype($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 14:
		{
			return elemtype($(wildUpperBound(t)));
		}
	case 1:
		{
			return $nc(($cast($Type$ArrayType, t)))->elemtype;
		}
	case 18:
		{
			return elemtype($nc(($cast($Type$ForAll, t)))->qtype);
		}
	case 16:
		{
			return t;
		}
	default:
		{
			return nullptr;
		}
	}
}

$Type* Types::elemtypeOrType($Type* t) {
	$var($Type, elemtype, this->elemtype(t));
	return elemtype != nullptr ? elemtype : t;
}

int32_t Types::dimensions($Type* t$renamed) {
	$var($Type, t, t$renamed);
	int32_t result = 0;
	$init($TypeTag);
	while ($nc(t)->hasTag($TypeTag::ARRAY)) {
		++result;
		$assign(t, elemtype(t));
	}
	return result;
}

$Type$ArrayType* Types::makeArrayType($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::VOID);
	if (var$0 || $nc(t)->hasTag($TypeTag::PACKAGE)) {
		$Assert::error($$str({"Type t must not be a VOID or PACKAGE type, "_s, $(t->toString())}));
	}
	return $new($Type$ArrayType, t, $nc(this->syms)->arrayClass);
}

$Type* Types::asSuper($Type* t, $Symbol* sym) {
	if ($nc(sym)->type == $nc(this->syms)->objectType) {
		return $nc(this->syms)->objectType;
	}
	return $cast($Type, $nc(this->asSuper$)->visit(t, sym));
}

$Type* Types::asOuterSuper($Type* t$renamed, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 2:
		{
			do {
				$var($Type, s, asSuper(t, sym));
				if (s != nullptr) {
					return s;
				}
				$assign(t, t->getEnclosingType());
			$init($TypeTag);
			} while (t->hasTag($TypeTag::CLASS));
			return nullptr;
		}
	case 1:
		{
			return isSubtype(t, $nc(sym)->type) ? $nc(sym)->type : ($Type*)nullptr;
		}
	case 12:
		{
			return asSuper(t, sym);
		}
	case 16:
		{
			return t;
		}
	default:
		{
			return nullptr;
		}
	}
}

$Type* Types::asEnclosingSuper($Type* t$renamed, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 2:
		{
			do {
				$var($Type, s, asSuper(t, sym));
				if (s != nullptr) {
					return s;
				}
				$var($Type, outer, t->getEnclosingType());
				$init($TypeTag);
				$assign(t, ($nc(outer)->hasTag($TypeTag::CLASS)) ? outer : ($nc($nc(t->tsym)->owner)->enclClass() != nullptr) ? $nc($($nc($nc(t->tsym)->owner)->enclClass()))->type : static_cast<$Type*>($Type::noType));
			$init($TypeTag);
			} while (t->hasTag($TypeTag::CLASS));
			return nullptr;
		}
	case 1:
		{
			return isSubtype(t, $nc(sym)->type) ? $nc(sym)->type : ($Type*)nullptr;
		}
	case 12:
		{
			return asSuper(t, sym);
		}
	case 16:
		{
			return t;
		}
	default:
		{
			return nullptr;
		}
	}
}

$Type* Types::memberType($Type* t, $Symbol* sym) {
	return ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) != 0 ? $nc(sym)->type : $cast($Type, $nc(this->memberType$)->visit(t, sym));
}

bool Types::isAssignable($Type* t, $Type* s) {
	return isAssignable(t, s, this->noWarnings);
}

bool Types::isAssignable($Type* t, $Type* s, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::ERROR)) {
		return true;
	}
	bool var$0 = $nc($($nc(t)->getTag()))->isSubRangeOf($TypeTag::INT);
	if (var$0 && t->constValue() != nullptr) {
		int32_t value = $nc(($cast($Number, $(t->constValue()))))->intValue();
		$init($Types$25);
		switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(s)->getTag())))->ordinal())) {
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{
				if ($nc($(s->getTag()))->checkRange(value)) {
					return true;
				}
				break;
			}
		case 2:
			{
				switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc($(unboxedType(s)))->getTag())))->ordinal())) {
				case 3:
					{}
				case 4:
					{}
				case 5:
					{
						return isAssignable(t, $(unboxedType(s)), warn);
					}
				}
				break;
			}
		}
	}
	return isConvertible(t, s, warn);
}

$Type* Types::erasure($Type* t) {
	return eraseNotNeeded(t) ? t : erasure(t, false);
}

bool Types::eraseNotNeeded($Type* t) {
	return ($nc(t)->isPrimitive()) || ($nc($nc(this->syms)->stringType)->tsym == $nc(t)->tsym);
}

$Type* Types::erasure($Type* t, bool recurse) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isPrimitive()) {
		return t;
	} else {
		$var($Type, out, $cast($Type, $nc(this->erasure$)->visit(t, $($Boolean::valueOf(recurse)))));
		return out;
	}
}

$List* Types::erasure($List* ts) {
	return $nc(this->erasure$)->visit(ts, $($of($Boolean::valueOf(false))));
}

$Type* Types::erasureRecursive($Type* t) {
	return erasure(t, true);
}

$List* Types::erasureRecursive($List* ts) {
	return $nc(this->erasure$)->visit(ts, $($of($Boolean::valueOf(true))));
}

$Type$IntersectionClassType* Types::makeIntersectionType($List* bounds) {
	return makeIntersectionType(bounds, $nc($nc(($cast($Type, $nc(bounds)->head)))->tsym)->isInterface());
}

$Type$IntersectionClassType* Types::makeIntersectionType($List* bounds$renamed, bool allInterfaces) {
	$useLocalCurrentObjectStackCache();
	$var($List, bounds, bounds$renamed);
	$Assert::check($nc(bounds)->nonEmpty());
	$var($Type, firstExplicitBound, $cast($Type, $nc(bounds)->head));
	if (allInterfaces) {
		$assign(bounds, bounds->prepend($nc(this->syms)->objectType));
	}
	$init($Type);
	$var($Symbol$ClassSymbol, bc, $new($Symbol$ClassSymbol, (((1024 | 1) | 4096) | 0x01000000) | 0x40000000, $Type::moreInfo ? $($nc(this->names)->fromString($(bounds->toString()))) : $nc(this->names)->empty, nullptr, $nc(this->syms)->noSymbol));
	$var($Type$IntersectionClassType, intersectionType, $new($Type$IntersectionClassType, bounds, bc, allInterfaces));
	$set(bc, type, intersectionType);
	$init($TypeTag);
	$set(bc, erasure_field, ($nc(($cast($Type, bounds->head)))->hasTag($TypeTag::TYPEVAR)) ? $nc(this->syms)->objectType : erasure(firstExplicitBound));
	$set(bc, members_field, $Scope$WriteableScope::create(bc));
	return intersectionType;
}

$Type* Types::supertype($Type* t) {
	return $cast($Type, $nc(this->supertype$)->visit(t));
}

$List* Types::interfaces($Type* t) {
	return $cast($List, $nc(this->interfaces$)->visit(t));
}

$List* Types::directSupertypes($Type* t) {
	return $cast($List, $nc(this->directSupertypes$)->visit(t));
}

bool Types::isDirectSuperInterface($Symbol$TypeSymbol* isym, $Symbol$TypeSymbol* origin) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(interfaces($nc(origin)->type)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, i2, $cast($Type, i$->next()));
			{
				if (isym == $nc(i2)->tsym) {
					return true;
				}
			}
		}
	}
	return false;
}

bool Types::isDerivedRaw($Type* t) {
	$var($Boolean, result, $cast($Boolean, $nc(this->isDerivedRawCache)->get(t)));
	if (result == nullptr) {
		$assign(result, $Boolean::valueOf(isDerivedRawInternal(t)));
		$nc(this->isDerivedRawCache)->put(t, result);
	}
	return $nc(result)->booleanValue();
}

bool Types::isDerivedRawInternal($Type* t) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isErroneous()) {
		return false;
	}
	bool var$1 = $nc(t)->isRaw();
	if (!var$1) {
		bool var$2 = !$equals(supertype(t), $Type::noType);
		var$1 = var$2 && isDerivedRaw($(supertype(t)));
	}
	bool var$0 = var$1;
	return var$0 || isDerivedRaw($(interfaces(t)));
}

bool Types::isDerivedRaw($List* ts) {
	$var($List, l, ts);
	while (true) {
		bool var$0 = $nc(l)->nonEmpty();
		if (!(var$0 && !isDerivedRaw($cast($Type, l->head)))) {
			break;
		}
		{
			$assign(l, l->tail);
		}
	}
	return $nc(l)->nonEmpty();
}

void Types::setBounds($Type$TypeVar* t, $List* bounds) {
	setBounds(t, bounds, $nc($nc(($cast($Type, $nc(bounds)->head)))->tsym)->isInterface());
}

void Types::setBounds($Type$TypeVar* t, $List* bounds, bool allInterfaces) {
	$nc(t)->setUpperBound($nc($nc(bounds)->tail)->isEmpty() ? $cast($Type, $nc(bounds)->head) : $(static_cast<$Type*>(makeIntersectionType(bounds, allInterfaces))));
	t->rank_field = -1;
}

$List* Types::getBounds($Type$TypeVar* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($($nc(t)->getUpperBound()))->hasTag($TypeTag::NONE)) {
		return $List::nil();
	} else {
		bool var$1 = $nc($(t->getUpperBound()))->isErroneous();
		if (var$1 || !$nc($(t->getUpperBound()))->isCompound()) {
			return $List::of($(t->getUpperBound()));
		} else if (((int64_t)($nc($nc($(erasure(static_cast<$Type*>(t))))->tsym)->flags() & (uint64_t)(int64_t)512)) == 0) {
			return $nc($(interfaces(t)))->prepend($(supertype(t)));
		} else {
			return interfaces(t);
		}
	}
}

$Type* Types::classBound($Type* t) {
	return $cast($Type, $nc(this->classBound$)->visit(t));
}

bool Types::isSubSignature($Type* t, $Type* s) {
	return isSubSignature(t, s, true);
}

bool Types::isSubSignature($Type* t, $Type* s, bool strict) {
	bool var$0 = hasSameArgs(t, s, strict);
	return var$0 || hasSameArgs(t, $(erasure(s)), strict);
}

bool Types::overrideEquivalent($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = hasSameArgs(t, s);
	bool var$0 = var$1 || hasSameArgs(t, $(erasure(s)));
	return var$0 || hasSameArgs($(erasure(t)), s);
}

bool Types::overridesObjectMethod($Symbol$TypeSymbol* origin, $Symbol* msym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc($nc($nc(this->syms)->objectType)->tsym)->members()))->getSymbolsByName($nc(msym)->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc(msym)->overrides(sym, origin, this, true)) {
					return true;
				}
			}
		}
	}
	return false;
}

$Optional* Types::mergeAbstracts($List* ambiguousInOrder, $Type* site, bool sigCheck) {
	$useLocalCurrentObjectStackCache();
	bool shouldErase = false;
	$var($List, erasedParams, $nc($($nc(($cast($Symbol, $nc(ambiguousInOrder)->head)))->erasure(this)))->getParameterTypes());
	{
		$var($Iterator, i$, ambiguousInOrder->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				bool var$0 = ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)1024)) == 0;
				if (var$0 || (sigCheck && !isSameTypes(erasedParams, $($nc($($nc(s)->erasure(this)))->getParameterTypes())))) {
					return $Optional::empty();
				} else {
					$init($TypeTag);
					if ($nc($nc(s)->type)->hasTag($TypeTag::FORALL)) {
						shouldErase = true;
					}
				}
			}
		}
	}
	{
		$var($Types$MostSpecificReturnCheckArray, arr$, $Types$MostSpecificReturnCheck::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Types$MostSpecificReturnCheck* mostSpecificReturnCheck = arr$->get(i$);
			{
				bool outer$continue = false;
				{
					$var($Iterator, i$, ambiguousInOrder->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, s, $cast($Symbol, i$->next()));
						{
							$var($Type, mt, memberType(site, s));
							$var($List, allThrown, $nc(mt)->getThrownTypes());
							{
								$var($Iterator, i$, ambiguousInOrder->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Symbol, s2, $cast($Symbol, i$->next()));
									{
										if (s != s2) {
											$var($Type, mt2, memberType(site, s2));
											bool var$1 = !isSubSignature(mt, mt2);
											if (var$1 || !$nc(mostSpecificReturnCheck)->test(mt, mt2, this)) {
												outer$continue = true;
												break;
											} else {
												$var($List, thrownTypes2, $nc(mt2)->getThrownTypes());
												$init($TypeTag);
												if (!mt->hasTag($TypeTag::FORALL) && shouldErase) {
													$assign(thrownTypes2, erasure(thrownTypes2));
												} else {
													if (mt->hasTag($TypeTag::FORALL)) {
														$Assert::check(mt2->hasTag($TypeTag::FORALL));
														$var($List, var$2, thrownTypes2);
														$var($List, var$3, mt2->getTypeArguments());
														$assign(thrownTypes2, subst(var$2, var$3, $(mt->getTypeArguments())));
													}
												}
												$assign(allThrown, $nc(this->chk)->intersect(allThrown, thrownTypes2));
											}
										}
									}
								}
								if (outer$continue) {
									outer$continue = false;
									continue;
								}
							}
							$var($Optional, var$4, nullptr);
							if (allThrown == mt->getThrownTypes()) {
								$assign(var$4, $Optional::of(s));
							} else {
								int64_t var$5 = $nc(s)->flags();
								$var($Name, var$6, s->name);
								$assign(var$4, $Optional::of($$new($Types$19, this, var$5, var$6, $(createMethodTypeWithThrown(s->type, allThrown)), s->owner, s)));
							}
							return var$4;
						}
					}
				}
			}
		}
	}
	return $Optional::empty();
}

$Symbol$MethodSymbol* Types::implementation($Symbol$MethodSymbol* ms, $Symbol$TypeSymbol* origin, bool checkResult, $Predicate* implFilter) {
	return $nc(this->implCache)->get(ms, origin, checkResult, implFilter);
}

$Scope$CompoundScope* Types::membersClosure($Type* site, bool skipInterface) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$CompoundScope, cs, $cast($Scope$CompoundScope, $nc(this->membersCache)->visit(site, nullptr)));
	$Assert::checkNonNull($of(cs), static_cast<$Supplier*>($$new(Types$$Lambda$lambda$membersClosure$2$3, site)));
	return skipInterface ? static_cast<$Scope$CompoundScope*>($new($Types$MembersClosureCache$MembersScope, static_cast<$Types$MembersClosureCache*>($nc(this->membersCache)), cs)) : cs;
}

$Symbol$MethodSymbol* Types::firstUnimplementedAbstract($Symbol$ClassSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	try {
		return firstUnimplementedAbstractImpl(sym, sym);
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(this->chk)->completionError($($nc($nc($($nc(this->enter)->getEnv(sym)))->tree)->pos()), ex);
		return nullptr;
	}
	$shouldNotReachHere();
}

$Symbol$MethodSymbol* Types::firstUnimplementedAbstractImpl($Symbol$ClassSymbol* impl, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, undef, nullptr);
	if (c == impl || ((int64_t)($nc(c)->flags() & (uint64_t)(int64_t)(1024 | 512))) != 0) {
		$var($Scope, s, c->members());
		{
			$init($Scope$LookupKind);
			$var($Iterator, i$, $nc($($nc(s)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)((1024 | (int64_t)0x0000080000000000) | 2))) == 1024) {
						$var($Symbol$MethodSymbol, absmeth, $cast($Symbol$MethodSymbol, sym));
						$var($Symbol$MethodSymbol, implmeth, absmeth->implementation(impl, this, true));
						if (implmeth == nullptr || implmeth == absmeth) {
							if (this->allowDefaultMethods) {
								$var($Symbol$MethodSymbol, prov, $cast($Symbol$MethodSymbol, $nc($(interfaceCandidates($nc(impl)->type, absmeth)))->head));
								if (prov != nullptr && prov->overrides(absmeth, impl, this, true)) {
									$assign(implmeth, prov);
								}
							}
						}
						if (implmeth == nullptr || implmeth == absmeth) {
							$assign(undef, absmeth);
							break;
						}
					}
				}
			}
		}
		if (undef == nullptr) {
			$var($Type, st, supertype(c->type));
			$init($TypeTag);
			if ($nc(st)->hasTag($TypeTag::CLASS)) {
				$assign(undef, firstUnimplementedAbstractImpl(impl, $cast($Symbol$ClassSymbol, st->tsym)));
			}
		}
		{
			$var($List, l, interfaces(c->type));
			for (; undef == nullptr && $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				$assign(undef, firstUnimplementedAbstractImpl(impl, $cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym)));
			}
		}
	}
	return undef;
}

$List* Types::interfaceCandidates($Type* site, $Symbol$MethodSymbol* ms) {
	$useLocalCurrentObjectStackCache();
	$var($Types$CandidatesCache$Entry, e, $new($Types$CandidatesCache$Entry, static_cast<$Types$CandidatesCache*>($nc(this->candidatesCache)), site, ms));
	$var($List, candidates, $nc(this->candidatesCache)->get(e));
	if (candidates == nullptr) {
		$var($Predicate, filter, $new($Types$MethodFilter, this, ms, site));
		$var($List, candidates2, $List::nil());
		{
			$var($Iterator, i$, $nc($($nc($(membersClosure(site, false)))->getSymbols(filter)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				{
					bool var$0 = !$nc($nc(site)->tsym)->isInterface();
					if (var$0 && !$nc($nc(s)->owner)->isInterface()) {
						return $List::of($cast($Symbol$MethodSymbol, s));
					} else if (!$nc(candidates2)->contains(s)) {
						$assign(candidates2, candidates2->prepend($cast($Symbol$MethodSymbol, s)));
					}
				}
			}
		}
		$assign(candidates, prune(candidates2));
		$nc(this->candidatesCache)->put(e, candidates);
	}
	return candidates;
}

$List* Types::prune($List* methods) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, methodsMin, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, m1, $cast($Symbol$MethodSymbol, i$->next()));
			{
				bool isMin_m1 = true;
				{
					$var($Iterator, i$, methods->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$MethodSymbol, m2, $cast($Symbol$MethodSymbol, i$->next()));
						{
							if (m1 == m2) {
								continue;
							}
							if ($nc(m2)->owner != $nc(m1)->owner && asSuper($nc(m2->owner)->type, m1->owner) != nullptr) {
								isMin_m1 = false;
								break;
							}
						}
					}
				}
				if (isMin_m1) {
					methodsMin->append(m1);
				}
			}
		}
	}
	return methodsMin->toList();
}

bool Types::hasSameArgs($Type* t, $Type* s) {
	return hasSameArgs(t, s, true);
}

bool Types::hasSameArgs($Type* t, $Type* s, bool strict) {
	return hasSameArgs(t, s, strict ? this->hasSameArgs_strict : this->hasSameArgs_nonstrict);
}

bool Types::hasSameArgs($Type* t, $Type* s, $Types$TypeRelation* hasSameArgs) {
	return $nc(($cast($Boolean, $($nc(hasSameArgs)->visit(t, s)))))->booleanValue();
}

$List* Types::subst($List* ts, $List* from, $List* to) {
	return $nc(ts)->map($$new($Types$Subst, this, from, to));
}

$Type* Types::subst($Type* t, $List* from, $List* to) {
	return $nc(t)->map($$new($Types$Subst, this, from, to));
}

$List* Types::substBounds($List* tvars, $List* from$renamed, $List* to$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, from, from$renamed);
	$var($List, to, to$renamed);
	if ($nc(tvars)->isEmpty()) {
		return tvars;
	}
	$var($ListBuffer, newBoundsBuf, $new($ListBuffer));
	bool changed = false;
	{
		$var($Iterator, i$, $nc(tvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$TypeVar, tv, $cast($Type$TypeVar, t));
				$var($Type, bound, subst($($nc(tv)->getUpperBound()), from, to));
				if (bound != $nc(tv)->getUpperBound()) {
					changed = true;
				}
				newBoundsBuf->append(bound);
			}
		}
	}
	if (!changed) {
		return tvars;
	}
	$var($ListBuffer, newTvars, $new($ListBuffer));
	{
		$var($Iterator, i$, tvars->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				newTvars->append($$new($Type$TypeVar, $nc(t)->tsym, nullptr, $nc(this->syms)->botType, $(t->getMetadata())));
			}
		}
	}
	$var($List, newBounds, newBoundsBuf->toList());
	$assign(from, tvars);
	$assign(to, newTvars->toList());
	for (; !$nc(newBounds)->isEmpty(); $assign(newBounds, $nc(newBounds)->tail)) {
		$set(newBounds, head, subst($cast($Type, newBounds->head), from, to));
	}
	$assign(newBounds, newBoundsBuf->toList());
	{
		$var($Iterator, i$, $nc($(newTvars->toList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$TypeVar, tv, $cast($Type$TypeVar, t));
				$nc(tv)->setUpperBound($cast($Type, newBounds->head));
				$assign(newBounds, newBounds->tail);
			}
		}
	}
	return newTvars->toList();
}

$Type$TypeVar* Types::substBound($Type$TypeVar* t, $List* from, $List* to) {
	$useLocalCurrentObjectStackCache();
	$var($Type, bound1, subst($($nc(t)->getUpperBound()), from, to));
	if (bound1 == $nc(t)->getUpperBound()) {
		return t;
	} else {
		$var($Type$TypeVar, tv, $new($Type$TypeVar, t->tsym, nullptr, $nc(this->syms)->botType, $(t->getMetadata())));
		$var($Type, var$0, bound1);
		$var($List, var$1, $List::of(t));
		tv->setUpperBound($(subst(var$0, var$1, $($List::of(tv)))));
		return tv;
	}
}

bool Types::hasSameBounds($Type$ForAll* t, $Type$ForAll* s) {
	$useLocalCurrentObjectStackCache();
	$var($List, l1, $nc(t)->tvars);
	$var($List, l2, $nc(s)->tvars);
	while (true) {
		bool var$1 = $nc(l1)->nonEmpty();
		bool var$0 = var$1 && $nc(l2)->nonEmpty();
		if (var$0) {
			$var($Type, var$2, $nc(($cast($Type, l1->head)))->getUpperBound());
			var$0 = isSameType(var$2, $(subst($($nc(($cast($Type, l2->head)))->getUpperBound()), s->tvars, t->tvars)));
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(l1, l1->tail);
			$assign(l2, l2->tail);
		}
	}
	bool var$3 = $nc(l1)->isEmpty();
	return var$3 && $nc(l2)->isEmpty();
}

$List* Types::newInstances($List* tvars) {
	$useLocalCurrentObjectStackCache();
	$var($List, tvars1, $nc(tvars)->map(Types::newInstanceFun));
	{
		$var($List, l, tvars1);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Type$TypeVar, tv, $cast($Type$TypeVar, l->head));
			$nc(tv)->setUpperBound($(subst($(tv->getUpperBound()), tvars, tvars1)));
		}
	}
	return tvars1;
}

$Type* Types::createMethodTypeWithParameters($Type* original, $List* newParams) {
	return $cast($Type, $nc(original)->accept(static_cast<$Type$Visitor*>(this->methodWithParameters), $of(newParams)));
}

$Type* Types::createMethodTypeWithThrown($Type* original, $List* newThrown) {
	return $cast($Type, $nc(original)->accept(static_cast<$Type$Visitor*>(this->methodWithThrown), $of(newThrown)));
}

$Type* Types::createMethodTypeWithReturn($Type* original, $Type* newReturn) {
	return $cast($Type, $nc(original)->accept(static_cast<$Type$Visitor*>(this->methodWithReturn), $of(newReturn)));
}

$Type* Types::createErrorType($Type* originalType) {
	return $new($Type$ErrorType, originalType, static_cast<$Symbol$TypeSymbol*>($nc(this->syms)->errSymbol));
}

$Type* Types::createErrorType($Symbol$ClassSymbol* c, $Type* originalType) {
	return $new($Type$ErrorType, c, originalType);
}

$Type* Types::createErrorType($Name* name, $Symbol$TypeSymbol* container, $Type* originalType) {
	return $new($Type$ErrorType, name, container, originalType);
}

int32_t Types::rank($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 2:
		{
			{
				$var($Type$ClassType, cls, $cast($Type$ClassType, t));
				if (cls->rank_field < 0) {
					$var($Name, fullname, $nc(cls->tsym)->getQualifiedName());
					if (fullname == $nc(this->names)->java_lang_Object) {
						cls->rank_field = 0;
					} else {
						int32_t r = rank($(supertype(cls)));
						{
							$var($List, l, interfaces(cls));
							for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
								if (rank($cast($Type, l->head)) > r) {
									r = rank($cast($Type, l->head));
								}
							}
						}
						cls->rank_field = r + 1;
					}
				}
				return cls->rank_field;
			}
		}
	case 12:
		{
			{
				$var($Type$TypeVar, tvar, $cast($Type$TypeVar, t));
				if (tvar->rank_field < 0) {
					int32_t r = rank($(supertype(tvar)));
					{
						$var($List, l, interfaces(tvar));
						for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
							if (rank($cast($Type, l->head)) > r) {
								r = rank($cast($Type, l->head));
							}
						}
					}
					tvar->rank_field = r + 1;
				}
				return tvar->rank_field;
			}
		}
	case 16:
		{}
	case 15:
		{
			return 0;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$String* Types::toString($Type* t, $Locale* locale) {
	return $nc($($Printer::createStandardPrinter(this->messages)))->visit(t, locale);
}

$String* Types::toString($Symbol* t, $Locale* locale) {
	return $nc($($Printer::createStandardPrinter(this->messages)))->visit(t, locale);
}

$String* Types::toString($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::FORALL)) {
		$var($Type$ForAll, forAll, $cast($Type$ForAll, t));
		return $str({$(typaramsString(forAll->tvars)), forAll->qtype});
	}
	return $str({""_s, t});
}

$String* Types::typaramsString($List* tvars) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder));
	s->append(u'<');
	bool first = true;
	{
		$var($Iterator, i$, $nc(tvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if (!first) {
					s->append(", "_s);
				}
				first = false;
				appendTyparamString(($cast($Type$TypeVar, t)), s);
			}
		}
	}
	s->append(u'>');
	return s->toString();
}

void Types::appendTyparamString($Type$TypeVar* t, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$nc(buf)->append($of(t));
	bool var$0 = $nc(t)->getUpperBound() == nullptr;
	if (var$0 || $nc($nc($($nc(t)->getUpperBound()))->tsym)->getQualifiedName() == $nc(this->names)->java_lang_Object) {
		return;
	}
	buf->append(" extends "_s);
	$var($Type, bound, $nc(t)->getUpperBound());
	if (!$nc(bound)->isCompound()) {
		buf->append($of(bound));
	} else if (((int64_t)($nc($nc($(erasure(static_cast<$Type*>(t))))->tsym)->flags() & (uint64_t)(int64_t)512)) == 0) {
		buf->append($($of(supertype(t))));
		{
			$var($Iterator, i$, $nc($(interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, intf, $cast($Type, i$->next()));
				{
					buf->append(u'&');
					buf->append($of(intf));
				}
			}
		}
	} else {
		bool first = true;
		{
			$var($Iterator, i$, $nc($(interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, intf, $cast($Type, i$->next()));
				{
					if (!first) {
						buf->append(u'&');
					}
					first = false;
					buf->append($of(intf));
				}
			}
		}
	}
}

$List* Types::closure($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($List, cl, $cast($List, $nc(this->closureCache)->get(t)));
	if (cl == nullptr) {
		$var($Type, st, supertype(t));
		if (!$nc(t)->isCompound()) {
			$init($TypeTag);
			if ($nc(st)->hasTag($TypeTag::CLASS)) {
				$assign(cl, insert($(closure(st)), t));
			} else {
				if (st->hasTag($TypeTag::TYPEVAR)) {
					$assign(cl, $nc($(closure(st)))->prepend(t));
				} else {
					$assign(cl, $List::of(t));
				}
			}
		} else {
			$assign(cl, closure($(supertype(t))));
		}
		{
			$var($List, l, interfaces(t));
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				$assign(cl, union$(cl, $(closure($cast($Type, l->head)))));
			}
		}
		$nc(this->closureCache)->put(t, cl);
	}
	return cl;
}

$Collector* Types::closureCollector(bool minClosure, $BiPredicate* shouldSkip) {
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(Types$$Lambda$lambda$closureCollector$3$4, this, minClosure, shouldSkip)));
	$var($BiConsumer, var$1, static_cast<$BiConsumer*>($new(Types$$Lambda$add$5)));
	$var($BinaryOperator, var$2, static_cast<$BinaryOperator*>($new(Types$$Lambda$merge$6)));
	return $Collector::of(var$0, var$1, var$2, static_cast<$Function*>($$new(Types$$Lambda$closure$7)), $$new($Collector$CharacteristicsArray, 0));
}

$List* Types::insert($List* cl, $Type* t, $BiPredicate* shouldSkip) {
	if ($nc(cl)->isEmpty()) {
		return cl->prepend(t);
	} else if ($nc(shouldSkip)->test(t, $cast($Type, cl->head))) {
		return cl;
	} else if ($nc($nc(t)->tsym)->precedes($nc(($cast($Type, cl->head)))->tsym, this)) {
		return cl->prepend(t);
	} else {
		return $nc($(insert(cl->tail, t, shouldSkip)))->prepend($cast($Type, cl->head));
	}
}

$List* Types::insert($List* cl, $Type* t) {
	return insert(cl, t, this->basicClosureSkip);
}

$List* Types::union$($List* cl1, $List* cl2, $BiPredicate* shouldSkip) {
	$useLocalCurrentObjectStackCache();
	if ($nc(cl1)->isEmpty()) {
		return cl2;
	} else if ($nc(cl2)->isEmpty()) {
		return cl1;
	} else if ($nc(shouldSkip)->test($cast($Type, cl1->head), $cast($Type, cl2->head))) {
		return $nc($(union$(cl1->tail, cl2->tail, shouldSkip)))->prepend($cast($Type, cl1->head));
	} else if ($nc($nc(($cast($Type, cl2->head)))->tsym)->precedes($nc(($cast($Type, cl1->head)))->tsym, this)) {
		return $nc($(union$(cl1, cl2->tail, shouldSkip)))->prepend($cast($Type, cl2->head));
	} else {
		return $nc($(union$(cl1->tail, cl2, shouldSkip)))->prepend($cast($Type, cl1->head));
	}
}

$List* Types::union$($List* cl1, $List* cl2) {
	return union$(cl1, cl2, this->basicClosureSkip);
}

$List* Types::intersect($List* cl1, $List* cl2) {
	$useLocalCurrentObjectStackCache();
	if (cl1 == cl2) {
		return cl1;
	}
	bool var$0 = $nc(cl1)->isEmpty();
	if (var$0 || $nc(cl2)->isEmpty()) {
		return $List::nil();
	}
	if ($nc($nc(($cast($Type, $nc(cl1)->head)))->tsym)->precedes($nc(($cast($Type, $nc(cl2)->head)))->tsym, this)) {
		return intersect(cl1->tail, cl2);
	}
	if ($nc($nc(($cast($Type, $nc(cl2)->head)))->tsym)->precedes($nc(($cast($Type, $nc(cl1)->head)))->tsym, this)) {
		return intersect(cl1, cl2->tail);
	}
	if (isSameType($cast($Type, $nc(cl1)->head), $cast($Type, $nc(cl2)->head))) {
		return $nc($(intersect($nc(cl1)->tail, $nc(cl2)->tail)))->prepend($cast($Type, $nc(cl1)->head));
	}
	$init($TypeTag);
	bool var$1 = $nc(($cast($Type, $nc(cl1)->head)))->tsym == $nc(($cast($Type, $nc(cl2)->head)))->tsym && $nc(($cast($Type, cl1->head)))->hasTag($TypeTag::CLASS);
	if (var$1 && $nc(($cast($Type, cl2->head)))->hasTag($TypeTag::CLASS)) {
		bool var$2 = $nc(($cast($Type, cl1->head)))->isParameterized();
		if (var$2 && $nc(($cast($Type, cl2->head)))->isParameterized()) {
			$var($Type, merge, this->merge($cast($Type, cl1->head), $cast($Type, cl2->head)));
			return $nc($(intersect(cl1->tail, cl2->tail)))->prepend(merge);
		}
		bool var$3 = $nc(($cast($Type, cl1->head)))->isRaw();
		if (var$3 || $nc(($cast($Type, cl2->head)))->isRaw()) {
			return $nc($(intersect(cl1->tail, cl2->tail)))->prepend($(erasure($cast($Type, cl1->head))));
		}
	}
	return intersect($nc(cl1)->tail, $nc(cl2)->tail);
}

$Type* Types::merge($Type* c1, $Type* c2) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, class1, $cast($Type$ClassType, c1));
	$var($List, act1, $nc(class1)->getTypeArguments());
	$var($Type$ClassType, class2, $cast($Type$ClassType, c2));
	$var($List, act2, $nc(class2)->getTypeArguments());
	$var($ListBuffer, merged, $new($ListBuffer));
	$var($List, typarams, $nc($nc(class1->tsym)->type)->getTypeArguments());
	while (true) {
		bool var$1 = $nc(act1)->nonEmpty();
		bool var$0 = var$1 && $nc(act2)->nonEmpty();
		if (!(var$0 && $nc(typarams)->nonEmpty())) {
			break;
		}
		{
			if (containsType($cast($Type, act1->head), $cast($Type, act2->head))) {
				merged->append($cast($Type, act1->head));
			} else if (containsType($cast($Type, act2->head), $cast($Type, act1->head))) {
				merged->append($cast($Type, act2->head));
			} else {
				$var($Types$TypePair, pair, $new($Types$TypePair, this, c1, c2));
				$var($Type, m, nullptr);
				if ($nc(this->mergeCache)->add(pair)) {
					$init($BoundKind);
					$assign(m, $new($Type$WildcardType, $(lub($$new($TypeArray, {
						$(wildUpperBound($cast($Type, act1->head))),
						$(wildUpperBound($cast($Type, act2->head)))
					}))), $BoundKind::EXTENDS, $nc(this->syms)->boundClass));
					$nc(this->mergeCache)->remove(pair);
				} else {
					$init($BoundKind);
					$assign(m, $new($Type$WildcardType, $nc(this->syms)->objectType, $BoundKind::UNBOUND, $nc(this->syms)->boundClass));
				}
				merged->append($($nc(m)->withTypeVar($cast($Type, typarams->head))));
			}
			$assign(act1, act1->tail);
			$assign(act2, act2->tail);
			$assign(typarams, typarams->tail);
		}
	}
	bool var$3 = $nc(act1)->isEmpty();
	bool var$2 = var$3 && $nc(act2)->isEmpty();
	$Assert::check(var$2 && $nc(typarams)->isEmpty());
	$var($Type, var$4, class1->getEnclosingType());
	return $new($Type$ClassType, var$4, $(merged->toList()), class1->tsym);
}

$Type* Types::compoundMin($List* cl) {
	if ($nc(cl)->isEmpty()) {
		return $nc(this->syms)->objectType;
	}
	$var($List, compound, closureMin(cl));
	if ($nc(compound)->isEmpty()) {
		return nullptr;
	} else if ($nc(compound->tail)->isEmpty()) {
		return $cast($Type, compound->head);
	} else {
		return makeIntersectionType(compound);
	}
}

$List* Types::closureMin($List* cl$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, cl, cl$renamed);
	$var($ListBuffer, classes, $new($ListBuffer));
	$var($ListBuffer, interfaces, $new($ListBuffer));
	$var($Set, toSkip, $new($HashSet));
	while (!$nc(cl)->isEmpty()) {
		$var($Type, current, $cast($Type, cl->head));
		bool keep = !toSkip->contains(current);
		$init($TypeTag);
		if (keep && $nc(current)->hasTag($TypeTag::TYPEVAR)) {
			{
				$var($Iterator, i$, $nc(cl->tail)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t, $cast($Type, i$->next()));
					{
						if (isSubtypeNoCapture(t, current)) {
							keep = false;
							break;
						}
					}
				}
			}
		}
		if (keep) {
			if ($nc(current)->isInterface()) {
				interfaces->append(current);
			} else {
				classes->append(current);
			}
			{
				$var($Iterator, i$, $nc(cl->tail)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t, $cast($Type, i$->next()));
					{
						if (isSubtypeNoCapture(current, t)) {
							toSkip->add(t);
						}
					}
				}
			}
		}
		$assign(cl, cl->tail);
	}
	return $nc($(classes->appendList(interfaces)))->toList();
}

$Type* Types::lub($List* ts) {
	$useLocalCurrentObjectStackCache();
	return lub($fcast($TypeArray, $($nc(ts)->toArray($$new($TypeArray, ts->length())))));
}

$Type* Types::lub($TypeArray* ts) {
	$useLocalCurrentObjectStackCache();
	int32_t UNKNOWN_BOUND = 0;
	int32_t ARRAY_BOUND = 1;
	int32_t CLASS_BOUND = 2;
	$var($ints, kinds, $new($ints, $nc(ts)->length));
	int32_t boundkind = UNKNOWN_BOUND;
	for (int32_t i = 0; i < ts->length; ++i) {
		$var($Type, t, ts->get(i));
		$init($Types$25);
		switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
		case 2:
			{
				boundkind |= (kinds->set(i, CLASS_BOUND));
				break;
			}
		case 1:
			{
				boundkind |= (kinds->set(i, ARRAY_BOUND));
				break;
			}
		case 12:
			{
				do {
					$assign(t, t->getUpperBound());
				$init($TypeTag);
				} while (t->hasTag($TypeTag::TYPEVAR));
				$init($TypeTag);
				if (t->hasTag($TypeTag::ARRAY)) {
					boundkind |= (kinds->set(i, ARRAY_BOUND));
				} else {
					boundkind |= (kinds->set(i, CLASS_BOUND));
				}
				break;
			}
		default:
			{
				kinds->set(i, UNKNOWN_BOUND);
				if (t->isPrimitive()) {
					return $nc(this->syms)->errType;
				}
			}
		}
	}
	{
		$var($TypeArray, elements, nullptr)
		int32_t startIdx = 0;
		$var($List, cl, nullptr)
		$var($List, mec, nullptr)
		$var($List, candidates, nullptr)
		$var($List, classes, nullptr)
		do {
			if (boundkind == 0) {
				goto case$0;
			}
			if (boundkind == ARRAY_BOUND) {
				goto case$1;
			}
			if (boundkind == CLASS_BOUND) {
				goto case$2;
			}
			goto case$3;
case$0:
			// 0
			{
				return $nc(this->syms)->botType;
			}
case$1:
			// ARRAY_BOUND
			{
				$assign(elements, $new($TypeArray, ts->length));
				for (int32_t i = 0; i < ts->length; ++i) {
					$var($Type, elem, $nc(elements)->set(i, $($nc(this->elemTypeFun)->apply(ts->get(i)))));
					if ($nc(elem)->isPrimitive()) {
						$var($Type, first, ts->get(0));
						for (int32_t j = 1; j < ts->length; ++j) {
							if (!isSameType(first, ts->get(j))) {
								return arraySuperType();
							}
						}
						return first;
					}
				}
				return $new($Type$ArrayType, $(lub(elements)), $nc(this->syms)->arrayClass);
			}
case$2:
			// CLASS_BOUND
			{
				startIdx = 0;
				for (int32_t i = 0; i < ts->length; ++i) {
					$var($Type, t, ts->get(i));
					$init($TypeTag);
					bool var$0 = $nc(t)->hasTag($TypeTag::CLASS);
					if (var$0 || $nc(t)->hasTag($TypeTag::TYPEVAR)) {
						break;
					} else {
						++startIdx;
					}
				}
				$Assert::check(startIdx < ts->length);
				$assign(cl, erasedSupertypes(ts->get(startIdx)));
				for (int32_t i = startIdx + 1; i < ts->length; ++i) {
					$var($Type, t, ts->get(i));
					$init($TypeTag);
					bool var$1 = $nc(t)->hasTag($TypeTag::CLASS);
					if (var$1 || $nc(t)->hasTag($TypeTag::TYPEVAR)) {
						$assign(cl, intersect(cl, $(erasedSupertypes(t))));
					}
				}
				$assign(mec, closureMin(cl));
				$assign(candidates, $List::nil());
				{
					$var($Iterator, i$, $nc(mec)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, erasedSupertype, $cast($Type, i$->next()));
						{
							$var($List, lci, $List::of($(asSuper(ts->get(startIdx), $nc(erasedSupertype)->tsym))));
							for (int32_t i = startIdx + 1; i < ts->length; ++i) {
								$var($Type, superType, asSuper(ts->get(i), $nc(erasedSupertype)->tsym));
								$assign(lci, intersect(lci, superType != nullptr ? $($List::of(superType)) : $($List::nil())));
							}
							$assign(candidates, $nc(candidates)->appendList(lci));
						}
					}
				}
				return compoundMin(candidates);
			}
case$3:
			// default
			{
				$assign(classes, $List::of($(arraySuperType())));
				for (int32_t i = 0; i < ts->length; ++i) {
					if (kinds->get(i) != ARRAY_BOUND) {
						$assign(classes, $nc(classes)->prepend(ts->get(i)));
					}
				}
				return lub(classes);
			}
		} while (false);
	}
}

$List* Types::erasedSupertypes($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($(closure(t)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, sup, $cast($Type, i$->next()));
			{
				$init($TypeTag);
				if ($nc(sup)->hasTag($TypeTag::TYPEVAR)) {
					buf->append(sup);
				} else {
					buf->append($(erasure(sup)));
				}
			}
		}
	}
	return buf->toList();
}

$Type* Types::arraySuperType() {
	if (this->arraySuperType$ == nullptr) {
		$set(this, arraySuperType$, makeIntersectionType($($List::of($nc(this->syms)->serializableType, $nc(this->syms)->cloneableType)), true));
	}
	return this->arraySuperType$;
}

$Type* Types::glb($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t1, $cast($Type, $nc(ts)->head));
	{
		$var($Iterator, i$, $nc(ts->tail)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t2, $cast($Type, i$->next()));
			{
				if ($nc(t1)->isErroneous()) {
					return t1;
				}
				$assign(t1, glb(t1, t2));
			}
		}
	}
	return t1;
}

$Type* Types::glb($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		return t;
	} else {
		bool var$1 = $nc(t)->isPrimitive();
		if (var$1 || $nc(s)->isPrimitive()) {
			return $nc(this->syms)->errType;
		} else if (isSubtypeNoCapture(t, s)) {
			return t;
		} else if (isSubtypeNoCapture(s, t)) {
			return s;
		}
	}
	$var($List, var$2, this->closure(t));
	$var($List, closure, union$(var$2, $(this->closure(s))));
	return glbFlattened(closure, t);
}

$Type* Types::glbFlattened($List* flatBounds, $Type* errT) {
	$useLocalCurrentObjectStackCache();
	$var($List, bounds, closureMin(flatBounds));
	if ($nc(bounds)->isEmpty()) {
		return $nc(this->syms)->objectType;
	} else if ($nc(bounds->tail)->isEmpty()) {
		return $cast($Type, bounds->head);
	} else {
		int32_t classCount = 0;
		$var($List, cvars, $List::nil());
		$var($List, lowers, $List::nil());
		{
			$var($Iterator, i$, bounds->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, bound, $cast($Type, i$->next()));
				{
					if (!$nc(bound)->isInterface()) {
						++classCount;
						$var($Type, lower, cvarLowerBound(bound));
						$init($TypeTag);
						if (bound != lower && !$nc(lower)->hasTag($TypeTag::BOT)) {
							$assign(cvars, $nc(cvars)->append(bound));
							$assign(lowers, $nc(lowers)->append(lower));
						}
					}
				}
			}
		}
		if (classCount > 1) {
			if ($nc(lowers)->isEmpty()) {
				return createErrorType(errT);
			} else {
				$var($List, newBounds, $nc($(bounds->diff(cvars)))->appendList(lowers));
				return glb(newBounds);
			}
		}
	}
	return makeIntersectionType(bounds);
}

int32_t Types::hashCode($Type* t) {
	return hashCode(t, false);
}

int32_t Types::hashCode($Type* t, bool strict) {
	$useLocalCurrentObjectStackCache();
	return $nc((strict ? $cast($Integer, $($nc(Types::hashCodeStrictVisitor)->visit(t))) : $cast($Integer, $($nc(Types::hashCodeVisitor)->visit(t)))))->intValue();
}

bool Types::resultSubtype($Type* t, $Type* s, $Warner* warner) {
	$useLocalCurrentObjectStackCache();
	$var($List, tvars, $nc(t)->getTypeArguments());
	$var($List, svars, $nc(s)->getTypeArguments());
	$var($Type, tres, t->getReturnType());
	$var($Type, sres, subst($(s->getReturnType()), svars, tvars));
	return covariantReturnType(tres, sres, warner);
}

bool Types::returnTypeSubstitutable($Type* r1, $Type* r2) {
	$useLocalCurrentObjectStackCache();
	if (hasSameArgs(r1, r2)) {
		return resultSubtype(r1, r2, this->noWarnings);
	} else {
		$var($Type, var$0, $nc(r1)->getReturnType());
		return covariantReturnType(var$0, $(erasure($($nc(r2)->getReturnType()))), this->noWarnings);
	}
}

bool Types::returnTypeSubstitutable($Type* r1, $Type* r2, $Type* r2res, $Warner* warner) {
	$useLocalCurrentObjectStackCache();
	if (isSameType($($nc(r1)->getReturnType()), r2res)) {
		return true;
	}
	bool var$0 = $nc($($nc(r1)->getReturnType()))->isPrimitive();
	if (var$0 || $nc(r2res)->isPrimitive()) {
		return false;
	}
	if (hasSameArgs(r1, r2)) {
		return covariantReturnType($($nc(r1)->getReturnType()), r2res, warner);
	}
	if (isSubtypeUnchecked($($nc(r1)->getReturnType()), r2res, warner)) {
		return true;
	}
	$var($Type, var$1, $nc(r1)->getReturnType());
	if (!isSubtype(var$1, $(erasure(r2res)))) {
		return false;
	}
	$init($Lint$LintCategory);
	$nc(warner)->warn($Lint$LintCategory::UNCHECKED);
	return true;
}

bool Types::covariantReturnType($Type* t, $Type* s, $Warner* warner) {
	bool var$0 = isSameType(t, s);
	if (!var$0) {
		bool var$2 = !$nc(t)->isPrimitive();
		bool var$1 = var$2 && !$nc(s)->isPrimitive();
		var$0 = var$1 && isAssignable(t, s, warner);
	}
	return var$0;
}

$Symbol$ClassSymbol* Types::boxedClass($Type* t) {
	return $nc(this->syms)->enterClass($nc(this->syms)->java_base, $nc($nc(this->syms)->boxedName)->get($nc($($nc(t)->getTag()))->ordinal()));
}

$Type* Types::boxedTypeOrType($Type* t) {
	return $nc(t)->isPrimitive() ? $nc($(boxedClass(t)))->type : t;
}

$Type* Types::unboxedType($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::ERROR)) {
		$init($Type);
		return $Type::noType;
	}
	for (int32_t i = 0; i < $nc($nc(this->syms)->boxedName)->length; ++i) {
		$var($Name, box, $nc($nc(this->syms)->boxedName)->get(i));
		if (box != nullptr && asSuper(t, $($nc(this->syms)->enterClass($nc(this->syms)->java_base, box))) != nullptr) {
			return $nc($nc(this->syms)->typeOfTag)->get(i);
		}
	}
	return $Type::noType;
}

$Type* Types::unboxedTypeOrType($Type* t) {
	$var($Type, unboxedType, this->unboxedType(t));
	$init($TypeTag);
	return $nc(unboxedType)->hasTag($TypeTag::NONE) ? t : unboxedType;
}

$List* Types::capture($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($List, buf, $List::nil());
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$assign(buf, $nc(buf)->prepend($(capture(t))));
			}
		}
	}
	return $nc(buf)->reverse();
}

$Type* Types::capture($Type* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($TypeTag);
	if (!$nc(t)->hasTag($TypeTag::CLASS)) {
		return t;
	}
	if (!$equals($nc(t)->getEnclosingType(), $Type::noType)) {
		$var($Type, capturedEncl, capture($(t->getEnclosingType())));
		if (capturedEncl != t->getEnclosingType()) {
			$var($Type, type1, memberType(capturedEncl, t->tsym));
			$var($Type, var$0, type1);
			$var($List, var$1, $nc($nc(t->tsym)->type)->getTypeArguments());
			$assign(t, subst(var$0, var$1, $(t->getTypeArguments())));
		}
	}
	$var($Type$ClassType, cls, $cast($Type$ClassType, t));
	bool var$2 = $nc(cls)->isRaw();
	if (var$2 || !$nc(cls)->isParameterized()) {
		return cls;
	}
	$var($Type$ClassType, G, $cast($Type$ClassType, $cast($Type, $nc($($nc(cls)->asElement()))->asType())));
	$var($List, A, $nc(G)->getTypeArguments());
	$var($List, T, cls->getTypeArguments());
	$var($List, S, freshTypeVariables(T));
	$var($List, currentA, A);
	$var($List, currentT, T);
	$var($List, currentS, S);
	bool captured = false;
	while (true) {
		bool var$4 = !$nc(currentA)->isEmpty();
		bool var$3 = var$4 && !$nc(currentT)->isEmpty();
		if (!(var$3 && !$nc(currentS)->isEmpty())) {
			break;
		}
		{
			if (!$equals(currentS->head, currentT->head)) {
				captured = true;
				$var($Type$WildcardType, Ti, $cast($Type$WildcardType, currentT->head));
				$var($Type, Ui, $nc(($cast($Type, currentA->head)))->getUpperBound());
				$var($Type$CapturedType, Si, $cast($Type$CapturedType, currentS->head));
				if (Ui == nullptr) {
					$assign(Ui, $nc(this->syms)->objectType);
				}
				$init($Types$25);
				switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc(($nc(Ti)->kind))->ordinal())) {
				case 3:
					{
						$nc(Si)->setUpperBound($(subst(Ui, A, S)));
						$set($nc(Si), lower, $nc(this->syms)->botType);
						break;
					}
				case 1:
					{
						$var($Type, var$5, $cast($Type, Ti->getExtendsBound()));
						$nc(Si)->setUpperBound($(glb(var$5, $(subst(Ui, A, S)))));
						$set($nc(Si), lower, $nc(this->syms)->botType);
						break;
					}
				case 2:
					{
						$nc(Si)->setUpperBound($(subst(Ui, A, S)));
						$set($nc(Si), lower, $cast($Type, Ti->getSuperBound()));
						break;
					}
				}
				$var($Type, tmpBound, $nc($($nc(Si)->getUpperBound()))->hasTag($TypeTag::UNDETVAR) ? $nc(($cast($Type$UndetVar, $($nc(Si)->getUpperBound()))))->qtype : Si->getUpperBound());
				$var($Type, tmpLower, $nc(Si->lower)->hasTag($TypeTag::UNDETVAR) ? $nc(($cast($Type$UndetVar, Si->lower)))->qtype : Si->lower);
				bool var$7 = !$nc($(Si->getUpperBound()))->hasTag($TypeTag::ERROR);
				bool var$6 = var$7 && !$nc(Si->lower)->hasTag($TypeTag::ERROR);
				if (var$6 && isSameType(tmpBound, tmpLower)) {
					$set(currentS, head, Si->getUpperBound());
				}
			}
			$assign(currentA, currentA->tail);
			$assign(currentT, currentT->tail);
			$assign(currentS, currentS->tail);
		}
	}
	bool var$9 = !$nc(currentA)->isEmpty();
	bool var$8 = var$9 || !$nc(currentT)->isEmpty();
	if (var$8 || !$nc(currentS)->isEmpty()) {
		return erasure(t);
	}
	if (captured) {
		$var($Type, var$10, cls->getEnclosingType());
		$var($List, var$11, S);
		$var($Symbol$TypeSymbol, var$12, cls->tsym);
		return $new($Type$ClassType, var$10, var$11, var$12, $(cls->getMetadata()));
	} else {
		return t;
	}
}

$List* Types::freshTypeVariables($List* types) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, result, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(types)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$init($TypeTag);
				if ($nc(t)->hasTag($TypeTag::WILDCARD)) {
					$var($Type, bound, $cast($Type, $nc(($cast($Type$WildcardType, t)))->getExtendsBound()));
					if (bound == nullptr) {
						$assign(bound, $nc(this->syms)->objectType);
					}
					result->append($$new($Type$CapturedType, this->capturedName, $nc(this->syms)->noSymbol, bound, $nc(this->syms)->botType, $cast($Type$WildcardType, t)));
				} else {
					result->append(t);
				}
			}
		}
	}
	return result->toList();
}

bool Types::sideCast($Type* from$renamed, $Type* to$renamed, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($Type, from, from$renamed);
	$var($Type, to, to$renamed);
	bool reverse = false;
	$var($Type, target, to);
	if (((int64_t)($nc($nc(to)->tsym)->flags() & (uint64_t)(int64_t)512)) == 0) {
		$Assert::check(((int64_t)($nc($nc(from)->tsym)->flags() & (uint64_t)(int64_t)512)) != 0);
		reverse = true;
		$assign(to, from);
		$assign(from, target);
	}
	$var($List, commonSupers, superClosure(to, $(erasure(from))));
	bool giveWarning = $nc(commonSupers)->isEmpty();
	while (commonSupers->nonEmpty()) {
		$var($Type, t1, asSuper(from, $nc(($cast($Type, commonSupers->head)))->tsym));
		$var($Type, t2, $cast($Type, commonSupers->head));
		$var($List, var$0, $nc(t1)->getTypeArguments());
		if (disjointTypes(var$0, $($nc(t2)->getTypeArguments()))) {
			return false;
		}
		giveWarning = giveWarning || (reverse ? this->giveWarning(t2, t1) : this->giveWarning(t1, t2));
		$assign(commonSupers, commonSupers->tail);
	}
	if (giveWarning && !isReifiable(reverse ? from : to)) {
		$init($Lint$LintCategory);
		$nc(warn)->warn($Lint$LintCategory::UNCHECKED);
	}
	return true;
}

bool Types::sideCastFinal($Type* from$renamed, $Type* to$renamed, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($Type, from, from$renamed);
	$var($Type, to, to$renamed);
	bool reverse = false;
	$var($Type, target, to);
	if (((int64_t)($nc($nc(to)->tsym)->flags() & (uint64_t)(int64_t)512)) == 0) {
		$Assert::check(((int64_t)($nc($nc(from)->tsym)->flags() & (uint64_t)(int64_t)512)) != 0);
		reverse = true;
		$assign(to, from);
		$assign(from, target);
	}
	$Assert::check(((int64_t)($nc($nc(from)->tsym)->flags() & (uint64_t)(int64_t)16)) != 0);
	$var($Type, t1, asSuper(from, $nc(to)->tsym));
	if (t1 == nullptr) {
		return false;
	}
	$var($Type, t2, to);
	$var($List, var$0, $nc(t1)->getTypeArguments());
	if (disjointTypes(var$0, $($nc(t2)->getTypeArguments()))) {
		return false;
	}
	bool var$1 = !isReifiable(target);
	if (var$1 && (reverse ? giveWarning(t2, t1) : giveWarning(t1, t2))) {
		$init($Lint$LintCategory);
		$nc(warn)->warn($Lint$LintCategory::UNCHECKED);
	}
	return true;
}

bool Types::giveWarning($Type* from, $Type* to) {
	$useLocalCurrentObjectStackCache();
	$var($List, bounds, $nc(to)->isCompound() ? directSupertypes(to) : $List::of(to));
	{
		$var($Iterator, i$, $nc(bounds)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, b, $cast($Type, i$->next()));
			{
				$var($Type, subFrom, asSub(from, $nc(b)->tsym));
				bool var$0 = $nc(b)->isParameterized();
				if (var$0) {
					bool var$2 = isUnbounded(b);
					bool var$1 = var$2 || isSubtype(from, b);
					if (!var$1) {
						bool var$3 = (subFrom != nullptr);
						if (var$3) {
							$var($List, var$4, $nc(b)->allparams());
							var$3 = containsType(var$4, $(subFrom->allparams()));
						}
						var$1 = (var$3);
					}
					var$0 = (!(var$1));
				}
				if (var$0) {
					return true;
				}
			}
		}
	}
	return false;
}

$List* Types::superClosure($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($List, cl, $List::nil());
	{
		$var($List, l, interfaces(t));
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (isSubtype(s, $(erasure($cast($Type, l->head))))) {
				$assign(cl, insert(cl, $cast($Type, l->head)));
			} else {
				$assign(cl, union$(cl, $(superClosure($cast($Type, l->head), s))));
			}
		}
	}
	return cl;
}

bool Types::containsTypeEquivalent($Type* t, $Type* s) {
	bool var$0 = isSameType(t, s);
	if (!var$0) {
		bool var$1 = containsType(t, s);
		var$0 = var$1 && containsType(s, t);
	}
	return var$0;
}

void Types::adapt($Type* source, $Type* target, $ListBuffer* from, $ListBuffer* to) {
	$$new($Types$Adapter, this, from, to)->adapt(source, target);
}

void Types::adaptSelf($Type* t, $ListBuffer* from, $ListBuffer* to) {
	try {
		adapt($nc($nc(t)->tsym)->type, t, from, to);
	} catch ($Types$AdaptFailure& ex) {
		$throwNew($AssertionError, $of(ex));
	}
}

$Type* Types::rewriteQuantifiers($Type* t, bool high, bool rewriteTypeVars) {
	return $cast($Type, $$new($Types$Rewriter, this, high, rewriteTypeVars)->visit(t));
}

$Type$WildcardType* Types::makeExtendsWildcard($Type* bound, $Type$TypeVar* formal) {
	if (bound == $nc(this->syms)->objectType) {
		$init($BoundKind);
		return $new($Type$WildcardType, $nc(this->syms)->objectType, $BoundKind::UNBOUND, static_cast<$Symbol$TypeSymbol*>($nc(this->syms)->boundClass), formal);
	} else {
		$init($BoundKind);
		return $new($Type$WildcardType, bound, $BoundKind::EXTENDS, static_cast<$Symbol$TypeSymbol*>($nc(this->syms)->boundClass), formal);
	}
}

$Type$WildcardType* Types::makeSuperWildcard($Type* bound, $Type$TypeVar* formal) {
	$init($TypeTag);
	if ($nc(bound)->hasTag($TypeTag::BOT)) {
		$init($BoundKind);
		return $new($Type$WildcardType, $nc(this->syms)->objectType, $BoundKind::UNBOUND, static_cast<$Symbol$TypeSymbol*>($nc(this->syms)->boundClass), formal);
	} else {
		$init($BoundKind);
		return $new($Type$WildcardType, bound, $BoundKind::SUPER, static_cast<$Symbol$TypeSymbol*>($nc(this->syms)->boundClass), formal);
	}
}

$Attribute$RetentionPolicy* Types::getRetention($Attribute$Compound* a) {
	return getRetention($nc($nc(a)->type)->tsym);
}

$Attribute$RetentionPolicy* Types::getRetention($Symbol$TypeSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Attribute$RetentionPolicy);
	$Attribute$RetentionPolicy* vis = $Attribute$RetentionPolicy::CLASS;
	$var($Attribute$Compound, c, $nc(sym)->attribute($nc($nc(this->syms)->retentionType)->tsym));
	if (c != nullptr) {
		$var($Attribute, value, c->member($nc(this->names)->value));
		{
			$var($Attribute$Enum, attributeEnum, nullptr);
			bool var$0 = value != nullptr;
			if (var$0) {
				bool var$1 = $instanceOf($Attribute$Enum, value);
				if (var$1) {
					$assign(attributeEnum, $cast($Attribute$Enum, value));
					var$1 = true;
				}
				var$0 = var$1;
			}
			if (var$0) {
				$var($Name, levelName, $nc($nc(attributeEnum)->value)->name);
				if (levelName == $nc(this->names)->SOURCE) {
					vis = $Attribute$RetentionPolicy::SOURCE;
				} else if (levelName == $nc(this->names)->CLASS) {
					vis = $Attribute$RetentionPolicy::CLASS;
				} else if (levelName == $nc(this->names)->RUNTIME) {
					vis = $Attribute$RetentionPolicy::RUNTIME;
				} else {
				}
			}
		}
	}
	return vis;
}

$Type* Types::constantType($PoolConstant$LoadableConstant* c) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(c)->poolTag()) {
	case $ClassFile::CONSTANT_Class:
		{
			return $nc(this->syms)->classType;
		}
	case $ClassFile::CONSTANT_String:
		{
			return $nc(this->syms)->stringType;
		}
	case $ClassFile::CONSTANT_Integer:
		{
			return $nc(this->syms)->intType;
		}
	case $ClassFile::CONSTANT_Float:
		{
			return $nc(this->syms)->floatType;
		}
	case $ClassFile::CONSTANT_Long:
		{
			return $nc(this->syms)->longType;
		}
	case $ClassFile::CONSTANT_Double:
		{
			return $nc(this->syms)->doubleType;
		}
	case $ClassFile::CONSTANT_MethodHandle:
		{
			return $nc(this->syms)->methodHandleType;
		}
	case $ClassFile::CONSTANT_MethodType:
		{
			return $nc(this->syms)->methodTypeType;
		}
	case $ClassFile::CONSTANT_Dynamic:
		{
			return $nc(($cast($Symbol$DynamicVarSymbol, c)))->type;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Not a loadable constant: "_s, $$str(c->poolTag())})));
		}
	}
}

void Types::newRound() {
	$nc($nc(this->descCache)->_map)->clear();
	$nc(this->isDerivedRawCache)->clear();
	$nc($nc(this->implCache)->_map)->clear();
	$nc($nc(this->membersCache)->_map)->clear();
	$nc(this->closureCache)->clear();
}

bool Types::lambda$new$4($Type* t1, $Type* t2) {
	$init(Types);
	return $nc(t1)->tsym == $nc(t2)->tsym;
}

$Types$ClosureHolder* Types::lambda$closureCollector$3(bool minClosure, $BiPredicate* shouldSkip) {
	return $new($Types$ClosureHolder, this, minClosure, shouldSkip);
}

$String* Types::lambda$membersClosure$2($Type* site) {
	$init(Types);
	return $str({"type "_s, site});
}

bool Types::lambda$areDisjoint$1($Symbol$ClassSymbol* other, $Symbol* sym) {
	return areDisjoint($cast($Symbol$ClassSymbol, sym), other);
}

bool Types::lambda$removeWildcards$0($Type* t) {
	$init(Types);
	$init($TypeTag);
	return $nc(t)->hasTag($TypeTag::WILDCARD);
}

void clinit$Types($Class* class$) {
	$assignStatic(Types::typesKey, $new($Context$Key));
	$assignStatic(Types::newInstanceFun, $new($Types$20));
	$assignStatic(Types::hashCodeVisitor, $new($Types$HashCodeVisitor));
	$assignStatic(Types::hashCodeStrictVisitor, $new($Types$24));
}

Types::Types() {
}

$Class* Types::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$$Lambda$lambda$new$4::classInfo$.name)) {
			return Types$$Lambda$lambda$new$4::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$lambda$removeWildcards$0$1::classInfo$.name)) {
			return Types$$Lambda$lambda$removeWildcards$0$1::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$lambda$areDisjoint$1$2::classInfo$.name)) {
			return Types$$Lambda$lambda$areDisjoint$1$2::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$lambda$membersClosure$2$3::classInfo$.name)) {
			return Types$$Lambda$lambda$membersClosure$2$3::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$lambda$closureCollector$3$4::classInfo$.name)) {
			return Types$$Lambda$lambda$closureCollector$3$4::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$add$5::classInfo$.name)) {
			return Types$$Lambda$add$5::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$merge$6::classInfo$.name)) {
			return Types$$Lambda$merge$6::load$(name, initialize);
		}
		if (name->equals(Types$$Lambda$closure$7::classInfo$.name)) {
			return Types$$Lambda$closure$7::load$(name, initialize);
		}
	}
	$loadClass(Types, name, initialize, &_Types_ClassInfo_, clinit$Types, allocate$Types);
	return class$;
}

$Class* Types::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com