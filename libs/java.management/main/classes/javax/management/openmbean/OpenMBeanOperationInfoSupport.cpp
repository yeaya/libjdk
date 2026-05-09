#include <javax/management/openmbean/OpenMBeanOperationInfoSupport.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanOperationInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

#undef ACTION
#undef ACTION_INFO
#undef INFO
#undef UNKNOWN

using $DescriptorArray = $Array<::javax::management::Descriptor>;
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
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $OpenMBeanOperationInfo = ::javax::management::openmbean::OpenMBeanOperationInfo;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$Object* OpenMBeanOperationInfoSupport::clone() {
	return this->$MBeanOperationInfo::clone();
}

$String* OpenMBeanOperationInfoSupport::getReturnType() {
	return this->$MBeanOperationInfo::getReturnType();
}

$MBeanParameterInfoArray* OpenMBeanOperationInfoSupport::getSignature() {
	return this->$MBeanOperationInfo::getSignature();
}

int32_t OpenMBeanOperationInfoSupport::getImpact() {
	return this->$MBeanOperationInfo::getImpact();
}

$String* OpenMBeanOperationInfoSupport::getName() {
	return this->$MBeanOperationInfo::getName();
}

$String* OpenMBeanOperationInfoSupport::getDescription() {
	return this->$MBeanOperationInfo::getDescription();
}

void OpenMBeanOperationInfoSupport::finalize() {
	this->$MBeanOperationInfo::finalize();
}

void OpenMBeanOperationInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature, $OpenType* returnOpenType, int32_t impact) {
	OpenMBeanOperationInfoSupport::init$(name, description, signature, returnOpenType, impact, ($Descriptor*)nullptr);
}

