#include <com/sun/jndi/ldap/LdapBindingEnumeration.h>
#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/BindingWithControls.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/naming/Binding.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef CLASSNAME
#undef JAVA_ATTRIBUTES

using $AbstractLdapNamingEnumeration = ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration;
using $BindingWithControls = ::com::sun::jndi::ldap::BindingWithControls;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Vector = ::java::util::Vector;
using $Binding = ::javax::naming::Binding;
using $CompositeName = ::javax::naming::CompositeName;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapBindingEnumeration$$Lambda$lambda$createItem$0 : public $PrivilegedExceptionAction {
	$class(LdapBindingEnumeration$$Lambda$lambda$createItem$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Attributes* attrs) {
		$set(this, attrs, attrs);
	}
	virtual $Object* run() override {
		return LdapBindingEnumeration::lambda$createItem$0(attrs);
	}
	$Attributes* attrs = nullptr;
};
$Class* LdapBindingEnumeration$$Lambda$lambda$createItem$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, $field(LdapBindingEnumeration$$Lambda$lambda$createItem$0, attrs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(LdapBindingEnumeration$$Lambda$lambda$createItem$0, init$, void, $Attributes*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LdapBindingEnumeration$$Lambda$lambda$createItem$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.jndi.ldap.LdapBindingEnumeration$$Lambda$lambda$createItem$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapBindingEnumeration$$Lambda$lambda$createItem$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapBindingEnumeration$$Lambda$lambda$createItem$0);
	});
	return class$;
}
$Class* LdapBindingEnumeration$$Lambda$lambda$createItem$0::class$ = nullptr;

void LdapBindingEnumeration::init$($LdapCtx* homeCtx, $LdapResult* answer, $Name* remain, $Continuation* cont) {
	$AbstractLdapNamingEnumeration::init$(homeCtx, answer, remain, cont);
	$set(this, acc, $AccessController::getContext());
}

$NameClassPair* LdapBindingEnumeration::createItem($String* dn, $Attributes* attrs, $Vector* respCtls) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, obj, nullptr);
	$var($String, atom, getAtom(dn));
	$init($Obj);
	if ($nc(attrs)->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME)) != nullptr) {
		try {
			$var($PrivilegedExceptionAction, pa, $new(LdapBindingEnumeration$$Lambda$lambda$createItem$0, attrs));
			$assign(obj, $AccessController::doPrivileged(pa, this->acc));
		} catch ($PrivilegedActionException& e) {
			$throw($$cast($NamingException, e->getException()));
		}
	}
	if (obj == nullptr) {
		$assign(obj, $new($LdapCtx, this->homeCtx, dn));
	}
	$var($CompositeName, cn, $new($CompositeName));
	cn->add(atom);
	try {
		$assign(obj, $DirectoryManager::getObjectInstance(obj, cn, $cast($AtomicContext, this->homeCtx), $nc(this->homeCtx)->envprops, attrs));
	} catch ($NamingException& e) {
		$throw(e);
	} catch ($Exception& e) {
		$var($NamingException, ne, $new($NamingException, "problem generating object using object factory"_s));
		ne->setRootCause(e);
		$throw(ne);
	}
	$var($Binding, binding, nullptr);
	if (respCtls != nullptr) {
		$var($String, var$0, cn->toString());
		$assign(binding, $new($BindingWithControls, var$0, obj, $($nc(this->homeCtx)->convertControls(respCtls))));
	} else {
		$assign(binding, $new($Binding, $(cn->toString()), obj));
	}
	$nc(binding)->setNameInNamespace(dn);
	return binding;
}

$AbstractLdapNamingEnumeration* LdapBindingEnumeration::getReferredResults($LdapReferralContext* refCtx) {
	return $cast($AbstractLdapNamingEnumeration, $nc(refCtx)->listBindings(this->listArg));
}

$Object* LdapBindingEnumeration::lambda$createItem$0($Attributes* attrs) {
	$init(LdapBindingEnumeration);
	return $Obj::decodeObject(attrs);
}

LdapBindingEnumeration::LdapBindingEnumeration() {
}

$Class* LdapBindingEnumeration::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.jndi.ldap.LdapBindingEnumeration$$Lambda$lambda$createItem$0")) {
			return LdapBindingEnumeration$$Lambda$lambda$createItem$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(LdapBindingEnumeration, acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, 0, $method(LdapBindingEnumeration, init$, void, $LdapCtx*, $LdapResult*, $Name*, $Continuation*), "javax.naming.NamingException"},
		{"createItem", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)Ljavax/naming/Binding;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)Ljavax/naming/Binding;", $PROTECTED, $virtualMethod(LdapBindingEnumeration, createItem, $NameClassPair*, $String*, $Attributes*, $Vector*), "javax.naming.NamingException"},
		{"getReferredResults", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;", $PROTECTED, $virtualMethod(LdapBindingEnumeration, getReferredResults, $AbstractLdapNamingEnumeration*, $LdapReferralContext*), "javax.naming.NamingException"},
		{"lambda$createItem$0", "(Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LdapBindingEnumeration, lambda$createItem$0, $Object*, $Attributes*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.LdapBindingEnumeration",
		"com.sun.jndi.ldap.AbstractLdapNamingEnumeration",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<Ljavax/naming/Binding;>;"
	};
	$loadClass(LdapBindingEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapBindingEnumeration);
	});
	return class$;
}

$Class* LdapBindingEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com