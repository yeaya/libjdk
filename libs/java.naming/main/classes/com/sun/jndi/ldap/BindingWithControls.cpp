#include <com/sun/jndi/ldap/BindingWithControls.h>
#include <javax/naming/Binding.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Binding = ::javax::naming::Binding;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$String* BindingWithControls::toString() {
	return this->$Binding::toString();
}

int32_t BindingWithControls::hashCode() {
	return this->$Binding::hashCode();
}

bool BindingWithControls::equals(Object$* arg0) {
	return this->$Binding::equals(arg0);
}

$Object* BindingWithControls::clone() {
	return this->$Binding::clone();
}

void BindingWithControls::finalize() {
	this->$Binding::finalize();
}

void BindingWithControls::init$($String* name, Object$* obj, $ControlArray* controls) {
	$Binding::init$(name, obj);
	$set(this, controls, controls);
}

$ControlArray* BindingWithControls::getControls() {
	return this->controls;
}

BindingWithControls::BindingWithControls() {
}

$Class* BindingWithControls::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(BindingWithControls, controls)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BindingWithControls, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;[Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, $method(BindingWithControls, init$, void, $String*, Object$*, $ControlArray*)},
		{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, $virtualMethod(BindingWithControls, getControls, $ControlArray*), "javax.naming.NamingException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.BindingWithControls",
		"javax.naming.Binding",
		"javax.naming.ldap.HasControls",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BindingWithControls, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BindingWithControls));
	});
	return class$;
}

$Class* BindingWithControls::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com