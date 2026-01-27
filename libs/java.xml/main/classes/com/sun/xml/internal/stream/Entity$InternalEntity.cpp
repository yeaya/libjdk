#include <com/sun/xml/internal/stream/Entity$InternalEntity.h>

#include <com/sun/xml/internal/stream/Entity.h>
#include <jcpp.h>

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

$FieldInfo _Entity$InternalEntity_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity$InternalEntity, text)},
	{}
};

$MethodInfo _Entity$InternalEntity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Entity$InternalEntity, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Entity$InternalEntity, init$, void, $String*, $String*, bool)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Entity$InternalEntity, clear, void)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$InternalEntity, isExternal, bool)},
	{"isUnparsed", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$InternalEntity, isUnparsed, bool)},
	{"setValues", "(Lcom/sun/xml/internal/stream/Entity;)V", nullptr, $PUBLIC, $virtualMethod(Entity$InternalEntity, setValues, void, $Entity*)},
	{"setValues", "(Lcom/sun/xml/internal/stream/Entity$InternalEntity;)V", nullptr, $PUBLIC, $virtualMethod(Entity$InternalEntity, setValues, void, Entity$InternalEntity*)},
	{}
};

$InnerClassInfo _Entity$InternalEntity_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.Entity$InternalEntity", "com.sun.xml.internal.stream.Entity", "InternalEntity", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Entity$InternalEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.Entity$InternalEntity",
	"com.sun.xml.internal.stream.Entity",
	nullptr,
	_Entity$InternalEntity_FieldInfo_,
	_Entity$InternalEntity_MethodInfo_,
	nullptr,
	nullptr,
	_Entity$InternalEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.Entity"
};

$Object* allocate$Entity$InternalEntity($Class* clazz) {
	return $of($alloc(Entity$InternalEntity));
}

void Entity$InternalEntity::init$() {
	$Entity::init$();
	clear();
}

void Entity$InternalEntity::init$($String* name, $String* text, bool inExternalSubset) {
	$Entity::init$(name, inExternalSubset);
	$set(this, text, text);
}

bool Entity$InternalEntity::isExternal() {
	return false;
}

bool Entity$InternalEntity::isUnparsed() {
	return false;
}

void Entity$InternalEntity::clear() {
	$Entity::clear();
	$set(this, text, nullptr);
}

void Entity$InternalEntity::setValues($Entity* entity) {
	$Entity::setValues(entity);
	$set(this, text, nullptr);
}

void Entity$InternalEntity::setValues(Entity$InternalEntity* entity) {
	$Entity::setValues(entity);
	$set(this, text, $nc(entity)->text);
}

Entity$InternalEntity::Entity$InternalEntity() {
}

$Class* Entity$InternalEntity::load$($String* name, bool initialize) {
	$loadClass(Entity$InternalEntity, name, initialize, &_Entity$InternalEntity_ClassInfo_, allocate$Entity$InternalEntity);
	return class$;
}

$Class* Entity$InternalEntity::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com