void OpenMBeanOperationInfoSupport::init$($String* name, $String* description, $OpenMBeanParameterInfoArray* signature, $OpenType* returnOpenType, int32_t impact, $Descriptor* descriptor) {
	$useLocalObjectStack();
	$var($MBeanParameterInfoArray, var$0, arrayCopyCast(signature));
	$var($String, var$1, (returnOpenType == nullptr) ? ($String*)nullptr : returnOpenType->getClassName());
	$MBeanOperationInfo::init$(name, description, var$0, var$1, impact, $($ImmutableDescriptor::union$($$new($DescriptorArray, {
		descriptor,
		(returnOpenType == nullptr) ? ($Descriptor*)nullptr : $(returnOpenType->getDescriptor())
	}))));
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	if (name == nullptr || $(name->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument name cannot be null or empty"_s);
	}
	if (description == nullptr || $(description->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Argument description cannot be null or empty"_s);
	}
	if (returnOpenType == nullptr) {
		$throwNew($IllegalArgumentException, "Argument returnOpenType cannot be null"_s);
	}
	if (impact != $MBeanOperationInfo::ACTION && impact != $MBeanOperationInfo::ACTION_INFO && impact != $MBeanOperationInfo::INFO && impact != $MBeanOperationInfo::UNKNOWN) {
		$throwNew($IllegalArgumentException, $$str({"Argument impact can only be one of ACTION, ACTION_INFO, INFO, or UNKNOWN: "_s, $$str(impact)}));
	}
	$set(this, returnOpenType, returnOpenType);
}

$MBeanParameterInfoArray* OpenMBeanOperationInfoSupport::arrayCopyCast($OpenMBeanParameterInfoArray* src) {
	$init(OpenMBeanOperationInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($MBeanParameterInfoArray, dst, $new($MBeanParameterInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

$OpenMBeanParameterInfoArray* OpenMBeanOperationInfoSupport::arrayCopyCast($MBeanParameterInfoArray* src) {
	$init(OpenMBeanOperationInfoSupport);
	if (src == nullptr) {
		return nullptr;
	}
	$var($OpenMBeanParameterInfoArray, dst, $new($OpenMBeanParameterInfoArray, $nc(src)->length));
	$System::arraycopy(src, 0, dst, 0, src->length);
	return dst;
}

$OpenType* OpenMBeanOperationInfoSupport::getReturnOpenType() {
	return this->returnOpenType;
}

bool OpenMBeanOperationInfoSupport::equals(Object$* obj) {
	$useLocalObjectStack();
	if (obj == nullptr) {
		return false;
	}
	$var($OpenMBeanOperationInfo, other, nullptr);
	try {
		$assign(other, $cast($OpenMBeanOperationInfo, obj));
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
	if (!$$nc(this->getReturnOpenType())->equals($(other->getReturnOpenType()))) {
		return false;
	}
	int32_t var$1 = this->getImpact();
	if (var$1 != other->getImpact()) {
		return false;
	}
	return true;
}

int32_t OpenMBeanOperationInfoSupport::hashCode() {
	$useLocalObjectStack();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += $$nc(this->getName())->hashCode();
		value += $$nc($Arrays::asList($(this->getSignature())))->hashCode();
		value += $$nc(this->getReturnOpenType())->hashCode();
		value += this->getImpact();
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* OpenMBeanOperationInfoSupport::toString() {
	$useLocalObjectStack();
	if (this->myToString == nullptr) {
		$set(this, myToString, $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(name="_s)->append($(this->getName()))->append(",signature="_s)->append($($$nc($Arrays::asList($(this->getSignature())))->toString()))->append(",return="_s)->append($($$nc(this->getReturnOpenType())->toString()))->append(",impact="_s)->append(this->getImpact())->append(",descriptor="_s)->append($(this->getDescriptor()))->append(")"_s)->toString());
	}
	return this->myToString;
}

$Object* OpenMBeanOperationInfoSupport::readResolve() {
	$useLocalObjectStack();
	if ($nc($($$nc(getDescriptor())->getFieldNames()))->length == 0) {
		$var($String, var$0, this->name);
		$var($String, var$1, this->description);
		$var($OpenMBeanParameterInfoArray, var$2, arrayCopyCast($(getSignature())));
		$var($OpenType, var$3, this->returnOpenType);
		return $of($new(OpenMBeanOperationInfoSupport, var$0, var$1, var$2, var$3, getImpact()));
	} else {
		return $of(this);
	}
}

OpenMBeanOperationInfoSupport::OpenMBeanOperationInfoSupport() {
}

$Class* OpenMBeanOperationInfoSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanOperationInfoSupport, serialVersionUID)},
		{"returnOpenType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE, $field(OpenMBeanOperationInfoSupport, returnOpenType)},
		{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanOperationInfoSupport, myHashCode)},
		{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanOperationInfoSupport, myToString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getImpact", "()I", nullptr, $PUBLIC},
		{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getReturnType", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/openmbean/OpenType;I)V", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/openmbean/OpenType<*>;I)V", $PUBLIC, $method(OpenMBeanOperationInfoSupport, init$, void, $String*, $String*, $OpenMBeanParameterInfoArray*, $OpenType*, int32_t)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/openmbean/OpenType;ILjavax/management/Descriptor;)V", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/openmbean/OpenType<*>;ILjavax/management/Descriptor;)V", $PUBLIC, $method(OpenMBeanOperationInfoSupport, init$, void, $String*, $String*, $OpenMBeanParameterInfoArray*, $OpenType*, int32_t, $Descriptor*)},
		{"arrayCopyCast", "([Ljavax/management/openmbean/OpenMBeanParameterInfo;)[Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(OpenMBeanOperationInfoSupport, arrayCopyCast, $MBeanParameterInfoArray*, $OpenMBeanParameterInfoArray*)},
		{"arrayCopyCast", "([Ljavax/management/MBeanParameterInfo;)[Ljavax/management/openmbean/OpenMBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(OpenMBeanOperationInfoSupport, arrayCopyCast, $OpenMBeanParameterInfoArray*, $MBeanParameterInfoArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanOperationInfoSupport, equals, bool, Object$*)},
		{"getReturnOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC, $virtualMethod(OpenMBeanOperationInfoSupport, getReturnOpenType, $OpenType*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(OpenMBeanOperationInfoSupport, hashCode, int32_t)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(OpenMBeanOperationInfoSupport, readResolve, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpenMBeanOperationInfoSupport, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.OpenMBeanOperationInfoSupport",
		"javax.management.MBeanOperationInfo",
		"javax.management.openmbean.OpenMBeanOperationInfo",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenMBeanOperationInfoSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpenMBeanOperationInfoSupport));
	});
	return class$;
}

$Class* OpenMBeanOperationInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax