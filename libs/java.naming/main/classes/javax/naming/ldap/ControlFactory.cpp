#include <javax/naming/ldap/ControlFactory.h>
#include <com/sun/naming/internal/FactoryEnumeration.h>
#include <com/sun/naming/internal/ResourceManager.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/LdapContext.h>
#include <jcpp.h>

#undef CONTROL_FACTORIES

using $FactoryEnumeration = ::com::sun::naming::internal::FactoryEnumeration;
using $ResourceManager = ::com::sun::naming::internal::ResourceManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Control = ::javax::naming::ldap::Control;
using $LdapContext = ::javax::naming::ldap::LdapContext;

namespace javax {
	namespace naming {
		namespace ldap {

void ControlFactory::init$() {
}

$Control* ControlFactory::getControlInstance($Control* ctl, $Context* ctx, $Hashtable* env) {
	$useLocalObjectStack();
	$init($LdapContext);
	$var($FactoryEnumeration, factories, $ResourceManager::getFactories($LdapContext::CONTROL_FACTORIES, env, ctx));
	if (factories == nullptr) {
		return ctl;
	}
	$var($Control, answer, nullptr);
	$var(ControlFactory, factory, nullptr);
	while (answer == nullptr && $nc(factories)->hasMore()) {
		$assign(factory, $cast(ControlFactory, factories->next()));
		$assign(answer, $nc(factory)->getControlInstance(ctl));
	}
	return (answer != nullptr) ? answer : ctl;
}

ControlFactory::ControlFactory() {
}

$Class* ControlFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ControlFactory, init$, void)},
		{"getControlInstance", "(Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ControlFactory, getControlInstance, $Control*, $Control*), "javax.naming.NamingException"},
		{"getControlInstance", "(Ljavax/naming/ldap/Control;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljavax/naming/ldap/Control;", "(Ljavax/naming/ldap/Control;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljavax/naming/ldap/Control;", $PUBLIC | $STATIC, $staticMethod(ControlFactory, getControlInstance, $Control*, $Control*, $Context*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.ldap.ControlFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ControlFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ControlFactory);
	});
	return class$;
}

$Class* ControlFactory::class$ = nullptr;

		} // ldap
	} // naming
} // javax