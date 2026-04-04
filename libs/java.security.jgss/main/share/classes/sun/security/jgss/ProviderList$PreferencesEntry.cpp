#include <sun/security/jgss/ProviderList$PreferencesEntry.h>
#include <java/security/Provider.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/ProviderList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Oid = ::org::ietf::jgss::Oid;

namespace sun {
	namespace security {
		namespace jgss {

void ProviderList$PreferencesEntry::init$($Provider* p, $Oid* oid) {
	$set(this, p, p);
	$set(this, oid, oid);
}

bool ProviderList$PreferencesEntry::equals(Object$* other) {
	$useLocalObjectStack();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(ProviderList$PreferencesEntry, other))) {
		return false;
	}
	$var(ProviderList$PreferencesEntry, that, $cast(ProviderList$PreferencesEntry, other));
	if ($$nc($nc(this->p)->getName())->equals($($nc($nc(that)->p)->getName()))) {
		if (this->oid != nullptr && that->oid != nullptr) {
			return this->oid->equals(that->oid);
		} else {
			return (this->oid == nullptr && that->oid == nullptr);
		}
	}
	return false;
}

int32_t ProviderList$PreferencesEntry::hashCode() {
	int32_t result = 17;
	result = 37 * result + $$nc($nc(this->p)->getName())->hashCode();
	if (this->oid != nullptr) {
		result = 37 * result + this->oid->hashCode();
	}
	return result;
}

bool ProviderList$PreferencesEntry::implies(Object$* other) {
	$useLocalObjectStack();
	if ($instanceOf(ProviderList$PreferencesEntry, other)) {
		$var(ProviderList$PreferencesEntry, temp, $cast(ProviderList$PreferencesEntry, other));
		bool var$0 = equals(temp);
		return (var$0 || $$nc($nc(this->p)->getName())->equals($($nc(temp->p)->getName())) && this->oid == nullptr);
	} else {
		return false;
	}
}

$Provider* ProviderList$PreferencesEntry::getProvider() {
	return this->p;
}

$Oid* ProviderList$PreferencesEntry::getOid() {
	return this->oid;
}

bool ProviderList$PreferencesEntry::impliesMechanism($Oid* oid) {
	return (this->oid == nullptr || this->oid->equals(oid));
}

$String* ProviderList$PreferencesEntry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, "<"_s));
	sb->append($($nc(this->p)->getName()));
	sb->append(", "_s);
	sb->append(this->oid);
	sb->append(">"_s);
	return sb->toString();
}

ProviderList$PreferencesEntry::ProviderList$PreferencesEntry() {
}

$Class* ProviderList$PreferencesEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(ProviderList$PreferencesEntry, p)},
		{"oid", "Lorg/ietf/jgss/Oid;", nullptr, $PRIVATE, $field(ProviderList$PreferencesEntry, oid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Provider;Lorg/ietf/jgss/Oid;)V", nullptr, 0, $method(ProviderList$PreferencesEntry, init$, void, $Provider*, $Oid*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProviderList$PreferencesEntry, equals, bool, Object$*)},
		{"getOid", "()Lorg/ietf/jgss/Oid;", nullptr, 0, $method(ProviderList$PreferencesEntry, getOid, $Oid*)},
		{"getProvider", "()Ljava/security/Provider;", nullptr, 0, $method(ProviderList$PreferencesEntry, getProvider, $Provider*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProviderList$PreferencesEntry, hashCode, int32_t)},
		{"implies", "(Ljava/lang/Object;)Z", nullptr, 0, $method(ProviderList$PreferencesEntry, implies, bool, Object$*)},
		{"impliesMechanism", "(Lorg/ietf/jgss/Oid;)Z", nullptr, 0, $method(ProviderList$PreferencesEntry, impliesMechanism, bool, $Oid*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProviderList$PreferencesEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.ProviderList$PreferencesEntry", "sun.security.jgss.ProviderList", "PreferencesEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.jgss.ProviderList$PreferencesEntry",
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
		"sun.security.jgss.ProviderList"
	};
	$loadClass(ProviderList$PreferencesEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderList$PreferencesEntry);
	});
	return class$;
}

$Class* ProviderList$PreferencesEntry::class$ = nullptr;

		} // jgss
	} // security
} // sun