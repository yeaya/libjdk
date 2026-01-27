#include <com/sun/xml/internal/stream/Entity$ExternalEntity.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _Entity$ExternalEntity_FieldInfo_[] = {
	{"entityLocation", "Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PUBLIC, $field(Entity$ExternalEntity, entityLocation)},
	{"notation", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity$ExternalEntity, notation)},
	{}
};

$MethodInfo _Entity$ExternalEntity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Entity$ExternalEntity, init$, void)},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Entity$ExternalEntity, init$, void, $String*, $XMLResourceIdentifier*, $String*, bool)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Entity$ExternalEntity, clear, void)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$ExternalEntity, isExternal, bool)},
	{"isUnparsed", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$ExternalEntity, isUnparsed, bool)},
	{"setValues", "(Lcom/sun/xml/internal/stream/Entity;)V", nullptr, $PUBLIC, $virtualMethod(Entity$ExternalEntity, setValues, void, $Entity*)},
	{"setValues", "(Lcom/sun/xml/internal/stream/Entity$ExternalEntity;)V", nullptr, $PUBLIC, $virtualMethod(Entity$ExternalEntity, setValues, void, Entity$ExternalEntity*)},
	{}
};

$InnerClassInfo _Entity$ExternalEntity_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.Entity$ExternalEntity", "com.sun.xml.internal.stream.Entity", "ExternalEntity", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Entity$ExternalEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.Entity$ExternalEntity",
	"com.sun.xml.internal.stream.Entity",
	nullptr,
	_Entity$ExternalEntity_FieldInfo_,
	_Entity$ExternalEntity_MethodInfo_,
	nullptr,
	nullptr,
	_Entity$ExternalEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.Entity"
};

$Object* allocate$Entity$ExternalEntity($Class* clazz) {
	return $of($alloc(Entity$ExternalEntity));
}

void Entity$ExternalEntity::init$() {
	$Entity::init$();
	clear();
}

void Entity$ExternalEntity::init$($String* name, $XMLResourceIdentifier* entityLocation, $String* notation, bool inExternalSubset) {
	$Entity::init$(name, inExternalSubset);
	$set(this, entityLocation, entityLocation);
	$set(this, notation, notation);
}

bool Entity$ExternalEntity::isExternal() {
	return true;
}

bool Entity$ExternalEntity::isUnparsed() {
	return this->notation != nullptr;
}

void Entity$ExternalEntity::clear() {
	$Entity::clear();
	$set(this, entityLocation, nullptr);
	$set(this, notation, nullptr);
}

void Entity$ExternalEntity::setValues($Entity* entity) {
	$Entity::setValues(entity);
	$set(this, entityLocation, nullptr);
	$set(this, notation, nullptr);
}

void Entity$ExternalEntity::setValues(Entity$ExternalEntity* entity) {
	$Entity::setValues(entity);
	$set(this, entityLocation, $nc(entity)->entityLocation);
	$set(this, notation, entity->notation);
}

Entity$ExternalEntity::Entity$ExternalEntity() {
}

$Class* Entity$ExternalEntity::load$($String* name, bool initialize) {
	$loadClass(Entity$ExternalEntity, name, initialize, &_Entity$ExternalEntity_ClassInfo_, allocate$Entity$ExternalEntity);
	return class$;
}

$Class* Entity$ExternalEntity::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com