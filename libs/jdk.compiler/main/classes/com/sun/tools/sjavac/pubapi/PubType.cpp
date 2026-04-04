#include <com/sun/tools/sjavac/pubapi/PubType.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

void PubType::init$($Set* modifiers, $String* fqName, $PubApi* pubApi) {
	$set(this, modifiers, modifiers);
	$set(this, fqName, fqName);
	$set(this, pubApi, pubApi);
}

$String* PubType::getFqName() {
	return $nc(this->fqName)->toString();
}

bool PubType::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubType, other, $cast(PubType, obj));
	bool var$1 = $nc(this->modifiers)->equals(other->modifiers);
	bool var$0 = var$1 && $nc(this->fqName)->equals(other->fqName);
	return var$0 && $nc(this->pubApi)->equals(other->pubApi);
}

int32_t PubType::hashCode() {
	int32_t var$1 = $nc(this->modifiers)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->fqName)->hashCode();
	return var$0 ^ $nc(this->pubApi)->hashCode();
}

$String* PubType::toString() {
	$useLocalObjectStack();
	return $String::format("%s[modifiers: %s, fqName: %s, pubApi: %s]"_s, $$new($ObjectArray, {
		$($of(this)->getClass()->getSimpleName()),
		this->modifiers,
		this->fqName,
		this->pubApi
	}));
}

PubType::PubType() {
}

$Class* PubType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubType, serialVersionUID)},
		{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $FINAL, $field(PubType, modifiers)},
		{"fqName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(PubType, fqName)},
		{"pubApi", "Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC | $FINAL, $field(PubType, pubApi)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)V", $PUBLIC, $method(PubType, init$, void, $Set*, $String*, $PubApi*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PubType, equals, bool, Object$*)},
		{"getFqName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubType, getFqName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PubType, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PubType, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.pubapi.PubType",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PubType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PubType);
	});
	return class$;
}

$Class* PubType::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com