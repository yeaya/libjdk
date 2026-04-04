#include <javax/management/MBeanInfo.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/security/AccessController.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanInfo$ArrayGettersSafeAction.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <jcpp.h>

#undef EMPTY_DESCRIPTOR
#undef NO_ATTRIBUTES
#undef NO_CONSTRUCTORS
#undef NO_NOTIFICATIONS
#undef NO_OPERATIONS

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanInfo$ArrayGettersSafeAction = ::javax::management::MBeanInfo$ArrayGettersSafeAction;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;

namespace javax {
	namespace management {

void MBeanInfo::finalize() {
	this->$Cloneable::finalize();
}

$Map* MBeanInfo::arrayGettersSafeMap = nullptr;

void MBeanInfo::init$($String* className, $String* description, $MBeanAttributeInfoArray* attributes, $MBeanConstructorInfoArray* constructors, $MBeanOperationInfoArray* operations, $MBeanNotificationInfoArray* notifications) {
	MBeanInfo::init$(className, description, attributes, constructors, operations, notifications, nullptr);
}

void MBeanInfo::init$($String* className, $String* description, $MBeanAttributeInfoArray* attributes$renamed, $MBeanConstructorInfoArray* constructors$renamed, $MBeanOperationInfoArray* operations$renamed, $MBeanNotificationInfoArray* notifications$renamed, $Descriptor* descriptor$renamed) {
	$useLocalObjectStack();
	$var($MBeanConstructorInfoArray, constructors, constructors$renamed);
	$var($MBeanOperationInfoArray, operations, operations$renamed);
	$var($MBeanAttributeInfoArray, attributes, attributes$renamed);
	$var($Descriptor, descriptor, descriptor$renamed);
	$var($MBeanNotificationInfoArray, notifications, notifications$renamed);
	$set(this, className, className);
	$set(this, description, description);
	if (attributes == nullptr) {
		$init($MBeanAttributeInfo);
		$assign(attributes, $MBeanAttributeInfo::NO_ATTRIBUTES);
	}
	$set(this, attributes, attributes);
	if (operations == nullptr) {
		$init($MBeanOperationInfo);
		$assign(operations, $MBeanOperationInfo::NO_OPERATIONS);
	}
	$set(this, operations, operations);
	if (constructors == nullptr) {
		$init($MBeanConstructorInfo);
		$assign(constructors, $MBeanConstructorInfo::NO_CONSTRUCTORS);
	}
	$set(this, constructors, constructors);
	if (notifications == nullptr) {
		$init($MBeanNotificationInfo);
		$assign(notifications, $MBeanNotificationInfo::NO_NOTIFICATIONS);
	}
	$set(this, notifications, notifications);
	if (descriptor == nullptr) {
		$init($ImmutableDescriptor);
		$assign(descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
	}
	$set(this, descriptor, descriptor);
	this->arrayGettersSafe$ = arrayGettersSafe($of(this)->getClass(), MBeanInfo::class$);
}

$Object* MBeanInfo::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* MBeanInfo::getClassName() {
	return this->className;
}

$String* MBeanInfo::getDescription() {
	return this->description;
}

$MBeanAttributeInfoArray* MBeanInfo::getAttributes() {
	$var($MBeanAttributeInfoArray, as, nonNullAttributes());
	if ($nc(as)->length == 0) {
		return as;
	} else {
		return $cast($MBeanAttributeInfoArray, as->clone());
	}
}

$MBeanAttributeInfoArray* MBeanInfo::fastGetAttributes() {
	if (this->arrayGettersSafe$) {
		return nonNullAttributes();
	} else {
		return getAttributes();
	}
}

$MBeanAttributeInfoArray* MBeanInfo::nonNullAttributes() {
	$init($MBeanAttributeInfo);
	return (this->attributes == nullptr) ? $MBeanAttributeInfo::NO_ATTRIBUTES : this->attributes;
}

$MBeanOperationInfoArray* MBeanInfo::getOperations() {
	$var($MBeanOperationInfoArray, os, nonNullOperations());
	if ($nc(os)->length == 0) {
		return os;
	} else {
		return $cast($MBeanOperationInfoArray, os->clone());
	}
}

$MBeanOperationInfoArray* MBeanInfo::fastGetOperations() {
	if (this->arrayGettersSafe$) {
		return nonNullOperations();
	} else {
		return getOperations();
	}
}

$MBeanOperationInfoArray* MBeanInfo::nonNullOperations() {
	$init($MBeanOperationInfo);
	return (this->operations == nullptr) ? $MBeanOperationInfo::NO_OPERATIONS : this->operations;
}

$MBeanConstructorInfoArray* MBeanInfo::getConstructors() {
	$var($MBeanConstructorInfoArray, cs, nonNullConstructors());
	if ($nc(cs)->length == 0) {
		return cs;
	} else {
		return $cast($MBeanConstructorInfoArray, cs->clone());
	}
}

$MBeanConstructorInfoArray* MBeanInfo::fastGetConstructors() {
	if (this->arrayGettersSafe$) {
		return nonNullConstructors();
	} else {
		return getConstructors();
	}
}

$MBeanConstructorInfoArray* MBeanInfo::nonNullConstructors() {
	$init($MBeanConstructorInfo);
	return (this->constructors == nullptr) ? $MBeanConstructorInfo::NO_CONSTRUCTORS : this->constructors;
}

$MBeanNotificationInfoArray* MBeanInfo::getNotifications() {
	$var($MBeanNotificationInfoArray, ns, nonNullNotifications());
	if ($nc(ns)->length == 0) {
		return ns;
	} else {
		return $cast($MBeanNotificationInfoArray, ns->clone());
	}
}

$MBeanNotificationInfoArray* MBeanInfo::fastGetNotifications() {
	if (this->arrayGettersSafe$) {
		return nonNullNotifications();
	} else {
		return getNotifications();
	}
}

$MBeanNotificationInfoArray* MBeanInfo::nonNullNotifications() {
	$init($MBeanNotificationInfo);
	return (this->notifications == nullptr) ? $MBeanNotificationInfo::NO_NOTIFICATIONS : this->notifications;
}

$Descriptor* MBeanInfo::getDescriptor() {
	return $cast($Descriptor, $$nc($ImmutableDescriptor::nonNullDescriptor(this->descriptor))->clone());
}

$String* MBeanInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", attributes="_s);
	var$0->append($($Arrays::asList($(fastGetAttributes()))));
	var$0->append(", constructors="_s);
	var$0->append($($Arrays::asList($(fastGetConstructors()))));
	var$0->append(", operations="_s);
	var$0->append($($Arrays::asList($(fastGetOperations()))));
	var$0->append(", notifications="_s);
	var$0->append($($Arrays::asList($(fastGetNotifications()))));
	var$0->append(", descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanInfo, o))) {
		return false;
	}
	$var(MBeanInfo, p, $cast(MBeanInfo, o));
	$var($String, var$2, getClassName());
	bool var$1 = !isEqual(var$2, $($nc(p)->getClassName()));
	if (!var$1) {
		$var($String, var$3, getDescription());
		var$1 = !isEqual(var$3, $(p->getDescription()));
	}
	bool var$0 = var$1;
	if (var$0 || !$$nc(getDescriptor())->equals($(p->getDescriptor()))) {
		return false;
	}
	$var($ObjectArray, var$7, p->fastGetAttributes());
	bool var$6 = $Arrays::equals(var$7, $(fastGetAttributes()));
	if (var$6) {
		$var($ObjectArray, var$8, p->fastGetOperations());
		var$6 = $Arrays::equals(var$8, $(fastGetOperations()));
	}
	bool var$5 = var$6;
	if (var$5) {
		$var($ObjectArray, var$9, p->fastGetConstructors());
		var$5 = $Arrays::equals(var$9, $(fastGetConstructors()));
	}
	bool var$4 = var$5;
	if (var$4) {
		$var($ObjectArray, var$10, p->fastGetNotifications());
		var$4 = $Arrays::equals(var$10, $(fastGetNotifications()));
	}
	return (var$4);
}

int32_t MBeanInfo::hashCode() {
	$useLocalObjectStack();
	if (this->hashCode$ != 0) {
		return this->hashCode$;
	}
	int32_t var$3 = $Objects::hash($$new($ObjectArray, {
		$(getClassName()),
		$(getDescriptor())
	}));
	int32_t var$2 = var$3 ^ $Arrays::hashCode($(fastGetAttributes()));
	int32_t var$1 = var$2 ^ $Arrays::hashCode($(fastGetOperations()));
	int32_t var$0 = var$1 ^ $Arrays::hashCode($(fastGetConstructors()));
	this->hashCode$ = var$0 ^ $Arrays::hashCode($(fastGetNotifications()));
	return this->hashCode$;
}

bool MBeanInfo::arrayGettersSafe($Class* subclass, $Class* immutableClass) {
	$init(MBeanInfo);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (subclass == immutableClass) {
		return true;
	}
	$synchronized(MBeanInfo::arrayGettersSafeMap) {
		$var($Boolean, safe, $cast($Boolean, MBeanInfo::arrayGettersSafeMap->get(subclass)));
		if (safe == nullptr) {
			try {
				$var($MBeanInfo$ArrayGettersSafeAction, action, $new($MBeanInfo$ArrayGettersSafeAction, subclass, immutableClass));
				$assign(safe, $cast($Boolean, $AccessController::doPrivileged(action)));
			} catch ($Exception& e) {
				$assign(safe, $Boolean::valueOf(false));
			}
			MBeanInfo::arrayGettersSafeMap->put(subclass, safe);
		}
		return $nc(safe)->booleanValue();
	}
}

bool MBeanInfo::isEqual($String* s1, $String* s2) {
	$init(MBeanInfo);
	bool ret = false;
	if (s1 == nullptr) {
		ret = (s2 == nullptr);
	} else {
		ret = s1->equals(s2);
	}
	return ret;
}

void MBeanInfo::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$nc(out)->defaultWriteObject();
	$load($ImmutableDescriptor);
	if ($nc($of(this->descriptor))->getClass() == $ImmutableDescriptor::class$) {
		out->write(1);
		$var($StringArray, names, this->descriptor->getFieldNames());
		out->writeObject(names);
		out->writeObject($($nc(this->descriptor)->getFieldValues(names)));
	} else {
		out->write(0);
		out->writeObject(this->descriptor);
	}
}

