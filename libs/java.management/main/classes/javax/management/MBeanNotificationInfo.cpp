#include <javax/management/MBeanNotificationInfo.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <jcpp.h>

#undef NO_NOTIFICATIONS
#undef NO_TYPES

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;

namespace javax {
	namespace management {

void MBeanNotificationInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$StringArray* MBeanNotificationInfo::NO_TYPES = nullptr;
$MBeanNotificationInfoArray* MBeanNotificationInfo::NO_NOTIFICATIONS = nullptr;

void MBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description) {
	MBeanNotificationInfo::init$(notifTypes, name, description, nullptr);
}

void MBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, types, (notifTypes != nullptr && notifTypes->length > 0) ? $cast($StringArray, notifTypes->clone()) : MBeanNotificationInfo::NO_TYPES);
	this->arrayGettersSafe = $MBeanInfo::arrayGettersSafe($of(this)->getClass(), MBeanNotificationInfo::class$);
}

$Object* MBeanNotificationInfo::clone() {
	try {
		return $MBeanFeatureInfo::clone();
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$StringArray* MBeanNotificationInfo::getNotifTypes() {
	if ($nc(this->types)->length == 0) {
		return MBeanNotificationInfo::NO_TYPES;
	} else {
		return $cast($StringArray, this->types->clone());
	}
}

$StringArray* MBeanNotificationInfo::fastGetNotifTypes() {
	if (this->arrayGettersSafe) {
		return this->types;
	} else {
		return getNotifTypes();
	}
}

$String* MBeanNotificationInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(", name="_s);
	var$0->append($(getName()));
	var$0->append(", notifTypes="_s);
	var$0->append($($Arrays::asList($(fastGetNotifTypes()))));
	var$0->append(", descriptor="_s);
	var$0->append($(getDescriptor()));
	var$0->append("]"_s);
	return $str(var$0);
}

bool MBeanNotificationInfo::equals(Object$* o) {
	$useLocalObjectStack();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanNotificationInfo, o))) {
		return false;
	}
	$var(MBeanNotificationInfo, p, $cast(MBeanNotificationInfo, o));
	$var($Object, var$3, $nc(p)->getName());
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, p->getDescription());
		var$2 = $Objects::equals(var$4, $(getDescription()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$5, p->getDescriptor());
		var$1 = $Objects::equals(var$5, $(getDescriptor()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($ObjectArray, var$6, p->fastGetNotifTypes());
		var$0 = $Arrays::equals(var$6, $(fastGetNotifTypes()));
	}
	return (var$0);
}

int32_t MBeanNotificationInfo::hashCode() {
	int32_t hash = $$nc(getName())->hashCode();
	for (int32_t i = 0; i < $nc(this->types)->length; ++i) {
		hash ^= $nc(this->types->get(i))->hashCode();
	}
	return hash;
}

void MBeanNotificationInfo::readObject($ObjectInputStream* ois) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gf, $nc(ois)->readFields());
	$var($StringArray, t, $cast($StringArray, $nc(gf)->get("types"_s, nullptr)));
	$set(this, types, (t != nullptr && t->length != 0) ? $cast($StringArray, t->clone()) : MBeanNotificationInfo::NO_TYPES);
}

void MBeanNotificationInfo::clinit$($Class* clazz) {
	$assignStatic(MBeanNotificationInfo::NO_TYPES, $new($StringArray, 0));
	$assignStatic(MBeanNotificationInfo::NO_NOTIFICATIONS, $new($MBeanNotificationInfoArray, 0));
}

MBeanNotificationInfo::MBeanNotificationInfo() {
}

$Class* MBeanNotificationInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanNotificationInfo, serialVersionUID)},
		{"NO_TYPES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanNotificationInfo, NO_TYPES)},
		{"NO_NOTIFICATIONS", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanNotificationInfo, NO_NOTIFICATIONS)},
		{"types", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanNotificationInfo, types)},
		{"arrayGettersSafe", "Z", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(MBeanNotificationInfo, arrayGettersSafe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MBeanNotificationInfo, init$, void, $StringArray*, $String*, $String*)},
		{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(MBeanNotificationInfo, init$, void, $StringArray*, $String*, $String*, $Descriptor*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MBeanNotificationInfo, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MBeanNotificationInfo, equals, bool, Object$*)},
		{"fastGetNotifTypes", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(MBeanNotificationInfo, fastGetNotifTypes, $StringArray*)},
		{"getNotifTypes", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanNotificationInfo, getNotifTypes, $StringArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MBeanNotificationInfo, hashCode, int32_t)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MBeanNotificationInfo, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanNotificationInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanNotificationInfo",
		"javax.management.MBeanFeatureInfo",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanNotificationInfo, name, initialize, &classInfo$$, MBeanNotificationInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanNotificationInfo));
	});
	return class$;
}

$Class* MBeanNotificationInfo::class$ = nullptr;

	} // management
} // javax