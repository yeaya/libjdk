#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType$1.h>
#include <com/sun/tools/javac/code/Type$ClassType$2.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef CLASS
#undef DECLARED
#undef EMPTY
#undef ERROR
#undef TYP

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType$1 = ::com::sun::tools::javac::code::Type$ClassType$1;
using $Type$ClassType$2 = ::com::sun::tools::javac::code::Type$ClassType$2;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $1List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Object* Type$ClassType::poolKey($Types* types) {
	return this->$Type::poolKey(types);
}

$Annotation* Type$ClassType::getAnnotation($Class* annotationType) {
	return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$ClassType::getAnnotationsByType($Class* annotationType) {
	return this->$Type::getAnnotationsByType(annotationType);
}

bool Type$ClassType::equals(Object$* t) {
	return this->$Type::equals(t);
}

int32_t Type$ClassType::hashCode() {
	return this->$Type::hashCode();
}

$Object* Type$ClassType::clone() {
	return this->$Type::clone();
}

void Type$ClassType::finalize() {
	this->$Type::finalize();
}

Type$ClassType::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Type$ClassType, $ErrorType, memberClass0$);
}

$Element* Type$ClassType::MemberClass0$::asElement() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->asElement();
}

$TypeMirror* Type$ClassType::MemberClass0$::getEnclosingType() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getEnclosingType();
}

$List* Type$ClassType::MemberClass0$::getTypeArguments() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getTypeArguments();
}

$TypeKind* Type$ClassType::MemberClass0$::getKind() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getKind();
}

bool Type$ClassType::MemberClass0$::equals(Object$* arg0) {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->equals(arg0);
}

int32_t Type$ClassType::MemberClass0$::hashCode() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->hashCode();
}

$String* Type$ClassType::MemberClass0$::toString() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->toString();
}

$List* Type$ClassType::MemberClass0$::getAnnotationMirrors() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Type$ClassType::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Type$ClassType::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Type$ClassType::MemberClass0$::accept($TypeVisitor* arg0, Object$* arg1) {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->accept(arg0, arg1);
}

$Object* Type$ClassType::MemberClass0$::clone() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->clone();
}

void Type$ClassType::MemberClass0$::finalize() {
	return ((Type$ClassType*)(void*)((int8_t*)(void*)this - $offsetof(Type$ClassType, memberClass0$)))->finalize();
}

void Type$ClassType::init$($Type* outer, $1List* typarams, $Symbol$TypeSymbol* tsym) {
	$init($TypeMetadata);
	Type$ClassType::init$(outer, typarams, tsym, $TypeMetadata::EMPTY);
}

void Type$ClassType::init$($Type* outer, $1List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$Type::init$(tsym, metadata);
	this->rank_field = -1;
	$set(this, outer_field, outer);
	$set(this, typarams_field, typarams);
	$set(this, allparams_field, nullptr);
	$set(this, supertype_field, nullptr);
	$set(this, interfaces_field, nullptr);
}

int32_t Type$ClassType::poolTag() {
	return $ClassFile::CONSTANT_Class;
}

Type$ClassType* Type$ClassType::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$ClassType$1, this, this->outer_field, this->typarams_field, this->tsym, md);
}

$TypeTag* Type$ClassType::getTag() {
	$init($TypeTag);
	return $TypeTag::CLASS;
}

$Object* Type$ClassType::accept($Type$Visitor* v, Object$* s) {
	return $nc(v)->visitClassType(this, s);
}

$Type* Type$ClassType::constType(Object$* constValue) {
	$useLocalObjectStack();
	$var($Object, value, constValue);
	return $new($Type$ClassType$2, this, $(getEnclosingType()), this->typarams_field, this->tsym, this->metadata, value);
}

