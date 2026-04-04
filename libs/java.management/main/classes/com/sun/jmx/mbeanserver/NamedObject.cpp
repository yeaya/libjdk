#include <com/sun/jmx/mbeanserver/NamedObject.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/ObjectName.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $ObjectName = ::javax::management::ObjectName;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void NamedObject::init$($ObjectName* objectName, $DynamicMBean* object) {
	$useLocalObjectStack();
	if ($nc(objectName)->isPattern()) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objectName->toString())})));
	}
	$set(this, name, objectName);
	$set(this, object, object);
}

void NamedObject::init$($String* objectName, $DynamicMBean* object) {
	$useLocalObjectStack();
	$var($ObjectName, objName, $new($ObjectName, objectName));
	if (objName->isPattern()) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objName->toString())})));
	}
	$set(this, name, objName);
	$set(this, object, object);
}

bool NamedObject::equals(Object$* object) {
	$useLocalObjectStack();
	if ($equals(this, object)) {
		return true;
	}
	if (object == nullptr) {
		return false;
	}
	if (!($instanceOf(NamedObject, object))) {
		return false;
	}
	$var(NamedObject, no, $cast(NamedObject, object));
	return $nc(this->name)->equals($($nc(no)->getName()));
}

int32_t NamedObject::hashCode() {
	return $nc(this->name)->hashCode();
}

$ObjectName* NamedObject::getName() {
	return this->name;
}

$DynamicMBean* NamedObject::getObject() {
	return this->object;
}

NamedObject::NamedObject() {
}

$Class* NamedObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(NamedObject, name)},
		{"object", "Ljavax/management/DynamicMBean;", nullptr, $PRIVATE | $FINAL, $field(NamedObject, object)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;Ljavax/management/DynamicMBean;)V", nullptr, $PUBLIC, $method(NamedObject, init$, void, $ObjectName*, $DynamicMBean*)},
		{"<init>", "(Ljava/lang/String;Ljavax/management/DynamicMBean;)V", nullptr, $PUBLIC, $method(NamedObject, init$, void, $String*, $DynamicMBean*), "javax.management.MalformedObjectNameException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NamedObject, equals, bool, Object$*)},
		{"getName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(NamedObject, getName, $ObjectName*)},
		{"getObject", "()Ljavax/management/DynamicMBean;", nullptr, $PUBLIC, $virtualMethod(NamedObject, getObject, $DynamicMBean*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(NamedObject, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.NamedObject",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NamedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedObject);
	});
	return class$;
}

$Class* NamedObject::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com