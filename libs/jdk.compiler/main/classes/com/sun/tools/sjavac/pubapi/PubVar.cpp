#include <com/sun/tools/sjavac/pubapi/PubVar.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

void PubVar::init$($Set* modifiers, $TypeDesc* type, $String* identifier, $String* constValue) {
	$set(this, modifiers, modifiers);
	$set(this, type, type);
	$set(this, identifier, identifier);
	$set(this, constValue, constValue);
}

$String* PubVar::getIdentifier() {
	return this->identifier;
}

bool PubVar::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubVar, other, $cast(PubVar, obj));
	bool var$2 = $nc(this->modifiers)->equals(other->modifiers);
	bool var$1 = var$2 && $nc(this->type)->equals(other->type);
	bool var$0 = var$1 && $nc(this->identifier)->equals(other->identifier);
	return var$0 && $$nc(getConstValue())->equals($(other->getConstValue()));
}

int32_t PubVar::hashCode() {
	int32_t var$2 = $nc(this->modifiers)->hashCode();
	int32_t var$1 = var$2 ^ $nc(this->type)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->identifier)->hashCode();
	return var$0 ^ $$nc(getConstValue())->hashCode();
}

$String* PubVar::toString() {
	$useLocalObjectStack();
	return $String::format("%s[modifiers: %s, type: %s, identifier: %s, constValue: %s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		this->modifiers,
		this->type,
		this->identifier,
		this->constValue
	}));
}

$Optional* PubVar::getConstValue() {
	return $Optional::ofNullable(this->constValue);
}

PubVar::PubVar() {
}

$Class* PubVar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubVar, serialVersionUID)},
		{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $FINAL, $field(PubVar, modifiers)},
		{"type", "Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $FINAL, $field(PubVar, type)},
		{"identifier", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(PubVar, identifier)},
		{"constValue", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PubVar, constValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(PubVar, init$, void, $Set*, $TypeDesc*, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PubVar, equals, bool, Object$*)},
		{"getConstValue", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(PubVar, getConstValue, $Optional*)},
		{"getIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubVar, getIdentifier, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PubVar, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubVar, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.PubVar",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PubVar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubVar);
	});
	return class$;
}

$Class* PubVar::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com