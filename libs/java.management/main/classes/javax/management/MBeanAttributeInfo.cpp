#include <javax/management/MBeanAttributeInfo.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/IntrospectionException.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <jcpp.h>

#undef NO_ATTRIBUTES
#undef TYPE

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $IntrospectionException = ::javax::management::IntrospectionException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;

namespace javax {
	namespace management {

void MBeanAttributeInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

int64_t MBeanAttributeInfo::serialVersionUID = 0;
$MBeanAttributeInfoArray* MBeanAttributeInfo::NO_ATTRIBUTES = nullptr;

void MBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs) {
	MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs, ($Descriptor*)nullptr);
}

void MBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, attributeType$, type);
	this->isRead = isReadable;
	this->isWrite = isWritable;
	if (isIs && !isReadable) {
		$throwNew($IllegalArgumentException, "Cannot have an \"is\" getter for a non-readable attribute"_s);
	}
	bool var$0 = isIs && !$nc(type)->equals("java.lang.Boolean"_s);
	if (var$0 && !type->equals("boolean"_s)) {
		$throwNew($IllegalArgumentException, "Cannot have an \"is\" getter for a non-boolean attribute"_s);
	}
	this->is = isIs;
}

void MBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter) {
	$useLocalObjectStack();
	$var($String, var$0, attributeType(getter, setter));
	bool var$1 = getter != nullptr;
	bool var$2 = setter != nullptr;
	bool var$3 = isIs(getter);
	MBeanAttributeInfo::init$(name, var$0, description, var$1, var$2, var$3, $($ImmutableDescriptor::union$($$new($DescriptorArray, {
		$($Introspector::descriptorForElement($cast($AccessibleObject, getter))),
		$($Introspector::descriptorForElement($cast($AccessibleObject, setter)))
	}))));
}

