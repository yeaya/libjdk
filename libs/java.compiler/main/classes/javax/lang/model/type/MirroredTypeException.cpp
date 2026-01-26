#include <javax/lang/model/type/MirroredTypeException.h>

#include <java/io/ObjectInputStream.h>
#include <java/util/List.h>
#include <javax/lang/model/type/MirroredTypesException.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MirroredTypesException = ::javax::lang::model::type::MirroredTypesException;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$FieldInfo _MirroredTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MirroredTypeException, serialVersionUID)},
	{"type", "Ljavax/lang/model/type/TypeMirror;", nullptr, $PRIVATE | $TRANSIENT, $field(MirroredTypeException, type)},
	{}
};

$MethodInfo _MirroredTypeException_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/type/TypeMirror;)V", nullptr, $PUBLIC, $method(MirroredTypeException, init$, void, $TypeMirror*)},
	{"getTypeMirror", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC, $virtualMethod(MirroredTypeException, getTypeMirror, $TypeMirror*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MirroredTypeException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _MirroredTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.type.MirroredTypeException",
	"javax.lang.model.type.MirroredTypesException",
	nullptr,
	_MirroredTypeException_FieldInfo_,
	_MirroredTypeException_MethodInfo_
};

$Object* allocate$MirroredTypeException($Class* clazz) {
	return $of($alloc(MirroredTypeException));
}

void MirroredTypeException::init$($TypeMirror* type) {
	$useLocalCurrentObjectStackCache();
	$MirroredTypesException::init$($$str({"Attempt to access Class object for TypeMirror "_s, $($nc(type)->toString())}), type);
	$set(this, type, type);
}

$TypeMirror* MirroredTypeException::getTypeMirror() {
	return this->type;
}

void MirroredTypeException::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, type, nullptr);
	$set(this, types, nullptr);
}

MirroredTypeException::MirroredTypeException() {
}

MirroredTypeException::MirroredTypeException(const MirroredTypeException& e) : $MirroredTypesException(e) {
}

void MirroredTypeException::throw$() {
	throw *this;
}

$Class* MirroredTypeException::load$($String* name, bool initialize) {
	$loadClass(MirroredTypeException, name, initialize, &_MirroredTypeException_ClassInfo_, allocate$MirroredTypeException);
	return class$;
}

$Class* MirroredTypeException::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax