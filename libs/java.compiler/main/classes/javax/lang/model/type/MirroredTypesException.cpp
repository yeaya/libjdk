#include <javax/lang/model/type/MirroredTypesException.h>

#include <java/io/ObjectInputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$FieldInfo _MirroredTypesException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MirroredTypesException, serialVersionUID)},
	{"types", "Ljava/util/List;", "Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $TRANSIENT, $field(MirroredTypesException, types)},
	{}
};

$MethodInfo _MirroredTypesException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/lang/model/type/TypeMirror;)V", nullptr, 0, $method(static_cast<void(MirroredTypesException::*)($String*,$TypeMirror*)>(&MirroredTypesException::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;)V", $PUBLIC, $method(static_cast<void(MirroredTypesException::*)($List*)>(&MirroredTypesException::init$))},
	{"getTypeMirrors", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MirroredTypesException::*)($ObjectInputStream*)>(&MirroredTypesException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _MirroredTypesException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.type.MirroredTypesException",
	"java.lang.RuntimeException",
	nullptr,
	_MirroredTypesException_FieldInfo_,
	_MirroredTypesException_MethodInfo_
};

$Object* allocate$MirroredTypesException($Class* clazz) {
	return $of($alloc(MirroredTypesException));
}

void MirroredTypesException::init$($String* message, $TypeMirror* type) {
	$RuntimeException::init$(message);
	$var($List, tmp, $new($ArrayList));
	tmp->add(type);
	$set(this, types, $Collections::unmodifiableList(tmp));
}

void MirroredTypesException::init$($List* types$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, types, types$renamed);
	$RuntimeException::init$($$str({"Attempt to access Class objects for TypeMirrors "_s, $($nc($of(($assign(types, $new($ArrayList, static_cast<$Collection*>(types))))))->toString())}));
	$set(this, types, $Collections::unmodifiableList(types));
}

$List* MirroredTypesException::getTypeMirrors() {
	return this->types;
}

void MirroredTypesException::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, types, nullptr);
}

MirroredTypesException::MirroredTypesException() {
}

MirroredTypesException::MirroredTypesException(const MirroredTypesException& e) : $RuntimeException(e) {
}

void MirroredTypesException::throw$() {
	throw *this;
}

$Class* MirroredTypesException::load$($String* name, bool initialize) {
	$loadClass(MirroredTypesException, name, initialize, &_MirroredTypesException_ClassInfo_, allocate$MirroredTypesException);
	return class$;
}

$Class* MirroredTypesException::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax