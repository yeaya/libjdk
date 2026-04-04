#include <com/sun/jndi/ldap/LdapName$Rdn.h>
#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <jcpp.h>

using $LdapName$TypeAndValue = ::com::sun::jndi::ldap::LdapName$TypeAndValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Vector = ::java::util::Vector;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void LdapName$Rdn::init$() {
	$set(this, tvs, $new($Vector));
}

void LdapName$Rdn::add($LdapName$TypeAndValue* tv) {
	$useLocalObjectStack();
	int32_t i = 0;
	for (i = 0; i < this->tvs->size(); ++i) {
		int32_t diff = $nc(tv)->compareTo($(this->tvs->elementAt(i)));
		if (diff == 0) {
			return;
		} else if (diff < 0) {
			break;
		}
	}
	this->tvs->insertElementAt(tv, i);
}

$String* LdapName$Rdn::toString() {
	$useLocalObjectStack();
	$var($StringBuffer, buf, $new($StringBuffer));
	for (int32_t i = 0; i < this->tvs->size(); ++i) {
		if (i > 0) {
			buf->append(u'+');
		}
		buf->append($(this->tvs->elementAt(i)));
	}
	return $new($String, buf);
}

bool LdapName$Rdn::equals(Object$* obj) {
	return (($instanceOf(LdapName$Rdn, obj)) && (compareTo(obj) == 0));
}

int32_t LdapName$Rdn::compareTo(Object$* obj) {
	$useLocalObjectStack();
	$var(LdapName$Rdn, that, $cast(LdapName$Rdn, obj));
	int32_t var$0 = this->tvs->size();
	int32_t minSize = $Math::min(var$0, $nc($nc(that)->tvs)->size());
	for (int32_t i = 0; i < minSize; ++i) {
		$var($LdapName$TypeAndValue, tv, $cast($LdapName$TypeAndValue, this->tvs->elementAt(i)));
		int32_t diff = $nc(tv)->compareTo($(that->tvs->elementAt(i)));
		if (diff != 0) {
			return diff;
		}
	}
	int32_t var$1 = this->tvs->size();
	return (var$1 - that->tvs->size());
}

int32_t LdapName$Rdn::hashCode() {
	$useLocalObjectStack();
	int32_t hash = 0;
	for (int32_t i = 0; i < this->tvs->size(); ++i) {
		hash += $$sure($LdapName$TypeAndValue, this->tvs->elementAt(i))->hashCode();
	}
	return hash;
}

$Attributes* LdapName$Rdn::toAttributes() {
	$useLocalObjectStack();
	$var($Attributes, attrs, $new($BasicAttributes, true));
	$var($LdapName$TypeAndValue, tv, nullptr);
	$var($Attribute, attr, nullptr);
	for (int32_t i = 0; i < this->tvs->size(); ++i) {
		$assign(tv, $cast($LdapName$TypeAndValue, this->tvs->elementAt(i)));
		if (($assign(attr, attrs->get($($nc(tv)->getType())))) == nullptr) {
			$var($String, var$0, tv->getType());
			attrs->put(var$0, $(tv->getUnescapedValue()));
		} else {
			$nc(attr)->add($(tv->getUnescapedValue()));
		}
	}
	return attrs;
}

LdapName$Rdn::LdapName$Rdn() {
}

$Class* LdapName$Rdn::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tvs", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$TypeAndValue;>;", $PRIVATE | $FINAL, $field(LdapName$Rdn, tvs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LdapName$Rdn, init$, void)},
		{"add", "(Lcom/sun/jndi/ldap/LdapName$TypeAndValue;)V", nullptr, 0, $virtualMethod(LdapName$Rdn, add, void, $LdapName$TypeAndValue*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(LdapName$Rdn, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LdapName$Rdn, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LdapName$Rdn, hashCode, int32_t)},
		{"toAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, 0, $virtualMethod(LdapName$Rdn, toAttributes, $Attributes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LdapName$Rdn, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.LdapName$Rdn", "com.sun.jndi.ldap.LdapName", "Rdn", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.LdapName$Rdn",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.LdapName"
	};
	$loadClass(LdapName$Rdn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapName$Rdn);
	});
	return class$;
}

$Class* LdapName$Rdn::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com