$String* Type$ClassType::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	$init($TypeTag);
	$init($Kinds$Kind);
	if ($$nc(getEnclosingType())->hasTag($TypeTag::CLASS) && $nc($nc(this->tsym)->owner)->kind == $Kinds$Kind::TYP) {
		buf->append($($$nc(getEnclosingType())->toString()));
		buf->append("."_s);
		appendAnnotationsString(buf);
		buf->append($(className(this->tsym, false)));
	} else {
		appendAnnotationsString(buf);
		buf->append($(className(this->tsym, true)));
	}
	if ($$nc(getTypeArguments())->nonEmpty()) {
		buf->append(u'<');
		buf->append($($$nc(getTypeArguments())->toString()));
		buf->append(">"_s);
	}
	return buf->toString();
}

$String* Type$ClassType::className($Symbol* sym, bool longform) {
	$useLocalObjectStack();
	bool var$0 = $nc($nc(sym)->name)->isEmpty();
	if (var$0 && (sym->flags() & 0x01000000) != 0) {
		$var($StringBuilder, s, $new($StringBuilder, $($nc(this->supertype_field)->toString())));
		{
			$var($1List, is, this->interfaces_field);
			for (; $nc(is)->nonEmpty(); $assign(is, is->tail)) {
				s->append("&"_s);
				s->append($($nc($cast($Type, is->head))->toString()));
			}
		}
		return s->toString();
	} else if ($nc(sym->name)->isEmpty()) {
		$var($String, s, nullptr);
		$var(Type$ClassType, norm, $cast(Type$ClassType, $nc(this->tsym)->type));
		if (norm == nullptr) {
			$assign(s, $Log::getLocalizedString("anonymous.class"_s, $$new($ObjectArray, {($Object*)nullptr})));
		} else if (norm->interfaces_field != nullptr && norm->interfaces_field->nonEmpty()) {
			$assign(s, $Log::getLocalizedString("anonymous.class"_s, $$new($ObjectArray, {norm->interfaces_field->head})));
		} else {
			$assign(s, $Log::getLocalizedString("anonymous.class"_s, $$new($ObjectArray, {norm->supertype_field})));
		}
		$init($Type);
		if ($Type::moreInfo) {
			$plusAssign(s, $($String::valueOf($of(sym)->hashCode())));
		}
		return s;
	} else if (longform) {
		return $$nc(sym->getQualifiedName())->toString();
	} else {
		return $nc(sym->name)->toString();
	}
}

$1List* Type$ClassType::getTypeArguments() {
	if (this->typarams_field == nullptr) {
		complete();
		if (this->typarams_field == nullptr) {
			$set(this, typarams_field, $1List::nil());
		}
	}
	return this->typarams_field;
}

bool Type$ClassType::hasErasedSupertypes() {
	return isRaw();
}

$Type* Type$ClassType::getEnclosingType() {
	return this->outer_field;
}

void Type$ClassType::setEnclosingType($Type* outer) {
	$set(this, outer_field, outer);
}

$1List* Type$ClassType::allparams() {
	$useLocalObjectStack();
	if (this->allparams_field == nullptr) {
		$set(this, allparams_field, $$nc(getTypeArguments())->prependList($($$nc(getEnclosingType())->allparams())));
	}
	return this->allparams_field;
}

bool Type$ClassType::isErroneous() {
	$useLocalObjectStack();
	bool var$1 = $$nc(getEnclosingType())->isErroneous();
	bool var$0 = var$1 || $Type::isErroneous($(getTypeArguments()));
	return var$0 || !$equals(this, $nc(this->tsym)->type) && $nc(this->tsym->type)->isErroneous();
}

bool Type$ClassType::isParameterized() {
	return $nc($(allparams()))->tail != nullptr;
}

bool Type$ClassType::isReference() {
	return true;
}

bool Type$ClassType::isNullOrReference() {
	return true;
}

bool Type$ClassType::isRaw() {
	$useLocalObjectStack();
	bool var$0 = !$equals(this, $nc(this->tsym)->type) && $$nc($nc(this->tsym->type)->allparams())->nonEmpty();
	return var$0 && $$nc(allparams())->isEmpty();
}

