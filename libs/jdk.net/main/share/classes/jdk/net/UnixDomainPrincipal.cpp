#include <jdk/net/UnixDomainPrincipal.h>
#include <java/lang/Record.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Record = ::java::lang::Record;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Objects = ::java::util::Objects;

namespace jdk {
	namespace net {

void UnixDomainPrincipal::init$($UserPrincipal* user, $GroupPrincipal* group) {
	$Record::init$();
	$Objects::requireNonNull(user);
	$Objects::requireNonNull(group);
	$set(this, user$, user);
	$set(this, group$, group);
}

$UserPrincipal* UnixDomainPrincipal::user() {
	return this->user$;
}

$GroupPrincipal* UnixDomainPrincipal::group() {
	return this->group$;
}

$String* UnixDomainPrincipal::toString() {
	return UnixDomainPrincipal::class$->bootstrapToString(this);
}

int32_t UnixDomainPrincipal::hashCode() {
	return UnixDomainPrincipal::class$->bootstrapHashCode(this);
}

bool UnixDomainPrincipal::equals(Object$* o) {
	return UnixDomainPrincipal::class$->bootstrapEquals(this, o);
}

UnixDomainPrincipal::UnixDomainPrincipal() {
}

$Class* UnixDomainPrincipal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"user", "Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainPrincipal, user$)},
		{"group", "Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainPrincipal, group$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/attribute/UserPrincipal;Ljava/nio/file/attribute/GroupPrincipal;)V", nullptr, $PUBLIC, $method(UnixDomainPrincipal, init$, void, $UserPrincipal*, $GroupPrincipal*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(UnixDomainPrincipal, equals, bool, Object$*)},
		{"group", "()Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC, $method(UnixDomainPrincipal, group, $GroupPrincipal*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(UnixDomainPrincipal, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(UnixDomainPrincipal, toString, $String*)},
		{"user", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, $method(UnixDomainPrincipal, user, $UserPrincipal*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.net.UnixDomainPrincipal",
		"java.lang.Record",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnixDomainPrincipal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixDomainPrincipal);
	});
	return class$;
}

$Class* UnixDomainPrincipal::class$ = nullptr;

	} // net
} // jdk