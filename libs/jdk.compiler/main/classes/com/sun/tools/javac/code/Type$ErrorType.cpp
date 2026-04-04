#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$ErrorScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType$1.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef ERR
#undef ERROR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$ErrorScope = ::com::sun::tools::javac::code::Scope$ErrorScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType$1 = ::com::sun::tools::javac::code::Type$ErrorType$1;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$ErrorType::init$($Symbol$ClassSymbol* c, $Type* originalType) {
	Type$ErrorType::init$(originalType, c);
	$set($nc(c), type, this);
	$init($Kinds$Kind);
	$set(c, kind, $Kinds$Kind::ERR);
	$set(c, members_field, $new($Scope$ErrorScope, c));
}

void Type$ErrorType::init$($Type* originalType, $Symbol$TypeSymbol* tsym) {
	$init($Type);
	$Type$ClassType::init$($Type::noType, $($List::nil()), nullptr);
	$set(this, originalType, nullptr);
	$set(this, tsym, tsym);
	$set(this, originalType, originalType == nullptr ? $cast($Type, $Type::noType) : originalType);
}

void Type$ErrorType::init$($Type* originalType, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$init($Type);
	$Type$ClassType::init$($Type::noType, $($List::nil()), nullptr, metadata);
	$set(this, originalType, nullptr);
	$set(this, tsym, tsym);
	$set(this, originalType, originalType == nullptr ? $cast($Type, $Type::noType) : originalType);
}

Type$ErrorType* Type$ErrorType::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$ErrorType$1, this, this->originalType, this->tsym, md);
}

$TypeTag* Type$ErrorType::getTag() {
	$init($TypeTag);
	return $TypeTag::ERROR;
}

bool Type$ErrorType::isPartial() {
	return true;
}

bool Type$ErrorType::isReference() {
	return true;
}

bool Type$ErrorType::isNullOrReference() {
	return true;
}

void Type$ErrorType::init$($Name* name, $Symbol$TypeSymbol* container, $Type* originalType) {
	Type$ErrorType::init$($$new($Symbol$ClassSymbol, (1 | 8) | 0x40000000, name, nullptr, container), originalType);
}

$Object* Type$ErrorType::accept($Type$Visitor* v, Object$* s) {
	return $nc(v)->visitErrorType(this, s);
}

$Type* Type$ErrorType::constType(Object$* constValue) {
	return this;
}

$Type* Type$ErrorType::getEnclosingType() {
	$init($Type);
	return $Type::noType;
}

$Type* Type$ErrorType::getReturnType() {
	return this;
}

$Type* Type$ErrorType::asSub($Symbol* sym) {
	return this;
}

bool Type$ErrorType::isGenType($Type* t) {
	return true;
}

bool Type$ErrorType::isErroneous() {
	return true;
}

bool Type$ErrorType::isCompound() {
	return false;
}

bool Type$ErrorType::isInterface() {
	return false;
}

$List* Type$ErrorType::allparams() {
	return $List::nil();
}

$List* Type$ErrorType::getTypeArguments() {
	return $List::nil();
}

$TypeKind* Type$ErrorType::getKind() {
	$init($TypeKind);
	return $TypeKind::ERROR;
}

$Type* Type$ErrorType::getOriginalType() {
	return this->originalType;
}

$Object* Type$ErrorType::accept($TypeVisitor* v, Object$* p) {
	return $nc(v)->visitError($as($ErrorType, this), p);
}

Type$ErrorType::Type$ErrorType() {
}

$Class* Type$ErrorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"originalType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Type$ErrorType, originalType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Type$ErrorType, init$, void, $Symbol$ClassSymbol*, $Type*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, $PUBLIC, $method(Type$ErrorType, init$, void, $Type*, $Symbol$TypeSymbol*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PRIVATE, $method(Type$ErrorType, init$, void, $Type*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Type$ErrorType, init$, void, $Name*, $Symbol$TypeSymbol*, $Type*)},
		{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC, $virtualMethod(Type$ErrorType, accept, $Object*, $Type$Visitor*, Object$*)},
		{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Type$ErrorType, accept, $Object*, $TypeVisitor*, Object$*)},
		{"allparams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$ErrorType, allparams, $List*)},
		{"asSub", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, asSub, $Type*, $Symbol*)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ErrorType;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, cloneWithMetadata, Type$ErrorType*, $TypeMetadata*)},
		{"constType", "(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, constType, $Type*, Object$*)},
		{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, getEnclosingType, $Type*)},
		{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, getKind, $TypeKind*)},
		{"getOriginalType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, getOriginalType, $Type*)},
		{"getReturnType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, getReturnType, $Type*)},
		{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, getTag, $TypeTag*)},
		{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$ErrorType, getTypeArguments, $List*)},
		{"isCompound", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isCompound, bool)},
		{"isErroneous", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isErroneous, bool)},
		{"isGenType", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isGenType, bool, $Type*)},
		{"isInterface", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isInterface, bool)},
		{"isNullOrReference", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isNullOrReference, bool)},
		{"isPartial", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isPartial, bool)},
		{"isReference", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ErrorType, isReference, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$ErrorType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Type$ErrorType",
		"com.sun.tools.javac.code.Type$ClassType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$ErrorType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$ErrorType));
	});
	return class$;
}

$Class* Type$ErrorType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com