void MBeanInfo::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$nc(in)->defaultReadObject();
	{
		$var($StringArray, names, nullptr);
		$var($ObjectArray, values, nullptr);
		switch (in->read()) {
		case 1:
			$assign(names, $cast($StringArray, in->readObject()));
			$assign(values, $cast($ObjectArray, in->readObject()));
			$init($ImmutableDescriptor);
			$set(this, descriptor, ($nc(names)->length == 0) ? $ImmutableDescriptor::EMPTY_DESCRIPTOR : $new($ImmutableDescriptor, names, values));
			break;
		case 0:
			$set(this, descriptor, $cast($Descriptor, in->readObject()));
			if (this->descriptor == nullptr) {
				$init($ImmutableDescriptor);
				$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
			}
			break;
		case -1:
			$init($ImmutableDescriptor);
			$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
			break;
		default:
			$throwNew($StreamCorruptedException, "Got unexpected byte."_s);
		}
	}
}

void MBeanInfo::clinit$($Class* clazz) {
	$assignStatic(MBeanInfo::arrayGettersSafeMap, $new($WeakHashMap));
}

MBeanInfo::MBeanInfo() {
}

$Class* MBeanInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanInfo, serialVersionUID)},
		{"descriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanInfo, descriptor)},
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, description)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, className)},
		{"attributes", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, attributes)},
		{"operations", "[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, operations)},
		{"constructors", "[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, constructors)},
		{"notifications", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanInfo, notifications)},
		{"hashCode", "I", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanInfo, hashCode$)},
		{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanInfo, arrayGettersSafe$)},
		{"arrayGettersSafeMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanInfo, arrayGettersSafeMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanAttributeInfo;[Ljavax/management/MBeanConstructorInfo;[Ljavax/management/MBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC, $method(MBeanInfo, init$, void, $String*, $String*, $MBeanAttributeInfoArray*, $MBeanConstructorInfoArray*, $MBeanOperationInfoArray*, $MBeanNotificationInfoArray*), "java.lang.IllegalArgumentException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanAttributeInfo;[Ljavax/management/MBeanConstructorInfo;[Ljavax/management/MBeanOperationInfo;[Ljavax/management/MBeanNotificationInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanInfo, init$, void, $String*, $String*, $MBeanAttributeInfoArray*, $MBeanConstructorInfoArray*, $MBeanOperationInfoArray*, $MBeanNotificationInfoArray*, $Descriptor*), "java.lang.IllegalArgumentException"},
		{"arrayGettersSafe", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $staticMethod(MBeanInfo, arrayGettersSafe, bool, $Class*, $Class*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, equals, bool, Object$*)},
		{"fastGetAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $method(MBeanInfo, fastGetAttributes, $MBeanAttributeInfoArray*)},
		{"fastGetConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $method(MBeanInfo, fastGetConstructors, $MBeanConstructorInfoArray*)},
		{"fastGetNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $method(MBeanInfo, fastGetNotifications, $MBeanNotificationInfoArray*)},
		{"fastGetOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $method(MBeanInfo, fastGetOperations, $MBeanOperationInfoArray*)},
		{"getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getAttributes, $MBeanAttributeInfoArray*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getClassName, $String*)},
		{"getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getConstructors, $MBeanConstructorInfoArray*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getDescription, $String*)},
		{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getDescriptor, $Descriptor*)},
		{"getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getNotifications, $MBeanNotificationInfoArray*)},
		{"getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, getOperations, $MBeanOperationInfoArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, hashCode, int32_t)},
		{"isEqual", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanInfo, isEqual, bool, $String*, $String*)},
		{"nonNullAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $method(MBeanInfo, nonNullAttributes, $MBeanAttributeInfoArray*)},
		{"nonNullConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $method(MBeanInfo, nonNullConstructors, $MBeanConstructorInfoArray*)},
		{"nonNullNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $method(MBeanInfo, nonNullNotifications, $MBeanNotificationInfoArray*)},
		{"nonNullOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $method(MBeanInfo, nonNullOperations, $MBeanOperationInfoArray*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MBeanInfo, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanInfo, toString, $String*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(MBeanInfo, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.MBeanInfo$ArrayGettersSafeAction", "javax.management.MBeanInfo", "ArrayGettersSafeAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanInfo",
		"java.lang.Object",
		"java.lang.Cloneable,java.io.Serializable,javax.management.DescriptorRead",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.management.MBeanInfo$ArrayGettersSafeAction"
	};
	$loadClass(MBeanInfo, name, initialize, &classInfo$$, MBeanInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanInfo));
	});
	return class$;
}

$Class* MBeanInfo::class$ = nullptr;

	} // management
} // javax