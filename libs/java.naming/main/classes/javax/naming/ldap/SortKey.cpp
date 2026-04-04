#include <javax/naming/ldap/SortKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

void SortKey::init$($String* attrID) {
	this->reverseOrder = false;
	$set(this, matchingRuleID, nullptr);
	$set(this, attrID, attrID);
}

void SortKey::init$($String* attrID, bool ascendingOrder, $String* matchingRuleID) {
	this->reverseOrder = false;
	$set(this, matchingRuleID, nullptr);
	$set(this, attrID, attrID);
	this->reverseOrder = (!ascendingOrder);
	$set(this, matchingRuleID, matchingRuleID);
}

$String* SortKey::getAttributeID() {
	return this->attrID;
}

bool SortKey::isAscending() {
	return (!this->reverseOrder);
}

$String* SortKey::getMatchingRuleID() {
	return this->matchingRuleID;
}

SortKey::SortKey() {
}

$Class* SortKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attrID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortKey, attrID)},
		{"reverseOrder", "Z", nullptr, $PRIVATE, $field(SortKey, reverseOrder)},
		{"matchingRuleID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortKey, matchingRuleID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SortKey, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;ZLjava/lang/String;)V", nullptr, $PUBLIC, $method(SortKey, init$, void, $String*, bool, $String*)},
		{"getAttributeID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SortKey, getAttributeID, $String*)},
		{"getMatchingRuleID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SortKey, getMatchingRuleID, $String*)},
		{"isAscending", "()Z", nullptr, $PUBLIC, $virtualMethod(SortKey, isAscending, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.ldap.SortKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SortKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortKey);
	});
	return class$;
}

$Class* SortKey::class$ = nullptr;

		} // ldap
	} // naming
} // javax