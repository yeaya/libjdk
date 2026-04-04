#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

void ObjectInstance::init$($String* objectName, $String* className) {
	ObjectInstance::init$($$new($ObjectName, objectName), className);
}

void ObjectInstance::init$($ObjectName* objectName, $String* className) {
	$useLocalObjectStack();
	if ($nc(objectName)->isPattern()) {
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, $$str({"Invalid name->"_s, $(objectName->toString())})));
		$throwNew($RuntimeOperationsException, iae);
	}
	$set(this, name, objectName);
	$set(this, className, className);
}

bool ObjectInstance::equals(Object$* object) {
	$useLocalObjectStack();
	if (!($instanceOf(ObjectInstance, object))) {
		return false;
	}
	$var(ObjectInstance, val, $cast(ObjectInstance, object));
	if (!$nc(this->name)->equals($($nc(val)->getObjectName()))) {
		return false;
	}
	if (this->className == nullptr) {
		return (val->getClassName() == nullptr);
	}
	return $nc(this->className)->equals($(val->getClassName()));
}

int32_t ObjectInstance::hashCode() {
	int32_t classHash = ((this->className == nullptr) ? 0 : this->className->hashCode());
	return $nc(this->name)->hashCode() ^ classHash;
}

$ObjectName* ObjectInstance::getObjectName() {
	return this->name;
}

$String* ObjectInstance::getClassName() {
	return this->className;
}

$String* ObjectInstance::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getClassName()));
	var$0->append("["_s);
	var$0->append($(getObjectName()));
	var$0->append("]"_s);
	return $str(var$0);
}

ObjectInstance::ObjectInstance() {
}

$Class* ObjectInstance::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInstance, serialVersionUID)},
		{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(ObjectInstance, name)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectInstance, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInstance, init$, void, $String*, $String*), "javax.management.MalformedObjectNameException"},
		{"<init>", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInstance, init$, void, $ObjectName*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ObjectInstance, equals, bool, Object$*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInstance, getClassName, $String*)},
		{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(ObjectInstance, getObjectName, $ObjectName*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectInstance, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInstance, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.ObjectInstance",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInstance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInstance);
	});
	return class$;
}

$Class* ObjectInstance::class$ = nullptr;

	} // management
} // javax