$Object* MBeanAttributeInfo::clone() {
	try {
		return $MBeanFeatureInfo::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* MBeanAttributeInfo::getType() {
	return this->attributeType$;
}

bool MBeanAttributeInfo::isReadable() {
	return this->isRead;
}

bool MBeanAttributeInfo::isWritable() {
	return this->isWrite;
}

bool MBeanAttributeInfo::isIs() {
	return this->is;
}

$String* MBeanAttributeInfo::toString() {
	$useLocalObjectStack();
	$var($String, access, nullptr);
	if (isReadable()) {
		if (isWritable()) {
			$assign(access, "read/write"_s);
		} else {
			$assign(access, "read-only"_s);
		}
	} else if (isWritable()) {
		$assign(access, "write-only"_s);
	} else {
		$assign(access, "no-access"_s);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", name="_s);
	var$0->append($(getName()));
	var$0->append(", type="_s);
	var$0->append($(getType()));
	var$0->append(", "_s);
	var$0->append(access);
	var$0->append(", "_s);
	var$0->append(isIs() ? "isIs, "_s : ""_s);
	var$0->append("descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanAttributeInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanAttributeInfo, o))) {
		return false;
	}
	$var(MBeanAttributeInfo, p, $cast(MBeanAttributeInfo, o));
	$var($Object, var$6, $nc(p)->getName());
	bool var$5 = $Objects::equals(var$6, $(getName()));
	if (var$5) {
		$var($Object, var$7, p->getType());
		var$5 = $Objects::equals(var$7, $(getType()));
	}
	bool var$4 = var$5;
	if (var$4) {
		$var($Object, var$8, p->getDescription());
		var$4 = $Objects::equals(var$8, $(getDescription()));
	}
	bool var$3 = var$4;
	if (var$3) {
		$var($Object, var$9, p->getDescriptor());
		var$3 = $Objects::equals(var$9, $(getDescriptor()));
	}
	bool var$2 = var$3;
	if (var$2) {
		bool var$10 = p->isReadable();
		var$2 = var$10 == isReadable();
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$11 = p->isWritable();
		var$1 = var$11 == isWritable();
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$12 = p->isIs();
		var$0 = var$12 == isIs();
	}
	return (var$0);
}

int32_t MBeanAttributeInfo::hashCode() {
	$useLocalObjectStack();
	return $Objects::hash($$new($ObjectArray, {
		$(getName()),
		$(getType())
	}));
}

bool MBeanAttributeInfo::isIs($Method* getter) {
	$init(MBeanAttributeInfo);
	bool var$0 = getter != nullptr && $$nc(getter->getName())->startsWith("is"_s);
	if (var$0) {
		bool var$1 = $nc(getter->getReturnType())->equals($Boolean::TYPE);
		var$0 = var$1 || $nc(getter->getReturnType())->equals($Boolean::class$);
	}
	return (var$0);
}

$String* MBeanAttributeInfo::attributeType($Method* getter, $Method* setter) {
	$init(MBeanAttributeInfo);
	$useLocalObjectStack();
	$Class* type = nullptr;
	if (getter != nullptr) {
		if ($nc($(getter->getParameterTypes()))->length != 0) {
			$throwNew($IntrospectionException, "bad getter arg count"_s);
		}
		type = getter->getReturnType();
		if (type == $Void::TYPE) {
			$throwNew($IntrospectionException, $$str({"getter "_s, $(getter->getName()), " returns void"_s}));
		}
	}
	if (setter != nullptr) {
		$var($ClassArray, params, setter->getParameterTypes());
		if ($nc(params)->length != 1) {
			$throwNew($IntrospectionException, "bad setter arg count"_s);
		}
		if (type == nullptr) {
			type = params->get(0);
		} else if (type != params->get(0)) {
			$throwNew($IntrospectionException, "type mismatch between getter and setter"_s);
		}
	}
	if (type == nullptr) {
		$throwNew($IntrospectionException, "getter and setter cannot both be null"_s);
	}
	return $nc(type)->getName();
}

void MBeanAttributeInfo::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		int64_t uid = (int64_t)0x77f8293b6a2944d8;
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(act)));
			if ("1.0"_s->equals(form)) {
				uid = (int64_t)0x61c0cd3edfc681b1;
			}
		} catch ($Exception& e) {
		}
		MBeanAttributeInfo::serialVersionUID = uid;
	}
	$assignStatic(MBeanAttributeInfo::NO_ATTRIBUTES, $new($MBeanAttributeInfoArray, 0));
}

MBeanAttributeInfo::MBeanAttributeInfo() {
}

$Class* MBeanAttributeInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanAttributeInfo, serialVersionUID)},
		{"NO_ATTRIBUTES", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanAttributeInfo, NO_ATTRIBUTES)},
		{"attributeType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, attributeType$)},
		{"isWrite", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, isWrite)},
		{"isRead", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, isRead)},
		{"is", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, is)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(MBeanAttributeInfo, init$, void, $String*, $String*, $String*, bool, bool, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZLjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanAttributeInfo, init$, void, $String*, $String*, $String*, bool, bool, bool, $Descriptor*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(MBeanAttributeInfo, init$, void, $String*, $String*, $Method*, $Method*), "javax.management.IntrospectionException"},
		{"attributeType", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanAttributeInfo, attributeType, $String*, $Method*, $Method*), "javax.management.IntrospectionException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, equals, bool, Object$*)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, getType, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, hashCode, int32_t)},
		{"isIs", "()Z", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, isIs, bool)},
		{"isIs", "(Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanAttributeInfo, isIs, bool, $Method*)},
		{"isReadable", "()Z", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, isReadable, bool)},
		{"isWritable", "()Z", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, isWritable, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanAttributeInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanAttributeInfo",
		"javax.management.MBeanFeatureInfo",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanAttributeInfo, name, initialize, &classInfo$$, MBeanAttributeInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanAttributeInfo));
	});
	return class$;
}

$Class* MBeanAttributeInfo::class$ = nullptr;

	} // management
} // javax