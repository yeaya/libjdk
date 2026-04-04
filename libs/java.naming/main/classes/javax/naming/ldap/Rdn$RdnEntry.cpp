#include <javax/naming/ldap/Rdn$RdnEntry.h>
#include <java/util/Locale.h>
#include <javax/naming/ldap/Rdn.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Rdn = ::javax::naming::ldap::Rdn;

namespace javax {
	namespace naming {
		namespace ldap {

void Rdn$RdnEntry::init$() {
	$set(this, comparable, nullptr);
}

$String* Rdn$RdnEntry::getType() {
	return this->type;
}

$Object* Rdn$RdnEntry::getValue() {
	return this->value;
}

int32_t Rdn$RdnEntry::compareTo(Rdn$RdnEntry* that) {
	$useLocalObjectStack();
	int32_t diff = $nc(this->type)->compareToIgnoreCase($nc(that)->type);
	if (diff != 0) {
		return diff;
	}
	if ($nc(this->value)->equals(that->value)) {
		return 0;
	}
	return $$nc(getValueComparable())->compareTo($(that->getValueComparable()));
}

bool Rdn$RdnEntry::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(Rdn$RdnEntry, obj))) {
		return false;
	}
	$var(Rdn$RdnEntry, that, $cast(Rdn$RdnEntry, obj));
	bool var$0 = $nc(this->type)->equalsIgnoreCase($nc(that)->type);
	return var$0 && ($$nc(getValueComparable())->equals($(that->getValueComparable())));
}

int32_t Rdn$RdnEntry::hashCode() {
	$useLocalObjectStack();
	$init($Locale);
	int32_t var$0 = $($nc(this->type)->toUpperCase($Locale::ENGLISH))->hashCode();
	return (var$0 + $$nc(getValueComparable())->hashCode());
}

$String* Rdn$RdnEntry::toString() {
	return $str({this->type, "="_s, $($Rdn::escapeValue(this->value))});
}

$String* Rdn$RdnEntry::getValueComparable() {
	if (this->comparable != nullptr) {
		return this->comparable;
	}
	if ($instanceOf($bytes, this->value)) {
		$set(this, comparable, $Rdn::escapeBinaryValue($cast($bytes, this->value)));
	} else {
		$init($Locale);
		$set(this, comparable, $nc($cast($String, this->value))->toUpperCase($Locale::ENGLISH));
	}
	return this->comparable;
}

int32_t Rdn$RdnEntry::compareTo(Object$* that) {
	return this->compareTo($cast(Rdn$RdnEntry, that));
}

Rdn$RdnEntry::Rdn$RdnEntry() {
}

$Class* Rdn$RdnEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, type)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, value)},
		{"comparable", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, comparable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Rdn$RdnEntry, init$, void)},
		{"compareTo", "(Ljavax/naming/ldap/Rdn$RdnEntry;)I", nullptr, $PUBLIC, $virtualMethod(Rdn$RdnEntry, compareTo, int32_t, Rdn$RdnEntry*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Rdn$RdnEntry, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Rdn$RdnEntry, equals, bool, Object$*)},
		{"getType", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Rdn$RdnEntry, getType, $String*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(Rdn$RdnEntry, getValue, $Object*)},
		{"getValueComparable", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(Rdn$RdnEntry, getValueComparable, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Rdn$RdnEntry, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Rdn$RdnEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.naming.ldap.Rdn$RdnEntry", "javax.naming.ldap.Rdn", "RdnEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.naming.ldap.Rdn$RdnEntry",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/naming/ldap/Rdn$RdnEntry;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.naming.ldap.Rdn"
	};
	$loadClass(Rdn$RdnEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Rdn$RdnEntry);
	});
	return class$;
}

$Class* Rdn$RdnEntry::class$ = nullptr;

		} // ldap
	} // naming
} // javax