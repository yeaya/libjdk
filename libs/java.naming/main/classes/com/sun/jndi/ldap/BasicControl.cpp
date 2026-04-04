#include <com/sun/jndi/ldap/BasicControl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void BasicControl::init$($String* id) {
	this->criticality = false;
	$set(this, value, nullptr);
	$set(this, id, id);
}

void BasicControl::init$($String* id, bool criticality, $bytes* value) {
	this->criticality = false;
	$set(this, value, nullptr);
	$set(this, id, id);
	this->criticality = criticality;
	if (value != nullptr) {
		$set(this, value, $cast($bytes, value->clone()));
	}
}

$String* BasicControl::getID() {
	return this->id;
}

bool BasicControl::isCritical() {
	return this->criticality;
}

$bytes* BasicControl::getEncodedValue() {
	return this->value == nullptr ? ($bytes*)nullptr : $cast($bytes, this->value->clone());
}

BasicControl::BasicControl() {
}

$Class* BasicControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"id", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicControl, id)},
		{"criticality", "Z", nullptr, $PROTECTED, $field(BasicControl, criticality)},
		{"value", "[B", nullptr, $PROTECTED, $field(BasicControl, value)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicControl, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BasicControl, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Z[B)V", nullptr, $PUBLIC, $method(BasicControl, init$, void, $String*, bool, $bytes*)},
		{"getEncodedValue", "()[B", nullptr, $PUBLIC, $virtualMethod(BasicControl, getEncodedValue, $bytes*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicControl, getID, $String*)},
		{"isCritical", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicControl, isCritical, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jndi.ldap.BasicControl",
		"java.lang.Object",
		"javax.naming.ldap.Control",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicControl);
	});
	return class$;
}

$Class* BasicControl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com