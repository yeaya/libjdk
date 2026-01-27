#include <com/sun/xml/internal/stream/Entity.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _Entity_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity, name)},
	{"inExternalSubset", "Z", nullptr, $PUBLIC, $field(Entity, inExternalSubset)},
	{}
};

$MethodInfo _Entity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Entity, init$, void)},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Entity, init$, void, $String*, bool)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Entity, clear, void)},
	{"isEntityDeclInExternalSubset", "()Z", nullptr, $PUBLIC, $virtualMethod(Entity, isEntityDeclInExternalSubset, bool)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, isExternal, bool)},
	{"isUnparsed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, isUnparsed, bool)},
	{"setValues", "(Lcom/sun/xml/internal/stream/Entity;)V", nullptr, $PUBLIC, $virtualMethod(Entity, setValues, void, Entity*)},
	{}
};

$InnerClassInfo _Entity_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.Entity$ScannedEntity", "com.sun.xml.internal.stream.Entity", "ScannedEntity", $PUBLIC | $STATIC},
	{"com.sun.xml.internal.stream.Entity$ExternalEntity", "com.sun.xml.internal.stream.Entity", "ExternalEntity", $PUBLIC | $STATIC},
	{"com.sun.xml.internal.stream.Entity$InternalEntity", "com.sun.xml.internal.stream.Entity", "InternalEntity", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Entity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.xml.internal.stream.Entity",
	"java.lang.Object",
	nullptr,
	_Entity_FieldInfo_,
	_Entity_MethodInfo_,
	nullptr,
	nullptr,
	_Entity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.Entity$ScannedEntity,com.sun.xml.internal.stream.Entity$ExternalEntity,com.sun.xml.internal.stream.Entity$InternalEntity"
};

$Object* allocate$Entity($Class* clazz) {
	return $of($alloc(Entity));
}

void Entity::init$() {
	clear();
}

void Entity::init$($String* name, bool inExternalSubset) {
	$set(this, name, name);
	this->inExternalSubset = inExternalSubset;
}

bool Entity::isEntityDeclInExternalSubset() {
	return this->inExternalSubset;
}

void Entity::clear() {
	$set(this, name, nullptr);
	this->inExternalSubset = false;
}

void Entity::setValues(Entity* entity) {
	$set(this, name, $nc(entity)->name);
	this->inExternalSubset = entity->inExternalSubset;
}

Entity::Entity() {
}

$Class* Entity::load$($String* name, bool initialize) {
	$loadClass(Entity, name, initialize, &_Entity_ClassInfo_, allocate$Entity);
	return class$;
}

$Class* Entity::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com