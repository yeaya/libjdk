#include <com/sun/tools/javac/code/Type$DelegatedType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EMPTY

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$DelegatedType_FieldInfo_[] = {
	{"qtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$DelegatedType, qtype)},
	{"tag", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $field(Type$DelegatedType, tag)},
	{}
};

$MethodInfo _Type$DelegatedType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Type$DelegatedType, init$, void, $TypeTag*, $Type*)},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(Type$DelegatedType, init$, void, $TypeTag*, $Type*, $TypeMetadata*)},
	{"allparams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$DelegatedType, allparams, $List*)},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Type$DelegatedType, getAnnotationMirrors, $1List*)},
	{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, getEnclosingType, $Type*)},
	{"getParameterTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$DelegatedType, getParameterTypes, $List*)},
	{"getReceiverType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, getReceiverType, $Type*)},
	{"getReturnType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, getReturnType, $Type*)},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, getTag, $TypeTag*)},
	{"getThrownTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$DelegatedType, getThrownTypes, $List*)},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(Type$DelegatedType, getTypeArguments, $List*)},
	{"getUpperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, getUpperBound, $Type*)},
	{"isErroneous", "()Z", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, isErroneous, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type$DelegatedType, toString, $String*)},
	{}
};

$InnerClassInfo _Type$DelegatedType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$DelegatedType", "com.sun.tools.javac.code.Type", "DelegatedType", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Type$DelegatedType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Type$DelegatedType",
	"com.sun.tools.javac.code.Type",
	nullptr,
	_Type$DelegatedType_FieldInfo_,
	_Type$DelegatedType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$DelegatedType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$DelegatedType($Class* clazz) {
	return $of($alloc(Type$DelegatedType));
}

void Type$DelegatedType::init$($TypeTag* tag, $Type* qtype) {
	$init($TypeMetadata);
	Type$DelegatedType::init$(tag, qtype, $TypeMetadata::EMPTY);
}

void Type$DelegatedType::init$($TypeTag* tag, $Type* qtype, $TypeMetadata* metadata) {
	$Type::init$($nc(qtype)->tsym, metadata);
	$set(this, tag, tag);
	$set(this, qtype, qtype);
}

$TypeTag* Type$DelegatedType::getTag() {
	return this->tag;
}

$String* Type$DelegatedType::toString() {
	return $nc(this->qtype)->toString();
}

$List* Type$DelegatedType::getTypeArguments() {
	return $nc(this->qtype)->getTypeArguments();
}

$Type* Type$DelegatedType::getEnclosingType() {
	return $nc(this->qtype)->getEnclosingType();
}

$List* Type$DelegatedType::getParameterTypes() {
	return $nc(this->qtype)->getParameterTypes();
}

$Type* Type$DelegatedType::getReturnType() {
	return $nc(this->qtype)->getReturnType();
}

$Type* Type$DelegatedType::getReceiverType() {
	return $nc(this->qtype)->getReceiverType();
}

$List* Type$DelegatedType::getThrownTypes() {
	return $nc(this->qtype)->getThrownTypes();
}

$List* Type$DelegatedType::allparams() {
	return $nc(this->qtype)->allparams();
}

$Type* Type$DelegatedType::getUpperBound() {
	return $nc(this->qtype)->getUpperBound();
}

bool Type$DelegatedType::isErroneous() {
	return $nc(this->qtype)->isErroneous();
}

$1List* Type$DelegatedType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$DelegatedType::Type$DelegatedType() {
}

$Class* Type$DelegatedType::load$($String* name, bool initialize) {
	$loadClass(Type$DelegatedType, name, initialize, &_Type$DelegatedType_ClassInfo_, allocate$Type$DelegatedType);
	return class$;
}

$Class* Type$DelegatedType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com