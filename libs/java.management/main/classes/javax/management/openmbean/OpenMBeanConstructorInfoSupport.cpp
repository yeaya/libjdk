#include <javax/management/openmbean/OpenMBeanConstructorInfoSupport.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <jcpp.h>

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $OpenMBeanParameterInfoArray = $Array<::javax::management::openmbean::OpenMBeanParameterInfo>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $OpenMBeanConstructorInfo = ::javax::management::openmbean::OpenMBeanConstructorInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$Object* OpenMBeanConstructorInfoSupport::clone() {
	 return this->$MBeanConstructorInfo::clone();
}

$MBeanParameterInfoArray* OpenMBeanConstructorInfoSupport::getSignature() {
	 return this->$MBeanConstructorInfo::getSignature();
}

$String* OpenMBeanConstructorInfoSupport::getName() {
	 return this->$MBeanConstructorInfo::getName();
}

$String* OpenMBeanConstructorInfoSupport::getDescription() {
	 return this->$MBeanConstructorInfo::getDescription();
}

void OpenMBeanConstructorInfoSupport::finalize() {
	this->$MBeanConstructorInfo::finalize();
}

void OpenMBeanConstructorInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature) {
	OpenMBeanConstructorInfoSupport::init$(name, description, signature, ($Descriptor*)nullptr);
}

void OpenMBeanConstructorInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature, $Descriptor* descriptor) {
	$useLocalObjectStack();
	$MBeanConstructorInfo::init$(name, description, $(arrayCopyCast(signature)), descriptor);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	if (name == nullptr || $(name->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument name cannot be null or empty"_s);
	}
	if (description == nullptr || $(description->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument description cannot be null or empty"_s);
	}
}

$MBeanParameterInfoArray* OpenMBeanConstructorInfoSupport::arrayCopyCast($OpenMBeanParameterInfoArray* src) {
	$init(OpenMBeanConstructorInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanParameterInfoArray, dst, $new($MBeanParameterInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

bool OpenMBeanConstructorInfoSupport::equals(Object$* obj) {
	$useLocalObjectStack();
	if (obj == nullptr) {
		return false;
	}
	$var($OpenMBeanConstructorInfo, other, nullptr);
	try {
		$assign(other, $cast($OpenMBeanConstructorInfo, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!$$nc(this->getName())->equals($($nc(other)->getName()))) {
		return false;
	}
	$var($ObjectArray, var$0, this->getSignature());
	if (!$Arrays::equals(var$0, $(other->getSignature()))) {
		return false;
	}
	return true;
}

int32_t OpenMBeanConstructorInfoSupport::hashCode() {
	$useLocalObjectStack();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += $$nc(this->getName())->hashCode();
		value += $$nc($Arrays::asList($(this->getSignature())))->hashCode();
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* OpenMBeanConstructorInfoSupport::toString() {
	$useLocalObjectStack();
	if (this->myToString == nullptr) {
		$set(this, myToString, $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(name="_s)->append($(this->getName()))->append(",signature="_s)->append($($$nc($Arrays::asList($(this->getSignature())))->toString()))->append(",descriptor="_s)->append($(this->getDescriptor()))->append(")"_s)->toString());
	}
	return this->myToString;
}

OpenMBeanConstructorInfoSupport::OpenMBeanConstructorInfoSupport() {
}

$Class* OpenMBeanConstructorInfoSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanConstructorInfoSupport, serialVersionUID)},
		{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanConstructorInfoSupport, myHashCode)},
		{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanConstructorInfoSupport, myToString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;)V", nullptr, $PUBLIC, $method(OpenMBeanConstructorInfoSupport, init$, void, $String*, $String*, $OpenMBeanParameterInfoArray*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(OpenMBeanConstructorInfoSupport, init$, void, $String*, $String*, $OpenMBeanParameterInfoArray*, $Descriptor*)},
		{"arrayCopyCast", "([Ljavax/management/openmbean/OpenMBeanParameterInfo;)[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(OpenMBeanConstructorInfoSupport, arrayCopyCast, $MBeanParameterInfoArray*, $OpenMBeanParameterInfoArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanConstructorInfoSupport, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(OpenMBeanConstructorInfoSupport, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpenMBeanConstructorInfoSupport, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.OpenMBeanConstructorInfoSupport",
		"javax.management.MBeanConstructorInfo",
		"javax.management.openmbean.OpenMBeanConstructorInfo",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenMBeanConstructorInfoSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpenMBeanConstructorInfoSupport));
	});
	return class$;
}

$Class* OpenMBeanConstructorInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax