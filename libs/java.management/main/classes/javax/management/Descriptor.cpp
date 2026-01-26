#include <javax/management/Descriptor.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$MethodInfo _Descriptor_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getFieldNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, getFieldNames, $StringArray*)},
	{"getFieldValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, getFieldValue, $Object*, $String*), "javax.management.RuntimeOperationsException"},
	{"getFieldValues", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Descriptor, getFieldValues, $ObjectArray*, $StringArray*)},
	{"getFields", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, getFields, $StringArray*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, isValid, bool), "javax.management.RuntimeOperationsException"},
	{"removeField", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, removeField, void, $String*)},
	{"setField", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, setField, void, $String*, Object$*), "javax.management.RuntimeOperationsException"},
	{"setFields", "([Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Descriptor, setFields, void, $StringArray*, $ObjectArray*), "javax.management.RuntimeOperationsException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Descriptor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.Descriptor",
	nullptr,
	"java.io.Serializable,java.lang.Cloneable",
	nullptr,
	_Descriptor_MethodInfo_
};

$Object* allocate$Descriptor($Class* clazz) {
	return $of($alloc(Descriptor));
}

$Object* Descriptor::clone() {
	 return this->$Serializable::clone();
}

bool Descriptor::equals(Object$* obj) {
	 return this->$Serializable::equals(obj);
}

int32_t Descriptor::hashCode() {
	 return this->$Serializable::hashCode();
}

$String* Descriptor::toString() {
	 return this->$Serializable::toString();
}

void Descriptor::finalize() {
	this->$Serializable::finalize();
}

$Class* Descriptor::load$($String* name, bool initialize) {
	$loadClass(Descriptor, name, initialize, &_Descriptor_ClassInfo_, allocate$Descriptor);
	return class$;
}

$Class* Descriptor::class$ = nullptr;

	} // management
} // javax