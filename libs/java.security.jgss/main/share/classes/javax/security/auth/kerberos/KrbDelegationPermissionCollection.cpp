#include <javax/security/auth/kerberos/KrbDelegationPermissionCollection.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/SecurityException.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/security/auth/kerberos/DelegationPermission.h>
#include <jcpp.h>

#undef TRUE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $DelegationPermission = ::javax::security::auth::kerberos::DelegationPermission;

namespace javax {
	namespace security {
		namespace auth {
			namespace kerberos {

$ObjectStreamFieldArray* KrbDelegationPermissionCollection::serialPersistentFields = nullptr;

void KrbDelegationPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap));
}

bool KrbDelegationPermissionCollection::implies($Permission* permission) {
	if (!($instanceOf($DelegationPermission, permission))) {
		return false;
	}
	return $nc(this->perms)->containsKey(permission);
}

void KrbDelegationPermissionCollection::add($Permission* permission) {
	if (!($instanceOf($DelegationPermission, permission))) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$nc(this->perms)->put(permission, $Boolean::TRUE);
}

$Enumeration* KrbDelegationPermissionCollection::elements() {
	return $nc(this->perms)->keys();
}

void KrbDelegationPermissionCollection::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Vector, permissions, $new($Vector, $($nc(this->perms)->keySet())));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("permissions"_s, permissions);
	out->writeFields();
}

void KrbDelegationPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Vector, permissions, $cast($Vector, $nc(gfields)->get("permissions"_s, nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size()));
	{
		$var($Iterator, i$, permissions->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Permission, perm, $cast($Permission, i$->next()));
			{
				$nc(this->perms)->put(perm, $Boolean::TRUE);
			}
		}
	}
}

void KrbDelegationPermissionCollection::clinit$($Class* clazz) {
	$load($Vector);
	$assignStatic(KrbDelegationPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "permissions"_s, $Vector::class$)}));
}

KrbDelegationPermissionCollection::KrbDelegationPermissionCollection() {
}

$Class* KrbDelegationPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/security/Permission;Ljava/lang/Boolean;>;", $PRIVATE | $TRANSIENT, $field(KrbDelegationPermissionCollection, perms)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KrbDelegationPermissionCollection, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbDelegationPermissionCollection, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KrbDelegationPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(KrbDelegationPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(KrbDelegationPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(KrbDelegationPermissionCollection, implies, bool, $Permission*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(KrbDelegationPermissionCollection, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(KrbDelegationPermissionCollection, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.security.auth.kerberos.KrbDelegationPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbDelegationPermissionCollection, name, initialize, &classInfo$$, KrbDelegationPermissionCollection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KrbDelegationPermissionCollection);
	});
	return class$;
}

$Class* KrbDelegationPermissionCollection::class$ = nullptr;

			} // kerberos
		} // auth
	} // security
} // javax