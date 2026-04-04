#include <javax/management/relation/RelationTypeSupport.h>
#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/relation/InvalidRelationTypeException.h>
#include <javax/management/relation/RoleInfo.h>
#include <javax/management/relation/RoleInfoNotFoundException.h>
#include <jcpp.h>

#undef RELATION_LOGGER
#undef TRACE
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $RoleInfoArray = $Array<::javax::management::relation::RoleInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $InvalidRelationTypeException = ::javax::management::relation::InvalidRelationTypeException;
using $RoleInfo = ::javax::management::relation::RoleInfo;
using $RoleInfoNotFoundException = ::javax::management::relation::RoleInfoNotFoundException;

namespace javax {
	namespace management {
		namespace relation {

$ObjectStreamFieldArray* RelationTypeSupport::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* RelationTypeSupport::newSerialPersistentFields = nullptr;
int64_t RelationTypeSupport::serialVersionUID = 0;
$ObjectStreamFieldArray* RelationTypeSupport::serialPersistentFields = nullptr;
bool RelationTypeSupport::compat = false;

void RelationTypeSupport::init$($String* relationTypeName, $RoleInfoArray* roleInfoArray) {
	$useLocalObjectStack();
	$set(this, typeName, nullptr);
	$set(this, roleName2InfoMap, $new($HashMap));
	this->isInRelationService = false;
	if (relationTypeName == nullptr || roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {relationTypeName}));
	initMembers(relationTypeName, roleInfoArray);
	$JmxProperties::RELATION_LOGGER->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::init$($String* relationTypeName) {
	$useLocalObjectStack();
	$set(this, typeName, nullptr);
	$set(this, roleName2InfoMap, $new($HashMap));
	this->isInRelationService = false;
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {relationTypeName}));
	$set(this, typeName, relationTypeName);
	$JmxProperties::RELATION_LOGGER->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$String* RelationTypeSupport::getRelationTypeName() {
	return this->typeName;
}

$List* RelationTypeSupport::getRoleInfos() {
	return $new($ArrayList, $($nc(this->roleName2InfoMap)->values()));
}

$RoleInfo* RelationTypeSupport::getRoleInfo($String* roleInfoName) {
	$useLocalObjectStack();
	if (roleInfoName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {roleInfoName}));
	$var($RoleInfo, result, $cast($RoleInfo, $nc(this->roleName2InfoMap)->get(roleInfoName)));
	if (result == nullptr) {
		$var($StringBuilder, excMsgStrB, $new($StringBuilder));
		$var($String, excMsg, "No role info for role "_s);
		excMsgStrB->append(excMsg);
		excMsgStrB->append(roleInfoName);
		$throwNew($RoleInfoNotFoundException, $(excMsgStrB->toString()));
	}
	$JmxProperties::RELATION_LOGGER->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationTypeSupport::addRoleInfo($RoleInfo* roleInfo) {
	$useLocalObjectStack();
	if (roleInfo == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {roleInfo}));
	if (this->isInRelationService) {
		$var($String, excMsg, "Relation type cannot be updated as it is declared in the Relation Service."_s);
		$throwNew($RuntimeException, excMsg);
	}
	$var($String, roleName, $nc(roleInfo)->getName());
	if ($nc(this->roleName2InfoMap)->containsKey(roleName)) {
		$var($StringBuilder, excMsgStrB, $new($StringBuilder));
		$var($String, excMsg, "Two role infos provided for role "_s);
		excMsgStrB->append(excMsg);
		excMsgStrB->append(roleName);
		$throwNew($InvalidRelationTypeException, $(excMsgStrB->toString()));
	}
	this->roleName2InfoMap->put(roleName, $$new($RoleInfo, roleInfo));
	$JmxProperties::RELATION_LOGGER->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::setRelationServiceFlag(bool flag) {
	this->isInRelationService = flag;
	return;
}

void RelationTypeSupport::initMembers($String* relationTypeName, $RoleInfoArray* roleInfoArray) {
	$useLocalObjectStack();
	if (relationTypeName == nullptr || roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {relationTypeName}));
	$set(this, typeName, relationTypeName);
	checkRoleInfos(roleInfoArray);
	for (int32_t i = 0; i < $nc(roleInfoArray)->length; ++i) {
		$var($RoleInfo, currRoleInfo, roleInfoArray->get(i));
		$var($Object, var$0, $nc(currRoleInfo)->getName());
		$nc(this->roleName2InfoMap)->put(var$0, $$new($RoleInfo, currRoleInfo));
	}
	$JmxProperties::RELATION_LOGGER->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationTypeSupport::checkRoleInfos($RoleInfoArray* roleInfoArray) {
	$init(RelationTypeSupport);
	$useLocalObjectStack();
	if (roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	if ($nc(roleInfoArray)->length == 0) {
		$var($String, excMsg, "No role info provided."_s);
		$throwNew($InvalidRelationTypeException, excMsg);
	}
	$var($Set, roleNames, $new($HashSet));
	for (int32_t i = 0; i < roleInfoArray->length; ++i) {
		$var($RoleInfo, currRoleInfo, roleInfoArray->get(i));
		if (currRoleInfo == nullptr) {
			$var($String, excMsg, "Null role info provided."_s);
			$throwNew($InvalidRelationTypeException, excMsg);
		}
		$var($String, roleName, $nc(currRoleInfo)->getName());
		if (roleNames->contains(roleName)) {
			$var($StringBuilder, excMsgStrB, $new($StringBuilder));
			$var($String, excMsg, "Two role infos provided for role "_s);
			excMsgStrB->append(excMsg);
			excMsgStrB->append(roleName);
			$throwNew($InvalidRelationTypeException, $(excMsgStrB->toString()));
		}
		roleNames->add(roleName);
	}
	return;
}

void RelationTypeSupport::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	if (RelationTypeSupport::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, typeName, $cast($String, $nc(fields)->get("myTypeName"_s, nullptr)));
		if (fields->defaulted("myTypeName"_s)) {
			$throwNew($NullPointerException, "myTypeName"_s);
		}
		$set(this, roleName2InfoMap, $cast($Map, $Util::cast($(fields->get("myRoleName2InfoMap"_s, nullptr)))));
		if (fields->defaulted("myRoleName2InfoMap"_s)) {
			$throwNew($NullPointerException, "myRoleName2InfoMap"_s);
		}
		this->isInRelationService = fields->get("myIsInRelServFlg"_s, false);
		if (fields->defaulted("myIsInRelServFlg"_s)) {
			$throwNew($NullPointerException, "myIsInRelServFlg"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void RelationTypeSupport::writeObject($ObjectOutputStream* out) {
	if (RelationTypeSupport::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("myTypeName"_s, this->typeName);
		fields->put("myRoleName2InfoMap"_s, this->roleName2InfoMap);
		fields->put("myIsInRelServFlg"_s, this->isInRelationService);
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void RelationTypeSupport::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($HashMap);
	$assignStatic(RelationTypeSupport::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "myTypeName"_s, $String::class$),
		$$new($ObjectStreamField, "myRoleName2InfoMap"_s, $HashMap::class$),
		$$new($ObjectStreamField, "myIsInRelServFlg"_s, $Boolean::TYPE)
	}));
	$load($Map);
	$assignStatic(RelationTypeSupport::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "typeName"_s, $String::class$),
		$$new($ObjectStreamField, "roleName2InfoMap"_s, $Map::class$),
		$$new($ObjectStreamField, "isInRelationService"_s, $Boolean::TYPE)
	}));
	RelationTypeSupport::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(act)));
			RelationTypeSupport::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (RelationTypeSupport::compat) {
			$assignStatic(RelationTypeSupport::serialPersistentFields, RelationTypeSupport::oldSerialPersistentFields);
			RelationTypeSupport::serialVersionUID = RelationTypeSupport::oldSerialVersionUID;
		} else {
			$assignStatic(RelationTypeSupport::serialPersistentFields, RelationTypeSupport::newSerialPersistentFields);
			RelationTypeSupport::serialVersionUID = RelationTypeSupport::newSerialVersionUID;
		}
	}
}

RelationTypeSupport::RelationTypeSupport() {
}

$Class* RelationTypeSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeSupport, oldSerialVersionUID)},
		{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeSupport, newSerialVersionUID)},
		{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, oldSerialPersistentFields)},
		{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, newSerialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RelationTypeSupport, serialPersistentFields)},
		{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RelationTypeSupport, compat)},
		{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationTypeSupport, typeName)},
		{"roleName2InfoMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/management/relation/RoleInfo;>;", $PRIVATE, $field(RelationTypeSupport, roleName2InfoMap)},
		{"isInRelationService", "Z", nullptr, $PRIVATE, $field(RelationTypeSupport, isInRelationService)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PUBLIC, $method(RelationTypeSupport, init$, void, $String*, $RoleInfoArray*), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(RelationTypeSupport, init$, void, $String*)},
		{"addRoleInfo", "(Ljavax/management/relation/RoleInfo;)V", nullptr, $PROTECTED, $virtualMethod(RelationTypeSupport, addRoleInfo, void, $RoleInfo*), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
		{"checkRoleInfos", "([Ljavax/management/relation/RoleInfo;)V", nullptr, $STATIC, $staticMethod(RelationTypeSupport, checkRoleInfos, void, $RoleInfoArray*), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
		{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RelationTypeSupport, getRelationTypeName, $String*)},
		{"getRoleInfo", "(Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC, $virtualMethod(RelationTypeSupport, getRoleInfo, $RoleInfo*, $String*), "java.lang.IllegalArgumentException,javax.management.relation.RoleInfoNotFoundException"},
		{"getRoleInfos", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC, $virtualMethod(RelationTypeSupport, getRoleInfos, $List*)},
		{"initMembers", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PRIVATE, $method(RelationTypeSupport, initMembers, void, $String*, $RoleInfoArray*), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(RelationTypeSupport, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"setRelationServiceFlag", "(Z)V", nullptr, 0, $virtualMethod(RelationTypeSupport, setRelationServiceFlag, void, bool)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(RelationTypeSupport, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RelationTypeSupport",
		"java.lang.Object",
		"javax.management.relation.RelationType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RelationTypeSupport, name, initialize, &classInfo$$, RelationTypeSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RelationTypeSupport);
	});
	return class$;
}

$Class* RelationTypeSupport::class$ = nullptr;

		} // relation
	} // management
} // javax