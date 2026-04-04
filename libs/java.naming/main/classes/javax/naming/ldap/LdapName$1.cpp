#include <javax/naming/ldap/LdapName$1.h>
#include <java/util/Iterator.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/ldap/Rdn.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LdapName = ::javax::naming::ldap::LdapName;
using $Rdn = ::javax::naming::ldap::Rdn;

namespace javax {
	namespace naming {
		namespace ldap {

void LdapName$1::init$($LdapName* this$0, $Iterator* val$iter) {
	$set(this, this$0, this$0);
	$set(this, val$iter, val$iter);
}

bool LdapName$1::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* LdapName$1::nextElement() {
	return $of($$sure($Rdn, $nc(this->val$iter)->next())->toString());
}

LdapName$1::LdapName$1() {
}

$Class* LdapName$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/naming/ldap/LdapName;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, this$0)},
		{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, val$iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/ldap/LdapName;Ljava/util/Iterator;)V", "()V", 0, $method(LdapName$1, init$, void, $LdapName*, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(LdapName$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LdapName$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.naming.ldap.LdapName",
		"getAll",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.ldap.LdapName$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.ldap.LdapName$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.ldap.LdapName"
	};
	$loadClass(LdapName$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapName$1);
	});
	return class$;
}

$Class* LdapName$1::class$ = nullptr;

		} // ldap
	} // naming
} // javax