#include <javax/lang/model/type/MirroredTypesException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

void MirroredTypesException::init$($String* message, $TypeMirror* type) {
	$RuntimeException::init$(message);
	$var($List, tmp, $new($ArrayList));
	tmp->add(type);
	$set(this, types, $Collections::unmodifiableList(tmp));
}

void MirroredTypesException::init$($List* types$renamed) {
	$useLocalObjectStack();
	$var($List, types, types$renamed);
	$RuntimeException::init$($$str({"Attempt to access Class objects for TypeMirrors "_s, $($nc(($assign(types, $new($ArrayList, types))))->toString())}));
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MirroredTypesException, serialVersionUID)},
		{"types", "Ljava/util/List;", "Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $TRANSIENT, $field(MirroredTypesException, types)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljavax/lang/model/type/TypeMirror;)V", nullptr, 0, $method(MirroredTypesException, init$, void, $String*, $TypeMirror*)},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;)V", $PUBLIC, $method(MirroredTypesException, init$, void, $List*)},
		{"getTypeMirrors", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC, $virtualMethod(MirroredTypesException, getTypeMirrors, $List*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MirroredTypesException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.type.MirroredTypesException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MirroredTypesException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MirroredTypesException);
	});
	return class$;
}

$Class* MirroredTypesException::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax