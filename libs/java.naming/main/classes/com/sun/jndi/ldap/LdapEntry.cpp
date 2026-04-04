#include <com/sun/jndi/ldap/LdapEntry.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

#undef DN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void LdapEntry::init$($String* DN, $Attributes* attrs) {
	$set(this, respCtls, nullptr);
	$set(this, DN, DN);
	$set(this, attributes, attrs);
}

void LdapEntry::init$($String* DN, $Attributes* attrs, $Vector* respCtls) {
	$set(this, respCtls, nullptr);
	$set(this, DN, DN);
	$set(this, attributes, attrs);
	$set(this, respCtls, respCtls);
}

LdapEntry::LdapEntry() {
}

$Class* LdapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DN", "Ljava/lang/String;", nullptr, 0, $field(LdapEntry, DN)},
		{"attributes", "Ljavax/naming/directory/Attributes;", nullptr, 0, $field(LdapEntry, attributes)},
		{"respCtls", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/Control;>;", 0, $field(LdapEntry, respCtls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)V", nullptr, 0, $method(LdapEntry, init$, void, $String*, $Attributes*)},
		{"<init>", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)V", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)V", 0, $method(LdapEntry, init$, void, $String*, $Attributes*, $Vector*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.LdapEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapEntry);
	});
	return class$;
}

$Class* LdapEntry::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com