bool Type$ClassType::contains($Type* elem) {
	$useLocalObjectStack();
	bool var$1 = $nc(elem)->equalsIgnoreMetadata(this);
	if (!var$1) {
		bool var$2 = isParameterized();
		if (var$2) {
			bool var$3 = $$nc(getEnclosingType())->contains(elem);
			var$2 = var$3 || $Type::contains($(getTypeArguments()), elem);
		}
		var$1 = var$2;
	}
	bool var$0 = var$1;
	if (!var$0) {
		bool var$4 = isCompound();
		if (var$4) {
			bool var$5 = $nc(this->supertype_field)->contains(elem);
			var$4 = var$5 || $Type::contains(this->interfaces_field, elem);
		}
		var$0 = var$4;
	}
	return var$0;
}

void Type$ClassType::complete() {
	$nc(this->tsym)->complete();
}

$TypeKind* Type$ClassType::getKind() {
	$nc(this->tsym)->apiComplete();
	$init($Kinds$Kind);
	$init($TypeKind);
	return $nc(this->tsym)->kind == $Kinds$Kind::TYP ? $TypeKind::DECLARED : $TypeKind::ERROR;
}

$Object* Type$ClassType::accept($TypeVisitor* v, Object$* p) {
	return $nc(v)->visitDeclared($as($ErrorType, this), p);
}

$List* Type$ClassType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

$Symbol$TypeSymbol* Type$ClassType::asElement() {
	return $Type::asElement();
}

Type$ClassType::Type$ClassType() {
}

$Class* Type$ClassType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"outer_field", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Type$ClassType, outer_field)},
		{"typarams_field", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$ClassType, typarams_field)},
		{"allparams_field", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$ClassType, allparams_field)},
		{"supertype_field", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$ClassType, supertype_field)},
		{"interfaces_field", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$ClassType, interfaces_field)},
		{"all_interfaces_field", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$ClassType, all_interfaces_field)},
		{"rank_field", "I", nullptr, 0, $field(Type$ClassType, rank_field)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", $PUBLIC, $method(Type$ClassType, init$, void, $Type*, $1List*, $Symbol$TypeSymbol*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", $PUBLIC, $method(Type$ClassType, init$, void, $Type*, $1List*, $Symbol$TypeSymbol*, $TypeMetadata*)},
		{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC, $virtualMethod(Type$ClassType, accept, $Object*, $Type$Visitor*, Object$*)},
		{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Type$ClassType, accept, $Object*, $TypeVisitor*, Object$*)},
		{"allparams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$ClassType, allparams, $1List*)},
		{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType, asElement, $Symbol$TypeSymbol*)},
		{"className", "(Lcom/sun/tools/javac/code/Symbol;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(Type$ClassType, className, $String*, $Symbol*, bool)},
		{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, cloneWithMetadata, Type$ClassType*, $TypeMetadata*)},
		{"complete", "()V", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, complete, void)},
		{"constType", "(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, constType, $Type*, Object$*)},
		{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, contains, bool, $Type*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$ClassType, getAnnotationMirrors, $List*)},
		{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, getEnclosingType, $Type*)},
		{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, getKind, $TypeKind*)},
		{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, getTag, $TypeTag*)},
		{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$ClassType, getTypeArguments, $1List*)},
		{"hasErasedSupertypes", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, hasErasedSupertypes, bool)},
		{"isErroneous", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, isErroneous, bool)},
		{"isNullOrReference", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, isNullOrReference, bool)},
		{"isParameterized", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, isParameterized, bool)},
		{"isRaw", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, isRaw, bool)},
		{"isReference", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, isReference, bool)},
		{"*poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
		{"poolTag", "()I", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, poolTag, int32_t)},
		{"setEnclosingType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, setEnclosingType, void, $Type*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type$ClassType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Type$ClassType$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$ClassType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Type$ClassType",
		"com.sun.tools.javac.code.Type",
		"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,javax.lang.model.type.ErrorType",
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
	$loadClass(Type$ClassType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$ClassType));
	});
	return class$;
}

$Class* Type$ClassType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com